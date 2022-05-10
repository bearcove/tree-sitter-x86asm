module.exports = grammar({
  name: "x86asm",

  rules: {
    source_file: ($) => $.toplevel_item,

    toplevel_item: ($) =>
      seq(repeat1($.statement), optional(choice($.comment, $.directive))),

    statement: ($) => seq(choice($.comment, $.directive), $._NEWLINE),

    comment: ($) => /[#;]([^\n]*)/,
    directive: ($) =>
      choice(
        $.shell_cmd,
        $.objdump_file_format,
        $.objdump_disas_of_section,
        $.objdump_section_label,
        $.objdump_offset_label,
        $.section,
        $.extern,
        $.global,
        $.builtin,
        $.ins,
        $.label,
      ),

    builtin: ($) => seq($.builtin_kw, $.operand_args),
    builtin_kw: ($) => choice("db", "dw", "dd", "dq"),

    section: ($) => seq("section", $.section_name, optional("info")),
    extern: ($) => seq("extern", $.identifier),
    global: ($) => seq("global", $.identifier),

    shell_cmd: ($) => seq($.shell_prompt, /[^\n]*/),
    shell_prompt: ($) => "$",

    objdump_disas_of_section: ($) =>
      seq("Disassembly of section ", $.section_name, ":"),

    objdump_file_format: ($) => /[a-zA-Z0-9/.@_-]+:[\s]+file format [^\n]+/,

    objdump_section_label: ($) =>
      seq($.objdump_section_addr, "<", $.identifier, ">", ":", /\s*/),
    objdump_section_addr: ($) => token.immediate(/[0-9a-fA-F]+/),

    objdump_offset_label: ($) =>
      seq(
        $.objdump_offset_addr,
        ":",
        $.objdump_machine_code_bytes,
        optional($.ins),
      ),
    objdump_machine_code_bytes: ($) => repeat1(/[0-9a-fA-F]{2}/),
    objdump_offset_addr: ($) => seq(/[\s]+[0-9a-fA-F]+/),

    label: ($) => seq($.identifier, /:[\s]+/, optional($.directive)),
    ins: ($) => seq(/[\s]*/, $.ins_kw, optional($.operand_args)),

    width: ($) =>
      choice(
        choice("byte", "word", "dword", "qword", "xmmword"),
        choice("BYTE", "WORD", "DWORD", "QWORD", "XMMWORD"),
      ),

    ptr: ($) => choice("ptr", "PTR"),

    operand_args: ($) => seq($.operand, repeat(seq(",", $.operand))),

    operand: ($) =>
      seq(
        optional($.width),
        optional($.ptr),
        choice(
          $.register,
          $.effective_addr,
          $.string_literal,
          $.integer_literal,
          $.operand_ident,
        ),
      ),

    register: ($) =>
      choice(
        /[abcd][lh]/,
        /[er]?[abcd]x/,
        /[er]?[ds]i/,
        /[er]?[sb]p/,
        /r(8|9|10|11|12|13|14|15)/,
        /[xy]mm[0-7]/,
        "rip",
      ),

    operand_ident: ($) => $._IDENTIFIER,

    effective_addr: ($) =>
      seq(
        "[",
        repeat1(
          choice(
            $.segment_prefix,
            $.register,
            $.integer_literal,
            "(",
            ")",
            "*",
            "+",
            "-",
            $._IDENTIFIER,
          ),
        ),
        "]",
      ),

    segment_prefix: ($) => seq($.segment, ":"),

    segment: ($) => choice("cs", "ds", "es", "fs", "gs", "ss"),

    // shamelessly stolen from <https://github.com/tree-sitter/tree-sitter-c/>
    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F]{2,}/,
              /u[0-9a-fA-F]{4}/,
              /U[0-9a-fA-F]{8}/,
            ),
          ),
        ),
      ),

    string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence),
        ),
        '"',
      ),

    integer_literal: ($) =>
      seq(
        choice(
          $._decimal_literal,
          $._octal_literal,
          $._hex_literal,
          $._binary_literal,
        ),
        optional($.literal_offset),
      ),

    literal_offset: ($) => seq("<", $._IDENTIFIER, "+", $._hex_literal, ">"),

    _decimal_literal: ($) => choice(/[0-9]+d/, /0d[0-9]+/, /[0-9]+/),

    _hex_literal: ($) =>
      choice(/[0-9a-fA-F]+h/, /\$0[0-9a-fA-F]+/, /0[xh][0-9a-fA-F]+/),

    _octal_literal: ($) => choice(/[0-7]+[qo]/, /0[oq][0-7]+/),

    _binary_literal: ($) => choice(/[01_]+[by]/, /0[by][01_]+/),

    _NEWLINE: ($) => seq(optional($.comment), choice("\n", "\r\n")),

    ins_kw: ($) =>
      /(a(a[adms]|d(cx|d(p[ds]|s(d|s|ubp[ds]))|ox)|es(declast|enclast|imc|keygenassist)|nd(np[ds]|p[ds]))|b(extr|l(c(fill|ic|msk|s)|end(p[ds]|vp[ds])|s(fill|ic|msk|r))|nd(c[lnu]|ldx|m(k|ov)|stx)|s(f|r|wap)|t[crs]|zhi)|c(all|bw|dqe|l(ac|c|d|flushopt|wb|zero)|m(c|ov(ae|be|c|e|ge|le|n(ae|be|c|e|ge|le|o|p|s|z)|o|p[eo]|s|z)|p(p[ds]|s[bdqsw]|xchg(16b|8b)))|omis[ds]|puid|qo|rc32|vt(dq2p[ds]|p(d2(dq|p[is])|i2p[ds]|s2(dq|p[di]))|s(d2s[is]|i2s[ds]|s2s[di])|t(p(d2(dq|pi)|s2(dq|pi))|s(d2si|s2si)))|wde)|d(a[as]|ec|iv(p[ds]|s[ds])|pp[ds])|e(mms|nter|xtr(actps|q))|f(2xm1|a(bs|ddp)|b(ld|stp)|c(hs|lex|mov(be|e|n(be|e|u)|u)|o(m(ip|pp)|s))|d(ecstp|iv(p|rp))|emms|free|i(add|comp|divr|ld|mul|n(cstp|it)|s(t(p|tp)|ubr))|ld(1|cw|env|l(2[et]|g2|n2)|pi|z)|mulp|n(clex|init|op|s(ave|t(cw|env|sw)))|p(atan|rem1|tan)|r(ndint|stor)|s(ave|cale|incos|qrt|t(cw|env|p|sw)|ub(p|rp))|tst|ucom(ip|pp)|wait|x(am|ch|rstor64|save64|tract)|yl2xp1)|h(addp[ds]|subp[ds])|i(div|mul|n(c|s(b|d|ert(ps|q)|w)|t[3o]))|j(ae|be|c|ecxz|ge|le|mp|n(ae|be|c|e|ge|le|o|p|s|z)|o|p[eo]|s|z)|k(a(dd[bdqw]|nd(b|d|n[bdqw]|q|w))|mov[bdqw]|not[bdqw]|or(b|d|q|test[bdqw]|w)|shift(l[bdqw]|r[bdqw])|test[bdqw]|unpck(bw|dq|wd)|x(nor[bdqw]|or[bdqw]))|l(ahf|d(dqu|mxcsr)|eave|fence|o(ds[bdqw]|op(e|ne))|zcnt)|m(a(skmov(dqu|q)|x(p[ds]|s[ds]))|fence|in(p[ds]|s[ds])|ov(ap[ds]|be|d(dup|q(2q|a|u))|h(lps|p[ds])|l(hps|p[ds])|mskp[ds]|nt(dqa|i|p[ds]|q|s[ds])|q2dq|s(b|d|hdup|ldup|q|s|w|xd)|up[ds]|zx)|psadbw|ul(p[ds]|s[ds]|x))|n(eg|o[pt])|o(rp[ds]|uts[bdw])|p(a(bs[bdw]|ck(ss(dw|wb)|us(dw|wb))|dd(b|d|q|s[bw]|us[bw]|w)|lignr|ndn|use|vg(b|usb|w))|blend(vb|w)|c(lmulqdq|mp(e(q[bdqw]|str[im])|gt[bdqw]|istr[im])|ommit)|dep|extr[bdqw]|f(2i[dw]|a(cc|dd)|cmp(eq|g[et])|m(ax|in|ul)|nacc|pnacc|r(cp(it[12]|v)|sq(it1|rtv))|subr)|h(add(d|sw|w)|minposuw|sub(d|sw|w))|i(2f[dw]|nsr[bdqw])|m(a(dd(ubsw|wd)|x(s[bdw]|u[bdw]))|in(s[bdw]|u[bdw])|ov(mskb|sx(b[dqw]|dq|w[dq])|zx(b[dqw]|dq|w[dq]))|ul(dq|h(r(sw|w)|uw|w)|l[dw]|udq))|o(p(ad|cnt|f[dq])|r)|refetch(nta|t[012]|wt1)|s(adbw|huf(b|d|hw|lw|w)|ign[bdw]|ll(dq|q|w)|r(a[dw]|l(dq|q|w))|ub(b|d|q|s[bw]|us[bw]|w)|wapd)|test|u(npck(h(bw|dq|qdq|wd)|l(bw|dq|qdq|wd))|sh(ad|f[dq]))|xor)|r(c(l|p(ps|ss)|r)|d(fsbase|gsbase|rand|seed|tscp)|et|o(l|rx|und(p[ds]|s[ds]))|sqrt(ps|ss))|s(a(hf|l|rx)|bb|cas[bdqw]|et(ae|be|c|e|ge|le|n(ae|be|c|e|ge|le|o|p|s|z)|o|p[eo]|s|z)|fence|h(a(1(msg[12]|nexte|rnds4)|256(msg[12]|rnds2))|l[dx]|r[dx]|ufp[ds])|qrt(p[ds]|s[ds])|t(ac|c|d|i|mxcsr|os[bdqw])|ub(p[ds]|s[ds])|wapgs|ys(call|e(nter|xit64)|ret64))|t(1mskc|est|z(cnt|msk))|u(comis[ds]|d2|npck(hp[ds]|lp[ds]))|v(a(dd(p[ds]|s(d|s|ubp[ds]))|es(declast|enclast|imc|keygenassist)|lign[dq]|nd(np[ds]|p[ds]))|b(lend(m(b|d|p[ds]|q|w)|p[ds]|vp[ds])|roadcast(f(128|32x[248]|64x[24])|i(128|32x[248]|64x[24])|s[ds]))|c(mp(p[ds]|s[ds])|om(is[ds]|pressp[ds])|vt(dq2p[ds]|p(d2(dq|ps|qq|u(dq|qq))|h2ps|s2(dq|p[dh]|qq|u(dq|qq)))|qq2p[ds]|s(d2(s[is]|usi)|i2s[ds]|s2(s[di]|usi))|t(p(d2(dq|qq|u(dq|qq))|s2(dq|qq|u(dq|qq)))|s(d2(si|usi)|s2(si|usi)))|u(dq2p[ds]|qq2p[ds]|si2s[ds])))|d(bpsadbw|iv(p[ds]|s[ds])|pp[ds])|ex(p(2p[ds]|andp[ds])|tract(f(128|32x[48]|64x[24])|i(128|32x[48]|64x[24])|ps))|f(ixupimm(p[ds]|s[ds])|m(add(132(p[ds]|s[ds])|2(13(p[ds]|s[ds])|31(p[ds]|s[ds]))|p[ds]|s(d|s|ub(132p[ds]|2(13p[ds]|31p[ds])|p[ds])))|sub(132(p[ds]|s[ds])|2(13(p[ds]|s[ds])|31(p[ds]|s[ds]))|add(132p[ds]|2(13p[ds]|31p[ds])|p[ds])|p[ds]|s[ds]))|nm(add(132(p[ds]|s[ds])|2(13(p[ds]|s[ds])|31(p[ds]|s[ds]))|p[ds]|s[ds])|sub(132(p[ds]|s[ds])|2(13(p[ds]|s[ds])|31(p[ds]|s[ds]))|p[ds]|s[ds]))|pclass(p[ds]|s[ds])|rcz(p[ds]|s[ds]))|g(ather(dp[ds]|pf(0(dp[ds]|qp[ds])|1(dp[ds]|qp[ds]))|qp[ds])|et(exp(p[ds]|s[ds])|mant(p[ds]|s[ds])))|h(addp[ds]|subp[ds])|insert(f(128|32x[48]|64x[24])|i(128|32x[48]|64x[24])|ps)|ld(dqu|mxcsr)|m(a(skmov(dqu|p[ds])|x(p[ds]|s[ds]))|in(p[ds]|s[ds])|ov(ap[ds]|d(dup|q(a(32|64)|u(16|32|64|8)))|h(lps|p[ds])|l(hps|p[ds])|mskp[ds]|nt(dqa|p[ds])|q|s(d|hdup|ldup|s)|up[ds])|psadbw|ul(p[ds]|s[ds]))|orp[ds]|p(a(bs[bdqw]|ck(ss(dw|wb)|us(dw|wb))|dd(b|d|q|s[bw]|us[bw]|w)|lignr|nd(d|n[dq]|q)|vg[bw])|b(lend(d|vb|w)|roadcast(b|d|mb2[dq]|q|w))|c(lmulqdq|m(ov|p(b|d|e(q[bdqw]|str[im])|gt[bdqw]|istr[im]|q|u[bdqw]|w))|o(m(b|d|press[dq]|q|u[bdqw]|w)|nflict[dq]))|e(rm(2(f128|i128)|b|d|i(2(b|d|p[ds]|q|w)|l(2p[ds]|p[ds]))|p[ds]|q|t2(b|d|p[ds]|q|w)|w)|x(pand[dq]|tr[bdqw]))|gather(d[dq]|q[dq])|h(add(b[dqw]|dq|sw|u(b[dqw]|dq|w[dq])|w[dq])|minposuw|sub(bw|dq|sw|wd))|insr[bdqw]|lzcnt[dq]|m(a(cs(d(d|q[hl])|s(d(d|q[hl])|w[dw])|w[dw])|d(cs(swd|wd)|d(52(huq|luq)|ubsw|wd))|skmov[dq]|x(s[bdqw]|u[bdqw]))|in(s[bdqw]|u[bdqw])|ov(b2m|d(2m|b|w)|m(2[bdqw]|skb)|q(2m|b|d|w)|s(d[bw]|q[bdw]|wb|x(b[dqw]|dq|w[dq]))|us(d[bw]|q[bdw]|wb)|w(2m|b)|zx(b[dqw]|dq|w[dq]))|ul(dq|h(rsw|uw|w)|l[dqw]|tishiftqb|udq))|or[dq]|perm|ro(l(d|q|v[dq])|r(d|q|v[dq])|t[bdqw])|s(adbw|catter(d[dq]|q[dq])|h(a[bdqw]|l[bdqw]|uf(b|d|hw|lw))|ign[bdw]|ll(dq|q|v[dqw]|w)|r(a(d|q|v[dqw]|w)|l(dq|q|v[dqw]|w))|ub(b|d|q|s[bw]|us[bw]|w))|te(rnlog[dq]|st(m[bdqw]|nm[bdqw]))|unpck(h(bw|dq|qdq|wd)|l(bw|dq|qdq|wd))|xor[dq])|r(ange(p[ds]|s[ds])|cp(14(p[ds]|s[ds])|28(p[ds]|s[ds])|ps|ss)|educe(p[ds]|s[ds])|ndscale(p[ds]|s[ds])|ound(p[ds]|s[ds])|sqrt(14(p[ds]|s[ds])|28(p[ds]|s[ds])|ps|ss))|s(ca(lef(p[ds]|s[ds])|tter(dp[ds]|pf(0(dp[ds]|qp[ds])|1(dp[ds]|qp[ds]))|qp[ds]))|huf(f(32x4|64x2)|i(32x4|64x2)|p[ds])|qrt(p[ds]|s[ds])|tmxcsr|ub(p[ds]|s[ds]))|testp[ds]|u(comis[ds]|npck(hp[ds]|lp[ds]))|xorp[ds]|zero(all|upper))|w(ait|r(fsbase|gsbase))|x(add|chg|getbv|orp[ds]|rstor(64|s64)|s(ave(64|c64|opt64|s64)|etbv)))/,

    section_name: ($) => /[.][A-Za-z0-9.@_-]+/,
    identifier: ($) => $._IDENTIFIER,
    _IDENTIFIER: ($) => /[A-Za-z0-9.@_-]+/,
  },
});
