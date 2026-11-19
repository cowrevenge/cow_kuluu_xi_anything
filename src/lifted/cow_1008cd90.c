/* f_0x1008cd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008cd90(Guest* g)
{
    double d111;
    double d115;
    double d117;
    double d118;
    double d122;
    double d123;
    double d127;
    double d128;
    double d132;
    double d133;
    double d14;
    double d140;
    double d154;
    double d155;
    double d156;
    double d162;
    double d163;
    double d164;
    double d170;
    double d171;
    double d172;
    double d176;
    double d179;
    double d180;
    double d181;
    double d182;
    double d183;
    double d184;
    double d188;
    double d189;
    double d193;
    double d194;
    double d198;
    double d199;
    double d203;
    double d204;
    double d208;
    double d209;
    double d213;
    double d214;
    double d218;
    double d224;
    double d225;
    double d226;
    double d234;
    double d235;
    double d236;
    double d30;
    double d31;
    double d40;
    double d50;
    double d51;
    double d52;
    double d60;
    double d61;
    double d62;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_34_f;
    double loc_38_f;
    uint32_t loc_3c;
    double loc_3c_f;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
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
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
    uint32_t t116;
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t131;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
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
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
    uint32_t t165;
    uint32_t t166;
    uint32_t t167;
    uint32_t t168;
    uint32_t t169;
    uint32_t t17;
    uint32_t t173;
    uint32_t t174;
    uint32_t t175;
    uint32_t t177;
    uint32_t t178;
    uint32_t t18;
    uint32_t t185;
    uint32_t t186;
    uint32_t t187;
    uint32_t t19;
    uint32_t t190;
    uint32_t t191;
    uint32_t t192;
    uint32_t t195;
    uint32_t t196;
    uint32_t t197;
    uint32_t t2;
    uint32_t t20;
    uint32_t t200;
    uint32_t t201;
    uint32_t t202;
    uint32_t t205;
    uint32_t t206;
    uint32_t t207;
    uint32_t t21;
    uint32_t t210;
    uint32_t t211;
    uint32_t t212;
    uint32_t t215;
    uint32_t t216;
    uint32_t t217;
    uint32_t t219;
    uint32_t t22;
    uint32_t t220;
    uint32_t t221;
    uint32_t t222;
    uint32_t t223;
    uint32_t t227;
    uint32_t t228;
    uint32_t t229;
    uint32_t t23;
    uint32_t t230;
    uint32_t t231;
    uint32_t t232;
    uint32_t t233;
    uint32_t t237;
    uint32_t t238;
    uint32_t t239;
    uint32_t t24;
    uint32_t t240;
    uint32_t t241;
    uint32_t t242;
    uint32_t t243;
    uint32_t t244;
    uint32_t t245;
    uint32_t t246;
    uint32_t t247;
    uint32_t t248;
    uint32_t t249;
    uint32_t t25;
    uint32_t t250;
    uint32_t t251;
    uint32_t t252;
    uint32_t t253;
    uint32_t t254;
    uint32_t t255;
    uint32_t t256;
    uint32_t t257;
    uint32_t t258;
    uint32_t t259;
    uint32_t t26;
    uint32_t t260;
    uint32_t t261;
    uint32_t t262;
    uint32_t t263;
    uint32_t t264;
    uint32_t t265;
    uint32_t t266;
    uint32_t t267;
    uint32_t t268;
    uint32_t t269;
    uint32_t t27;
    uint32_t t270;
    uint32_t t271;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008cdbbu: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cdbb;
    case 0x1008cdceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cdce;
    case 0x1008cdd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cdd2;
    case 0x1008cdd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cdd7;
    case 0x1008cddcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cddc;
    case 0x1008cde5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cde5;
    case 0x1008cde9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cde9;
    case 0x1008cdf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cdf2;
    case 0x1008ce3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce3f;
    case 0x1008ce48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce48;
    case 0x1008ce56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce56;
    case 0x1008ce6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce6b;
    case 0x1008ce75u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce75;
    case 0x1008ce7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce7e;
    case 0x1008ce87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce87;
    case 0x1008ce91u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce91;
    case 0x1008ce9au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ce9a;
    case 0x1008cea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cea2;
    case 0x1008cea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cea9;
    case 0x1008ceb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ceb8;
    case 0x1008cebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cebc;
    case 0x1008cec5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cec5;
    case 0x1008cecdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cecd;
    case 0x1008cedau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008ceda;
    case 0x1008cf31u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008cf31;
    case 0x1008cf42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008cf42;
    case 0x1008cf47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008cf47;
    case 0x1008cf56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008cf56;
    case 0x1008cf62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1008cf62;
    case 0x1008cf6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cf6b;
    case 0x1008cf74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cf74;
    case 0x1008cf7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cf7b;
    case 0x1008cf8au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008cf8a;
    case 0x1008cfc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cfc3;
    case 0x1008cfcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cfcd;
    case 0x1008cfd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cfd8;
    case 0x1008cfe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cfe8;
    case 0x1008cff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cff1;
    case 0x1008cff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008cff9;
    case 0x1008d00du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1008d00d;
    case 0x1008d026u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d026;
    case 0x1008d079u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d079;
    case 0x1008d084u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d084;
    case 0x1008d08du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d08d;
    case 0x1008d095u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d095;
    case 0x1008d0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1008d0a9;
    case 0x1008d0c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d0c3;
    case 0x1008d116u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d116;
    case 0x1008d124u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d124;
    case 0x1008d12cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d12c;
    case 0x1008d13au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d13a;
    case 0x1008d144u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d144;
    case 0x1008d188u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d188;
    case 0x1008d1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d1a2;
    case 0x1008d1b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d1b7;
    case 0x1008d1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d1c5;
    case 0x1008d209u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d209;
    case 0x1008d215u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d215;
    case 0x1008d21du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d21d;
    case 0x1008d22bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d22b;
    case 0x1008d282u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d282;
    case 0x1008d295u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d295;
    case 0x1008d2bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d2bd;
    case 0x1008d2cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d2ca;
    case 0x1008d2d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d2d2;
    case 0x1008d2f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d2f9;
    case 0x1008d30au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d30a;
    case 0x1008d313u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d313;
    case 0x1008d332u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d332;
    case 0x1008d340u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d340;
    case 0x1008d359u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d359;
    case 0x1008d3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d3ad;
    case 0x1008d3beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d3be;
    case 0x1008d3e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d3e3;
    case 0x1008d41eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d41e;
    case 0x1008d428u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d428;
    case 0x1008d433u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d433;
    case 0x1008d43eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d43e;
    case 0x1008d499u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d499;
    case 0x1008d4a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1008d4a4;
    case 0x1008d4f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1008d4f9;
    case 0x1008d51fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d51f;
    case 0x1008d529u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d529;
    case 0x1008d52du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d52d;
    case 0x1008d531u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d531;
    case 0x1008d535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d535;
    case 0x1008d539u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d539;
    case 0x1008d54fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d54f;
    case 0x1008d57eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d57e;
    case 0x1008d58au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d58a;
    case 0x1008d593u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d593;
    case 0x1008d5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d5b2;
    case 0x1008d5c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d5c2;
    case 0x1008d684u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d684;
    case 0x1008d69cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d69c;
    case 0x1008d6a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d6a6;
    case 0x1008d6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d6b1;
    case 0x1008d6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d6ba;
    case 0x1008d717u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d717;
    case 0x1008d720u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1008d720;
    case 0x1008d77au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_1008d77a;
    case 0x1008d77du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d77d;
    case 0x1008d787u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d787;
    case 0x1008d78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d78f;
    case 0x1008d79au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d79a;
    case 0x1008d7e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d7e6;
    case 0x1008d7f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d7f5;
    case 0x1008d802u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d802;
    case 0x1008d836u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d836;
    case 0x1008d840u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d840;
    case 0x1008d844u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d844;
    case 0x1008d848u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d848;
    case 0x1008d84cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d84c;
    case 0x1008d850u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d850;
    case 0x1008d854u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d854;
    case 0x1008d8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d8b9;
    case 0x1008d8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); goto E_1008d8fc;
    default: break;
    }
#endif

    COW_AT(1008cd90)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    t1 = rd32(self + 0x12cu) & 0xfffffffdu;
    t2 = rd32(self + 0x120u);
    wr32(self + 0x12cu, t1);
    if ((t2 & 0x200u) == 0u)
    {
        eax = t2;
        ecx = self;
        edx = t1;
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
    }
    else
    {
        eax = t2;
        edx = t1;
    COW_AT(1008cdbb)
        if ((rd32(self + 0x78u) & 0xff000000u) == 0u)
        {
            ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008ceb8)
            if ((uint8_t)ecx == 0u) goto L_1008cec5;
    COW_AT(1008cebc)
            if ((uint8_t)ecx != 6u)
            {
                loc_40 = in_ebx;
                loc_44 = in_ebp;
                loc_48 = in_esi;
                loc_4c = in_edi;
                goto L_1008cf6b;
            }
L_1008cec5: ;
    COW_AT(1008cec5)
            if ((int8_t)eax >= 0) goto L_1008cf62;
    COW_AT(1008cecd)
            if (rd8(COW_IMG(0x104807f5u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                goto L_1008cf62;
            }
    COW_AT(1008ceda)
            t19 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x154u);
            wr32(sp0 - 0x3cu, t19);
            g->eax = rd32(rd32(self + 0xa0u));
            g->edx = t19;
            t20 = rd32(rd32(self + 0xa0u));
            g->esp = sp0 - 0x4cu;
            t21 = cow_thiscall(g, rd32(t20 + 0x1c0u), rd32(self + 0xa0u), 0);
            t22 = g->edx;
            t23 = rd32(t21 + 4u);
            wr32(sp0 - 0x50u, t23);
            t24 = rd32(sp0 - 0x3cu);
            wr32(sp0 - 0x54u, t24);
            t25 = cow_cdecl(g, COW_IMG(0x1008d910u), 2, t24, t23);
            t26 = (t25 & 1u) * 2u;
            t27 = t26 ^ (rd32(self + 0x12cu) & 0xfffffffdu);
            t28 = rd32(self + 0x12cu);
            t29 = rd16(self + 0xf0u);
            wr32(self + 0x12cu, t27);
            if ((int16_t)t29 > 0)
            {
                eax = t26;
                ecx = t28 & 0xfffffffdu;
                edx = t27;
                loc_40 = in_ebx;
                loc_44 = in_ebp;
                loc_48 = in_esi;
                loc_4c = in_edi;
            }
            else
            {
                eax = t26;
                ecx = t28 & 0xfffffffdu;
                edx = t27;
                edi = t24;
    COW_AT(1008cf31)
                d30 = (double)rdf32(self + 0xe4u);
                d31 = (double)rdf32(sp0 - 0x3cu);
                if (d30 == d31)
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, d31, 0u);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, d31, 0u);
    COW_AT(1008cf42)
                    if ((edx & 8u) == 0u)
                    {
    COW_AT(1008cf47)
                        wr32(sp0 - 0x50u, edi);
                        t32 = rd32(self + 0xe4u);
                        wr32(sp0 - 0x54u, t32);
                        g->edx = t32;
                        g->esp = sp0 - 0x4cu;
                        cow_thiscall(g, COW_IMG(0x1008af60u), self, 2, t32, edi);
                        t33 = g->ecx;
                        t34 = g->edx;
                        ecx = t33;
                        edx = t34;
                    }
    COW_AT(1008cf56)
                    t35 = rd32(sp0 - 0x3cu);
                    wr32(self + 0xe4u, t35);
                    eax = t35;
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
            }
        }
        else
        {
            ecx = (self & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008cdce)
            if ((uint8_t)ecx == 0u) goto L_1008cde5;
    COW_AT(1008cdd2)
            if ((uint8_t)ecx == 1u) goto L_1008cde5;
    COW_AT(1008cdd7)
            if ((uint8_t)ecx == 2u) goto L_1008cde5;
    COW_AT(1008cddc)
            if ((uint8_t)ecx != 8u)
            {
                loc_40 = in_ebx;
                loc_44 = in_ebp;
                loc_48 = in_esi;
                loc_4c = in_edi;
                goto L_1008cf6b;
            }
L_1008cde5: ;
    COW_AT(1008cde5)
            if ((int8_t)eax >= 0) goto L_1008ce3f;
    COW_AT(1008cde9)
            if (rd8(COW_IMG(0x104807f5u)) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                goto L_1008ce3f;
            }
    COW_AT(1008cdf2)
            t3 = rd32(rd32(rd32(self + 0xd4u) + 0x260u) + 0x154u);
            wr32(sp0 - 0x3cu, t3);
            g->eax = rd32(rd32(self + 0xa0u));
            g->edx = t3;
            t4 = rd32(rd32(self + 0xa0u));
            g->esp = sp0 - 0x4cu;
            t5 = cow_thiscall(g, rd32(t4 + 0x1c0u), rd32(self + 0xa0u), 0);
            t6 = g->edx;
            t7 = rd32(t5 + 4u);
            wr32(sp0 - 0x50u, t7);
            t8 = rd32(sp0 - 0x3cu);
            wr32(sp0 - 0x54u, t8);
            g->edx = t6;
            t9 = cow_cdecl(g, COW_IMG(0x1008d910u), 2, t8, t7);
            t10 = g->edx;
            t11 = (t9 & 1u) * 2u ^ (rd32(self + 0x12cu) & 0xfffffffdu);
            t12 = rd32(self + 0x12cu);
            wr32(self + 0x12cu, t11);
            eax = t11;
            ecx = t12 & 0xfffffffdu;
            edx = t10;
            edi = t8;
            loc_3c = rd32(sp0 - 0x3cu);
L_1008ce48: ;
    COW_AT(1008ce48)
            if ((int16_t)rd16(self + 0xf0u) > 0)
            {
                loc_40 = in_ebx;
                loc_44 = in_ebp;
                loc_48 = in_esi;
                loc_4c = in_edi;
            }
            else
            {
    COW_AT(1008ce56)
                d14 = (double)rdf32(self + 0xe4u);
                if (d14 == cow_bits2f(loc_3c))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, cow_bits2f(loc_3c), 0u);
                    loc_40 = in_ebx;
                    loc_44 = in_ebp;
                    loc_48 = in_esi;
                    loc_4c = in_edi;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, cow_bits2f(loc_3c), 0u);
    COW_AT(1008ce6b)
                    if ((int8_t)rd8(self + 0x120u) >= 0)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
                        goto L_1008ce91;
                    }
                    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
    COW_AT(1008ce75)
                    if (rd8(COW_IMG(0x104807f5u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                        goto L_1008ce91;
                    }
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
    COW_AT(1008ce7e)
                    if ((rd8(self + 0x12cu) & 8u) != 0u) goto L_1008cea9;
    COW_AT(1008ce87)
                    wr32(sp0 - 0x50u, edi);
                    t15 = rd32(self + 0xe4u);
                    wr32(sp0 - 0x54u, t15);
                    eax = t15;
                    loc_50 = edi;
                    loc_54 = t15;
L_1008cea2: ;
    COW_AT(1008cea2)
                    g->eax = eax;
                    g->esp = sp0 - 0x4cu;
                    t17 = cow_thiscall(g, COW_IMG(0x1008af60u), self, 2, loc_54, loc_50);
                    t18 = g->ecx;
                    eax = t17;
                    ecx = t18;
                    loc_3c = rd32(sp0 - 0x3cu);
L_1008cea9: ;
    COW_AT(1008cea9)
                    wr32(self + 0xe4u, loc_3c);
                    edx = loc_3c;
                    loc_40 = in_ebx;
                    loc_44 = in_ebp;
                    loc_48 = in_esi;
                    loc_4c = in_edi;
                }
            }
        }
    }
L_1008cf6b: ;
    COW_AT(1008cf6b)
    if (rd8(COW_IMG(0x10480aedu)) != 0u)
    {
    COW_AT(1008cf74)
        if (rd32(self + 0x78u) != 0u)
        {
            eax = rd32(self + 0x78u);
    COW_AT(1008cf7b)
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x4cu;
            t37 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
            t38 = g->ecx;
            if (rd32(t37 + 4u) == rd32(self + 0x78u))
            {
                ecx = t38;
                edx = rd32(t37 + 4u);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
                edx = rd32(t37 + 4u);
    COW_AT(1008cf8a)
                wr32(sp0 - 0x50u, self + 0x24u);
                wr32(sp0 - 0x54u, sp0 - 0x10u);
                g->eax = self + 0x24u;
                g->esp = sp0 - 0x4cu;
                t39 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, self + 0x24u);
                d40 = fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x10329a08u)));
                wr32(sp0 - 0x50u, 0x3f000000u);
                wr32(sp0 - 0x54u, 0x80808080u);
                wrf32(sp0 - 0xcu, (float)(double)(float)d40);
                wr32(sp0 - 0x58u, sp0 - 0x10u);
                g->edx = sp0 - 0x10u;
                t41 = rd32(COW_IMG(0x10631f24u));
                cow_thiscall(g, COW_IMG(0x10177cd0u), t41, 3, sp0 - 0x10u, 0x80808080u, 0x3f000000u);
                t42 = g->ecx;
                t43 = g->edx;
                ecx = t42;
                edx = t43;
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
        }
    }
    COW_AT(1008cfc3)
    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
    COW_AT(1008cfcd)
        wr32(self + 0x120u, eax & 0xffdfffffu);
    }
    COW_AT(1008cfd8)
    if (rd32(self + 0x170u) == 0x1au)
    {
        eax = rd32(self + 0x170u);
        goto L_1008cff1;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008cfe8)
    if (eax != 0x1bu) goto L_1008d079;
L_1008cff1: ;
    COW_AT(1008cff1)
    if ((rd32(self + 0x120u) & 0x200u) != 0u)
    {
    COW_AT(1008cff9)
        wr32(sp0 - 0x50u, COW_IMG(0x1032fd4cu));
        g->eax = eax;
        g->esp = sp0 - 0x4cu;
        t44 = cow_fastcall(g, COW_IMG(0x1002c8f0u), rd32(self + 0xa0u), edx, 1, COW_IMG(0x1032fd4cu));
        t45 = g->edx;
        if ((uint8_t)t44 == 0u)
        {
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
        else
        {
            edx = t45;
    COW_AT(1008d00d)
            t46 = rd32(self + 0xa0u) + 0x624u;
            wr32(sp0 - 0x50u, t46);
            wr32(sp0 - 0x54u, sp0 - 0x30u);
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x30u, t46);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
    }
    COW_AT(1008d026)
    t47 = rd32(sp0 - 0x30u);
    t48 = rd32(sp0 - 0x2cu);
    t49 = rd32(sp0 - 0x28u);
    d50 = fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(COW_IMG(0x10485a18u)));
    wr32(COW_IMG(0x10485a18u), t47);
    wrf32(COW_IMG(0x10485a08u), (float)d50);
    d51 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(COW_IMG(0x10485a1cu)));
    wr32(COW_IMG(0x10485a1cu), t48);
    wrf32(COW_IMG(0x10485a0cu), (float)d51);
    d52 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x10485a20u)));
    wr32(COW_IMG(0x10485a20u), t49);
    wrf32(COW_IMG(0x10485a10u), (float)d52);
    wr32(self + 0x120u, rd32(self + 0x120u) | 0x200000u);
    ecx = t49;
    edx = t47;
L_1008d079: ;
    COW_AT(1008d079)
    if (rd32(self + 0x170u) == 0x1du)
    {
        eax = rd32(self + 0x170u);
        goto L_1008d08d;
    }
    eax = rd32(self + 0x170u);
    COW_AT(1008d084)
    if (eax != 0x1eu) goto L_1008d116;
L_1008d08d: ;
    COW_AT(1008d08d)
    if ((rd32(self + 0x120u) & 0x200u) != 0u)
    {
    COW_AT(1008d095)
        wr32(sp0 - 0x50u, COW_IMG(0x1032fd4cu));
        g->eax = eax;
        t53 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x4cu;
        t54 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t53, edx, 1, COW_IMG(0x1032fd4cu));
        t55 = g->ecx;
        if ((uint8_t)t54 == 0u)
        {
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
        else
        {
            ecx = t55;
    COW_AT(1008d0a9)
            t56 = rd32(self + 0xa0u) + 0x624u;
            wr32(sp0 - 0x50u, t56);
            wr32(sp0 - 0x54u, sp0 - 0x30u);
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x30u, t56);
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
        }
    }
    COW_AT(1008d0c3)
    t57 = rd32(sp0 - 0x30u);
    t58 = rd32(sp0 - 0x28u);
    t59 = rd32(sp0 - 0x2cu);
    d60 = fr(g, (double)rdf32(sp0 - 0x30u) - (double)rdf32(COW_IMG(0x104859f8u)));
    wr32(COW_IMG(0x104859f8u), t57);
    wrf32(COW_IMG(0x104859e8u), (float)d60);
    d61 = fr(g, (double)rdf32(sp0 - 0x2cu) - (double)rdf32(COW_IMG(0x104859fcu)));
    wr32(COW_IMG(0x104859fcu), t59);
    wrf32(COW_IMG(0x104859ecu), (float)d61);
    d62 = fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x10485a00u)));
    wr32(COW_IMG(0x10485a00u), t58);
    wrf32(COW_IMG(0x104859f0u), (float)d62);
    wr32(self + 0x120u, rd32(self + 0x120u) | 0x200000u);
    ecx = t57;
    edx = t59;
L_1008d116: ;
    COW_AT(1008d116)
    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
        goto L_1008d209;
    }
    eax = rd32(self + 0x120u);
    COW_AT(1008d124)
    if ((eax & 0x200u) == 0u) goto L_1008d8fc;
    COW_AT(1008d12c)
    if (rd32(self + 0xd4u) == 0u) goto L_1008d8fc;
    ecx = rd32(self + 0xd4u);
    COW_AT(1008d13a)
    if (rd32(ecx + 0x264u) == 0u)
    {
    COW_AT(1008d144)
        t63 = rd32(rd32(self + 0xa0u) + 0x34u);
        t64 = rd32(self + 0xa0u);
        wr32(rd32(ecx + 0x260u) + 0x140u, t63);
        t65 = rd32(t64 + 0x38u);
        wr32(rd32(ecx + 0x260u) + 0x144u, t65);
        t66 = rd32(t64 + 0x3cu);
        wr32(rd32(ecx + 0x260u) + 0x148u, t66);
        t67 = rd32(t64 + 0x40u);
        wr32(rd32(ecx + 0x260u) + 0x14cu, t67);
    }
    COW_AT(1008d188)
    if (rd32(rd32(self + 0xd4u) + 0x25cu) == rd32(rd32(self + 0xd4u) + 0x260u)) goto L_1008d8fc;
    esi = rd32(self + 0xd4u);
    COW_AT(1008d1a2)
    if (rd32(COW_IMG(0x10480af0u) + rd16(esi + 2u) * 4u) == 0u) goto L_1008d8fc;
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 2u) * 4u);
    COW_AT(1008d1b7)
    if (rd32(eax + 0xa0u) == 0u) goto L_1008d8fc;
    eax = rd32(eax + 0xa0u);
    COW_AT(1008d1c5)
    t68 = rd32(eax + 0x34u);
    wr32(rd32(esi + 0x260u) + 0x140u, t68);
    t69 = rd32(eax + 0x38u);
    wr32(rd32(esi + 0x260u) + 0x144u, t69);
    t70 = rd32(eax + 0x3cu);
    wr32(rd32(esi + 0x260u) + 0x148u, t70);
    t71 = rd32(eax + 0x40u);
    wr32(rd32(esi + 0x260u) + 0x14cu, t71);
    g->ebx = loc_40;
    g->esi = loc_48;
    g->edi = loc_4c;
    g->ebp = loc_44;
    return;
L_1008ce3f: ;
    COW_AT(1008ce3f)
    t13 = rd32(self + 0x18u);
    wr32(sp0 - 0x3cu, t13);
    edx = t13;
    edi = t13;
    loc_3c = t13;
    goto L_1008ce48;
L_1008ce91: ;
    COW_AT(1008ce91)
    if ((rd8(self + 0x12cu) & 4u) != 0u) goto L_1008cea9;
    COW_AT(1008ce9a)
    wr32(sp0 - 0x50u, edi);
    t16 = rd32(self + 0xe4u);
    wr32(sp0 - 0x54u, t16);
    loc_50 = edi;
    loc_54 = t16;
    goto L_1008cea2;
L_1008cf62: ;
    COW_AT(1008cf62)
    t36 = rd32(self + 0x18u);
    wr32(self + 0xe4u, t36);
    ecx = t36;
    loc_40 = in_ebx;
    loc_44 = in_ebp;
    loc_48 = in_esi;
    loc_4c = in_edi;
    goto L_1008cf6b;
L_1008d209: ;
    COW_AT(1008d209)
    if ((rd32(self + 0x1d0u) & 0x200u) != 0u)
    {
    COW_AT(1008d215)
        if ((eax & 0x200u) != 0u)
        {
    COW_AT(1008d21d)
            if (rd32(self + 0x12cu) >> 0xdu & 1u)
            {
    COW_AT(1008d295)
                wr32(sp0 - 0x50u, 0u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                t88 = cow_thiscall(g, COW_IMG(0x10157660u), rd32(COW_IMG(0x1057876cu)), 1, 0u);
                t89 = g->edx;
                wr32(sp0 - 0x50u, 0u);
                t90 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, 0u);
                t91 = g->ecx;
                t92 = rd32(self + 0xa0u);
                wr32(sp0 - 0x50u, t92);
                g->ebx = 0x200000u;
                g->ecx = t91;
                g->edx = t92;
                t93 = cow_cdecl(g, COW_IMG(0x100a5e10u), 1, t92);
                t94 = g->ecx;
                t95 = g->edx;
                eax = t93;
                ecx = t94;
                edx = t95;
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
    COW_AT(1008d22b)
                t72 = rd32(rd32(self + 0xa0u) + 0x34u);
                t73 = rd32(self + 0xa0u);
                wr32(self + 0x24u, t72);
                t74 = rd32(t73 + 0x38u);
                wr32(self + 0x28u, t74);
                t75 = rd32(t73 + 0x3cu);
                wr32(self + 0x2cu, t75);
                t76 = rd32(rd32(self + 0xa0u) + 0x34u);
                t77 = rd32(self + 0xa0u);
                wr32(self + 0x44u, t76);
                t78 = rd32(t77 + 0x38u);
                wr32(self + 0x48u, t78);
                t79 = rd32(t77 + 0x3cu);
                wr32(self + 0x4cu, t79);
                t80 = rd32(rd32(self + 0xa0u) + 0x44u);
                t81 = rd32(self + 0xa0u);
                wr32(self + 0x34u, t80);
                t82 = rd32(t81 + 0x48u);
                wr32(self + 0x38u, t82);
                t83 = rd32(t81 + 0x4cu);
                wr32(self + 0x3cu, t83);
                if (rd8(COW_IMG(0x10358188u)) == 0u)
                {
                    eax = (t83 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
                    ecx = t80;
                    edx = t82;
                }
                else
                {
                    eax = (t83 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
                    edx = t82;
    COW_AT(1008d282)
                    t84 = rd32(self + 0xa0u);
                    wr32(sp0 - 0x50u, t84);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x4cu;
                    t85 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, t84);
                    t86 = g->ecx;
                    t87 = g->edx;
                    eax = t85;
                    ecx = t86;
                    edx = t87;
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
            }
        }
    }
    COW_AT(1008d2bd)
    if (rd8(COW_IMG(0x104808fau)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808fau));
        goto L_1008d58a;
    }
    COW_AT(1008d2ca)
    if ((rd32(self + 0x120u) & 0x200u) == 0u)
    {
    COW_AT(1008d2f9)
        wr32(sp0 - 0x50u, self + 4u);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t102 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x20u, self + 4u);
        t103 = g->ecx;
        t104 = g->edx;
        eax = t102;
        ecx = t103;
        edx = t104;
    }
    else
    {
    COW_AT(1008d2d2)
        t96 = rd32(self + 0xa0u) + 0x34u;
        wr32(sp0 - 0x50u, t96);
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        g->eax = t96;
        g->ecx = sp0 - 0x20u;
        g->esp = sp0 - 0x4cu;
        t97 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x20u, t96);
        t98 = g->ecx;
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        wr32(sp0 - 0x5cu, self + 4u);
        g->ecx = t98;
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x54u;
        t99 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 4u, sp0 - 0x20u);
        t100 = g->ecx;
        t101 = g->edx;
        eax = t99;
        ecx = t100;
        edx = t101;
    }
    COW_AT(1008d30a)
    if (rd8(self + 0x126u) & 1u)
    {
    COW_AT(1008d313)
        t105 = rd32(self + 0x124u);
        t106 = rd16(self + 0x164u);
        wr16(self + 0xf0u, (uint16_t)t106);
        wr32(self + 0x124u, t105 & 0xfffeffffu);
        eax = t105 & 0xfffeffffu;
        ecx = (ecx & 0xffff0000u) | t106;
    }
    COW_AT(1008d332)
    if ((int16_t)rd16(self + 0xf0u) <= 0)
    {
    COW_AT(1008d3e3)
        t145 = rd32(self + 0x34u);
        wr32(self + 0x14u, t145);
        t146 = rd32(self + 0x38u);
        wr32(self + 0x18u, t146);
        t147 = rd32(self + 0x3cu);
        wr32(self + 0x1cu, t147);
        t148 = rd32(self + 0x24u);
        wr32(self + 4u, t148);
        t149 = rd32(self + 0x28u);
        wr32(self + 8u, t149);
        t150 = rd32(self + 0x2cu);
        wr32(self + 0xcu, t150);
        t151 = rd32(self + 0x124u);
        wr16(self + 0xf0u, 0u);
        t152 = (t151 & 0xffff00ffu) | (t151 >> 8u & 0x7fu) << 8u;
        wr32(self + 0x124u, t152);
        edx = t148;
    }
    else
    {
    COW_AT(1008d340)
        t107 = (uint32_t)(int16_t)rd16(self + 0xf0u);
        wr32(sp0 - 0x34u, t107);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t108 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t109 = g->ecx;
        t110 = g->edx;
        d111 = cow_take_float(g);
        g->ecx = t109;
        g->edx = t110;
        fpush(g, d111);
        t112 = cow_call_regs(g, COW_IMG(0x10311c6cu), t108, g->ecx, g->edx, 1, 0);
        t113 = g->ecx;
        t114 = g->edx;
        if ((int32_t)t107 <= (int32_t)t112)
        {
    COW_AT(1008d3ad)
            t134 = rd32(self + 0x24u);
            wr32(self + 4u, t134);
            t135 = rd32(self + 0x28u);
            wr32(self + 8u, t135);
            t136 = rd32(self + 0x2cu);
            wr32(self + 0xcu, t136);
            eax = t135;
            ecx = t136;
            edx = t134;
        }
        else
        {
            eax = t112;
            ecx = t113;
            edx = t114;
    COW_AT(1008d359)
            d115 = fr(g, fr(g, (double)rdf32(self + 0x24u) - (double)rdf32(sp0 - 0x20u)) / (double)(int32_t)rd32(sp0 - 0x34u));
            t116 = rd32(sp0 - 0x34u);
            wrf32(self + 0x54u, (float)d115);
            d117 = fr(g, fr(g, (double)rdf32(self + 0x28u) - (double)rdf32(sp0 - 0x1cu)) / (double)(int32_t)t116);
            wrf32(self + 0x58u, (float)d117);
            d118 = fr(g, fr(g, (double)rdf32(self + 0x2cu) - (double)rdf32(sp0 - 0x18u)) / (double)(int32_t)t116);
            wrf32(self + 0x5cu, (float)d118);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t119 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t120 = g->ecx;
            t121 = g->edx;
            d122 = cow_take_float(g);
            d123 = fr(g, fr(g, d122 * (double)rdf32(self + 0x54u)) + (double)rdf32(self + 4u));
            wrf32(self + 4u, (float)d123);
            g->ecx = t120;
            g->edx = t121;
            t124 = cow_call_regs(g, COW_IMG(0x10014cf0u), t119, g->ecx, g->edx, 1, 0);
            t125 = g->ecx;
            t126 = g->edx;
            d127 = cow_take_float(g);
            d128 = fr(g, fr(g, d127 * (double)rdf32(self + 0x58u)) + (double)rdf32(self + 8u));
            wrf32(self + 8u, (float)d128);
            g->ecx = t125;
            g->edx = t126;
            t129 = cow_call_regs(g, COW_IMG(0x10014cf0u), t124, g->ecx, g->edx, 1, 0);
            t130 = g->ecx;
            t131 = g->edx;
            d132 = cow_take_float(g);
            d133 = fr(g, fr(g, d132 * (double)rdf32(self + 0x5cu)) + (double)rdf32(self + 0xcu));
            wrf32(self + 0xcu, (float)d133);
            eax = t129;
            ecx = t130;
            edx = t131;
        }
    COW_AT(1008d3be)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t137 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t138 = g->ecx;
        t139 = g->edx;
        d140 = cow_take_float(g);
        fpush(g, d140);
        t141 = cow_call_regs(g, COW_IMG(0x10311c6cu), t137, g->ecx, g->edx, 1, 0);
        wr16(self + 0xf0u, (uint16_t)(rd16(self + 0xf0u) - (uint16_t)t141));
        t142 = rd32(self + 0x34u);
        wr32(self + 0x14u, t142);
        t143 = rd32(self + 0x38u);
        wr32(self + 0x18u, t143);
        t144 = rd32(self + 0x3cu);
        wr32(self + 0x1cu, t144);
        edx = t142;
    }
    COW_AT(1008d41e)
    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
    COW_AT(1008d428)
        wr32(self + 0x120u, eax & 0xffdfffffu);
    }
    COW_AT(1008d433)
    if (rd32(self + 0x170u) != 0x1cu)
    {
        eax = rd32(self + 0x170u);
        goto L_1008d499;
    }
    COW_AT(1008d43e)
    t153 = rd32(self + 0x120u);
    d154 = fr(g, (double)rdf32(COW_IMG(0x10485a08u)) + (double)rdf32(self + 4u));
    wrf32(self + 4u, (float)d154);
    d155 = fr(g, (double)rdf32(COW_IMG(0x10485a0cu)) + (double)rdf32(self + 8u));
    wrf32(self + 8u, (float)d155);
    d156 = fr(g, (double)rdf32(COW_IMG(0x10485a10u)) + (double)rdf32(self + 0xcu));
    wr32(self + 0x120u, t153 | 0x200000u);
    wrf32(self + 0xcu, (float)d156);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x10092c20u), self, 0);
    t157 = rd32(self + 4u);
    wr32(self + 0x24u, t157);
    t158 = rd32(self + 8u);
    wr32(self + 0x28u, t158);
    t159 = rd32(self + 0xcu);
    wr32(self + 0x2cu, t159);
    t160 = rd32(self + 4u);
    wr32(self + 0x44u, t160);
    t161 = rd32(self + 8u);
    wr32(self + 0x48u, t161);
    eax = t161;
    ecx = rd32(self + 0xcu);
L_1008d77a: ;
    COW_AT(1008d77a)
    wr32(self + 0x4cu, ecx);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
L_1008d77d: ;
    COW_AT(1008d77d)
    if (rd8(self + 0xeeu) == 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008d78f;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008d787)
    if ((uint8_t)eax != 7u) goto L_1008d8fc;
L_1008d78f: ;
    COW_AT(1008d78f)
    if (rd16(self + 0xfcu) == 0x308u)
    {
    COW_AT(1008d79a)
        t242 = rd32(self + 4u);
        wr32(COW_IMG(0x10482f88u), t242);
        t243 = rd32(self + 8u);
        wr32(COW_IMG(0x10482f8cu), t243);
        t244 = rd32(self + 0xcu);
        wr32(COW_IMG(0x10482f90u), t244);
        t245 = rd32(self + 0x10u);
        wr32(COW_IMG(0x10482f94u), t245);
        t246 = rd32(self + 0x14u);
        wr32(COW_IMG(0x10480990u), t246);
        t247 = rd32(self + 0x18u);
        wr32(COW_IMG(0x10480994u), t247);
        t248 = rd32(self + 0x1cu);
        wr32(COW_IMG(0x10480998u), t248);
        t249 = rd32(self + 0x20u);
        wr32(COW_IMG(0x1048099cu), t249);
        wr8(COW_IMG(0x10480a91u), 1u);
        eax = t249;
    }
    COW_AT(1008d7e6)
    if (rd16(self + 0xfcu) == 0x309u)
    {
    COW_AT(1008d7f5)
        if (rd8(COW_IMG(0x10480a91u)) != 0u)
        {
    COW_AT(1008d802)
            wr32(self + 4u, rd32(COW_IMG(0x10482f88u)));
            wr32(self + 8u, rd32(COW_IMG(0x10482f8cu)));
            wr32(self + 0xcu, rd32(COW_IMG(0x10482f90u)));
            t250 = rd32(self + 0x120u);
            t251 = rd32(COW_IMG(0x10482f94u));
            wr32(self + 0x10u, t251);
            if ((t250 >> 8u & 2u) != 0u)
            {
                eax = t250;
                ecx = t251;
    COW_AT(1008d836)
                if (rd8(self + 0xeeu) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
                    goto L_1008d854;
                }
                eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008d840)
                if ((uint8_t)eax == 1u) goto L_1008d854;
    COW_AT(1008d844)
                if ((uint8_t)eax == 2u) goto L_1008d854;
    COW_AT(1008d848)
                if ((uint8_t)eax == 6u) goto L_1008d854;
    COW_AT(1008d84c)
                if ((uint8_t)eax == 7u) goto L_1008d854;
    COW_AT(1008d850)
                if ((uint8_t)eax != 8u) goto L_1008d8b9;
L_1008d854: ;
    COW_AT(1008d854)
                wr32(sp0 - 0x50u, self + 4u);
                t252 = rd32(self + 0xa0u) + 0x34u;
                wr32(sp0 - 0x54u, t252);
                g->ecx = ecx;
                g->edx = t252;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, t252, self + 4u);
                t253 = g->ecx;
                t254 = g->edx;
                wr32(sp0 - 0x58u, self + 4u);
                t255 = rd32(self + 0xa0u) + 0x5fcu;
                wr32(sp0 - 0x5cu, t255);
                g->eax = t255;
                g->edx = t254;
                t256 = rd32(self + 0xa0u);
                g->esp = sp0 - 0x54u;
                t257 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t255, self + 4u);
                t258 = g->edx;
                wr32(t256 + 0x608u, 0x3f800000u);
                wr32(sp0 - 0x60u, self + 4u);
                t259 = rd32(self + 0xa0u) + 0x5c4u;
                wr32(sp0 - 0x64u, t259);
                g->edx = t258;
                g->esp = sp0 - 0x5cu;
                t260 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t259, self + 4u);
                t261 = g->edx;
                wr32(sp0 - 0x50u, self + 4u);
                t262 = rd32(self + 0xa0u);
                g->esp = sp0 - 0x4cu;
                t263 = cow_thiscall(g, COW_IMG(0x100a57c0u), t262, 1, self + 4u);
                t264 = g->ecx;
                wr32(sp0 - 0x50u, self + 4u);
                t265 = rd32(self + 0xa0u) + 0xc4u;
                wr32(sp0 - 0x54u, t265);
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, t265, self + 4u);
                loc_40 = rd32(sp0 - 0x40u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
L_1008d8b9: ;
    COW_AT(1008d8b9)
            t266 = rd32(self + 4u);
            wr32(self + 0x24u, t266);
            t267 = rd32(self + 8u);
            wr32(self + 0x28u, t267);
            t268 = rd32(self + 0xcu);
            wr32(self + 0x2cu, t268);
            t269 = rd32(self + 4u);
            wr32(self + 0x44u, t269);
            t270 = rd32(self + 8u);
            wr32(self + 0x48u, t270);
            t271 = rd32(self + 0xcu);
            wr32(self + 0x4cu, t271);
            wr32(self + 0x34u, rd32(COW_IMG(0x10480990u)));
            wr32(self + 0x38u, rd32(COW_IMG(0x10480994u)));
            wr32(self + 0x3cu, rd32(COW_IMG(0x10480998u)));
            wr8(COW_IMG(0x10480a91u), 0u);
        }
    }
L_1008d8fc: ;
    COW_AT(1008d8fc)
    g->ebx = loc_40;
    g->esi = loc_48;
    g->edi = loc_4c;
    g->ebp = loc_44;
    return;
L_1008d499: ;
    COW_AT(1008d499)
    if (eax != 0x1fu)
    {
        eax = rd32(self + 0x120u);
        goto L_1008d4f9;
    }
    eax = rd32(self + 0x120u);
    COW_AT(1008d4a4)
    d162 = fr(g, (double)rdf32(COW_IMG(0x104859e8u)) + (double)rdf32(self + 4u));
    wrf32(self + 4u, (float)d162);
    d163 = fr(g, (double)rdf32(COW_IMG(0x104859ecu)) + (double)rdf32(self + 8u));
    wrf32(self + 8u, (float)d163);
    d164 = fr(g, (double)rdf32(COW_IMG(0x104859f0u)) + (double)rdf32(self + 0xcu));
    wr32(self + 0x120u, eax | 0x200000u);
    wrf32(self + 0xcu, (float)d164);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x10092c20u), self, 0);
    t165 = rd32(self + 4u);
    wr32(self + 0x24u, t165);
    t166 = rd32(self + 8u);
    wr32(self + 0x28u, t166);
    t167 = rd32(self + 0xcu);
    wr32(self + 0x2cu, t167);
    t168 = rd32(self + 4u);
    wr32(self + 0x44u, t168);
    t169 = rd32(self + 8u);
    wr32(self + 0x48u, t169);
    eax = t169;
    ecx = rd32(self + 0xcu);
    goto L_1008d77a;
L_1008d4f9: ;
    COW_AT(1008d4f9)
    d170 = fr(g, (double)rdf32(self + 0x24u) - (double)rdf32(sp0 - 0x20u));
    wrf32(sp0 - 0x34u, (float)(double)(float)d170);
    d171 = fr(g, (double)rdf32(self + 0x28u) - (double)rdf32(sp0 - 0x1cu));
    wrf32(sp0 - 0x38u, (float)(double)(float)d171);
    d172 = fr(g, (double)rdf32(self + 0x2cu) - (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x3cu, (float)(double)(float)d172);
    if ((eax >> 8u & 2u) == 0u)
    {
        loc_34_f = (double)(float)d170;
        loc_38_f = (double)(float)d171;
        loc_3c_f = (double)(float)d172;
        goto L_1008d54f;
    }
    loc_34_f = (double)(float)d170;
    loc_38_f = (double)(float)d171;
    loc_3c_f = (double)(float)d172;
    COW_AT(1008d51f)
    if (rd8(self + 0xeeu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_1008d539;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(1008d529)
    if ((uint8_t)eax == 1u) goto L_1008d539;
    COW_AT(1008d52d)
    if ((uint8_t)eax == 2u) goto L_1008d539;
    COW_AT(1008d531)
    if ((uint8_t)eax == 6u) goto L_1008d539;
    COW_AT(1008d535)
    if ((uint8_t)eax != 8u) goto L_1008d54f;
L_1008d539: ;
    COW_AT(1008d539)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xa0u));
    t173 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0x4cu;
    t174 = cow_thiscall(g, rd32(t173 + 0x19cu), rd32(self + 0xa0u), 0);
    t175 = g->edx;
    if ((uint8_t)t174 != 0u)
    {
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        goto L_1008d8fc;
    }
    eax = t174;
    edx = t175;
    loc_34_f = (double)rdf32(sp0 - 0x34u);
    loc_38_f = (double)rdf32(sp0 - 0x38u);
    loc_3c_f = (double)rdf32(sp0 - 0x3cu);
L_1008d54f: ;
    COW_AT(1008d54f)
    d176 = fr(g, fr(g, fr(g, loc_3c_f * loc_3c_f) + fr(g, loc_38_f * loc_38_f)) + fr(g, loc_34_f * loc_34_f));
    if ((cow_fsw(g, d176, (double)rdf32(COW_IMG(0x1032d6b8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d176, (double)rdf32(COW_IMG(0x1032d6b8u)), 0u) & 0x4100u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    else
    {
        eax = cow_fsw(g, d176, (double)rdf32(COW_IMG(0x1032d6b8u)), 0u) & 0x4100u;
    COW_AT(1008d57e)
        g->eax = eax;
        g->esp = sp0 - 0x4cu;
        t177 = cow_thiscall(g, COW_IMG(0x100929a0u), self, 0);
        eax = t177;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    goto L_1008d77d;
L_1008d58a: ;
    COW_AT(1008d58a)
    if (rd8(self + 0x126u) & 1u)
    {
    COW_AT(1008d593)
        wr16(self + 0xf0u, rd16(self + 0x164u));
        t178 = rd32(self + 0x124u) & 0xfffeffffu;
        wr32(self + 0x124u, t178);
        eax = t178;
    }
    COW_AT(1008d5b2)
    if ((int16_t)rd16(self + 0xf0u) <= 0)
    {
    COW_AT(1008d684)
        t221 = rd32(self + 0x124u);
        wr16(self + 0xf0u, 0u);
        t222 = (t221 & 0xffff00ffu) | (t221 >> 8u & 0x7fu) << 8u;
        wr32(self + 0x124u, t222);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0xf0u);
    COW_AT(1008d5c2)
        wr32(sp0 - 0x34u, (uint32_t)(int16_t)eax);
        d179 = fr(g, fr(g, (double)rdf32(self + 0x24u) - (double)rdf32(self + 4u)) / (double)(int32_t)(uint32_t)(int16_t)eax);
        wrf32(self + 0x54u, (float)d179);
        d180 = fr(g, fr(g, (double)rdf32(self + 0x28u) - (double)rdf32(self + 8u)) / (double)(int32_t)(uint32_t)(int16_t)eax);
        wrf32(self + 0x58u, (float)d180);
        d181 = fr(g, fr(g, (double)rdf32(self + 0x2cu) - (double)rdf32(self + 0xcu)) / (double)(int32_t)(uint32_t)(int16_t)eax);
        wrf32(self + 0x5cu, (float)d181);
        d182 = fr(g, fr(g, (double)rdf32(self + 0x34u) - (double)rdf32(self + 0x14u)) * (double)rdf32(COW_IMG(0x1032a9f0u)));
        wrf32(self + 0x64u, (float)d182);
        d183 = fr(g, fr(g, (double)rdf32(self + 0x38u) - (double)rdf32(self + 0x18u)) * (double)rdf32(COW_IMG(0x1032a9f0u)));
        wrf32(self + 0x68u, (float)d183);
        d184 = fr(g, fr(g, (double)rdf32(self + 0x3cu) - (double)rdf32(self + 0x1cu)) * (double)rdf32(COW_IMG(0x1032a9f0u)));
        wrf32(self + 0x6cu, (float)d184);
        g->ecx = (uint32_t)(int16_t)eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t185 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t186 = g->ecx;
        t187 = g->edx;
        d188 = cow_take_float(g);
        d189 = fr(g, fr(g, d188 * (double)rdf32(self + 0x54u)) + (double)rdf32(self + 4u));
        wrf32(self + 4u, (float)d189);
        g->ecx = t186;
        g->edx = t187;
        t190 = cow_call_regs(g, COW_IMG(0x10014cf0u), t185, g->ecx, g->edx, 1, 0);
        t191 = g->ecx;
        t192 = g->edx;
        d193 = cow_take_float(g);
        d194 = fr(g, fr(g, d193 * (double)rdf32(self + 0x58u)) + (double)rdf32(self + 8u));
        wrf32(self + 8u, (float)d194);
        g->ecx = t191;
        g->edx = t192;
        t195 = cow_call_regs(g, COW_IMG(0x10014cf0u), t190, g->ecx, g->edx, 1, 0);
        t196 = g->ecx;
        t197 = g->edx;
        d198 = cow_take_float(g);
        d199 = fr(g, fr(g, d198 * (double)rdf32(self + 0x5cu)) + (double)rdf32(self + 0xcu));
        wrf32(self + 0xcu, (float)d199);
        g->ecx = t196;
        g->edx = t197;
        t200 = cow_call_regs(g, COW_IMG(0x10014cf0u), t195, g->ecx, g->edx, 1, 0);
        t201 = g->ecx;
        t202 = g->edx;
        d203 = cow_take_float(g);
        d204 = fr(g, fr(g, d203 * (double)rdf32(self + 0x64u)) + (double)rdf32(self + 0x14u));
        wrf32(self + 0x14u, (float)d204);
        g->ecx = t201;
        g->edx = t202;
        t205 = cow_call_regs(g, COW_IMG(0x10014cf0u), t200, g->ecx, g->edx, 1, 0);
        t206 = g->ecx;
        t207 = g->edx;
        d208 = cow_take_float(g);
        d209 = fr(g, fr(g, d208 * (double)rdf32(self + 0x68u)) + (double)rdf32(self + 0x18u));
        wrf32(self + 0x18u, (float)d209);
        g->ecx = t206;
        g->edx = t207;
        t210 = cow_call_regs(g, COW_IMG(0x10014cf0u), t205, g->ecx, g->edx, 1, 0);
        t211 = g->ecx;
        t212 = g->edx;
        d213 = cow_take_float(g);
        d214 = fr(g, fr(g, d213 * (double)rdf32(self + 0x6cu)) + (double)rdf32(self + 0x1cu));
        wrf32(self + 0x1cu, (float)d214);
        g->ecx = t211;
        g->edx = t212;
        t215 = cow_call_regs(g, COW_IMG(0x10014cf0u), t210, g->ecx, g->edx, 1, 0);
        t216 = g->ecx;
        t217 = g->edx;
        d218 = cow_take_float(g);
        g->edx = t217;
        fpush(g, d218);
        t219 = cow_call_regs(g, COW_IMG(0x10311c6cu), t215, g->ecx, g->edx, 1, 0);
        t220 = g->edx;
        wr16(self + 0xf0u, (uint16_t)(rd16(self + 0xf0u) - (uint16_t)t219));
        edx = t220;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    COW_AT(1008d69c)
    if ((int8_t)rd32(self + 0x120u) < 0)
    {
        eax = rd32(self + 0x120u);
    }
    else
    {
        eax = rd32(self + 0x120u);
    COW_AT(1008d6a6)
        wr32(self + 0x120u, eax & 0xffdfffffu);
        eax = eax & 0xffdfffffu;
    }
    COW_AT(1008d6b1)
    if (rd32(self + 0x170u) == 0x1cu)
    {
    COW_AT(1008d6ba)
        t223 = rd32(self + 0x120u);
        d224 = fr(g, (double)rdf32(COW_IMG(0x10485a08u)) + (double)rdf32(self + 4u));
        wrf32(self + 4u, (float)d224);
        d225 = fr(g, (double)rdf32(COW_IMG(0x10485a0cu)) + (double)rdf32(self + 8u));
        wrf32(self + 8u, (float)d225);
        d226 = fr(g, (double)rdf32(COW_IMG(0x10485a10u)) + (double)rdf32(self + 0xcu));
        wr32(self + 0x120u, t223 | 0x200000u);
        wrf32(self + 0xcu, (float)d226);
        g->esp = sp0 - 0x4cu;
        cow_thiscall(g, COW_IMG(0x10092c20u), self, 0);
        t227 = rd32(self + 4u);
        wr32(self + 0x24u, t227);
        t228 = rd32(self + 8u);
        wr32(self + 0x28u, t228);
        t229 = rd32(self + 0xcu);
        wr32(self + 0x2cu, t229);
        t230 = rd32(self + 4u);
        wr32(self + 0x44u, t230);
        t231 = rd32(self + 8u);
        wr32(self + 0x48u, t231);
        t232 = rd32(self + 0xcu);
        wr32(self + 0x4cu, t232);
        eax = t231;
        edx = t230;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    COW_AT(1008d717)
    if (rd32(self + 0x170u) != 0x1fu) goto L_1008d77d;
    COW_AT(1008d720)
    t233 = rd32(self + 0x120u);
    d234 = fr(g, (double)rdf32(COW_IMG(0x104859e8u)) + (double)rdf32(self + 4u));
    wrf32(self + 4u, (float)d234);
    d235 = fr(g, (double)rdf32(COW_IMG(0x104859ecu)) + (double)rdf32(self + 8u));
    wrf32(self + 8u, (float)d235);
    d236 = fr(g, (double)rdf32(COW_IMG(0x104859f0u)) + (double)rdf32(self + 0xcu));
    wr32(self + 0x120u, t233 | 0x200000u);
    wrf32(self + 0xcu, (float)d236);
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, COW_IMG(0x10092c20u), self, 0);
    t237 = rd32(self + 4u);
    wr32(self + 0x24u, t237);
    t238 = rd32(self + 8u);
    wr32(self + 0x28u, t238);
    t239 = rd32(self + 0xcu);
    wr32(self + 0x2cu, t239);
    t240 = rd32(self + 4u);
    wr32(self + 0x44u, t240);
    t241 = rd32(self + 8u);
    wr32(self + 0x48u, t241);
    eax = t241;
    ecx = rd32(self + 0xcu);
    goto L_1008d77a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008cd90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008cdbbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1008cdceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cdd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cdd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cddcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cde5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cde9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cdf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ce9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cea2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x54u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008ceb8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cebcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cec5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cecdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cedau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cf8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cfc3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cfcdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cfd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cfe8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cff1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008cff9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d00du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d026u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d079u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d084u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d08du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d095u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d0a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d0c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d116u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d12cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d13au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d144u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d188u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d1a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d1b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d1c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d209u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d215u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d21du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d22bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d282u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d295u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d2bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d2cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->ebp = 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1008d2d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d2f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d30au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d313u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d332u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d340u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d359u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d3adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d3beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d3e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d41eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d428u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d433u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d43eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d499u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d4a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        g->edi = self + 4u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d4f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d51fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d529u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d52du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d531u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d535u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d539u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d54fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d57eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        double loc_3c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1008d58au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d5b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d5c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d684u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d69cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d6a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d6b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d717u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d720u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        g->ebx = 0x200000u;
        (void)sp0;
        return 1;
    }
    case 0x1008d77au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d77du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d787u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d78fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d79au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d7e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d7f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d802u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1008d836u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d840u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d844u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d84cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d850u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d854u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d8b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008d8fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_34_f;
        double loc_38_f;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008cd90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1008cd90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
