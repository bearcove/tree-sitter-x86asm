module.exports = grammar({
  name: "x86asm",

  rules: {
    source_file: ($) =>
      seq(
        choice(seq($.directive, optional($.comment)), $.comment),
        repeat(
          seq(
            "\n",
            optional(choice(seq($.directive, optional($.comment)), $.comment)),
          ),
        ),
      ),

    comment: ($) => /[#;]([^\n]*)/,
    directive: ($) =>
      choice(
        prec.left(12, $.ins),
        prec.left(11, $.shell_cmd),
        prec.left(10, $.objdump_file_format),
        prec.left(9, $.objdump_disas_of_section),
        prec.left(8, $.objdump_section_label),
        prec.left(7, $.objdump_offset_label),
        prec.left(6, $.section),
        prec.left(5, $.extern),
        prec.left(4, $.global),
        prec.left(3, $.builtin),
        prec.left(1, $.label),
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
      seq($.objdump_section_addr, "<", $.identifier, ">", ":"),
    objdump_section_addr: ($) => token.immediate(prec(0, /[0-9a-fA-F]+/)),

    objdump_offset_label: ($) =>
      prec.left(
        0,
        seq(
          $.objdump_offset_addr,
          ":",
          $.objdump_machine_code_bytes,
          optional($.ins),
        ),
      ),
    objdump_machine_code_bytes: ($) => repeat1(/[0-9a-fA-F]{2}/),
    objdump_offset_addr: ($) => seq(/[\s]+[0-9a-fA-F]+/),

    label: ($) =>
      prec.left(0, seq($.identifier, /:[\s]+/, optional($.directive))),
    ins: ($) => prec.left(0, seq($.mnemonic, optional($.operand_args))),

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
      token(
        choice(
          /[abcd][lh]/,
          /[er]?[abcd]x/,
          /[er]?[ds]i/,
          /[er]?[sb]p/,
          /r(8|9|10|11|12|13|14|15)/,
          /[xy]mm[0-7]/,
          "rip",
        ),
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

    mnemonic: ($) =>
      token(
        prec(
          1,
          /aaa|aad|aam|aas|adc|adcx|add|addpd|addps|addsd|addss|addsubpd|addsubps|adox|aesdec|aesdeclast|aesenc|aesenclast|aesimc|aeskeygenassist|and|andn|andnpd|andnps|andpd|andps|bextr|blcfill|blci|blcic|blcmsk|blcs|blendpd|blendps|blendvpd|blendvps|blsfill|blsi|blsic|blsmsk|blsr|bndcl|bndcn|bndcu|bndldx|bndmk|bndmov|bndstx|bsf|bsr|bswap|bt|btc|btr|bts|bzhi|call|cbw|cdq|cdqe|clac|clc|cld|clflush|clflushopt|clwb|clzero|cmc|cmova|cmovae|cmovb|cmovbe|cmovc|cmove|cmovg|cmovge|cmovl|cmovle|cmovna|cmovnae|cmovnb|cmovnbe|cmovnc|cmovne|cmovng|cmovnge|cmovnl|cmovnle|cmovno|cmovnp|cmovns|cmovnz|cmovo|cmovp|cmovpe|cmovpo|cmovs|cmovz|cmp|cmppd|cmpps|cmpsb|cmpsd|cmpsq|cmpss|cmpsw|cmpxchg|cmpxchg16b|cmpxchg8b|comisd|comiss|cpuid|cqo|crc32|cvtdq2pd|cvtdq2ps|cvtpd2dq|cvtpd2pi|cvtpd2ps|cvtpi2pd|cvtpi2ps|cvtps2dq|cvtps2pd|cvtps2pi|cvtsd2si|cvtsd2ss|cvtsi2sd|cvtsi2ss|cvtss2sd|cvtss2si|cvttpd2dq|cvttpd2pi|cvttps2dq|cvttps2pi|cvttsd2si|cvttss2si|cwd|cwde|daa|das|dec|div|divpd|divps|divsd|divss|dppd|dpps|emms|enter|extractps|extrq|f2xm1|fabs|fadd|faddp|fbld|fbstp|fchs|fclex|fcmovb|fcmovbe|fcmove|fcmovnb|fcmovnbe|fcmovne|fcmovnu|fcmovu|fcom|fcomi|fcomip|fcomp|fcompp|fcos|fdecstp|fdiv|fdivp|fdivr|fdivrp|femms|ffree|fiadd|ficom|ficomp|fidiv|fidivr|fild|fimul|fincstp|finit|fist|fistp|fisttp|fisub|fisubr|fld|fld1|fldcw|fldenv|fldl2e|fldl2t|fldlg2|fldln2|fldpi|fldz|fmul|fmulp|fnclex|fninit|fnop|fnsave|fnstcw|fnstenv|fnstsw|fpatan|fprem|fprem1|fptan|frndint|frstor|fsave|fscale|fsin|fsincos|fsqrt|fst|fstcw|fstenv|fstp|fstsw|fsub|fsubp|fsubr|fsubrp|ftst|fucom|fucomi|fucomip|fucomp|fucompp|fwait|fxam|fxch|fxrstor|fxrstor64|fxsave|fxsave64|fxtract|fyl2x|fyl2xp1|haddpd|haddps|hsubpd|hsubps|idiv|imul|in|inc|insb|insd|insertps|insertq|insw|int|int3|into|ja|jae|jb|jbe|jc|je|jecxz|jg|jge|jl|jle|jmp|jna|jnae|jnb|jnbe|jnc|jne|jng|jnge|jnl|jnle|jno|jnp|jns|jnz|jo|jp|jpe|jpo|js|jz|kaddb|kaddd|kaddq|kaddw|kandb|kandd|kandnb|kandnd|kandnq|kandnw|kandq|kandw|kmovb|kmovd|kmovq|kmovw|knotb|knotd|knotq|knotw|korb|kord|korq|kortestb|kortestd|kortestq|kortestw|korw|kshiftlb|kshiftld|kshiftlq|kshiftlw|kshiftrb|kshiftrd|kshiftrq|kshiftrw|ktestb|ktestd|ktestq|ktestw|kunpckbw|kunpckdq|kunpckwd|kxnorb|kxnord|kxnorq|kxnorw|kxorb|kxord|kxorq|kxorw|lahf|lddqu|ldmxcsr|lea|leave|lfence|lodsb|lodsd|lodsq|lodsw|loop|loope|loopne|lzcnt|maskmovdqu|maskmovq|maxpd|maxps|maxsd|maxss|mfence|minpd|minps|minsd|minss|mov|movapd|movaps|movbe|movd|movddup|movdq2q|movdqa|movdqu|movhlps|movhpd|movhps|movlhps|movlpd|movlps|movmskpd|movmskps|movntdq|movntdqa|movnti|movntpd|movntps|movntq|movntsd|movntss|movq|movq2dq|movsb|movsd|movshdup|movsldup|movsq|movss|movsw|movsx|movsxd|movupd|movups|movzx|mpsadbw|mul|mulpd|mulps|mulsd|mulss|mulx|neg|nop|not|or|orpd|orps|out|outsb|outsd|outsw|pabsb|pabsd|pabsw|packssdw|packsswb|packusdw|packuswb|paddb|paddd|paddq|paddsb|paddsw|paddusb|paddusw|paddw|palignr|pand|pandn|pause|pavgb|pavgusb|pavgw|pblendvb|pblendw|pclmulqdq|pcmpeqb|pcmpeqd|pcmpeqq|pcmpeqw|pcmpestri|pcmpestrm|pcmpgtb|pcmpgtd|pcmpgtq|pcmpgtw|pcmpistri|pcmpistrm|pcommit|pdep|pext|pextrb|pextrd|pextrq|pextrw|pf2id|pf2iw|pfacc|pfadd|pfcmpeq|pfcmpge|pfcmpgt|pfmax|pfmin|pfmul|pfnacc|pfpnacc|pfrcp|pfrcpit1|pfrcpit2|pfrcpv|pfrsqit1|pfrsqrt|pfrsqrtv|pfsub|pfsubr|phaddd|phaddsw|phaddw|phminposuw|phsubd|phsubsw|phsubw|pi2fd|pi2fw|pinsrb|pinsrd|pinsrq|pinsrw|pmaddubsw|pmaddwd|pmaxsb|pmaxsd|pmaxsw|pmaxub|pmaxud|pmaxuw|pminsb|pminsd|pminsw|pminub|pminud|pminuw|pmovmskb|pmovsxbd|pmovsxbq|pmovsxbw|pmovsxdq|pmovsxwd|pmovsxwq|pmovzxbd|pmovzxbq|pmovzxbw|pmovzxdq|pmovzxwd|pmovzxwq|pmuldq|pmulhrsw|pmulhrw|pmulhuw|pmulhw|pmulld|pmullw|pmuludq|pop|popa|popad|popcnt|popf|popfd|popfq|por|prefetch|prefetchnta|prefetcht0|prefetcht1|prefetcht2|prefetchw|prefetchwt1|psadbw|pshufb|pshufd|pshufhw|pshuflw|pshufw|psignb|psignd|psignw|pslld|pslldq|psllq|psllw|psrad|psraw|psrld|psrldq|psrlq|psrlw|psubb|psubd|psubq|psubsb|psubsw|psubusb|psubusw|psubw|pswapd|ptest|punpckhbw|punpckhdq|punpckhqdq|punpckhwd|punpcklbw|punpckldq|punpcklqdq|punpcklwd|push|pusha|pushad|pushf|pushfd|pushfq|pxor|rcl|rcpps|rcpss|rcr|rdfsbase|rdgsbase|rdrand|rdseed|rdtsc|rdtscp|ret|rol|ror|rorx|roundpd|roundps|roundsd|roundss|rsqrtps|rsqrtss|sahf|sal|sar|sarx|sbb|scasb|scasd|scasq|scasw|seta|setae|setb|setbe|setc|sete|setg|setge|setl|setle|setna|setnae|setnb|setnbe|setnc|setne|setng|setnge|setnl|setnle|setno|setnp|setns|setnz|seto|setp|setpe|setpo|sets|setz|sfence|sha1msg1|sha1msg2|sha1nexte|sha1rnds4|sha256msg1|sha256msg2|sha256rnds2|shl|shld|shlx|shr|shrd|shrx|shufpd|shufps|sqrtpd|sqrtps|sqrtsd|sqrtss|stac|stc|std|sti|stmxcsr|stosb|stosd|stosq|stosw|sub|subpd|subps|subsd|subss|swapgs|syscall|sysenter|sysexit|sysexit64|sysret|sysret64|t1mskc|test|tzcnt|tzmsk|ucomisd|ucomiss|ud2|unpckhpd|unpckhps|unpcklpd|unpcklps|vaddpd|vaddps|vaddsd|vaddss|vaddsubpd|vaddsubps|vaesdec|vaesdeclast|vaesenc|vaesenclast|vaesimc|vaeskeygenassist|valignd|valignq|vandnpd|vandnps|vandpd|vandps|vblendmb|vblendmd|vblendmpd|vblendmps|vblendmq|vblendmw|vblendpd|vblendps|vblendvpd|vblendvps|vbroadcastf128|vbroadcastf32x2|vbroadcastf32x4|vbroadcastf32x8|vbroadcastf64x2|vbroadcastf64x4|vbroadcasti128|vbroadcasti32x2|vbroadcasti32x4|vbroadcasti32x8|vbroadcasti64x2|vbroadcasti64x4|vbroadcastsd|vbroadcastss|vcmppd|vcmpps|vcmpsd|vcmpss|vcomisd|vcomiss|vcompresspd|vcompressps|vcvtdq2pd|vcvtdq2ps|vcvtpd2dq|vcvtpd2ps|vcvtpd2qq|vcvtpd2udq|vcvtpd2uqq|vcvtph2ps|vcvtps2dq|vcvtps2pd|vcvtps2ph|vcvtps2qq|vcvtps2udq|vcvtps2uqq|vcvtqq2pd|vcvtqq2ps|vcvtsd2si|vcvtsd2ss|vcvtsd2usi|vcvtsi2sd|vcvtsi2ss|vcvtss2sd|vcvtss2si|vcvtss2usi|vcvttpd2dq|vcvttpd2qq|vcvttpd2udq|vcvttpd2uqq|vcvttps2dq|vcvttps2qq|vcvttps2udq|vcvttps2uqq|vcvttsd2si|vcvttsd2usi|vcvttss2si|vcvttss2usi|vcvtudq2pd|vcvtudq2ps|vcvtuqq2pd|vcvtuqq2ps|vcvtusi2sd|vcvtusi2ss|vdbpsadbw|vdivpd|vdivps|vdivsd|vdivss|vdppd|vdpps|vexp2pd|vexp2ps|vexpandpd|vexpandps|vextractf128|vextractf32x4|vextractf32x8|vextractf64x2|vextractf64x4|vextracti128|vextracti32x4|vextracti32x8|vextracti64x2|vextracti64x4|vextractps|vfixupimmpd|vfixupimmps|vfixupimmsd|vfixupimmss|vfmadd132pd|vfmadd132ps|vfmadd132sd|vfmadd132ss|vfmadd213pd|vfmadd213ps|vfmadd213sd|vfmadd213ss|vfmadd231pd|vfmadd231ps|vfmadd231sd|vfmadd231ss|vfmaddpd|vfmaddps|vfmaddsd|vfmaddss|vfmaddsub132pd|vfmaddsub132ps|vfmaddsub213pd|vfmaddsub213ps|vfmaddsub231pd|vfmaddsub231ps|vfmaddsubpd|vfmaddsubps|vfmsub132pd|vfmsub132ps|vfmsub132sd|vfmsub132ss|vfmsub213pd|vfmsub213ps|vfmsub213sd|vfmsub213ss|vfmsub231pd|vfmsub231ps|vfmsub231sd|vfmsub231ss|vfmsubadd132pd|vfmsubadd132ps|vfmsubadd213pd|vfmsubadd213ps|vfmsubadd231pd|vfmsubadd231ps|vfmsubaddpd|vfmsubaddps|vfmsubpd|vfmsubps|vfmsubsd|vfmsubss|vfnmadd132pd|vfnmadd132ps|vfnmadd132sd|vfnmadd132ss|vfnmadd213pd|vfnmadd213ps|vfnmadd213sd|vfnmadd213ss|vfnmadd231pd|vfnmadd231ps|vfnmadd231sd|vfnmadd231ss|vfnmaddpd|vfnmaddps|vfnmaddsd|vfnmaddss|vfnmsub132pd|vfnmsub132ps|vfnmsub132sd|vfnmsub132ss|vfnmsub213pd|vfnmsub213ps|vfnmsub213sd|vfnmsub213ss|vfnmsub231pd|vfnmsub231ps|vfnmsub231sd|vfnmsub231ss|vfnmsubpd|vfnmsubps|vfnmsubsd|vfnmsubss|vfpclasspd|vfpclassps|vfpclasssd|vfpclassss|vfrczpd|vfrczps|vfrczsd|vfrczss|vgatherdpd|vgatherdps|vgatherpf0dpd|vgatherpf0dps|vgatherpf0qpd|vgatherpf0qps|vgatherpf1dpd|vgatherpf1dps|vgatherpf1qpd|vgatherpf1qps|vgatherqpd|vgatherqps|vgetexppd|vgetexpps|vgetexpsd|vgetexpss|vgetmantpd|vgetmantps|vgetmantsd|vgetmantss|vhaddpd|vhaddps|vhsubpd|vhsubps|vinsertf128|vinsertf32x4|vinsertf32x8|vinsertf64x2|vinsertf64x4|vinserti128|vinserti32x4|vinserti32x8|vinserti64x2|vinserti64x4|vinsertps|vlddqu|vldmxcsr|vmaskmovdqu|vmaskmovpd|vmaskmovps|vmaxpd|vmaxps|vmaxsd|vmaxss|vminpd|vminps|vminsd|vminss|vmovapd|vmovaps|vmovd|vmovddup|vmovdqa|vmovdqa32|vmovdqa64|vmovdqu|vmovdqu16|vmovdqu32|vmovdqu64|vmovdqu8|vmovhlps|vmovhpd|vmovhps|vmovlhps|vmovlpd|vmovlps|vmovmskpd|vmovmskps|vmovntdq|vmovntdqa|vmovntpd|vmovntps|vmovq|vmovsd|vmovshdup|vmovsldup|vmovss|vmovupd|vmovups|vmpsadbw|vmulpd|vmulps|vmulsd|vmulss|vorpd|vorps|vpabsb|vpabsd|vpabsq|vpabsw|vpackssdw|vpacksswb|vpackusdw|vpackuswb|vpaddb|vpaddd|vpaddq|vpaddsb|vpaddsw|vpaddusb|vpaddusw|vpaddw|vpalignr|vpand|vpandd|vpandn|vpandnd|vpandnq|vpandq|vpavgb|vpavgw|vpblendd|vpblendvb|vpblendw|vpbroadcastb|vpbroadcastd|vpbroadcastmb2d|vpbroadcastmb2q|vpbroadcastq|vpbroadcastw|vpclmulqdq|vpcmov|vpcmpb|vpcmpd|vpcmpeqb|vpcmpeqd|vpcmpeqq|vpcmpeqw|vpcmpestri|vpcmpestrm|vpcmpgtb|vpcmpgtd|vpcmpgtq|vpcmpgtw|vpcmpistri|vpcmpistrm|vpcmpq|vpcmpub|vpcmpud|vpcmpuq|vpcmpuw|vpcmpw|vpcomb|vpcomd|vpcompressd|vpcompressq|vpcomq|vpcomub|vpcomud|vpcomuq|vpcomuw|vpcomw|vpconflictd|vpconflictq|vperm2f128|vperm2i128|vpermb|vpermd|vpermi2b|vpermi2d|vpermi2pd|vpermi2ps|vpermi2q|vpermi2w|vpermil2pd|vpermil2ps|vpermilpd|vpermilps|vpermpd|vpermps|vpermq|vpermt2b|vpermt2d|vpermt2pd|vpermt2ps|vpermt2q|vpermt2w|vpermw|vpexpandd|vpexpandq|vpextrb|vpextrd|vpextrq|vpextrw|vpgatherdd|vpgatherdq|vpgatherqd|vpgatherqq|vphaddbd|vphaddbq|vphaddbw|vphaddd|vphadddq|vphaddsw|vphaddubd|vphaddubq|vphaddubw|vphaddudq|vphadduwd|vphadduwq|vphaddw|vphaddwd|vphaddwq|vphminposuw|vphsubbw|vphsubd|vphsubdq|vphsubsw|vphsubw|vphsubwd|vpinsrb|vpinsrd|vpinsrq|vpinsrw|vplzcntd|vplzcntq|vpmacsdd|vpmacsdqh|vpmacsdql|vpmacssdd|vpmacssdqh|vpmacssdql|vpmacsswd|vpmacssww|vpmacswd|vpmacsww|vpmadcsswd|vpmadcswd|vpmadd52huq|vpmadd52luq|vpmaddubsw|vpmaddwd|vpmaskmovd|vpmaskmovq|vpmaxsb|vpmaxsd|vpmaxsq|vpmaxsw|vpmaxub|vpmaxud|vpmaxuq|vpmaxuw|vpminsb|vpminsd|vpminsq|vpminsw|vpminub|vpminud|vpminuq|vpminuw|vpmovb2m|vpmovd2m|vpmovdb|vpmovdw|vpmovm2b|vpmovm2d|vpmovm2q|vpmovm2w|vpmovmskb|vpmovq2m|vpmovqb|vpmovqd|vpmovqw|vpmovsdb|vpmovsdw|vpmovsqb|vpmovsqd|vpmovsqw|vpmovswb|vpmovsxbd|vpmovsxbq|vpmovsxbw|vpmovsxdq|vpmovsxwd|vpmovsxwq|vpmovusdb|vpmovusdw|vpmovusqb|vpmovusqd|vpmovusqw|vpmovuswb|vpmovw2m|vpmovwb|vpmovzxbd|vpmovzxbq|vpmovzxbw|vpmovzxdq|vpmovzxwd|vpmovzxwq|vpmuldq|vpmulhrsw|vpmulhuw|vpmulhw|vpmulld|vpmullq|vpmullw|vpmultishiftqb|vpmuludq|vpor|vpord|vporq|vpperm|vprold|vprolq|vprolvd|vprolvq|vprord|vprorq|vprorvd|vprorvq|vprotb|vprotd|vprotq|vprotw|vpsadbw|vpscatterdd|vpscatterdq|vpscatterqd|vpscatterqq|vpshab|vpshad|vpshaq|vpshaw|vpshlb|vpshld|vpshlq|vpshlw|vpshufb|vpshufd|vpshufhw|vpshuflw|vpsignb|vpsignd|vpsignw|vpslld|vpslldq|vpsllq|vpsllvd|vpsllvq|vpsllvw|vpsllw|vpsrad|vpsraq|vpsravd|vpsravq|vpsravw|vpsraw|vpsrld|vpsrldq|vpsrlq|vpsrlvd|vpsrlvq|vpsrlvw|vpsrlw|vpsubb|vpsubd|vpsubq|vpsubsb|vpsubsw|vpsubusb|vpsubusw|vpsubw|vpternlogd|vpternlogq|vptest|vptestmb|vptestmd|vptestmq|vptestmw|vptestnmb|vptestnmd|vptestnmq|vptestnmw|vpunpckhbw|vpunpckhdq|vpunpckhqdq|vpunpckhwd|vpunpcklbw|vpunpckldq|vpunpcklqdq|vpunpcklwd|vpxor|vpxord|vpxorq|vrangepd|vrangeps|vrangesd|vrangess|vrcp14pd|vrcp14ps|vrcp14sd|vrcp14ss|vrcp28pd|vrcp28ps|vrcp28sd|vrcp28ss|vrcpps|vrcpss|vreducepd|vreduceps|vreducesd|vreducess|vrndscalepd|vrndscaleps|vrndscalesd|vrndscaless|vroundpd|vroundps|vroundsd|vroundss|vrsqrt14pd|vrsqrt14ps|vrsqrt14sd|vrsqrt14ss|vrsqrt28pd|vrsqrt28ps|vrsqrt28sd|vrsqrt28ss|vrsqrtps|vrsqrtss|vscalefpd|vscalefps|vscalefsd|vscalefss|vscatterdpd|vscatterdps|vscatterpf0dpd|vscatterpf0dps|vscatterpf0qpd|vscatterpf0qps|vscatterpf1dpd|vscatterpf1dps|vscatterpf1qpd|vscatterpf1qps|vscatterqpd|vscatterqps|vshuff32x4|vshuff64x2|vshufi32x4|vshufi64x2|vshufpd|vshufps|vsqrtpd|vsqrtps|vsqrtsd|vsqrtss|vstmxcsr|vsubpd|vsubps|vsubsd|vsubss|vtestpd|vtestps|vucomisd|vucomiss|vunpckhpd|vunpckhps|vunpcklpd|vunpcklps|vxorpd|vxorps|vzeroall|vzeroupper|wait|wrfsbase|wrgsbase|xadd|xchg|xgetbv|xor|xorpd|xorps|xrstor|xrstor64|xrstors|xrstors64|xsave|xsave64|xsavec|xsavec64|xsaveopt|xsaveopt64|xsaves|xsaves64|xsetbv /,
        ),
      ),
    section_name: ($) => /[.][A-Za-z0-9.@_-]+/,
    identifier: ($) => $._IDENTIFIER,
    _IDENTIFIER: ($) => token(prec(-1, /[A-Za-z.@_][A-Za-z0-9.@_-]*/)),
  },
});
