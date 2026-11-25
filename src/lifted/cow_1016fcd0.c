/* f_0x1016fcd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_1016fcd0(Guest* g)
{
    double d112;
    double d113;
    double d114;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    int64_t q85;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t115;
    uint32_t t116;
    uint32_t t117;
    uint32_t t118;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t162;
    uint32_t t163;
    uint32_t t164;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t170;
    uint32_t t171;
    uint32_t t172;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t176;
    uint32_t t177;
    uint32_t t178;
    uint32_t t179;
    uint32_t t18;
    uint32_t t180;
    uint32_t t181;
    uint32_t t182;
    uint32_t t183;
    uint32_t t184;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t188;
    uint32_t t189;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t193;
    uint32_t t194;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t198;
    uint32_t t199;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t203;
    uint32_t t204;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t208;
    uint32_t t209;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t213;
    uint32_t t214;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t218;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t224;
    uint32_t t225;
    uint32_t t226;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t235;
    uint32_t t236;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t240;
    uint32_t t241;
    uint32_t t242;
    uint32_t t243;
    uint32_t t244;
    uint32_t t3;
    uint32_t t4;
    uint32_t t41;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1016fcf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); self = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1016fcf9;
    case 0x1016fd1au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); self = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x5cu); g->ebx = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_1016fd1a;
    case 0x1016fd1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); goto E_1016fd1c;
    case 0x1016fd47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_48 = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_2c = rd32(sp0 - 0x2cu); goto E_1016fd47;
    case 0x1016fd50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016fd50;
    case 0x1016fd63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1016fd63;
    case 0x1016fd6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1016fd6a;
    case 0x1016fdb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fdb3;
    case 0x1016fdb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fdb6;
    case 0x1016fdbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fdbd;
    case 0x1016fdddu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; goto E_1016fddd;
    case 0x1016fde7u: eax = g->eax; ebx = g->ebx; goto E_1016fde7;
    case 0x1016fdeeu: eax = g->eax; ebx = g->ebx; goto E_1016fdee;
    case 0x1016fdf5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; goto E_1016fdf5;
    case 0x1016fdfcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; goto E_1016fdfc;
    case 0x1016fe1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fe1c;
    case 0x1016fe21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fe21;
    case 0x1016fe35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fe35;
    case 0x1016fe65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1016fe65;
    case 0x1016feaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016feae;
    case 0x1016feb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016feb1;
    case 0x1016ffb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016ffb1;
    case 0x1016ffc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1016ffc1;
    case 0x1016ffc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016ffc9;
    case 0x1016ffd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1016ffd7;
    case 0x1016fff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016fff3;
    case 0x1016ffffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1016ffff;
    case 0x1017001cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1017001c;
    case 0x1017002fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1017002f;
    case 0x1017003fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1017003f;
    case 0x10170049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170049;
    case 0x1017005eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017005e;
    case 0x10170062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170062;
    case 0x1017006cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017006c;
    case 0x10170074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10170074;
    case 0x1017007bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1017007b;
    case 0x10170092u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10170092;
    case 0x1017009au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1017009a;
    case 0x101700a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_101700a2;
    case 0x101700a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_101700a8;
    case 0x101700c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_101700c8;
    case 0x101700ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_28 = rd32(sp0 - 0x28u); goto E_101700dd;
    case 0x101700edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_28 = rd32(sp0 - 0x28u); goto E_101700ed;
    case 0x1017010fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017010f;
    case 0x1017014eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1017014e;
    case 0x1017015cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017015c;
    case 0x10170164u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170164;
    case 0x10170168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170168;
    case 0x1017016au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017016a;
    case 0x1017017bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017017b;
    case 0x10170182u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170182;
    case 0x10170192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170192;
    case 0x10170195u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170195;
    case 0x101701a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101701a5;
    case 0x101701adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101701ad;
    case 0x101701b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101701b3;
    case 0x101701bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101701bd;
    case 0x101701ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101701ce;
    case 0x101701d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101701d4;
    case 0x10170237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170237;
    case 0x1017023cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017023c;
    case 0x1017024eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017024e;
    case 0x10170254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170254;
    case 0x101702a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101702a9;
    case 0x101702b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101702b5;
    case 0x101702edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101702ed;
    case 0x101702f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101702f5;
    case 0x10170306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170306;
    case 0x10170319u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170319;
    case 0x1017031du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017031d;
    case 0x10170329u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170329;
    case 0x1017032cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1017032c;
    case 0x1017037du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); goto E_1017037d;
    case 0x10170389u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170389;
    case 0x1017039au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017039a;
    case 0x101703c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101703c7;
    case 0x101703cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101703cf;
    case 0x101703f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101703f3;
    case 0x101703f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101703f7;
    case 0x101703ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101703ff;
    case 0x10170407u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170407;
    case 0x1017040eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017040e;
    case 0x1017041au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017041a;
    case 0x1017045bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1017045b;
    case 0x10170465u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170465;
    case 0x10170467u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170467;
    case 0x1017046du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017046d;
    case 0x10170481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170481;
    case 0x101704acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704ac;
    case 0x101704b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704b4;
    case 0x101704c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704c1;
    case 0x101704d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704d4;
    case 0x101704d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704d8;
    case 0x101704feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101704fe;
    case 0x10170503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170503;
    case 0x1017052cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_1017052c;
    case 0x10170535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170535;
    case 0x10170539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170539;
    case 0x10170548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170548;
    case 0x1017055bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017055b;
    case 0x1017055fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017055f;
    case 0x10170568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10170568;
    case 0x10170598u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10170598;
    case 0x101705a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705a1;
    case 0x101705bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705bf;
    case 0x101705c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705c5;
    case 0x101705ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705ce;
    case 0x101705d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705d2;
    case 0x101705d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705d6;
    case 0x101705dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705da;
    case 0x101705e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705e4;
    case 0x101705f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101705f3;
    case 0x1017062au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017062a;
    case 0x10170632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170632;
    case 0x10170635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170635;
    case 0x10170648u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170648;
    case 0x1017064cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017064c;
    case 0x10170681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_10170681;
    case 0x10170696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_10170696;
    case 0x1017069eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_1017069e;
    case 0x101706a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_101706a6;
    case 0x10170751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170751;
    case 0x10170759u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170759;
    case 0x1017075fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1017075f;
    case 0x10170772u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170772;
    case 0x1017078du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1017078d;
    case 0x10170827u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170827;
    case 0x101708c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_101708c6;
    case 0x10170960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170960;
    case 0x101709fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_101709fa;
    case 0x10170a08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a08;
    case 0x10170a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_10170a1f;
    case 0x10170a4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_2c = rd32(sp0 - 0x2cu); goto E_10170a4a;
    case 0x10170a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a56;
    case 0x10170a58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_10170a58;
    case 0x10170a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a61;
    case 0x10170a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a65;
    case 0x10170a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a74;
    case 0x10170a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a87;
    case 0x10170a8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170a8b;
    case 0x10170a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10170a94;
    case 0x10170ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10170ac4;
    case 0x10170acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10170acd;
    case 0x10170aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10170aea;
    case 0x10170afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_28 = rd32(sp0 - 0x28u); goto E_10170afc;
    case 0x10170b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_28 = rd32(sp0 - 0x28u); goto E_10170b10;
    default: break;
    }
#endif

    COW_AT(1016fcd0)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x48u, self);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    t1 = rd32(arg2) & 0xffffffu;
    wr32(sp0 - 0x2cu, t1);
    t2 = rd8(arg2 + 3u);
    wr32(sp0 - 0x34u, t2);
    if ((int32_t)rd8(arg2 + 3u) < 5)
    {
        eax = t1;
        edx = in_edx;
        loc_58 = in_ebx;
        loc_5c = in_ebp;
        loc_48 = self;
        loc_60 = in_esi;
        loc_64 = in_edi;
        loc_2c = t1;
        loc_34 = t2;
    }
    else
    {
        eax = t1;
        loc_2c = t1;
        loc_34 = t2;
    COW_AT(1016fcf9)
        t3 = rd8(COW_IMG(0x10376ac0u) + (rd8(arg2 + 5u) ^ 0xf0u));
        if ((int32_t)(eax - 8u) <= 0)
        {
            eax = eax - 8u;
            edx = 0u;
            loc_58 = in_ebx;
            loc_5c = in_ebp;
            loc_48 = self;
            loc_60 = in_esi;
            loc_64 = in_edi;
        }
        else
        {
            eax = eax - 8u;
            esi = t3;
    COW_AT(1016fd1a)
            edx = 0u;
            ebx = eax;
            ebp = arg2 + 8u;
            loc_58 = in_ebx;
            loc_5c = in_ebp;
            loc_48 = self;
            loc_60 = in_esi;
            loc_64 = in_edi;
L_1016fd1c: ;
    COW_AT(1016fd1c)
            t4 = edx + esi + 1u;
            t5 = (uint32_t)(uint8_t)esi << 8u | (uint8_t)esi;
            wr8(ebp, (uint8_t)(rd8(ebp) ^ (uint32_t)((int32_t)t5 >> ((t4 & 7u) < 0x20u ? t4 & 7u : 0x1fu))));
            if (ebx != 1u)
            {
                ebx = ebx - 1u;
                ebp = ebp + 1u;
                esi = edx + t4 + 2u;
                edx = edx + 2u;
                loc_58 = rd32(sp0 - 0x58u);
                loc_5c = rd32(sp0 - 0x5cu);
                loc_48 = rd32(sp0 - 0x48u);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_34 = rd32(sp0 - 0x34u);
                goto L_1016fd1c;
            }
            eax = (uint32_t)((int32_t)t5 >> ((t4 & 7u) < 0x20u ? t4 & 7u : 0x1fu));
            edx = edx + 2u;
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_48 = rd32(sp0 - 0x48u);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_34 = rd32(sp0 - 0x34u);
        }
    }
    COW_AT(1016fd47)
    g->esp = sp0 - 0x64u;
    t6 = cow_call_regs(g, COW_IMG(0x10170c80u), eax, loc_48, edx, 1, 0);
    eax = t6;
    COW_AT(1016fd50)
    wr32(sp0 - 0x30u, eax);
    if (rd32(sp0 + 0x1cu) != 0u)
    {
        ebx = eax;
        loc_30 = eax;
    }
    else
    {
        ebx = eax;
        loc_30 = eax;
    COW_AT(1016fd63)
        wr8(ebx + 0xddu, 1u);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(1016fd6a)
    t7 = rd32(sp0 + 0x18u);
    wr32(ebx + 4u, arg2);
    wr32(ebx + 0xe0u, rd32(t7));
    t8 = rd32(t7 + 4u);
    wr32(ebx + 0xe4u, t8);
    t9 = rd32(t7 + 8u);
    wr32(ebx + 0xe8u, t9);
    t10 = rd32(t7 + 0xcu);
    wr32(ebx + 0xecu, t10);
    wr32(ebx + 0x40u, 0u);
    t11 = rd32(arg2 + 4u);
    wr32(ebx + 0x68u, 0u);
    wr32(ebx + 0x20u, 0x152u);
    wr32(ebx + 0x1cu, (uint8_t)t11);
    if ((uint8_t)t11 == 1u) goto L_1016fe1c;
    eax = (uint8_t)t11 - 1u;
    COW_AT(1016fdb3)
    if (eax == 1u) goto L_1016fdbd;
    COW_AT(1016fdb6)
    ecx = 4u;
L_1016fe21: ;
    COW_AT(1016fe21)
    wr32(ebx + 0x2cu, ecx);
    wr32(ebx + 0x24u, 0x24u);
    wr32(ebx + 0x28u, 0x24u);
    wr32(ebx + 0x38u, 0x24u);
    wr32(ebx + 0x3cu, ecx);
L_1016fe35: ;
    COW_AT(1016fe35)
    t13 = rd32(sp0 - 0x2cu);
    wr32(ebx + 0x30u, 0x144u);
    wr32(ebx + 0x34u, 0x1cu);
    wr32(sp0 - 0x68u, arg2 + 8u);
    t14 = rd8(arg2 + 5u) ^ 0xf0u;
    wr32(sp0 - 0x6cu, t14);
    wr32(sp0 - 0x70u, t13);
    t15 = rd32(arg2 + 4u);
    wr32(sp0 - 0x74u, t15);
    g->esp = sp0 - 0x64u;
    cow_stdcall(g, COW_IMG(0x10170e80u), 4, t15, t13, t14, arg2 + 8u);
    COW_AT(1016fe65)
    t16 = rd32(rd32(ebx + 4u) + 0x10u);
    t17 = rd32(ebx + 4u);
    wr32(ebx + 8u, t16);
    t18 = rd32(t17 + 0x14u);
    wr32(ebx + 0xcu, t18);
    t19 = rd32(t17 + 0x18u);
    wr32(ebx + 0x10u, t19);
    t20 = rd32(t17 + 0x1cu);
    wr32(ebx + 0x14u, t20);
    t21 = rd32(sp0 + 0xcu);
    wr32(ebx + 0x18u, t21);
    t22 = rd32(arg2 + 0x20u);
    wr32(ebx + 0x44u, t22);
    esi = arg2 + 0x24u;
    edi = ebx + 0x48u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)rd32(sp0 - 0x34u) < 2)
    {
        eax = ebx + 0x48u;
        ecx = 9u;
    }
    else
    {
        eax = ebx + 0x48u;
    COW_AT(1016feae)
        ecx = rd32(ebx + 0x44u);
    }
    COW_AT(1016feb1)
    wr32(sp0 - 0x40u, ecx);
    wr32(ebx + 0x70u, rd32(eax));
    d23 = (double)rdf32(eax + 8u);
    wrf32(ebx + 0x74u, (float)d23);
    d24 = (double)rdf32(eax + 0x14u);
    wrf32(ebx + 0x78u, (float)d24);
    d25 = (double)rdf32(eax + 4u);
    wrf32(ebx + 0x7cu, (float)d25);
    d26 = (double)rdf32(eax + 8u);
    wrf32(ebx + 0x80u, (float)d26);
    d27 = (double)rdf32(eax + 0x14u);
    wrf32(ebx + 0x84u, (float)d27);
    d28 = (double)rdf32(eax + 4u);
    wrf32(ebx + 0x88u, (float)d28);
    d29 = (double)rdf32(eax + 8u);
    wrf32(ebx + 0x8cu, (float)d29);
    d30 = (double)rdf32(eax + 0x10u);
    wrf32(ebx + 0x90u, (float)d30);
    wr32(ebx + 0x94u, rd32(eax));
    d31 = (double)rdf32(eax + 8u);
    wrf32(ebx + 0x98u, (float)d31);
    d32 = (double)rdf32(eax + 0x10u);
    wrf32(ebx + 0x9cu, (float)d32);
    wr32(ebx + 0xa0u, rd32(eax));
    d33 = (double)rdf32(eax + 0xcu);
    wrf32(ebx + 0xa4u, (float)d33);
    d34 = (double)rdf32(eax + 0x14u);
    wrf32(ebx + 0xa8u, (float)d34);
    d35 = (double)rdf32(eax + 4u);
    wrf32(ebx + 0xacu, (float)d35);
    d36 = (double)rdf32(eax + 0xcu);
    wrf32(ebx + 0xb0u, (float)d36);
    d37 = (double)rdf32(eax + 0x14u);
    wrf32(ebx + 0xb4u, (float)d37);
    d38 = (double)rdf32(eax + 4u);
    wrf32(ebx + 0xb8u, (float)d38);
    d39 = (double)rdf32(eax + 0xcu);
    wrf32(ebx + 0xbcu, (float)d39);
    d40 = (double)rdf32(eax + 0x10u);
    wrf32(ebx + 0xc0u, (float)d40);
    t41 = rd32(eax);
    wr32(ebx + 0xc4u, t41);
    d42 = (double)rdf32(eax + 0xcu);
    wrf32(ebx + 0xc8u, (float)d42);
    d43 = (double)rdf32(eax + 0x10u);
    wrf32(ebx + 0xccu, (float)d43);
    d44 = fr(g, (double)rdf32(eax + 0x14u) - (double)rdf32(eax + 0x10u));
    d45 = fr(g, (double)rdf32(eax + 0xcu) - (double)rdf32(eax + 8u));
    d46 = fr(g, (double)rdf32(eax + 4u) - (double)rdf32(eax));
    d47 = fr(g, fr(g, fr(g, d44 * d44) + fr(g, d45 * d45)) + fr(g, d46 * d46));
    if (d47 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t41;
        x0 = d47;
    COW_AT(1016ffc1)
        wr32(ebx + 0xd4u, 0u);
    }
    else
    {
        edx = t41;
        x0 = d47;
    COW_AT(1016ffb1)
        d48 = fr(g, fr(g, sqrt(x0)) * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(ebx + 0xd4u, (float)d48);
    }
    COW_AT(1016ffc9)
    wr32(sp0 - 0x68u, 4u);
    wr32(sp0 - 0x6cu, ecx * 0x24u);
    g->esp = sp0 - 0x64u;
    t49 = cow_call_regs(g, COW_IMG(0x10028640u), ecx * 0x24u, ecx, edx, 1, 2, ecx * 0x24u, 4u);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(1016ffd7)
    wr32(ebx + 0x60u, eax);
    t51 = rd32(COW_IMG(0x10631f24u));
    wr32(sp0 + 0xcu, eax);
    t52 = rd32(t51 + 0x39498u);
    if (t52 != 0u)
    {
    COW_AT(1016fff3)
        if (arg4 != 0u)
        {
    COW_AT(1016ffff)
            t53 = rd32(sp0 - 0x40u);
            wr32(sp0 + 0x18u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 + 0x1cu, 0u);
            if ((int32_t)t53 <= 0) goto L_101700c8;
            loc_38 = 0u;
L_1017001c: ;
    COW_AT(1017001c)
            if (rd32(arg2 + rd32(sp0 + 0x1cu) * 4u + 0x3cu) == 0u)
            {
                edx = rd32(sp0 + 0x1cu);
            }
            else
            {
                eax = rd32(arg2 + rd32(sp0 + 0x1cu) * 4u + 0x3cu);
                edx = rd32(sp0 + 0x1cu);
    COW_AT(1017002f)
                if ((int32_t)rd32(eax + rd32(ebx + 4u)) <= 0) goto L_1017007b;
                ebp = eax + rd32(ebx + 4u) + 0x20u;
                esi = eax + rd32(ebx + 4u);
                eax = rd32(eax + rd32(ebx + 4u));
                edi = 0u;
L_1017003f: ;
    COW_AT(1017003f)
                wr32(sp0 - 0x68u, ebp);
                g->eax = eax;
                g->esp = sp0 - 0x64u;
                t54 = cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x20u, edx, 1, ebp);
                eax = t54;
    COW_AT(10170049)
                wr32(sp0 - 0x68u, arg4);
                wr32(sp0 - 0x6cu, sp0 - 0x20u);
                g->eax = eax;
                g->edx = sp0 - 0x20u;
                g->esp = sp0 - 0x64u;
                t55 = cow_thiscall(g, COW_IMG(0x1003adc0u), rd32(COW_IMG(0x1047b970u)), 2, sp0 - 0x20u, arg4);
                t56 = g->edx;
                eax = t55;
                edx = t56;
    COW_AT(1017005e)
                if (eax == 0u)
                {
    COW_AT(1017006c)
                    wr32(sp0 + 0x18u, 1u);
                    loc_38 = rd32(sp0 - 0x38u);
                }
                else
                {
    COW_AT(10170062)
                    wr32(sp0 - 0x38u, 1u);
                    loc_38 = 1u;
                }
    COW_AT(10170074)
                if ((int32_t)(edi + 1u) < (int32_t)rd32(esi))
                {
                    eax = rd32(esi);
                    edi = edi + 1u;
                    goto L_1017003f;
                }
            }
L_1017007b: ;
    COW_AT(1017007b)
            t57 = rd32(sp0 + 0x1cu) + 1u;
            t58 = rd32(sp0 + 0x1cu);
            t59 = rd32(sp0 - 0x40u);
            wr32(sp0 + 0x1cu, t57);
            if ((int32_t)(t58 + 1u) < (int32_t)t59) goto L_1017001c;
    COW_AT(10170092)
            if (rd32(sp0 + 0x18u) == 0u)
            {
    COW_AT(1017009a)
                if (loc_38 != 0u)
                {
    COW_AT(101700a2)
                    t60 = rd32(ebx + 0x1cu);
                    if (t60 == 1u)
                    {
    COW_AT(101700a8)
                        wr32(ebx + 0x1cu, 3u);
                        wr32(ebx + 0x20u, 0x152u);
                        wr32(ebx + 0x24u, 0x24u);
                        wr32(ebx + 0x28u, 0x24u);
                        wr32(ebx + 0x2cu, 5u);
                    }
                }
            }
        }
    }
L_101700c8: ;
    COW_AT(101700c8)
    t61 = rd32(sp0 - 0x40u);
    wr32(sp0 + 0x1cu, 0u);
    if ((int32_t)t61 <= 0) goto L_10170b10;
    ecx = 0u;
L_101700dd: ;
    COW_AT(101700dd)
    if (rd32(arg2 + ecx * 4u + 0x3cu) != 0u)
    {
        eax = rd32(arg2 + ecx * 4u + 0x3cu);
    COW_AT(101700ed)
        wr32(sp0 - 0x68u, 4u);
        t62 = eax + rd32(ebx + 4u);
        t63 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0x18u, t62);
        t64 = rd32(t62);
        wr32(t63, t64);
        wr32(sp0 - 0x6cu, t64 * 0xc0u);
        g->esp = sp0 - 0x64u;
        t65 = cow_call_regs(g, COW_IMG(0x10028640u), t64, t64 * 0xc0u, edx, 1, 2, t64 * 0xc0u, rd32(sp0 - 0x68u));
        eax = t65;
        esi = t62;
        edi = t63;
    COW_AT(1017010f)
        wr32(edi + 4u, eax);
        t66 = esi;
        t67 = edi;
        esi = t66 + 4u;
        edi = t67 + 8u;
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t68 = rd32(sp0 + 0x18u) + 0x20u;
        wr32(sp0 - 0x34u, t68);
        t69 = rd32(rd32(sp0 + 0x18u) + 0x1cu);
        t70 = rd32(sp0 + 0xcu);
        t71 = rd32(rd32(sp0 + 0xcu));
        wr32(t70 + 0x20u, t69);
        wr32(sp0 - 0x28u, 0u);
        if ((int32_t)t71 <= 0)
        {
            edx = t69;
            goto L_10170aea;
        }
        edx = t69;
        ebp = eax;
        eax = t70;
        loc_28 = 0u;
L_1017014e: ;
    COW_AT(1017014e)
        t72 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x68u, t72);
        g->esp = sp0 - 0x64u;
        cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, edx, 1, t72);
        t73 = g->edx;
        edx = t73;
        esi = t72;
    COW_AT(1017015c)
        if (arg1 == 0u)
        {
    COW_AT(10170168)
            eax = 0u;
        }
        else
        {
    COW_AT(10170164)
            eax = rd32(arg1);
        }
    COW_AT(1017016a)
        wr32(sp0 - 0x68u, eax);
        wr32(sp0 - 0x6cu, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        t74 = cow_thiscall(g, COW_IMG(0x1003ad40u), rd32(COW_IMG(0x1047b970u)), 2, sp0 - 0x10u, eax);
        t75 = g->edx;
        eax = t74;
        edx = t75;
    COW_AT(1017017b)
        wr32(ebp + 4u, eax);
        if (eax == 0u)
        {
    COW_AT(10170182)
            wr32(sp0 - 0x68u, sp0 - 0x10u);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x64u;
            t76 = cow_thiscall(g, COW_IMG(0x1003acd0u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
            eax = t76;
    COW_AT(10170192)
            wr32(ebp + 4u, eax);
        }
    COW_AT(10170195)
        if (rd32(rd32(COW_IMG(0x10631f24u)) + 0x39498u) != 0u)
        {
            eax = rd32(rd32(COW_IMG(0x10631f24u)) + 0x39498u);
            edx = rd32(COW_IMG(0x10631f24u));
    COW_AT(101701a5)
            if (arg4 != 0u)
            {
    COW_AT(101701ad)
                t77 = rd32(ebx + 0x1cu);
                if (t77 == 3u)
                {
    COW_AT(101701b3)
                    wr32(sp0 - 0x68u, esi);
                    g->esp = sp0 - 0x64u;
                    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x20u, edx, 1, esi);
                    t78 = g->edx;
                    edx = t78;
    COW_AT(101701bd)
                    wr32(sp0 - 0x68u, arg4);
                    wr32(sp0 - 0x6cu, sp0 - 0x20u);
                    g->eax = sp0 - 0x20u;
                    g->esp = sp0 - 0x64u;
                    t79 = cow_thiscall(g, COW_IMG(0x1003adc0u), rd32(COW_IMG(0x1047b970u)), 2, sp0 - 0x20u, arg4);
                    eax = t79;
    COW_AT(101701ce)
                    wr32(ebp + 0xbcu, eax);
                }
            }
        }
    COW_AT(101701d4)
        t80 = rd32(esi + 0x10u);
        wr32(ebp + 0xcu, esi + 0x14u);
        wr32(ebp + 8u, t80 & 0xfffffffu);
        wr16(ebp + 0x20u, rd32(esi + 0x10u) >> 0x1fu);
        wr16(ebp + 0x22u, rd32(esi + 0x10u) >> 0x1eu & 1u);
        wr16(ebp + 0x24u, rd32(esi + 0x10u) >> 0x1du & 1u);
        wr16(ebp + 0x26u, rd32(esi + 0x10u) >> 0x1cu & 1u);
        t81 = rd32(esi + rd32(ebp + 8u) * rd32(ebx + 0x28u) + 0x14u);
        t82 = rd32(ebp + 8u);
        t83 = rd32(ebx + 0x28u);
        wr32(ebp + 0x10u, t81);
        t84 = esi + t82 * t83 + 0x18u;
        wr32(ebp + 0x14u, t84);
        if (rd32(ebx + 0x1cu) == 1u)
        {
            ecx = esi + t82 * t83 + 0x14u;
            goto L_1017024e;
        }
        eax = rd32(ebx + 0x1cu);
        ecx = esi + t82 * t83 + 0x14u;
        edx = t81;
    COW_AT(10170237)
        if (eax == 3u) goto L_1017024e;
    COW_AT(1017023c)
        q85 = (int64_t)cow_muls(0x55555556u, edx);
        esi = edx;
        edx = cow_qhi(q85) + (cow_qhi(q85) >> 0x1fu);
L_10170254: ;
    COW_AT(10170254)
        wr32(ebp + 0x18u, edx);
        wr32(ebp + 0x28u, 0u);
        wr32(ebp + 0x2cu, 0u);
        t86 = ecx + (esi + 1u & 0xfffffffeu) * 2u + 4u;
        wr32(sp0 - 0x34u, t86);
        wr32(ebp + 0xb8u, 0u);
        wr32(ebp + 0xb0u, 0u);
        wr32(ebp + 0xb4u, 0u);
        edi = ebp + 0x30u;
        eax = 0u;
        ecx = 0x20u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(ebp + 8u) != 0u)
        {
            eax = rd32(ebp + 8u);
            esi = ebp + 0x28u;
    COW_AT(101702a9)
            if (rd32(ebx + 0x1cu) != 2u)
            {
                ecx = rd32(ebx + 0x1cu);
    COW_AT(10170503)
                wr32(sp0 - 0x68u, esi);
                t132 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x928u);
                wr32(sp0 - 0x6cu, t132);
                t133 = rd32(ebx + 0x20u);
                wr32(sp0 - 0x70u, t133);
                t134 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x924u);
                wr32(sp0 - 0x74u, t134);
                if (ecx != 3u)
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = t133;
                    edx = rd32(ebp + 0x10u);
                    edi = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    loc_68 = esi;
                    loc_6c = t132;
                    loc_70 = t133;
                    loc_74 = t134;
    COW_AT(10170a58)
                    t232 = edx * rd32(ebx + 0x24u);
                    wr32(sp0 - 0x78u, t232);
                    wr32(sp0 - 0x7cu, eax);
                    g->eax = eax;
                    g->esp = sp0 - 0x64u;
                    t233 = cow_thiscall(g, rd32(edi + 0x5cu), ecx, 6, eax, t232, loc_74, loc_70, loc_6c, loc_68);
                    eax = t233;
    COW_AT(10170a61)
                    if ((int32_t)eax >= 0)
                    {
    COW_AT(10170a65)
                        t234 = rd32(ebx + 0x40u) + rd32(ebp + 0x10u) * rd32(ebx + 0x24u);
                        wr32(ebx + 0x40u, t234);
L_10170a74: ;
    COW_AT(10170a74)
                        wr32(sp0 - 0x68u, 0u);
                        wr32(sp0 - 0x6cu, sp0 - 0x54u);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 0u);
                        wr32(sp0 - 0x78u, rd32(esi));
                        g->eax = rd32(esi);
                        t235 = rd32(esi);
                        t236 = rd32(rd32(esi));
                        g->esp = sp0 - 0x64u;
                        t237 = cow_thiscall(g, rd32(t236 + 0x2cu), t236, 5, t235, 0u, 0u, sp0 - 0x54u, 0u);
                        t238 = g->ecx;
                        eax = t237;
                        ecx = t238;
    COW_AT(10170a87)
                        if ((int32_t)eax < 0) goto L_10170a74;
    COW_AT(10170a8b)
                        if ((int32_t)rd32(ebp + 0x10u) <= 0)
                        {
                            loc_54 = rd32(sp0 - 0x54u);
                            goto L_10170ac4;
                        }
                        edx = 0u;
                        loc_54 = rd32(sp0 - 0x54u);
L_10170a94: ;
    COW_AT(10170a94)
                        esi = rd32(ebp + 0xcu) + rd16(edx * 2u + rd32(ebp + 0x14u)) * 0x24u;
                        edi = loc_54;
                        ecx = 9u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        t239 = rd32(sp0 - 0x54u) + 0x24u;
                        wr32(sp0 - 0x54u, t239);
                        if ((int32_t)(edx + 1u) < (int32_t)rd32(ebp + 0x10u))
                        {
                            edx = edx + 1u;
                            loc_54 = t239;
                            goto L_10170a94;
                        }
                        ecx = t239;
                        loc_54 = t239;
L_10170ac4: ;
    COW_AT(10170ac4)
                        t240 = rd32(ebp + 0x28u);
                        wr32(sp0 - 0x68u, t240);
                        g->esp = sp0 - 0x64u;
                        cow_thiscall(g, rd32(rd32(t240) + 0x30u), ecx, 1, t240);
                    }
                }
                else
                {
                    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    ecx = t133;
                    edx = rd32(ebp + 0x10u);
                    edi = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
                    loc_68 = esi;
                    loc_6c = t132;
                    loc_70 = t133;
                    loc_74 = t134;
    COW_AT(1017052c)
                    t135 = edx * rd32(ebx + 0x24u);
                    wr32(sp0 - 0x78u, t135);
                    wr32(sp0 - 0x7cu, eax);
                    g->eax = eax;
                    g->esp = sp0 - 0x64u;
                    t136 = cow_thiscall(g, rd32(edi + 0x5cu), ecx, 6, eax, t135, loc_74, loc_70, loc_6c, loc_68);
                    eax = t136;
    COW_AT(10170535)
                    if ((int32_t)eax >= 0)
                    {
    COW_AT(10170539)
                        t137 = rd32(ebx + 0x40u) + rd32(ebp + 0x10u) * rd32(ebx + 0x24u);
                        wr32(ebx + 0x40u, t137);
L_10170548: ;
    COW_AT(10170548)
                        wr32(sp0 - 0x68u, 0u);
                        wr32(sp0 - 0x6cu, sp0 - 0x54u);
                        wr32(sp0 - 0x70u, 0u);
                        wr32(sp0 - 0x74u, 0u);
                        wr32(sp0 - 0x78u, rd32(esi));
                        g->eax = rd32(esi);
                        t138 = rd32(esi);
                        t139 = rd32(rd32(esi));
                        g->esp = sp0 - 0x64u;
                        t140 = cow_thiscall(g, rd32(t139 + 0x2cu), t139, 5, t138, 0u, 0u, sp0 - 0x54u, 0u);
                        t141 = g->ecx;
                        eax = t140;
                        ecx = t141;
    COW_AT(1017055b)
                        if ((int32_t)eax < 0) goto L_10170548;
    COW_AT(1017055f)
                        if ((int32_t)rd32(ebp + 0x10u) <= 0)
                        {
                            loc_54 = rd32(sp0 - 0x54u);
                            goto L_10170598;
                        }
                        edx = 0u;
                        loc_54 = rd32(sp0 - 0x54u);
L_10170568: ;
    COW_AT(10170568)
                        esi = rd32(ebp + 0xcu) + rd16(edx * 2u + rd32(ebp + 0x14u)) * 0x24u;
                        edi = loc_54;
                        ecx = 9u;
                        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        t142 = rd32(sp0 - 0x54u) + 0x24u;
                        wr32(sp0 - 0x54u, t142);
                        if ((int32_t)(edx + 1u) < (int32_t)rd32(ebp + 0x10u))
                        {
                            edx = edx + 1u;
                            loc_54 = t142;
                            goto L_10170568;
                        }
                        ecx = t142;
                        loc_54 = t142;
L_10170598: ;
    COW_AT(10170598)
                        t143 = rd32(ebp + 0x28u);
                        wr32(sp0 - 0x68u, t143);
                        g->esp = sp0 - 0x64u;
                        cow_thiscall(g, rd32(rd32(t143) + 0x30u), ecx, 1, t143);
                    }
    COW_AT(101705a1)
                    t144 = rd16(rd32(ebp + 0x14u) + 2u);
                    t145 = rd16(rd32(ebp + 0x14u));
                    t146 = rd32(ebp + 0x14u);
                    t147 = rd32(ebp + 0x10u);
                    wr32(sp0 + 0x18u, 0u);
                    if ((int32_t)t147 > 2)
                    {
                        eax = t144;
                        ecx = t145;
                        edx = t146;
                        esi = t147;
    COW_AT(101705bf)
                        esi = esi - 2u;
                        edi = edx + 4u;
L_101705c5: ;
    COW_AT(101705c5)
                        if (ecx == eax)
                        {
                            edx = rd16(edi);
                        }
                        else
                        {
                            edx = rd16(edi);
    COW_AT(101705ce)
                            if (eax != edx)
                            {
    COW_AT(101705d2)
                                if (edx != ecx)
                                {
    COW_AT(101705d6)
                                    t148 = rd32(sp0 + 0x18u);
                                    wr32(sp0 + 0x18u, t148 + 1u);
                                }
                            }
                        }
    COW_AT(101705da)
                        if (esi != 1u)
                        {
                            ecx = eax;
                            eax = edx;
                            esi = esi - 1u;
                            edi = edi + 2u;
                            goto L_101705c5;
                        }
                    }
    COW_AT(101705e4)
                    t149 = rd32(sp0 + 0x18u);
                    t150 = rd32(sp0 + 0x18u);
                    wr32(ebp + 0x1cu, t149);
                    if (t150 != 0u)
                    {
    COW_AT(101705f3)
                        wr32(sp0 - 0x68u, ebp + 0xb4u);
                        t151 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x928u);
                        wr32(sp0 - 0x2cu, t151);
                        wr32(sp0 - 0x6cu, t151);
                        wr32(sp0 - 0x70u, 0u);
                        t152 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x924u);
                        wr32(sp0 - 0x74u, t152);
                        t153 = rd32(sp0 + 0x18u) * 0x90u;
                        wr32(sp0 - 0x78u, t153);
                        t154 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0x7cu, t154);
                        g->eax = t154;
                        g->esp = sp0 - 0x64u;
                        t155 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x5cu), t152, 6, t154, t153, t152, 0u, t151, ebp + 0xb4u);
                        eax = t155;
                        esi = t153;
                        edi = ebp + 0xb4u;
    COW_AT(1017062a)
                        if ((int32_t)eax >= 0)
                        {
    COW_AT(10170632)
                            t156 = rd32(ebx + 0x40u);
                            wr32(ebx + 0x40u, esi + t156);
L_10170635: ;
    COW_AT(10170635)
                            wr32(sp0 - 0x68u, 0u);
                            wr32(sp0 - 0x6cu, sp0 - 0x50u);
                            wr32(sp0 - 0x70u, 0u);
                            wr32(sp0 - 0x74u, 0u);
                            wr32(sp0 - 0x78u, rd32(edi));
                            g->eax = rd32(edi);
                            t157 = rd32(edi);
                            g->esp = sp0 - 0x64u;
                            t158 = cow_thiscall(g, rd32(rd32(t157) + 0x2cu), rd32(t157), 5, t157, 0u, 0u, sp0 - 0x50u, 0u);
                            eax = t158;
    COW_AT(10170648)
                            if ((int32_t)eax < 0) goto L_10170635;
    COW_AT(1017064c)
                            t159 = rd16(rd32(ebp + 0x14u) + 2u);
                            t160 = rd16(rd32(ebp + 0x14u));
                            t161 = rd32(ebp + 0xcu);
                            wr32(sp0 + 0x18u, t159);
                            wr32(sp0 - 0x54u, t161);
                            wr32(sp0 - 0x38u, 0u);
                            wr32(sp0 - 0x2cu, 2u);
                            if ((int32_t)rd32(ebp + 0x10u) <= 2)
                            {
                                edx = rd32(ebp + 0x10u);
                                loc_54 = t161;
                                loc_50 = rd32(sp0 - 0x50u);
                                goto L_10170a4a;
                            }
                            eax = t160;
                            ecx = t159;
                            esi = 2u;
                            loc_54 = t161;
                            loc_38 = 0u;
                            loc_2c = 2u;
                            loc_50 = rd32(sp0 - 0x50u);
L_10170681: ;
    COW_AT(10170681)
                            t162 = rd16(esi * 2u + rd32(ebp + 0x14u));
                            wr32(sp0 - 0x3cu, t162);
                            if (eax == ecx)
                            {
                                edx = t162;
                            }
                            else
                            {
                                edx = t162;
                                loc_3c = t162;
    COW_AT(10170696)
                                if (ecx != edx)
                                {
    COW_AT(1017069e)
                                    if (edx != eax)
                                    {
    COW_AT(101706a6)
                                        t163 = rd32(eax * 0x24u + loc_54);
                                        t164 = rd32(sp0 + 0x18u);
                                        wr32(loc_50, t163);
                                        t165 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 4u);
                                        wr32(rd32(sp0 - 0x50u) + 4u, t165);
                                        t166 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 8u);
                                        wr32(rd32(sp0 - 0x50u) + 8u, t166);
                                        t167 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0xcu);
                                        wr32(rd32(sp0 - 0x50u) + 0xcu, t167);
                                        t168 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0x10u);
                                        wr32(rd32(sp0 - 0x50u) + 0x10u, t168);
                                        t169 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0x14u);
                                        wr32(rd32(sp0 - 0x50u) + 0x14u, t169);
                                        t170 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0x18u);
                                        wr32(rd32(sp0 - 0x50u) + 0x18u, t170);
                                        t171 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0x1cu);
                                        wr32(rd32(sp0 - 0x50u) + 0x1cu, t171);
                                        t172 = rd32(eax * 0x24u + rd32(sp0 - 0x54u) + 0x20u);
                                        t173 = rd32(sp0 - 0x38u);
                                        wr32(rd32(sp0 - 0x50u) + 0x20u, t172);
                                        if (t173 != 0u)
                                        {
                                            ebx = eax * 0x24u;
                                            eax = rd32(sp0 - 0x54u);
                                            esi = t164 * 0x24u;
                                            edi = loc_3c * 0x24u;
    COW_AT(10170759)
                                            ecx = eax + esi;
                                            edx = eax + edi;
                                        }
                                        else
                                        {
                                            ebx = eax * 0x24u;
                                            eax = rd32(sp0 - 0x54u);
                                            esi = t164 * 0x24u;
                                            edi = loc_3c * 0x24u;
    COW_AT(10170751)
                                            ecx = eax + edi;
                                            edx = eax + esi;
                                        }
    COW_AT(1017075f)
                                        wr32(sp0 - 0x68u, ecx);
                                        wr32(sp0 - 0x6cu, edx);
                                        wr32(sp0 - 0x70u, eax + ebx);
                                        t174 = rd32(sp0 - 0x50u);
                                        wr32(sp0 - 0x74u, t174);
                                        g->esp = sp0 - 0x64u;
                                        cow_stdcall(g, COW_IMG(0x10170b30u), 4, t174, eax + ebx, edx, ecx);
    COW_AT(10170772)
                                        t175 = rd32(sp0 - 0x50u) + 0x30u;
                                        wr32(sp0 - 0x50u, t175);
                                        if (rd32(sp0 - 0x38u) != 0u)
                                        {
                                            eax = t175;
                                            ecx = rd32(sp0 - 0x54u);
                                            loc_50 = t175;
    COW_AT(101708c6)
                                            t202 = rd32(ecx + edi);
                                            wr32(eax, t202);
                                            t203 = rd32(edi + rd32(sp0 - 0x54u) + 4u);
                                            wr32(rd32(sp0 - 0x50u) + 4u, t203);
                                            t204 = rd32(edi + rd32(sp0 - 0x54u) + 8u);
                                            wr32(rd32(sp0 - 0x50u) + 8u, t204);
                                            t205 = rd32(edi + rd32(sp0 - 0x54u) + 0xcu);
                                            wr32(rd32(sp0 - 0x50u) + 0xcu, t205);
                                            t206 = rd32(edi + rd32(sp0 - 0x54u) + 0x10u);
                                            wr32(rd32(sp0 - 0x50u) + 0x10u, t206);
                                            t207 = rd32(edi + rd32(sp0 - 0x54u) + 0x14u);
                                            wr32(rd32(sp0 - 0x50u) + 0x14u, t207);
                                            t208 = rd32(edi + rd32(sp0 - 0x54u) + 0x18u);
                                            wr32(rd32(sp0 - 0x50u) + 0x18u, t208);
                                            t209 = rd32(edi + rd32(sp0 - 0x54u) + 0x1cu);
                                            wr32(rd32(sp0 - 0x50u) + 0x1cu, t209);
                                            t210 = rd32(edi + rd32(sp0 - 0x54u) + 0x20u);
                                            wr32(rd32(sp0 - 0x50u) + 0x20u, t210);
                                            t211 = ebx + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x68u, t211);
                                            t212 = esi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x6cu, t212);
                                            t213 = edi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x70u, t213);
                                            t214 = rd32(sp0 - 0x50u);
                                            wr32(sp0 - 0x74u, t214);
                                            g->esp = sp0 - 0x64u;
                                            cow_stdcall(g, COW_IMG(0x10170b30u), 4, t214, t213, t212, t211);
    COW_AT(10170960)
                                            t215 = rd32(sp0 - 0x50u) + 0x30u;
                                            wr32(sp0 - 0x50u, t215);
                                            t216 = rd32(esi + rd32(sp0 - 0x54u));
                                            wr32(t215, t216);
                                            t217 = rd32(esi + rd32(sp0 - 0x54u) + 4u);
                                            wr32(rd32(sp0 - 0x50u) + 4u, t217);
                                            t218 = rd32(esi + rd32(sp0 - 0x54u) + 8u);
                                            wr32(rd32(sp0 - 0x50u) + 8u, t218);
                                            t219 = rd32(esi + rd32(sp0 - 0x54u) + 0xcu);
                                            wr32(rd32(sp0 - 0x50u) + 0xcu, t219);
                                            t220 = rd32(esi + rd32(sp0 - 0x54u) + 0x10u);
                                            wr32(rd32(sp0 - 0x50u) + 0x10u, t220);
                                            t221 = rd32(esi + rd32(sp0 - 0x54u) + 0x14u);
                                            wr32(rd32(sp0 - 0x50u) + 0x14u, t221);
                                            t222 = rd32(esi + rd32(sp0 - 0x54u) + 0x18u);
                                            wr32(rd32(sp0 - 0x50u) + 0x18u, t222);
                                            t223 = rd32(esi + rd32(sp0 - 0x54u) + 0x1cu);
                                            wr32(rd32(sp0 - 0x50u) + 0x1cu, t223);
                                            t224 = rd32(esi + rd32(sp0 - 0x54u) + 0x20u);
                                            wr32(rd32(sp0 - 0x50u) + 0x20u, t224);
                                            t225 = edi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x68u, t225);
                                            t226 = ebx + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x6cu, t226);
                                            t227 = esi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x70u, t227);
                                            edx = t226;
                                            loc_68 = t225;
                                            loc_6c = t226;
                                            loc_70 = t227;
                                        }
                                        else
                                        {
                                            eax = t175;
                                            ecx = rd32(sp0 - 0x54u);
                                            loc_50 = t175;
    COW_AT(1017078d)
                                            t176 = rd32(ecx + esi);
                                            wr32(eax, t176);
                                            t177 = rd32(esi + rd32(sp0 - 0x54u) + 4u);
                                            wr32(rd32(sp0 - 0x50u) + 4u, t177);
                                            t178 = rd32(esi + rd32(sp0 - 0x54u) + 8u);
                                            wr32(rd32(sp0 - 0x50u) + 8u, t178);
                                            t179 = rd32(esi + rd32(sp0 - 0x54u) + 0xcu);
                                            wr32(rd32(sp0 - 0x50u) + 0xcu, t179);
                                            t180 = rd32(esi + rd32(sp0 - 0x54u) + 0x10u);
                                            wr32(rd32(sp0 - 0x50u) + 0x10u, t180);
                                            t181 = rd32(esi + rd32(sp0 - 0x54u) + 0x14u);
                                            wr32(rd32(sp0 - 0x50u) + 0x14u, t181);
                                            t182 = rd32(esi + rd32(sp0 - 0x54u) + 0x18u);
                                            wr32(rd32(sp0 - 0x50u) + 0x18u, t182);
                                            t183 = rd32(esi + rd32(sp0 - 0x54u) + 0x1cu);
                                            wr32(rd32(sp0 - 0x50u) + 0x1cu, t183);
                                            t184 = rd32(esi + rd32(sp0 - 0x54u) + 0x20u);
                                            wr32(rd32(sp0 - 0x50u) + 0x20u, t184);
                                            t185 = ebx + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x68u, t185);
                                            t186 = edi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x6cu, t186);
                                            t187 = esi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x70u, t187);
                                            t188 = rd32(sp0 - 0x50u);
                                            wr32(sp0 - 0x74u, t188);
                                            g->esp = sp0 - 0x64u;
                                            cow_stdcall(g, COW_IMG(0x10170b30u), 4, t188, t187, t186, t185);
    COW_AT(10170827)
                                            t189 = rd32(sp0 - 0x50u) + 0x30u;
                                            wr32(sp0 - 0x50u, t189);
                                            t190 = rd32(edi + rd32(sp0 - 0x54u));
                                            wr32(t189, t190);
                                            t191 = rd32(edi + rd32(sp0 - 0x54u) + 4u);
                                            wr32(rd32(sp0 - 0x50u) + 4u, t191);
                                            t192 = rd32(edi + rd32(sp0 - 0x54u) + 8u);
                                            wr32(rd32(sp0 - 0x50u) + 8u, t192);
                                            t193 = rd32(edi + rd32(sp0 - 0x54u) + 0xcu);
                                            wr32(rd32(sp0 - 0x50u) + 0xcu, t193);
                                            t194 = rd32(edi + rd32(sp0 - 0x54u) + 0x10u);
                                            wr32(rd32(sp0 - 0x50u) + 0x10u, t194);
                                            t195 = rd32(edi + rd32(sp0 - 0x54u) + 0x14u);
                                            wr32(rd32(sp0 - 0x50u) + 0x14u, t195);
                                            t196 = rd32(edi + rd32(sp0 - 0x54u) + 0x18u);
                                            wr32(rd32(sp0 - 0x50u) + 0x18u, t196);
                                            t197 = rd32(edi + rd32(sp0 - 0x54u) + 0x1cu);
                                            wr32(rd32(sp0 - 0x50u) + 0x1cu, t197);
                                            t198 = rd32(edi + rd32(sp0 - 0x54u) + 0x20u);
                                            wr32(rd32(sp0 - 0x50u) + 0x20u, t198);
                                            t199 = esi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x68u, t199);
                                            t200 = ebx + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x6cu, t200);
                                            t201 = edi + rd32(sp0 - 0x54u);
                                            wr32(sp0 - 0x70u, t201);
                                            edx = t200;
                                            loc_68 = t199;
                                            loc_6c = t200;
                                            loc_70 = t201;
                                        }
    COW_AT(101709fa)
                                        t228 = rd32(sp0 - 0x50u);
                                        wr32(sp0 - 0x74u, t228);
                                        g->esp = sp0 - 0x64u;
                                        cow_stdcall(g, COW_IMG(0x10170b30u), 4, t228, loc_70, loc_6c, loc_68);
    COW_AT(10170a08)
                                        t229 = rd32(sp0 - 0x50u) + 0x30u;
                                        wr32(sp0 - 0x50u, t229);
                                        ecx = rd32(sp0 + 0x18u);
                                        edx = rd32(sp0 - 0x3cu);
                                        ebx = rd32(sp0 - 0x30u);
                                        loc_54 = rd32(sp0 - 0x54u);
                                        loc_38 = rd32(sp0 - 0x38u);
                                        loc_2c = rd32(sp0 - 0x2cu);
                                        loc_50 = t229;
                                    }
                                }
                            }
    COW_AT(10170a1f)
                            wr32(sp0 - 0x2cu, loc_2c + 1u);
                            wr32(sp0 - 0x38u, 1u - loc_38);
                            t230 = rd32(ebp + 0x10u);
                            wr32(sp0 + 0x18u, edx);
                            if ((int32_t)(loc_2c + 1u) < (int32_t)t230)
                            {
                                eax = ecx;
                                ecx = edx;
                                esi = loc_2c + 1u;
                                loc_38 = 1u - loc_38;
                                loc_2c = loc_2c + 1u;
                                goto L_10170681;
                            }
                            edx = t230;
L_10170a4a: ;
    COW_AT(10170a4a)
                            t231 = rd32(ebp + 0xb4u);
                            wr32(sp0 - 0x68u, t231);
                            g->esp = sp0 - 0x64u;
                            cow_thiscall(g, rd32(rd32(t231) + 0x30u), rd32(t231), 1, t231);
    COW_AT(10170a56)
                        }
                    }
                }
            }
            else
            {
    COW_AT(101702b5)
                t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x924u);
                t88 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                t89 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x928u);
                wr32(sp0 + 0x18u, t87);
                wr32(sp0 - 0x68u, ebp + 0xb0u);
                wr32(sp0 - 0x6cu, t89);
                wr32(sp0 - 0x70u, 0u);
                t90 = rd32(sp0 + 0x18u);
                wr32(sp0 - 0x74u, t90);
                wr32(sp0 - 0x78u, eax * 0x18u);
                wr32(sp0 - 0x7cu, t88);
                g->eax = eax * 0x18u;
                g->esp = sp0 - 0x64u;
                t91 = cow_thiscall(g, rd32(rd32(t88) + 0x5cu), t88, 6, t88, eax * 0x18u, t90, 0u, t89, ebp + 0xb0u);
                eax = t91;
                esi = ebp + 0xb0u;
    COW_AT(101702ed)
                if ((int32_t)eax >= 0)
                {
    COW_AT(101702f5)
                    t92 = rd32(ebp + 8u) * 0x18u + rd32(ebx + 0x40u);
                    wr32(ebx + 0x40u, t92);
L_10170306: ;
    COW_AT(10170306)
                    wr32(sp0 - 0x68u, 0u);
                    wr32(sp0 - 0x6cu, sp0 - 0x4cu);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 0u);
                    wr32(sp0 - 0x78u, rd32(esi));
                    g->eax = rd32(esi);
                    t93 = rd32(esi);
                    g->esp = sp0 - 0x64u;
                    t94 = cow_thiscall(g, rd32(rd32(t93) + 0x2cu), sp0 - 0x4cu, 5, t93, 0u, 0u, sp0 - 0x4cu, 0u);
                    eax = t94;
    COW_AT(10170319)
                    if ((int32_t)eax < 0) goto L_10170306;
    COW_AT(1017031d)
                    if ((int32_t)rd32(ebp + 8u) <= 0)
                    {
                        edx = rd32(ebp + 8u);
                        loc_4c = rd32(sp0 - 0x4cu);
                    }
                    else
                    {
                        eax = rd32(ebp + 0xcu);
    COW_AT(10170329)
                        eax = eax + 0x1cu;
                        ecx = 0u;
                        loc_4c = rd32(sp0 - 0x4cu);
L_1017032c: ;
    COW_AT(1017032c)
                        t95 = rd32(eax - 4u);
                        wr32(loc_4c, t95);
                        wr32(rd32(sp0 - 0x4cu) + 4u, rd32(eax));
                        t96 = rd32(eax + 4u);
                        wr32(rd32(sp0 - 0x4cu) + 8u, t96);
                        t97 = rd32(eax + 8u);
                        wr32(rd32(sp0 - 0x4cu) + 0xcu, t97);
                        t98 = rd32(eax + 0xcu);
                        wr32(rd32(sp0 - 0x4cu) + 0x10u, t98);
                        t99 = rd32(eax + 0x10u);
                        wr32(rd32(sp0 - 0x4cu) + 0x14u, t99);
                        t100 = rd32(sp0 - 0x4cu) + 0x18u;
                        wr32(sp0 - 0x4cu, t100);
                        if ((int32_t)(ecx + 1u) < (int32_t)rd32(ebp + 8u))
                        {
                            eax = eax + 0x30u;
                            ecx = ecx + 1u;
                            loc_4c = t100;
                            goto L_1017032c;
                        }
                        edx = rd32(ebp + 8u);
                        loc_4c = t100;
                    }
    COW_AT(1017037d)
                    t101 = rd32(ebp + 0xb0u);
                    wr32(sp0 - 0x68u, t101);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, rd32(rd32(t101) + 0x30u), rd32(t101), 1, t101);
                }
    COW_AT(10170389)
                t102 = rd32(ebx + 0x64u);
                wr32(sp0 + 0x18u, 0u);
                if ((int32_t)t102 <= 0) goto L_10170481;
                esi = 0u;
L_1017039a: ;
    COW_AT(1017039a)
                t103 = ebp + esi * 4u + 0x30u;
                wr32(sp0 - 0x68u, t103);
                t104 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x928u);
                wr32(sp0 - 0x6cu, t104);
                wr32(sp0 - 0x70u, 0u);
                t105 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x924u);
                wr32(sp0 - 0x74u, t105);
                t106 = rd32(ebp + 8u) * 0xcu;
                wr32(sp0 - 0x78u, t106);
                t107 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x7cu, t107);
                g->eax = t107;
                g->esp = sp0 - 0x64u;
                t108 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x5cu), rd32(ebp + 8u), 6, t107, t106, t105, 0u, t104, t103);
                eax = t108;
                esi = t103;
    COW_AT(101703c7)
                if ((int32_t)eax < 0) goto L_10170467;
    COW_AT(101703cf)
                wr32(sp0 - 0x68u, 0u);
                wr32(sp0 - 0x6cu, sp0 - 0x44u);
                wr32(sp0 - 0x70u, 0u);
                t109 = rd32(ebp + 8u) * 0xcu + rd32(ebx + 0x40u);
                wr32(ebx + 0x40u, t109);
                wr32(sp0 - 0x74u, 0u);
                wr32(sp0 - 0x78u, rd32(esi));
                g->eax = rd32(esi);
                t110 = rd32(esi);
                g->esp = sp0 - 0x64u;
                t111 = cow_thiscall(g, rd32(rd32(t110) + 0x2cu), rd32(t110), 5, t110, 0u, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
                eax = t111;
    COW_AT(101703f3)
                if ((int32_t)eax < 0) goto L_10170467;
    COW_AT(101703f7)
                if (rd32(sp0 + 0x18u) != 0u)
                {
    COW_AT(10170407)
                    x0 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) / (double)rdf32(ebx + 0x6cu));
                }
                else
                {
    COW_AT(101703ff)
                    x0 = (double)rdf32(COW_IMG(0x103295d8u));
                }
    COW_AT(1017040e)
                if ((int32_t)rd32(ebp + 8u) <= 0)
                {
                    ecx = 0u;
                    edx = rd32(ebp + 8u);
                    loc_44 = rd32(sp0 - 0x44u);
                    goto L_1017045b;
                }
                eax = rd32(ebp + 0xcu);
                ecx = 0u;
                loc_44 = rd32(sp0 - 0x44u);
L_1017041a: ;
    COW_AT(1017041a)
                d112 = fr(g, fr(g, x0 * (double)rdf32(eax + 0xcu)) + (double)rdf32(eax));
                wrf32(loc_44, (float)d112);
                d113 = fr(g, fr(g, x0 * (double)rdf32(eax + 0x10u)) + (double)rdf32(eax + 4u));
                wrf32(rd32(sp0 - 0x44u) + 4u, (float)d113);
                d114 = fr(g, fr(g, x0 * (double)rdf32(eax + 0x14u)) + (double)rdf32(eax + 8u));
                wrf32(rd32(sp0 - 0x44u) + 8u, (float)d114);
                t115 = rd32(sp0 - 0x44u) + 0xcu;
                wr32(sp0 - 0x44u, t115);
                if ((int32_t)(ecx + 1u) < (int32_t)rd32(ebp + 8u))
                {
                    eax = eax + 0x30u;
                    ecx = ecx + 1u;
                    loc_44 = t115;
                    goto L_1017041a;
                }
                ecx = ecx + 1u;
                edx = rd32(ebp + 8u);
                loc_44 = t115;
L_1017045b: ;
    COW_AT(1017045b)
                wr32(sp0 - 0x68u, rd32(esi));
                g->esp = sp0 - 0x64u;
                cow_thiscall(g, rd32(rd32(rd32(esi)) + 0x30u), ecx, 1, rd32(esi));
    COW_AT(10170465)
L_1017046d: ;
    COW_AT(1017046d)
                t116 = rd32(sp0 + 0x18u) + 1u;
                t117 = rd32(sp0 + 0x18u);
                t118 = rd32(ebx + 0x64u);
                wr32(sp0 + 0x18u, t116);
                if ((int32_t)(t117 + 1u) < (int32_t)t118)
                {
                    esi = t116;
                    goto L_1017039a;
                }
L_10170481: ;
    COW_AT(10170481)
                wr32(sp0 - 0x68u, ebp + 0xb8u);
                t119 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x928u);
                wr32(sp0 - 0x6cu, t119);
                wr32(sp0 - 0x70u, 0x65u);
                t120 = rd32(rd32(COW_IMG(0x1045666cu)) + 0x924u);
                wr32(sp0 - 0x74u, t120);
                t121 = rd32(ebp + 0x10u) * 2u;
                wr32(sp0 - 0x78u, t121);
                t122 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x7cu, t122);
                g->eax = t122;
                g->esp = sp0 - 0x64u;
                t123 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x60u), t121, 6, t122, t121, t120, 0x65u, t119, ebp + 0xb8u);
                eax = t123;
                esi = ebp + 0xb8u;
    COW_AT(101704ac)
                if ((int32_t)eax >= 0)
                {
    COW_AT(101704b4)
                    t124 = rd32(ebp + 0x10u) * 2u + rd32(ebx + 0x40u);
                    wr32(ebx + 0x40u, t124);
L_101704c1: ;
    COW_AT(101704c1)
                    wr32(sp0 - 0x68u, 0u);
                    wr32(sp0 - 0x6cu, sp0 - 0x24u);
                    wr32(sp0 - 0x70u, 0u);
                    wr32(sp0 - 0x74u, 0u);
                    wr32(sp0 - 0x78u, rd32(esi));
                    g->eax = rd32(esi);
                    g->edx = sp0 - 0x24u;
                    t125 = rd32(esi);
                    g->esp = sp0 - 0x64u;
                    t126 = cow_thiscall(g, rd32(rd32(t125) + 0x2cu), rd32(t125), 5, t125, 0u, 0u, sp0 - 0x24u, 0u);
                    t127 = g->edx;
                    eax = t126;
                    edx = t127;
    COW_AT(101704d4)
                    if ((int32_t)eax < 0) goto L_101704c1;
    COW_AT(101704d8)
                    t128 = rd32(ebp + 0x10u) * 2u;
                    t129 = rd32(ebp + 0x14u);
                    t130 = rd32(sp0 - 0x24u);
                    esi = t129;
                    edi = t130;
                    ecx = t128 >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t128 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t131 = rd32(ebp + 0xb8u);
                    wr32(sp0 - 0x68u, t131);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, rd32(rd32(t131) + 0x30u), rd32(t131), 1, t131);
    COW_AT(101704fe)
                }
            }
        }
    COW_AT(10170acd)
        t241 = rd32(sp0 - 0x28u) + 1u;
        wr32(sp0 - 0x28u, t241);
        if ((int32_t)t241 < (int32_t)rd32(rd32(sp0 + 0xcu)))
        {
            eax = t241;
            edx = rd32(rd32(sp0 + 0xcu));
            ebp = ebp + 0xc0u;
            loc_28 = t241;
            goto L_1017014e;
        }
        edx = rd32(rd32(sp0 + 0xcu));
L_10170aea: ;
    COW_AT(10170aea)
        t242 = rd32(sp0 + 0xcu) + 0x24u;
        t243 = rd32(sp0 + 0x1cu);
        wr32(sp0 + 0xcu, t242);
        ecx = t243;
    }
    COW_AT(10170afc)
    t244 = rd32(sp0 - 0x40u);
    wr32(sp0 + 0x1cu, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)t244)
    {
        ecx = ecx + 1u;
        goto L_101700dd;
    }
L_10170b10: ;
    COW_AT(10170b10)
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = rd32(sp0 - 0x5cu);
    return ebx;
L_1016fdbd: ;
    COW_AT(1016fdbd)
    wr32(ebx + 0x24u, 0x24u);
    wr32(ebx + 0x28u, 0x30u);
    wr32(ebx + 0x2cu, 4u);
    if (rd32(COW_IMG(0x10456ac0u)) == 0u)
    {
    COW_AT(1016fdf5)
        eax = 1u;
        ecx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456ac0u));
    COW_AT(1016fddd)
        if (eax == 2u)
        {
    COW_AT(1016fdee)
            eax = 0x20u;
            ecx = 1u;
        }
        else
        {
    COW_AT(1016fde7)
            eax = 0x10u;
            ecx = 1u;
        }
    }
    COW_AT(1016fdfc)
    wr32(ebx + 0x64u, eax);
    wr32(sp0 + 0x1cu, eax - 1u);
    wr32(ebx + 0x68u, ecx);
    t12 = rd32(sp0 + 0x1cu);
    wr32(ebx + 0x38u, 0x24u);
    wr32(ebx + 0x3cu, 4u);
    wrf32(ebx + 0x6cu, (float)(double)(int32_t)t12);
    goto L_1016fe35;
L_1016fe1c: ;
    COW_AT(1016fe1c)
    ecx = 5u;
    goto L_1016fe21;
L_1017024e: ;
    COW_AT(1017024e)
    edx = rd32(ebp + 0x10u) - 2u;
    esi = rd32(ebp + 0x10u);
    goto L_10170254;
L_10170467: ;
    COW_AT(10170467)
    wr32(esi, 0u);
    goto L_1017046d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1016fcd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1016fcf9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        self = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fd1au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_2c;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        self = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        g->edx = 0u;
        g->ebp = arg2 + 8u;
        (void)sp0;
        return 1;
    }
    case 0x1016fd1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_48;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1016fd47u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_34;
        uint32_t loc_48;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1016fd50u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1016fd63u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016fd6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016fdb3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fdb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fdbdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fdddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 0x64u;
        g->edx = 0x24u;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x1016fde7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        eax = g->eax;
        ebx = g->ebx;
        g->esp = sp0 - 0x64u;
        g->ecx = 1u;
        g->edx = 0x24u;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x1016fdeeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        eax = g->eax;
        ebx = g->ebx;
        g->esp = sp0 - 0x64u;
        g->ecx = 1u;
        g->edx = 0x24u;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x1016fdf5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 0x64u;
        g->edx = 0x24u;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x1016fdfcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 0x64u;
        g->edx = 0x24u;
        g->ebp = 0u;
        g->esi = arg2;
        g->edi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x1016fe1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fe21u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fe35u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016fe65u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1016feaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016feb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ffb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ffc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ffc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016ffd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1016fff3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1016ffffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017001cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017002fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017003fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170049u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017005eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170062u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017006cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017007bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170092u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017009au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101700a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101700a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101700c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101700ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101700edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017010fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x1017014eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017015cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170164u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10170168u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017016au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017017bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170182u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170192u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170195u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101701a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101701adu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x64u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101701b3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x64u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101701bdu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x64u;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x101701ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101701d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170237u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017023cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017024eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170254u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101702a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101702b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101702edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101702f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170306u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170319u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017031du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170329u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1017032cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017037du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170389u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017039au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101703c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101703cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101703f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101703f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101703ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170407u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017040eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017041au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017045bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170465u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170467u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017046du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170481u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101704feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170503u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017052cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10170535u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170539u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170548u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017055bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017055fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170568u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170598u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101705f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017062au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170632u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170635u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170648u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017064cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170681u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170696u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017069eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101706a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170751u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017075fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170772u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x1017078du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170827u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101708c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170960u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x101709fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10170a08u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a58u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10170a61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a65u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170a94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170ac4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170acdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170aeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170afcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    case 0x10170b10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x64u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1016fcd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1016fcd0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
