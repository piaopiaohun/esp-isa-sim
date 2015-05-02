DECLARE_INSN(vadd, 0x63f, 0x1ffffe0000000fff)
DECLARE_INSN(vaddi, 0x23f, 0xffff)
DECLARE_INSN(vaddiw, 0x33f, 0xffff)
DECLARE_INSN(vaddu, 0x80000000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vaddw, 0x73f, 0x1ffffe0000000fff)
DECLARE_INSN(vamoadd_d, 0xc0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoadd_w, 0x80000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoand_d, 0x60c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoand_w, 0x6080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomax_d, 0xa0c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomaxu_d, 0xe0c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomaxu_w, 0xe080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomax_w, 0xa080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomin_d, 0x80c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamominu_d, 0xc0c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamominu_w, 0xc080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamomin_w, 0x8080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoor_d, 0x40c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoor_w, 0x4080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoswap_d, 0x8c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoswap_w, 0x880000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoxor_d, 0x20c0000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vamoxor_w, 0x2080000000005bf, 0x1f9ffe0000000fff)
DECLARE_INSN(vand, 0x1c00000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vandi, 0x723f, 0xffff)
DECLARE_INSN(vauipc, 0x2bf, 0xff00ffff)
DECLARE_INSN(vcjal, 0xdbf, 0xff000fff)
DECLARE_INSN(vcjalr, 0xcbf, 0xfff)
DECLARE_INSN(vcmpeq, 0x800200000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfeq_d, 0x80a828000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfeq_h, 0x814828000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfeq_s, 0x800828000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfle_d, 0x80a028000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfle_h, 0x814028000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpfle_s, 0x800028000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpflt_d, 0x80a428000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpflt_h, 0x814428000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpflt_s, 0x800428000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmplt, 0x801200000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vcmpltu, 0x801a00000000063fL, 0x9ffffe0000f00fffL)
DECLARE_INSN(vdiv, 0x3000000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vdivu, 0x3400000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vdivuw, 0x3400000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vdivw, 0x3000000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(veidx, 0x805800000000063fL, 0xfffffffeff000fffL)
DECLARE_INSN(vfadd_d, 0xa0000000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfadd_d_h, 0x40000000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfadd_d_s, 0x20000000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfadd_h, 0x140000000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfadd_s, 0xa3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfadd_s_h, 0xc0000000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfclass_d, 0xa4380000000a3f, 0x3ffffffe00000fff)
DECLARE_INSN(vfclass_h, 0x144380000000a3f, 0x3ffffffe00000fff)
DECLARE_INSN(vfclass_s, 0x4380000000a3f, 0x3ffffffe00000fff)
DECLARE_INSN(vfcvt_d_h, 0x40100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_d_l, 0x120340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_d_lu, 0x1a0340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_d_s, 0x80100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_d_w, 0x20340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_d_wu, 0xa0340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_d, 0x100100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_l, 0x140340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_lu, 0x1c0340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_s, 0x120100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_w, 0x40340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_h_wu, 0xc0340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_l_d, 0x120300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_l_h, 0x140300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_l_s, 0x100300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_lu_d, 0x1a0300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_lu_h, 0x1c0300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_lu_s, 0x180300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_d, 0x20100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_h, 0xc0100000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_l, 0x100340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_lu, 0x180340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_w, 0x340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_s_wu, 0x80340000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_w_d, 0x20300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_w_h, 0x40300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_w_s, 0x300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_wu_d, 0xa0300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_wu_h, 0xc0300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfcvt_wu_s, 0x80300000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfdiv_d, 0xa0060000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfdiv_h, 0x140060000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfdiv_s, 0x60000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfence, 0x20000000000c3f, 0xffffffffff00ffffL)
DECLARE_INSN(vfirst, 0x207800000000063f, 0xfffffffe00000fffL)
DECLARE_INSN(vfmadd_d, 0xa000000000083f, 0xfe2000000000fff)
DECLARE_INSN(vfmadd_d_h, 0x4000000000083f, 0xfe2000000000fff)
DECLARE_INSN(vfmadd_h, 0x14000000000083f, 0xfe2000000000fff)
DECLARE_INSN(vfmadd_s, 0x83f, 0xfe2000000000fff)
DECLARE_INSN(vfmax_d, 0xa40a0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmax_h, 0x1440a0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmax_s, 0x40a0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmin_d, 0xa00a0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmin_h, 0x1400a0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmin_s, 0xa0000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfmsub_d, 0xa00000000008bf, 0xfe2000000000fff)
DECLARE_INSN(vfmsub_d_h, 0x400000000008bf, 0xfe2000000000fff)
DECLARE_INSN(vfmsub_h, 0x1400000000008bf, 0xfe2000000000fff)
DECLARE_INSN(vfmsub_s, 0x8bf, 0xfe2000000000fff)
DECLARE_INSN(vfmul_d, 0xa0040000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfmul_d_h, 0x40040000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfmul_d_s, 0x20040000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfmul_h, 0x140040000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfmul_s, 0x40000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfmul_s_h, 0xc0040000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfnmadd_d, 0xa00000000009bf, 0xfe2000000000fff)
DECLARE_INSN(vfnmadd_d_h, 0x400000000009bf, 0xfe2000000000fff)
DECLARE_INSN(vfnmadd_h, 0x1400000000009bf, 0xfe2000000000fff)
DECLARE_INSN(vfnmadd_s, 0x9bf, 0xfe2000000000fff)
DECLARE_INSN(vfnmsub_d, 0xa000000000093f, 0xfe2000000000fff)
DECLARE_INSN(vfnmsub_d_h, 0x4000000000093f, 0xfe2000000000fff)
DECLARE_INSN(vfnmsub_h, 0x14000000000093f, 0xfe2000000000fff)
DECLARE_INSN(vfnmsub_s, 0x93f, 0xfe2000000000fff)
DECLARE_INSN(vfsgnj_d, 0xa0080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnj_h, 0x140080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjn_d, 0xa4080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjn_h, 0x144080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjn_s, 0x4080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnj_s, 0x80000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjx_d, 0xa8080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjx_h, 0x148080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsgnjx_s, 0x8080000000a3f, 0x1ffffe0000000fff)
DECLARE_INSN(vfsqrt_d, 0x20160000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfsqrt_h, 0x140160000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfsqrt_s, 0x160000000a3f, 0x3fe3fffe00000fff)
DECLARE_INSN(vfsub_d, 0xa0020000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfsub_d_h, 0x40020000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfsub_d_s, 0x20020000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfsub_h, 0x140020000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfsub_s, 0x20000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vfsub_s_h, 0xc0020000000a3f, 0x1fe3fe0000000fff)
DECLARE_INSN(vlasegb, 0x20000000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlasegbu, 0x20100000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlasegd, 0x200c0000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlasegh, 0x20040000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlaseghu, 0x20140000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlasegw, 0x20080000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlasegwu, 0x20180000000b3f, 0xffe3ffffe000ffffL)
DECLARE_INSN(vlsegb, 0x8000000000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegbu, 0x8000100000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegd, 0x80000c0000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegh, 0x8000040000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlseghu, 0x8000140000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegstb, 0x8000020000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegstbu, 0x8000120000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegstd, 0x80000e0000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegsth, 0x8000060000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegsthu, 0x8000160000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegstw, 0x80000a0000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegstwu, 0x80001a0000000b3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vlsegw, 0x8000080000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegwu, 0x8000180000000b3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vlsegxb, 0xa000000000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxbu, 0xa000100000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxd, 0xa0000c0000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxh, 0xa000040000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxhu, 0xa000140000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxw, 0xa000080000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlsegxwu, 0xa000180000000b3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vlssegb, 0xb3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlssegbu, 0x100000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlssegd, 0xc0000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlssegh, 0x40000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlsseghu, 0x140000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlssegw, 0x80000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlssegwu, 0x180000000b3f, 0xffe3ffff0000ffffL)
DECLARE_INSN(vlui, 0x6bf, 0xff00ffff)
DECLARE_INSN(vmul, 0x2000000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vmulh, 0x2400000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vmulhsu, 0x2800000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vmulhu, 0x2c00000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vmulw, 0x2000000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vor, 0x1800000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vori, 0x623f, 0xffff)
DECLARE_INSN(vpl, 0x8002000000000b3fL, 0xfffffffee0f00fffL)
DECLARE_INSN(vpop, 0x840200000000063fL, 0xfc03e1e0f0f00fffL)
DECLARE_INSN(vps, 0x8002000000000f3fL, 0xfffffffee0f00fffL)
DECLARE_INSN(vrem, 0x3800000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vremu, 0x3c00000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vremuw, 0x3c00000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vremw, 0x3800000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vsasegb, 0x20000000000f3f, 0xffe3fe01e0ffffffL)
DECLARE_INSN(vsasegd, 0x200c0000000f3f, 0xffe3fe01e0ffffffL)
DECLARE_INSN(vsasegh, 0x20040000000f3f, 0xffe3fe01e0ffffffL)
DECLARE_INSN(vsasegw, 0x20080000000f3f, 0xffe3fe01e0ffffffL)
DECLARE_INSN(vsll, 0x400000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vslli, 0x123f, 0xffffffc00000ffffL)
DECLARE_INSN(vslliw, 0x133f, 0xffffffe00000ffffL)
DECLARE_INSN(vsllw, 0x400000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vslt, 0x800000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vslti, 0x223f, 0xffff)
DECLARE_INSN(vsltiu, 0x323f, 0xffff)
DECLARE_INSN(vsltu, 0xc00000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vsra, 0x41400000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vsrai, 0x40000000000523f, 0xffffffc00000ffffL)
DECLARE_INSN(vsraiw, 0x40000000000533f, 0xffffffe00000ffffL)
DECLARE_INSN(vsraw, 0x41400000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vsrl, 0x1400000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vsrli, 0x523f, 0xffffffc00000ffffL)
DECLARE_INSN(vsrliw, 0x533f, 0xffffffe00000ffffL)
DECLARE_INSN(vsrlw, 0x1400000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vssegb, 0x8000000000000f3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vssegd, 0x80000c0000000f3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vssegh, 0x8000040000000f3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vssegstb, 0x8000020000000f3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vssegstd, 0x80000e0000000f3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vssegsth, 0x8000060000000f3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vssegstw, 0x80000a0000000f3fL, 0xffe3ffc0e0000fffL)
DECLARE_INSN(vssegw, 0x8000080000000f3fL, 0xffe3fffee0000fffL)
DECLARE_INSN(vssegxb, 0xa000000000000f3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vssegxd, 0xa0000c0000000f3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vssegxh, 0xa000040000000f3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vssegxw, 0xa000080000000f3fL, 0xffe3fe0000000fffL)
DECLARE_INSN(vsssegb, 0xf3f, 0xffe3fe0100ffffffL)
DECLARE_INSN(vsssegd, 0xc0000000f3f, 0xffe3fe0100ffffffL)
DECLARE_INSN(vsssegh, 0x40000000f3f, 0xffe3fe0100ffffffL)
DECLARE_INSN(vsssegw, 0x80000000f3f, 0xffe3fe0100ffffffL)
DECLARE_INSN(vstop, 0xc3f, 0xffffffffffffffffL)
DECLARE_INSN(vsub, 0x40000000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vsubw, 0x40000000000073f, 0x1ffffe0000000fff)
DECLARE_INSN(vxor, 0x1000000000063f, 0x1ffffe0000000fff)
DECLARE_INSN(vxori, 0x423f, 0xffff)
