/* f_0x102435f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102435f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_228;
    uint32_t loc_240;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
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
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t234;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
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
    uint32_t t85;
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
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 604u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10243654u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_10243654;
    case 0x1024366cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); in_edi = rd32(sp0 - 0x23cu); in_esi = rd32(sp0 - 0x238u); in_ebp = rd32(sp0 - 0x234u); in_ebx = rd32(sp0 - 0x230u); g->ebp = rd32(sp0 - 0x234u); g->ebx = rd32(sp0 - 0x230u); g->edi = rd32(sp0 - 0x23cu); g->esi = rd32(sp0 - 0x238u); goto E_1024366c;
    case 0x1024367eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024367e;
    case 0x10243689u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243689;
    case 0x10243697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243697;
    case 0x102436e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102436e5;
    case 0x102436f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102436f5;
    case 0x10243704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243704;
    case 0x10243711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243711;
    case 0x10243714u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243714;
    case 0x1024372du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024372d;
    case 0x1024373au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024373a;
    case 0x10243748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243748;
    case 0x10243761u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243761;
    case 0x10243770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243770;
    case 0x1024377cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024377c;
    case 0x10243792u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243792;
    case 0x102437cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102437cd;
    case 0x102437deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102437de;
    case 0x102437e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102437e3;
    case 0x10243812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243812;
    case 0x10243825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243825;
    case 0x10243831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243831;
    case 0x10243843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243843;
    case 0x1024387du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024387d;
    case 0x1024388eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024388e;
    case 0x10243893u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243893;
    case 0x102438c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102438c2;
    case 0x102438d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102438d5;
    case 0x102438dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102438da;
    case 0x102438ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_102438ec;
    case 0x1024391fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024391f;
    case 0x10243924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243924;
    case 0x10243939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243939;
    case 0x10243940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243940;
    case 0x10243945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243945;
    case 0x10243952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243952;
    case 0x1024395bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024395b;
    case 0x10243960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243960;
    case 0x1024396cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1024396c;
    case 0x10243983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243983;
    case 0x10243986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243986;
    case 0x102439d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_102439d3;
    case 0x10243a34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243a34;
    case 0x10243a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243a3e;
    case 0x10243a58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243a58;
    case 0x10243a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243a82;
    case 0x10243a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243a96;
    case 0x10243aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243aa5;
    case 0x10243aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243aac;
    case 0x10243ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ab4;
    case 0x10243ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ab8;
    case 0x10243ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ac2;
    case 0x10243accu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243acc;
    case 0x10243ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ad0;
    case 0x10243ad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ad5;
    case 0x10243ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243ad9;
    case 0x10243aebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243aeb;
    case 0x10243b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b15;
    case 0x10243b1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b1f;
    case 0x10243b4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b4e;
    case 0x10243b6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b6e;
    case 0x10243b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b84;
    case 0x10243b96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243b96;
    case 0x10243ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243ba8;
    case 0x10243bbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243bba;
    case 0x10243bc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243bc4;
    case 0x10243bd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243bd5;
    case 0x10243bdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243bda;
    case 0x10243bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243bf2;
    case 0x10243bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243bfb;
    case 0x10243c10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243c10;
    case 0x10243c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243c13;
    case 0x10243c19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243c19;
    case 0x10243c26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243c26;
    case 0x10243c3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); loc_228 = rd32(sp0 - 0x228u); goto E_10243c3f;
    case 0x10243c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243c5d;
    case 0x10243c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243c62;
    case 0x10243c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243c6d;
    case 0x10243cb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243cb2;
    case 0x10243d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d0d;
    case 0x10243d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d16;
    case 0x10243d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d1b;
    case 0x10243d3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d3b;
    case 0x10243d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d60;
    case 0x10243d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d6f;
    case 0x10243d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d7a;
    case 0x10243d98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d98;
    case 0x10243d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243d9d;
    case 0x10243d9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243d9f;
    case 0x10243da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_240 = rd32(sp0 - 0x240u); goto E_10243da7;
    case 0x10243dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243dcd;
    case 0x10243dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243dd0;
    case 0x10243e12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10243e12;
    default: break;
    }
#endif

    COW_AT(102435f0)
    wr32(sp0 - 0x230u, in_ebx);
    wr32(sp0 - 0x234u, in_ebp);
    wr32(sp0 - 0x238u, in_esi);
    wr32(sp0 - 0x23cu, in_edi);
    wr8(sp0 - 0x100u, 0xffu);
    wr8(sp0 - 0xffu, 0u);
    edi = sp0 - 0xfeu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(sp0 - 0x200u, 0xffu);
    wr8(sp0 - 0x1ffu, 0u);
    wr32(sp0 - 0x228u, 0u);
    edi = sp0 - 0x1feu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr32(sp0 - 0x240u, sp0 - 0x224u);
    wr8(sp0 - 0x229u, 1u);
    g->eax = sp0 - 0x224u;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x23cu;
    t1 = cow_cdecl(g, COW_IMG(0x10310b0du), 1, sp0 - 0x224u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(10243654)
        t4 = rd32(sp0 - 0x220u) * rd32(sp0 - 0x224u) * 0x3bd1948u;
        wr32(sp0 - 0x240u, t4);
        g->eax = eax;
        g->esp = sp0 - 0x23cu;
        t5 = cow_call_regs(g, COW_IMG(0x103149d3u), g->eax, t4, edx, 1, 1, t4);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    COW_AT(1024366c)
    wr32(sp0 - 0x240u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    cow_call_regs(g, COW_IMG(0x10242cd0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t8 = g->edx;
    if (rd32(COW_IMG(0x10669054u)) != 1u)
    {
        edx = t8;
    COW_AT(10243689)
        t10 = rd32(COW_IMG(0x10669080u));
        wr32(COW_IMG(0x1066908cu), 0u);
        wr32(t10 + 0x1cu, 0u);
        eax = t10;
    }
    else
    {
        eax = rd32(COW_IMG(0x10669054u));
    COW_AT(1024367e)
        t9 = rd32(COW_IMG(0x10669080u));
        wr32(t9 + 0x1cu, 0u);
        edx = t9;
    }
    COW_AT(10243697)
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, COW_IMG(0x1038889cu));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038889cu), 1u, 0u);
    t12 = g->edx;
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, COW_IMG(0x1038831cu));
    g->ebx = 0u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038831cu), 1u, 0u);
    t14 = rd32(COW_IMG(0x10669078u));
    wr32(t14 + 0x14u, 2u);
    t15 = rd32(COW_IMG(0x10669078u));
    wr32(t15 + 0x2cu, 0x11u);
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_call_regs(g, COW_IMG(0x101ba220u), t13, g->ecx, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    cow_stdcall(g, COW_IMG(0x1023e510u), 0);
    t19 = g->ecx;
    if (rd32(COW_IMG(0x10669054u)) != 1u)
    {
    COW_AT(102436f5)
        t20 = rd32(COW_IMG(0x10669080u));
        wr32(COW_IMG(0x1066908cu), 0u);
        wr32(t20 + 0x1cu, 0u);
        ecx = t20;
    }
    else
    {
        ecx = t19;
    COW_AT(102436e5)
        wr32(rd32(COW_IMG(0x10669080u)) + 0x1cu, 0u);
        wr32(COW_IMG(0x10669054u), 0u);
    }
    COW_AT(10243704)
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        edx = rd32(COW_IMG(0x10669080u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = rd32(COW_IMG(0x10669080u));
    COW_AT(10243711)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(10243714)
    t21 = rd32(COW_IMG(0x10669080u)) + 0x1cu;
    wr32(sp0 - 0x240u, t21);
    g->eax = t21;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t22 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t21, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t23 = g->ecx;
    t24 = g->edx;
    if ((int32_t)t22 < 0)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_10243da7;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
L_1024372d: ;
    COW_AT(1024372d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t25 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)t25 < 0)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_10243c62;
    }
    ecx = t26;
    edx = t27;
    COW_AT(1024373a)
    if (rd32(COW_IMG(0x1066908cu)) == 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x1066908cu));
        goto L_10243c6d;
    }
    eax = rd32(COW_IMG(0x1066908cu));
    COW_AT(10243748)
    if (rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0x98u) == 0u)
    {
        ecx = eax * 5u;
        eax = eax * 0xb0u + rd32(COW_IMG(0x10669080u));
        edx = rd32(COW_IMG(0x10669080u));
        goto L_10243770;
    }
    ecx = eax * 5u;
    eax = eax * 0xb0u + rd32(COW_IMG(0x10669080u));
    edx = rd32(COW_IMG(0x10669080u));
    COW_AT(10243761)
    wr32(sp0 - 0x240u, 0x74u);
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x74u);
    t28 = g->ecx;
    ecx = t28;
    loc_228 = rd32(sp0 - 0x228u);
L_10243bfb: ;
    COW_AT(10243bfb)
    t201 = rd32(COW_IMG(0x10669080u));
    wr32(t201 + 0x1cu, 0u);
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        edx = t201;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = t201;
    COW_AT(10243c10)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(10243c13)
    if (rd8(sp0 - 0x229u) != 0u)
    {
    COW_AT(10243c19)
        if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
        {
            ecx = rd32(COW_IMG(0x10669080u));
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
    COW_AT(10243c26)
            wr32(sp0 - 0x240u, 0u);
            wr32(sp0 - 0x244u, eax);
            g->esp = sp0 - 0x23cu;
            cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, eax, 0u);
            t202 = g->ecx;
            t203 = rd32(COW_IMG(0x10669078u));
            wr32(t203 + 0x2cu, 0x11u);
            ecx = t202;
            edx = t203;
            loc_228 = rd32(sp0 - 0x228u);
        }
    }
    COW_AT(10243c3f)
    t204 = rd32(COW_IMG(0x10669080u));
    wr8(sp0 - 0x229u, 1u);
    wr32(sp0 - 0x240u, t204 + 0x1cu);
    g->eax = t204 + 0x1cu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t205 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t204 + 0x1cu, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t206 = g->ecx;
    t207 = g->edx;
    if ((int32_t)t205 >= 0)
    {
        eax = t205;
        ecx = t206;
        edx = t207;
        goto L_1024372d;
    }
    eax = t205;
    ecx = t206;
    edx = t207;
    COW_AT(10243c5d)
L_10243da7: ;
    COW_AT(10243da7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t224 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t225 = g->ecx;
    t226 = g->edx;
    cow_call_regs(g, COW_IMG(0x102435b0u), t224, g->ecx, g->edx, 1, 0);
    t227 = rd32(COW_IMG(0x10669080u));
    wr32(COW_IMG(0x1066908cu), 0u);
    wr32(t227 + 0x1cu, 0u);
    if (rd32(rd32(COW_IMG(0x10669080u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = rd32(COW_IMG(0x10669080u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10669080u)) + 8u);
        edx = rd32(COW_IMG(0x10669080u));
    COW_AT(10243dcd)
        wr8(eax + 0x5du, 0u);
    }
    COW_AT(10243dd0)
    wr32(sp0 - 0x240u, COW_IMG(0x1038831cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t228 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    t229 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038889cu));
    g->edx = t229;
    t230 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038889cu));
    t231 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
    g->edx = t231;
    t232 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
    t233 = g->ecx;
    t234 = g->edx;
    cow_call_regs(g, COW_IMG(0x101ba260u), t232, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    return 0xfffffffeu;
L_10243770: ;
    COW_AT(10243770)
    if (rd8(edx + 0x30u) == 0xffu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx + 0x30u);
        goto L_10243825;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx + 0x30u);
    COW_AT(1024377c)
    wr32(sp0 - 0x240u, (uint32_t)(int8_t)ecx);
    wr32(sp0 - 0x244u, 0xbu);
    g->eax = eax;
    g->ecx = (uint32_t)(int8_t)ecx;
    g->esp = sp0 - 0x234u;
    t29 = cow_cdecl(g, COW_IMG(0x10243f10u), 4, 0xbu, (uint32_t)(int8_t)ecx, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t30 = g->ecx;
    if ((int32_t)t29 < 0)
    {
        ecx = t30;
    COW_AT(10243812)
        t47 = rd32(COW_IMG(0x10669080u));
        wr8(sp0 - 0x229u, 0u);
        wr8(t47 + 0x30u, 0xffu);
        loc_228 = rd32(sp0 - 0x228u);
    }
    else
    {
        eax = t29;
    COW_AT(10243792)
        t31 = rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x44u;
        wr32(sp0 - 0x240u, t31);
        wr32(sp0 - 0x244u, 1u);
        wr32(sp0 - 0x248u, eax);
        t32 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
        wr32(sp0 - 0x24cu, t32);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103601bcu));
        g->edx = t32;
        t33 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0x248u;
        t34 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t32);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(sp0 - 0x24cu, t34);
        g->edx = t36;
        g->esp = sp0 - 0xcu;
        t37 = cow_bridge_indirect(g, COW_IMG(0x10243ff0u), 0u, 144u, (const uint32_t[]){t34, rd32(sp0 - 0x248u), 1u, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u)}, t35, g->edx, g->eax, 576u);
        t38 = g->ecx;
        t39 = g->edx;
        if (t37 == 0xffffffffu)
        {
            ecx = t38;
            edx = t39;
    COW_AT(102437de)
            eax = 0xefu;
        }
        else
        {
            eax = t37;
            edx = t39;
    COW_AT(102437cd)
            t40 = (eax != 0u) + 0xdbu;
            eax = t40;
            ecx = t40;
        }
    COW_AT(102437e3)
        wr32(sp0 - 0x240u, eax);
        wr32(sp0 - 0x244u, 8u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x23cu;
        t41 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, eax);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(sp0 - 0x248u, t41);
        g->ebx = 0u;
        g->edx = t43;
        g->esp = sp0 - 0x244u;
        t44 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t41);
        t45 = g->edx;
        wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
        g->esp = sp0 - 0x23cu;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
        t46 = g->ecx;
        wr8(rd32(COW_IMG(0x10669080u)) + 0x30u, 0xffu);
        ecx = t46;
        loc_228 = rd32(sp0 - 0x228u);
    }
    goto L_10243bfb;
L_10243825: ;
    COW_AT(10243825)
    if (rd8(edx + 0x31u) == 0xffu)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx + 0x31u);
        goto L_102438d5;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx + 0x31u);
    COW_AT(10243831)
    wr32(sp0 - 0x240u, (uint32_t)(int8_t)ecx);
    wr32(sp0 - 0x244u, 0xcu);
    g->eax = (uint32_t)(int8_t)ecx;
    g->ecx = ecx;
    g->esp = sp0 - 0x234u;
    t48 = cow_cdecl(g, COW_IMG(0x10243f10u), 4, 0xcu, (uint32_t)(int8_t)ecx, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t49 = g->ecx;
    if ((int32_t)t48 < 0)
    {
        ecx = t49;
    COW_AT(102438c2)
        t66 = rd32(COW_IMG(0x10669080u));
        wr8(sp0 - 0x229u, 0u);
        wr8(t66 + 0x31u, 0xffu);
        loc_228 = rd32(sp0 - 0x228u);
    }
    else
    {
        eax = t48;
    COW_AT(10243843)
        t50 = rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x44u;
        wr32(sp0 - 0x240u, t50);
        wr32(sp0 - 0x244u, 0u);
        wr32(sp0 - 0x248u, eax);
        t51 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
        wr32(sp0 - 0x24cu, t51);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103601bcu));
        g->edx = t51;
        t52 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0x248u;
        t53 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t51);
        t54 = g->ecx;
        t55 = g->edx;
        wr32(sp0 - 0x24cu, t53);
        g->edx = t55;
        g->esp = sp0 - 0xcu;
        t56 = cow_bridge_indirect(g, COW_IMG(0x10243ff0u), 0u, 144u, (const uint32_t[]){t53, rd32(sp0 - 0x248u), 0u, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u)}, t54, g->edx, g->eax, 576u);
        t57 = g->ecx;
        t58 = g->edx;
        if (t56 == 0xffffffffu)
        {
            ecx = t57;
            edx = t58;
    COW_AT(1024388e)
            eax = 0xf0u;
        }
        else
        {
            eax = t56;
            edx = t58;
    COW_AT(1024387d)
            t59 = (eax != 0u) + 0xddu;
            eax = t59;
            ecx = t59;
        }
    COW_AT(10243893)
        wr32(sp0 - 0x240u, eax);
        wr32(sp0 - 0x244u, 8u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x23cu;
        t60 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, eax);
        t61 = g->ecx;
        t62 = g->edx;
        wr32(sp0 - 0x248u, t60);
        g->ebx = 0u;
        g->edx = t62;
        g->esp = sp0 - 0x244u;
        t63 = cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t60);
        t64 = g->edx;
        wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
        g->esp = sp0 - 0x23cu;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
        t65 = g->ecx;
        wr8(rd32(COW_IMG(0x10669080u)) + 0x31u, 0xffu);
        ecx = t65;
        loc_228 = rd32(sp0 - 0x228u);
    }
    goto L_10243bfb;
L_102438d5: ;
    COW_AT(102438d5)
    if (rd8(edx + 0x32u) == 0u) goto L_10243940;
    COW_AT(102438da)
    wr32(sp0 - 0x240u, 0xau);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    t67 = cow_cdecl(g, COW_IMG(0x10243e60u), 1, 0xau);
    t68 = g->ecx;
    if ((int32_t)t67 <= 0)
    {
        ecx = t68;
        loc_228 = rd32(sp0 - 0x228u);
    }
    else
    {
    COW_AT(102438ec)
        t69 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
        wr32(sp0 - 0x240u, t69);
        g->eax = t69;
        g->edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
        t70 = rd32(COW_IMG(0x1066908cu));
        g->esp = sp0 - 0x23cu;
        t71 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t69);
        t72 = g->edx;
        wr32(sp0 - 0x240u, t71);
        g->edx = t72;
        t73 = rd32(COW_IMG(0x10662dccu));
        t74 = cow_thiscall(g, COW_IMG(0x101c4d00u), t73, 1, t71);
        t75 = g->ecx;
        t76 = g->edx;
        if ((int32_t)t74 >= 0)
        {
            eax = t74;
            ecx = t75;
            edx = t76;
    COW_AT(10243939)
            wr32(sp0 - 0x240u, 0xdfu);
            loc_240 = 0xdfu;
        }
        else
        {
            eax = t74;
            ecx = t75;
            edx = t76;
    COW_AT(1024391f)
            wr32(sp0 - 0x240u, 0xe0u);
            loc_240 = 0xe0u;
        }
    COW_AT(10243924)
        wr32(sp0 - 0x244u, 8u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x23cu;
        t77 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, loc_240);
        t78 = g->ecx;
        t79 = g->edx;
        wr32(sp0 - 0x248u, t77);
        g->ebx = 0u;
        g->ecx = t78;
        g->esp = sp0 - 0x244u;
        cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t77);
        t80 = g->ecx;
        ecx = t80;
        loc_228 = rd32(sp0 - 0x228u);
    }
    goto L_10243bfb;
L_10243940: ;
    COW_AT(10243940)
    if (rd32(edx + 0x2cu) == 0u) goto L_10243960;
    COW_AT(10243945)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t81 = cow_stdcall(g, COW_IMG(0x10244c30u), 0);
    t82 = g->ecx;
    t83 = g->edx;
    if ((int32_t)t81 > 0)
    {
        eax = t81;
        ecx = t82;
        edx = t83;
        goto L_10243cb2;
    }
    eax = t81;
    ecx = t82;
    edx = t83;
    COW_AT(10243952)
    if (eax == 0xfffffffeu) goto L_10243da7;
    COW_AT(1024395b)
    loc_228 = rd32(sp0 - 0x228u);
    goto L_10243bfb;
L_10243960: ;
    COW_AT(10243960)
    if (rd32(eax + 0x90u) == 0u) goto L_10243bd5;
    COW_AT(1024396c)
    t98 = rd32(eax + 0x74u) - 1u;
    wr32(rd32(COW_IMG(0x10668facu)) + 0x14u, t98);
    if ((int32_t)rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) < 0)
    {
        eax = rd32(COW_IMG(0x10668facu));
    COW_AT(10243983)
        wr32(eax + 0x14u, 0u);
    }
    COW_AT(10243986)
    wr32(sp0 - 0x240u, 0x8du);
    wr32(sp0 - 0x244u, 8u);
    t99 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x7cu);
    t100 = rd32(COW_IMG(0x10669080u));
    t101 = rd32(COW_IMG(0x10668fb4u));
    wr32(t101 + 0x14u, t99);
    g->eax = t100;
    g->ecx = t99;
    g->edx = t101;
    g->esp = sp0 - 0x23cu;
    t102 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8du);
    t103 = g->ecx;
    t104 = g->edx;
    wr32(sp0 - 0x248u, 0x8eu);
    wr32(sp0 - 0x24cu, 8u);
    g->ecx = t103;
    g->edx = t104;
    g->esp = sp0 - 0x244u;
    t105 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x8eu);
    t106 = g->ecx;
    t107 = g->edx;
    wr32(sp0 - 0x250u, 0xdau);
    wr32(sp0 - 0x254u, 8u);
    g->ecx = t106;
    g->edx = t107;
    g->esp = sp0 - 0x24cu;
    t108 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xdau);
    t109 = g->ecx;
    t110 = g->edx;
    wr32(sp0 - 0x258u, t108);
    g->ebx = 0u;
    g->edx = t110;
    g->esp = sp0 - 0x254u;
    cow_cdecl(g, COW_IMG(0x1023e0c0u), 1, t108);
    t111 = g->edx;
    edx = t111;
L_102439d3: ;
    COW_AT(102439d3)
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, 1u);
    wr32(sp0 - 0x248u, COW_IMG(0x10388140u));
    t112 = rd32(COW_IMG(0x10668fc4u));
    wr32(t112 + 0x28u, 0u);
    wr32(t112 + 0x24u, 0u);
    wr32(t112 + 0x2cu, 0u);
    t113 = rd32(COW_IMG(0x10669078u));
    wr32(t113 + 0x2cu, 0x18u);
    g->ebx = 0u;
    g->eax = t113;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t114 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388140u), 1u, 0u);
    t115 = g->edx;
    t116 = cow_call_regs(g, COW_IMG(0x101c68a0u), t114, rd32(COW_IMG(0x10662da0u)), t115, 1, 0);
    t117 = rd32(rd32(COW_IMG(0x10668fc4u)) + 0x30u);
    wr32(sp0 - 0x240u, t117);
    g->edx = t117;
    t118 = rd32(COW_IMG(0x10662da0u));
    cow_thiscall(g, COW_IMG(0x101c6870u), t118, 1, t117);
    t119 = g->ecx;
    t120 = g->edx;
    t121 = rd32(COW_IMG(0x10668fc4u)) + 0x28u;
    wr32(sp0 - 0x240u, t121);
    g->eax = t121;
    g->ecx = t119;
    g->edx = t120;
    g->esp = sp0 - 0x234u;
    t122 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t121, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t123 = g->ecx;
    t124 = g->edx;
    if ((int32_t)t122 < 0)
    {
        eax = t122;
        edx = t124;
        goto L_10243a58;
    }
    ecx = t123;
    edx = t124;
    COW_AT(10243a34)
    if ((int32_t)rd32(rd32(COW_IMG(0x10668fc4u)) + 0x24u) <= 0)
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        goto L_10243a58;
    }
    eax = rd32(COW_IMG(0x10668fc4u));
    COW_AT(10243a3e)
    wr32(sp0 - 0x240u, 1u);
    wr32(sp0 - 0x244u, eax + 0x14u);
    wr32(sp0 - 0x248u, 0u);
    wr32(sp0 - 0x24cu, 5u);
    g->eax = eax + 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0x22cu;
    t125 = cow_cdecl(g, COW_IMG(0x1023e370u), 8, 5u, 0u, eax + 0x14u, 1u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u));
    t126 = g->edx;
    if (t125 == 1u)
    {
        edx = t126;
        goto L_102439d3;
    }
    eax = t125;
    edx = t126;
L_10243a58: ;
    COW_AT(10243a58)
    wr32(sp0 - 0x240u, COW_IMG(0x10388140u));
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388140u));
    t127 = g->edx;
    t128 = rd32(COW_IMG(0x10669078u));
    wr32(t128 + 0x2cu, 0x11u);
    if ((int32_t)rd32(rd32(COW_IMG(0x10668fc4u)) + 0x24u) <= 0)
    {
        ecx = t128;
        loc_228 = rd32(sp0 - 0x228u);
        goto L_10243bfb;
    }
    eax = rd32(COW_IMG(0x10668fc4u));
    ecx = t128;
    edx = t127;
    COW_AT(10243a82)
    edi = eax + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u >= 3u)
    {
        ecx = ~ecx - 1u;
        esi = eax + 0x14u;
        goto L_10243aa5;
    }
    ecx = ~ecx - 1u;
    COW_AT(10243a96)
    wr32(sp0 - 0x240u, 0x6eu);
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, 0x6eu);
    t129 = g->ecx;
    ecx = t129;
    loc_228 = rd32(sp0 - 0x228u);
    goto L_10243bfb;
L_10243aa5: ;
    COW_AT(10243aa5)
    eax = sp0 - 0x100u;
L_10243aac: ;
    COW_AT(10243aac)
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10243ad0;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    COW_AT(10243ab4)
    if ((uint8_t)ecx == 0u) goto L_10243acc;
    COW_AT(10243ab8)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10243ad0;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(10243ac2)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10243aac;
    }
L_10243acc: ;
    COW_AT(10243acc)
    eax = 0u;
L_10243ad5: ;
    COW_AT(10243ad5)
    if (eax != 0u) goto L_10243aeb;
    COW_AT(10243ad9)
    t130 = rd32(sp0 - 0x228u);
    wr32(sp0 - 0x240u, t130);
    g->ecx = ecx;
    g->esp = sp0 - 0x23cu;
    cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, t130);
    t131 = g->ecx;
    ecx = t131;
    loc_228 = rd32(sp0 - 0x228u);
    goto L_10243bfb;
L_10243ad0: ;
    COW_AT(10243ad0)
    eax = -cf + 1u - cf;
    goto L_10243ad5;
L_10243aeb: ;
    COW_AT(10243aeb)
    t132 = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
    wr32(sp0 - 0x240u, t132);
    g->eax = rd32(COW_IMG(0x1066908cu));
    g->ecx = rd32(COW_IMG(0x103601bcu));
    t133 = rd32(COW_IMG(0x1066908cu));
    t134 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t135 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t132);
    t136 = g->ecx;
    eax = t135;
    ecx = t136;
    edx = sp0 - 0x200u;
    ebp = t133;
    esi = t132;
L_10243b15: ;
    COW_AT(10243b15)
    t137 = rd8(eax);
    wr8(edx, (uint8_t)t137);
    if ((uint8_t)t137 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t137;
        edx = edx + 1u;
        goto L_10243b15;
    }
    eax = eax + 1u;
    COW_AT(10243b1f)
    t138 = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    wr32(sp0 - 0x240u, t138);
    wr32(sp0 - 0x244u, esi);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = t138;
    t139 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t140 = cow_stdcall(g, COW_IMG(0x100db810u), 2, esi, t138);
    t141 = g->ecx;
    t142 = g->edx;
    wr32(sp0 - 0x240u, esi);
    wr32(sp0 - 0x244u, 5u);
    wr32(sp0 - 0x248u, 0u);
    wr32(sp0 - 0x24cu, 1u);
    wr32(sp0 - 0x250u, 0u);
    g->ebp = ebp;
    g->edx = t142;
    g->esp = sp0 - 0x124u;
    t143 = cow_bridge_indirect(g, COW_IMG(0x1023b550u), 0u, 75u, (const uint32_t[]){0u, 1u, 0u, 5u, esi, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u)}, g->ecx, g->edx, g->eax, 300u);
    t144 = g->edx;
    if ((int32_t)t143 >= 0) goto L_10243d0d;
    edx = t144;
    edi = t143;
    COW_AT(10243b4e)
    wr32(sp0 - 0x240u, sp0 - 0x200u);
    wr32(sp0 - 0x244u, esi);
    t145 = rd32(COW_IMG(0x103601bcu));
    wr32(COW_IMG(0x1066908cu), ebp);
    g->eax = sp0 - 0x200u;
    g->ecx = t145;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t146 = cow_stdcall(g, COW_IMG(0x100db810u), 2, esi, sp0 - 0x200u);
    t147 = g->ecx;
    t148 = g->edx;
    if (edi == 0xfffffffeu)
    {
        eax = t146;
        ecx = t147;
        edx = t148;
        goto L_10243da7;
    }
    eax = t146;
    edx = t148;
    COW_AT(10243b6e)
    g->eax = eax;
    g->edx = edx;
    t149 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t150 = cow_thiscall(g, COW_IMG(0x100db130u), t149, 0);
    t151 = g->ecx;
    t152 = g->edx;
    if (t150 == 0x14bu)
    {
        eax = t150;
        ecx = t151;
        edx = t152;
        goto L_10243da7;
    }
    eax = t150;
    edx = t152;
    COW_AT(10243b84)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t153 = cow_thiscall(g, COW_IMG(0x100db130u), rd32(COW_IMG(0x103601bcu)), 0);
    t154 = g->edx;
    if (t153 == 0x139u) goto L_10243ba8;
    eax = t153;
    edx = t154;
    COW_AT(10243b96)
    g->eax = eax;
    t155 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t156 = cow_thiscall(g, COW_IMG(0x100db130u), t155, 0);
    t157 = g->ecx;
    if (t156 != 0x142u)
    {
        ecx = t157;
        loc_228 = rd32(sp0 - 0x228u);
        goto L_10243bfb;
    }
L_10243ba8: ;
    COW_AT(10243ba8)
    eax = rd32(COW_IMG(0x10668fc4u)) + 0x14u;
    ecx = rd32(COW_IMG(0x10668fc4u));
    edx = sp0 - 0x100u - (rd32(COW_IMG(0x10668fc4u)) + 0x14u);
L_10243bba: ;
    COW_AT(10243bba)
    t158 = rd8(eax);
    wr8(eax + edx, (uint8_t)t158);
    if ((uint8_t)t158 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t158;
        goto L_10243bba;
    }
    eax = eax + 1u;
    COW_AT(10243bc4)
    g->eax = eax;
    t159 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t160 = cow_thiscall(g, COW_IMG(0x100db130u), t159, 0);
    t161 = g->ecx;
    wr32(sp0 - 0x228u, t160);
    ecx = t161;
    loc_228 = t160;
    goto L_10243bfb;
L_10243bd5: ;
    COW_AT(10243bd5)
    if (rd32(eax + 0x68u) == 0u)
    {
        loc_228 = rd32(sp0 - 0x228u);
        goto L_10243bfb;
    }
    COW_AT(10243bda)
    wr32(sp0 - 0x240u, 0u);
    wr32(sp0 - 0x244u, eax + 0x44u);
    wr32(sp0 - 0x248u, 0u);
    wr32(sp0 - 0x24cu, 0xdu);
    g->eax = eax + 0x44u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x22cu;
    t162 = cow_cdecl(g, COW_IMG(0x1023e370u), 8, 0xdu, 0u, eax + 0x44u, 0u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u));
    t163 = g->ecx;
    t164 = g->edx;
    if ((int32_t)t162 < 0)
    {
        eax = t162;
        ecx = t163;
        edx = t164;
        goto L_10243da7;
    }
    eax = t162;
    ecx = t163;
    COW_AT(10243bf2)
    if (eax != 1u) goto L_10243d16;
    loc_228 = rd32(sp0 - 0x228u);
    goto L_10243bfb;
L_10243c62: ;
    COW_AT(10243c62)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t218 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t219 = g->ecx;
    t220 = g->edx;
    wr32(sp0 - 0x240u, t218);
    eax = t218;
    ecx = t219;
    edx = t220;
    loc_240 = t218;
L_10243d9f: ;
    COW_AT(10243d9f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t221 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, loc_240);
    t222 = g->ecx;
    t223 = g->edx;
    eax = t221;
    ecx = t222;
    edx = t223;
    goto L_10243da7;
L_10243c6d: ;
    COW_AT(10243c6d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t208 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t209 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
    g->edx = t209;
    t210 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
    t211 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038889cu));
    g->edx = t211;
    t212 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038889cu));
    t213 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038831cu));
    g->edx = t213;
    t214 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    t215 = g->ecx;
    t216 = g->edx;
    t217 = cow_call_regs(g, COW_IMG(0x102435b0u), t214, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    return 0xffffffffu;
L_10243cb2: ;
    COW_AT(10243cb2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t84 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t85 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x103883f0u));
    g->edx = t85;
    t86 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103883f0u));
    t87 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038831cu));
    g->edx = t87;
    t88 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    t89 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038889cu));
    g->edx = t89;
    t90 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038889cu));
    t91 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
    g->edx = t91;
    t92 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
    t93 = g->ecx;
    t94 = g->edx;
    g->ecx = t93;
    g->edx = t94;
    t95 = cow_call_regs(g, COW_IMG(0x102435b0u), t92, g->ecx, g->edx, 1, 0);
    t96 = g->ecx;
    t97 = g->edx;
    cow_call_regs(g, COW_IMG(0x101ba260u), t95, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    return 2u;
L_10243d0d: ;
    COW_AT(10243d0d)
    wr32(COW_IMG(0x1066908cu), ebp);
    eax = ebp;
L_10243d1b: ;
    COW_AT(10243d1b)
    t165 = rd32(eax * 0xb0u + rd32(COW_IMG(0x10669080u)) + 0x64u);
    wr32(sp0 - 0x240u, t165);
    g->eax = rd32(COW_IMG(0x10669080u));
    g->ecx = rd32(COW_IMG(0x103601bcu));
    g->edx = eax * 0xb0u;
    t166 = rd32(COW_IMG(0x10669080u));
    t167 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x23cu;
    t168 = cow_stdcall(g, COW_IMG(0x100db790u), 1, t165);
    t169 = g->ecx;
    t170 = g->edx;
    eax = t168;
    ecx = t169;
    edx = t170;
    esi = t165;
    edi = 0u;
L_10243d3b: ;
    COW_AT(10243d3b)
    wr32(sp0 - 0x240u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x234u;
    t171 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u));
    t172 = g->edx;
    wr32(sp0 - 0x240u, esi);
    g->edx = t172;
    g->esp = sp0 - 0x23cu;
    t173 = cow_stdcall(g, COW_IMG(0x100db790u), 1, esi);
    t174 = g->edx;
    wr32(sp0 - 0x240u, t173);
    g->edx = t174;
    t175 = rd32(COW_IMG(0x10662dccu));
    t176 = cow_thiscall(g, COW_IMG(0x101c4cc0u), t175, 1, t173);
    t177 = g->ecx;
    t178 = g->edx;
    if ((uint8_t)t176 != 0u)
    {
        eax = t176;
        ecx = t177;
        edx = t178;
        goto L_10243d98;
    }
    eax = t176;
    edx = t178;
    COW_AT(10243d60)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t179 = cow_thiscall(g, COW_IMG(0x101c4cd0u), rd32(COW_IMG(0x10662dccu)), 0);
    t180 = g->edx;
    if ((uint8_t)t179 == 1u)
    {
        eax = t179;
        edx = t180;
    }
    else
    {
        eax = t179;
        edx = t180;
    COW_AT(10243d6f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x23cu;
        t181 = cow_thiscall(g, COW_IMG(0x101c4d10u), rd32(COW_IMG(0x10662dccu)), 0);
        t182 = g->edx;
        eax = t181;
        edx = t182;
    }
    COW_AT(10243d7a)
    wr32(sp0 - 0x240u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t183 = cow_stdcall(g, COW_IMG(0x100db790u), 1, esi);
    t184 = g->edx;
    wr32(sp0 - 0x240u, t183);
    g->edx = t184;
    t185 = rd32(COW_IMG(0x10662dccu));
    t186 = cow_thiscall(g, COW_IMG(0x101c4ce0u), t185, 1, t183);
    t187 = g->ecx;
    t188 = g->edx;
    if ((int32_t)(edi + 1u) < 5)
    {
        eax = t186;
        ecx = t187;
        edx = t188;
        edi = edi + 1u;
        goto L_10243d3b;
    }
    eax = t186;
    ecx = t187;
    edx = t188;
    edi = edi + 1u;
L_10243d98: ;
    COW_AT(10243d98)
    if (edi != 5u) goto L_10243e12;
    COW_AT(10243d9d)
    wr32(sp0 - 0x240u, 0x75u);
    loc_240 = 0x75u;
    goto L_10243d9f;
L_10243d16: ;
    COW_AT(10243d16)
    eax = rd32(COW_IMG(0x1066908cu));
    goto L_10243d1b;
L_10243e12: ;
    COW_AT(10243e12)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x23cu;
    t189 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t190 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038831cu));
    g->edx = t190;
    t191 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038831cu));
    t192 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x1038889cu));
    g->edx = t192;
    t193 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038889cu));
    t194 = g->edx;
    wr32(sp0 - 0x240u, COW_IMG(0x10388888u));
    g->edx = t194;
    t195 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388888u));
    t196 = g->ecx;
    t197 = g->edx;
    g->ecx = t196;
    g->edx = t197;
    t198 = cow_call_regs(g, COW_IMG(0x102435b0u), t195, g->ecx, g->edx, 1, 0);
    t199 = g->ecx;
    t200 = g->edx;
    cow_call_regs(g, COW_IMG(0x101ba260u), t198, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x230u);
    g->esi = rd32(sp0 - 0x238u);
    g->edi = rd32(sp0 - 0x23cu);
    g->ebp = rd32(sp0 - 0x234u);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102435f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10243654u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        g->esi = 1u;
        wr32(sp0 - 0x240u, sp0 - 0x224u);
        wr32(sp0 - 0x228u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024366cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        in_edi = rd32(sp0 - 0x23cu);
        in_esi = rd32(sp0 - 0x238u);
        in_ebp = rd32(sp0 - 0x234u);
        in_ebx = rd32(sp0 - 0x230u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        g->esi = 1u;
        wr32(sp0 - 0x228u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024367eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10243689u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10243697u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x102436e5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102436f5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243704u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243711u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243714u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024372du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024373au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243748u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243761u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243770u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024377cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243792u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102437cdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102437deu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102437e3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243812u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243825u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243831u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243843u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024387du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024388eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243893u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102438c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102438d5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102438dau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102438ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024391fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243924u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x240u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243939u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243940u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243945u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243952u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024395bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243960u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024396cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243983u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243986u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102439d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243a34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243a3eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243a58u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243a82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243a96u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243aa5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243aacu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ab4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ab8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ac2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243accu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ad0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ad5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243ad9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243aebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243b15u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243b1fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243b4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243b6eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243b84u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243b96u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243ba8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243bbau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243bc4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        wr32(sp0 - 0x240u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10243bd5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243bdau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243bf2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243bfbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c10u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c13u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c19u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c26u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c3fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_228;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        loc_228 = rd32(sp0 - 0x228u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c5du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c62u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243c6du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10243cb2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10243d0du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d16u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d1bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d7au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d98u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d9du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243d9fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x240u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243da7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_240;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_240 = rd32(sp0 - 0x240u);
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243dcdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243dd0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    case 0x10243e12u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x23cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102435f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102435f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
