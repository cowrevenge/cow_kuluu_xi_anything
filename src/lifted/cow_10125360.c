/* f_0x10125360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10125360(Guest* g)
{
    double d109;
    double d119;
    double d122;
    double d125;
    double d128;
    double d131;
    double d132;
    double d136;
    double d142;
    double d146;
    double d182;
    double d185;
    double d20;
    double d24;
    double d27;
    double d52;
    double d53;
    double d59;
    double d60;
    double d63;
    double d68;
    double d74;
    double d78;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_30;
    uint32_t loc_4;
    uint32_t loc_8;
    int64_t q82;
    int64_t q84;
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
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t123;
    uint32_t t124;
    uint32_t t126;
    uint32_t t127;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
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
    uint32_t t183;
    uint32_t t184;
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
    uint32_t t235;
    uint32_t t236;
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t61;
    uint32_t t62;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t83;
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
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10125372u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10125372;
    case 0x10125378u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10125378;
    case 0x10125383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_10125383;
    case 0x1012538au: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1012538a;
    case 0x10125395u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; zf = g->zf; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10125395;
    case 0x1012539fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_1012539f;
    case 0x101253a6u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; zf = g->zf; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_101253a6;
    case 0x101253abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253ab;
    case 0x101253b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253b2;
    case 0x101253bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253bc;
    case 0x101253c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253c0;
    case 0x101253c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253c7;
    case 0x101253cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253cb;
    case 0x101253d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253d2;
    case 0x101253dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101253dc;
    case 0x101253edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101253ed;
    case 0x101253f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101253f7;
    case 0x101253fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_101253fb;
    case 0x10125409u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10125409;
    case 0x1012541eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_1012541e;
    case 0x10125430u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_10125430;
    case 0x10125435u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125435;
    case 0x1012543au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_1012543a;
    case 0x1012545au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_1012545a;
    case 0x10125480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125480;
    case 0x10125485u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125485;
    case 0x10125491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125491;
    case 0x101254a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254a7;
    case 0x101254aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254ae;
    case 0x101254b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254b5;
    case 0x101254b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254b9;
    case 0x101254c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254c1;
    case 0x101254cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254ca;
    case 0x101254ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254ce;
    case 0x101254d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254d8;
    case 0x101254dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101254dc;
    case 0x101254e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254e0;
    case 0x101254f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254f0;
    case 0x101254f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254f7;
    case 0x101254fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101254fd;
    case 0x1012550bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012550b;
    case 0x10125512u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125512;
    case 0x1012551au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012551a;
    case 0x10125522u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125522;
    case 0x10125527u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125527;
    case 0x1012552eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012552e;
    case 0x1012553bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012553b;
    case 0x10125549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125549;
    case 0x10125550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125550;
    case 0x10125558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125558;
    case 0x10125562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125562;
    case 0x1012556cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012556c;
    case 0x10125570u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125570;
    case 0x1012557fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012557f;
    case 0x10125583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125583;
    case 0x10125587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125587;
    case 0x10125590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125590;
    case 0x101255aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255ae;
    case 0x101255bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255bc;
    case 0x101255ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255cc;
    case 0x101255d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255d3;
    case 0x101255dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255da;
    case 0x101255eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255ea;
    case 0x101255f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101255f5;
    case 0x10125601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125601;
    case 0x1012560du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012560d;
    case 0x10125618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125618;
    case 0x10125620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125620;
    case 0x1012562fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012562f;
    case 0x1012564cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012564c;
    case 0x1012565au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012565a;
    case 0x10125665u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125665;
    case 0x1012566fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012566f;
    case 0x10125674u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125674;
    case 0x1012567cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_1012567c;
    case 0x10125686u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125686;
    case 0x1012568eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012568e;
    case 0x1012569cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012569c;
    case 0x101256a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101256a5;
    case 0x101256aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256aa;
    case 0x101256bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256ba;
    case 0x101256c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256c5;
    case 0x101256cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256ca;
    case 0x101256d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; zf = g->zf; goto E_101256d4;
    case 0x101256d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101256d8;
    case 0x101256ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101256dd;
    case 0x101256e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256e9;
    case 0x101256f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101256f4;
    case 0x101256f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101256f9;
    case 0x101256fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101256fd;
    case 0x10125707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125707;
    case 0x10125732u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125732;
    case 0x1012573du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012573d;
    case 0x10125744u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125744;
    case 0x10125751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125751;
    case 0x10125758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125758;
    case 0x10125765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125765;
    case 0x1012576cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1012576c;
    case 0x10125777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125777;
    case 0x1012579cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1012579c;
    case 0x101257a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101257a4;
    case 0x101257b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101257b3;
    case 0x101257bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101257bf;
    case 0x101257c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101257c5;
    case 0x101257ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101257cc;
    case 0x101257d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101257d1;
    case 0x101257dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_101257dc;
    case 0x101257e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101257e1;
    case 0x1012580eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1012580e;
    case 0x10125816u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125816;
    case 0x10125825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125825;
    case 0x10125831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125831;
    case 0x10125837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125837;
    case 0x10125847u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125847;
    case 0x10125852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125852;
    case 0x1012585cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012585c;
    case 0x10125864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125864;
    case 0x10125870u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125870;
    case 0x10125877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125877;
    case 0x1012587cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_1012587c;
    case 0x10125883u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125883;
    case 0x10125888u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125888;
    case 0x10125898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125898;
    case 0x101258a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101258a2;
    case 0x101258a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101258a6;
    case 0x101258aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_101258aa;
    case 0x101258bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101258ba;
    case 0x101258bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101258bf;
    case 0x101258c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_101258c7;
    case 0x101258f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101258f9;
    case 0x101258fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101258fd;
    case 0x10125915u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125915;
    case 0x1012592eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1012592e;
    case 0x10125936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125936;
    case 0x10125945u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125945;
    case 0x10125951u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125951;
    case 0x10125957u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125957;
    case 0x1012596au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_1012596a;
    case 0x10125978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125978;
    case 0x1012598du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_1012598d;
    case 0x101259a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259a0;
    case 0x101259aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259ae;
    case 0x101259c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259c3;
    case 0x101259d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259d6;
    case 0x101259e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259e4;
    case 0x101259f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_101259f9;
    case 0x10125a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a0c;
    case 0x10125a1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a1a;
    case 0x10125a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a2f;
    case 0x10125a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a42;
    case 0x10125a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a50;
    case 0x10125a65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a65;
    case 0x10125a78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a78;
    case 0x10125a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a86;
    case 0x10125a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125a9b;
    case 0x10125aaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125aae;
    case 0x10125abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125abc;
    case 0x10125ad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125ad1;
    case 0x10125ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125ae4;
    case 0x10125af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125af2;
    case 0x10125b0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125b0b;
    case 0x10125b19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125b19;
    case 0x10125b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125b2d;
    case 0x10125b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125b38;
    case 0x10125b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b47;
    case 0x10125b67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b67;
    case 0x10125b6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b6d;
    case 0x10125b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b80;
    case 0x10125b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b87;
    case 0x10125b93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125b93;
    case 0x10125b98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125b98;
    case 0x10125bafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125baf;
    case 0x10125bbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125bbb;
    case 0x10125bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125bc0;
    case 0x10125bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125bc7;
    case 0x10125bd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125bd3;
    case 0x10125bd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125bd8;
    case 0x10125befu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125bef;
    case 0x10125bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125bfb;
    case 0x10125c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125c00;
    case 0x10125c05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125c05;
    case 0x10125c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125c0a;
    case 0x10125c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c2a;
    case 0x10125c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c2d;
    case 0x10125c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c5e;
    case 0x10125c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c6f;
    case 0x10125c84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c84;
    case 0x10125c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125c91;
    case 0x10125ca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125ca6;
    case 0x10125cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10125cb1;
    case 0x10125cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125cb7;
    case 0x10125cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125cc1;
    case 0x10125cc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125cc5;
    case 0x10125cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125cd5;
    case 0x10125cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125cdc;
    case 0x10125cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125cec;
    case 0x10125cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125cf3;
    case 0x10125d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125d03;
    case 0x10125d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125d0a;
    case 0x10125d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125d11;
    case 0x10125d1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125d1b;
    case 0x10125d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125d26;
    case 0x10125d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d45;
    case 0x10125d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d4d;
    case 0x10125d57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d57;
    case 0x10125d5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d5b;
    case 0x10125d63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d63;
    case 0x10125d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d6b;
    case 0x10125d7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d7a;
    case 0x10125d81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d81;
    case 0x10125d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d95;
    case 0x10125d9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125d9e;
    case 0x10125da3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125da3;
    case 0x10125dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dad;
    case 0x10125db7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125db7;
    case 0x10125dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dbd;
    case 0x10125dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dbf;
    case 0x10125dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dc7;
    case 0x10125dcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dcb;
    case 0x10125dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dcd;
    case 0x10125dd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125dd2;
    case 0x10125dd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); goto E_10125dd7;
    case 0x10125de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125de1;
    case 0x10125deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_10 = rd32(sp0 - 0x10u); goto E_10125dee;
    case 0x10125dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125dfd;
    case 0x10125e01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e01;
    case 0x10125e05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e05;
    case 0x10125e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e0c;
    case 0x10125e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e14;
    case 0x10125e16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e16;
    case 0x10125e1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e1a;
    case 0x10125e20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e20;
    case 0x10125e27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e27;
    case 0x10125e31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e31;
    case 0x10125e35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e35;
    case 0x10125e39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e39;
    case 0x10125e41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e41;
    case 0x10125e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e53;
    case 0x10125e57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e57;
    case 0x10125e60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e60;
    case 0x10125e62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e62;
    case 0x10125e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e69;
    case 0x10125e6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e6f;
    case 0x10125e81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e81;
    case 0x10125e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e88;
    case 0x10125e8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125e8e;
    case 0x10125e98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e98;
    case 0x10125e9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125e9c;
    case 0x10125ea3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125ea3;
    case 0x10125eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125eaa;
    case 0x10125eaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125eae;
    case 0x10125eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125eb4;
    case 0x10125ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125ebe;
    case 0x10125ec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125ec2;
    case 0x10125ecau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125eca;
    case 0x10125ed0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125ed0;
    case 0x10125edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125eda;
    case 0x10125edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125ede;
    case 0x10125ee4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125ee4;
    case 0x10125eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125eea;
    case 0x10125ef0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125ef0;
    case 0x10125efau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125efa;
    case 0x10125efeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_10125efe;
    case 0x10125f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125f02;
    case 0x10125f0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125f0b;
    case 0x10125f12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125f12;
    case 0x10125f1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125f1c;
    case 0x10125f23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; loc_30 = rd32(sp0 - 0x30u); loc_10 = rd32(sp0 - 0x10u); goto E_10125f23;
    default: break;
    }
#endif

    COW_AT(10125360)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x101606f0u), in_eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10125372)
    if ((uint8_t)eax == 0u) goto L_1012538a;
    COW_AT(10125378)
    wr32(sp0 - 0x2cu, 0u);
    wr8(self + 0x4du, 0u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101252f0u), self, edx, 1, 0u);
    COW_AT(10125383)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = in_ebp;
    return;
L_1012538a: ;
    COW_AT(1012538a)
    if (rd32(COW_IMG(0x10666e7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10666e7cu));
        goto L_101253a6;
    }
    eax = rd32(COW_IMG(0x10666e7cu));
    COW_AT(10125395)
    wr32(sp0 - 0x2cu, 0u);
    wr8(self + 0x4du, 0u);
    g->esp = sp0 - 0x28u;
    cow_fastcall(g, COW_IMG(0x101252f0u), self, edx, 1, 0u);
    COW_AT(1012539f)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = in_ebp;
    return;
L_101253a6: ;
    COW_AT(101253a6)
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10125170u), eax, self, g->edx, 1, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101253ab)
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t5 = cow_call_regs(g, COW_IMG(0x10125040u), eax, self, g->edx, 1, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101253b2)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t7 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(101253bc)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(101253c0)
        if (rd8(self + 0x4du) == 3u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
            goto L_101253cb;
        }
        eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
    COW_AT(101253c7)
        if ((uint8_t)eax != 6u) goto L_101253d2;
L_101253cb: ;
    COW_AT(101253cb)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t9 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_101253d2: ;
    COW_AT(101253d2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101253dc)
    wr32(sp0 - 0x18u, eax);
    wr8(sp0 - 0x19u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (eax == 0u)
    {
        loc_18 = eax;
        loc_14 = 0u;
    }
    else
    {
        loc_18 = eax;
    COW_AT(101253ed)
        t13 = rd32(eax + 0x88u);
        wr32(sp0 - 0x14u, t13);
        loc_14 = t13;
    }
    COW_AT(101253f7)
    if (self == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
    COW_AT(101253fb)
        t14 = rd32(self + 4u);
        wr32(sp0 - 8u, t14);
        t15 = rd32(self + 8u);
        wr32(sp0 - 4u, t15);
        edx = t15;
        loc_8 = t14;
        loc_4 = t15;
    }
    COW_AT(10125409)
    wr32(sp0 - 0x2cu, loc_4);
    wr32(sp0 - 0x30u, loc_8);
    g->eax = loc_4;
    g->edx = edx;
    t16 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, COW_IMG(0x10157720u), t16, 2, loc_8, loc_4);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(1012541e)
    d20 = (double)rdf32(self + 0x48u);
    if ((cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
    COW_AT(10125485)
        t32 = rd32(self + 4u);
        t33 = rd32(self + 8u);
        wr32(self + 0xcu, t32);
        wr32(self + 0x10u, t33);
        eax = t32;
        ecx = t33;
    }
    else
    {
        eax = cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10125430)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t21 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t22 = g->ecx;
        t23 = g->edx;
        d24 = cow_take_float(g);
        eax = t21;
        ecx = t22;
        edx = t23;
        x0 = d24;
    COW_AT(10125435)
        g->ecx = ecx;
        fpush(g, x0);
        g->esp = sp0 - 0x28u;
        t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t26 = g->ecx;
        eax = t25;
        ecx = t26;
    COW_AT(1012543a)
        wr32(sp0 - 0x10u, (uint32_t)(int16_t)eax);
        d27 = fr(g, (double)rdf32(self + 0x48u) - (double)(int32_t)(uint32_t)(int16_t)eax);
        wrf32(self + 0x48u, (float)d27);
        if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
            edx = (uint32_t)(int16_t)eax;
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(10125480)
            wr32(self + 0x48u, 0u);
        }
        else
        {
    COW_AT(1012545a)
            t28 = rd32(self + 0xcu) + (uint32_t)((int32_t)(rd32(self + 4u) - rd32(self + 0xcu) - (uint32_t)((int32_t)(rd32(self + 4u) - rd32(self + 0xcu)) >> 0x1fu)) >> 1u);
            t29 = rd32(self + 0x10u);
            wr32(self + 0xcu, t28);
            t30 = t29 + (uint32_t)((int32_t)(rd32(self + 8u) - t29 - (uint32_t)((int32_t)(rd32(self + 8u) - t29) >> 0x1fu)) >> 1u);
            t31 = rd32(self + 8u);
            wr32(self + 0x10u, t30);
            eax = t30;
            ecx = t29;
            edx = (uint32_t)((int32_t)(t31 - t29) >> 0x1fu);
        }
    }
    COW_AT(10125491)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = rd32(self + 0x18u);
    g->edx = edx;
    t34 = rd32(self + 0x18u);
    t35 = rd32(self + 0x14u);
    g->esp = sp0 - 0x1cu;
    t36 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    ebx = t34;
    edi = t35;
    COW_AT(101254a7)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(101254ae)
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t39 = cow_stdcall(g, COW_IMG(0x10126290u), 0);
        t40 = g->ecx;
        t41 = g->edx;
        eax = t39;
        ecx = t40;
        edx = t41;
    COW_AT(101254b5)
        if ((uint8_t)eax != 0u)
        {
    COW_AT(101254b9)
            if (rd32(sp0 - 0x18u) == 0u)
            {
                ecx = rd32(sp0 - 0x18u);
            }
            else
            {
                ecx = rd32(sp0 - 0x18u);
    COW_AT(101254c1)
                wr32(sp0 - 0x2cu, self + 4u);
                g->eax = eax;
                g->edx = self + 4u;
                g->esp = sp0 - 0x28u;
                t42 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, self + 4u);
                t43 = g->ecx;
                t44 = g->edx;
                eax = t42;
                ecx = t43;
                edx = t44;
    COW_AT(101254ca)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(101254ce)
                    g->eax = eax;
                    g->esp = sp0 - 0x28u;
                    t45 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
                    t46 = g->ecx;
                    t47 = g->edx;
                    eax = t45;
                    ecx = t46;
                    edx = t47;
    COW_AT(101254d8)
                    if ((uint8_t)eax == 0u)
                    {
    COW_AT(101254dc)
                        wr8(self + 0x54u, 1u);
                    }
                }
            }
        }
    }
    COW_AT(101254e0)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t48 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(101254f0)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101254f7)
        wr8(self + 0x55u, (uint8_t)eax);
        wr8(self + 0x54u, (uint8_t)eax);
    }
    COW_AT(101254fd)
    if (rd8(self + 0x4du) > 6u)
    {
        eax = rd8(self + 0x4du);
        goto L_10125d11;
    }
    eax = rd8(self + 0x4du);
    COW_AT(1012550b)
    t51 = rd32(COW_IMG(0x10125f2cu) + eax * 4u);
    switch (t51 - RD)
    {
    case 0x10125512u: goto L_10125512;
    case 0x10125527u: goto L_10125527;
    case 0x101256aau: goto L_101256aa;
    case 0x101256cau: goto L_101256ca;
    case 0x10125888u: goto L_10125888;
    case 0x10125b19u: goto L_10125b19;
    default: rt_fatal(g, COW_IMG(0x1012550bu), "switch");
    }
    return;
L_10125512: ;
    COW_AT(10125512)
    if (edi != 0u) goto L_10125d0a;
    COW_AT(1012551a)
    if (ebx == 0u) goto L_10125d11;
    COW_AT(10125522)
L_10125d0a: ;
    COW_AT(10125d0a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t195 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t196 = g->edx;
    eax = t195;
    edx = t196;
L_10125d11: ;
    COW_AT(10125d11)
    if (rd8(self + 0x4du) != 2u) goto L_10125e16;
    COW_AT(10125d1b)
    if (rd8(self + 0x4eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
        goto L_10125e16;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
    COW_AT(10125d26)
    wr32(sp0 - 0x2cu, in_ebp);
    t197 = rd16(self + 0x50u);
    t198 = rd16(self + 0x52u);
    wr16(self + 0x50u, 0u);
    wr16(self + 0x52u, 0xffffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t199 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t200 = g->edx;
    eax = t199;
    edx = t200;
    ebx = (ebx & 0xffff0000u) | t197;
    edi = (edi & 0xffff0000u) | t198;
    COW_AT(10125d45)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10125d4d)
        g->eax = eax;
        g->esp = sp0 - 0x2cu;
        t201 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
        t202 = g->edx;
        eax = t201;
        edx = t202;
    COW_AT(10125d57)
        if ((uint8_t)eax == 0u)
        {
    COW_AT(10125d5b)
            if (rd32(sp0 - 0x18u) == 0u)
            {
                eax = rd32(sp0 - 0x18u);
            }
            else
            {
    COW_AT(10125d63)
                if (rd32(sp0 - 0x14u) != 0u)
                {
                    ecx = rd32(sp0 - 0x14u);
    COW_AT(10125d6b)
                    t203 = rd32(sp0 - 4u);
                    wr32(sp0 - 0x30u, t203);
                    t204 = rd32(sp0 - 8u);
                    wr32(sp0 - 0x34u, t204);
                    g->esp = sp0 - 0x2cu;
                    t205 = cow_call_regs(g, COW_IMG(0x102347f0u), t204, ecx, g->edx, 0, 2, t204, t203);
                    eax = t205;
    COW_AT(10125d7a)
                    wr8(rd32(sp0 - 0x14u) + 0x28u, (uint8_t)eax);
                }
    COW_AT(10125d81)
                wr32(sp0 - 0x30u, sp0 - 0x19u);
                wr32(sp0 - 0x34u, self + 4u);
                t206 = rd32(sp0 - 0x18u);
                g->edx = sp0 - 0x19u;
                g->esp = sp0 - 0x2cu;
                t207 = cow_call_regs(g, COW_IMG(0x10118cb0u), self + 4u, t206, g->edx, 0, 2, self + 4u, sp0 - 0x19u);
                t208 = g->edx;
                eax = t207;
                edx = t208;
                ebp = t206;
    COW_AT(10125d95)
                wr16(self + 0x52u, (uint16_t)eax);
                if ((int16_t)eax > 0)
                {
    COW_AT(10125d9e)
                    if ((uint16_t)eax != (uint16_t)edi)
                    {
    COW_AT(10125da3)
                        wr32(sp0 - 0x30u, 0u);
                        wr32(sp0 - 0x34u, eax);
                        g->ebx = ebx;
                        g->edx = edx;
                        g->esp = sp0 - 0x2cu;
                        t209 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ebp, g->edx, 0, 2, eax, 0u);
                        t210 = g->edx;
                        eax = t209;
                        edx = t210;
                    }
                }
    COW_AT(10125dad)
                if ((int16_t)ebx <= 0)
                {
                    edi = 1u;
                    zf = (uint16_t)ebx == 0u;
                }
                else
                {
    COW_AT(10125db7)
                    edi = 0xffffffffu;
                    zf = (uint16_t)ebx == 0u;
                }
    COW_AT(10125dbd)
                if (zf) goto L_10125dd7;
L_10125dbf: ;
    COW_AT(10125dbf)
                if ((int32_t)edi <= 0)
                {
                    ecx = ebp;
                    ebx = ebx + edi;
    COW_AT(10125dcb)
                    wr32(sp0 - 0x30u, 0x16u);
                    loc_30 = 0x16u;
                }
                else
                {
                    ecx = ebp;
                    ebx = ebx + edi;
    COW_AT(10125dc7)
                    wr32(sp0 - 0x30u, 0x17u);
                    loc_30 = 0x17u;
                }
    COW_AT(10125dcd)
                g->ebx = ebx;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t211 = cow_call_regs(g, COW_IMG(0x10118260u), eax, ecx, g->edx, 0, 1, loc_30);
                t212 = g->edx;
                eax = t211;
                edx = t212;
    COW_AT(10125dd2)
                if ((uint16_t)ebx != 0u) goto L_10125dbf;
            }
        }
    }
L_10125dd7: ;
    COW_AT(10125dd7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t213 = cow_thiscall(g, COW_IMG(0x10126510u), COW_IMG(0x10621838u), 0);
    t214 = g->edx;
    eax = t213;
    edx = t214;
    COW_AT(10125de1)
    wr32(sp0 - 0x10u, eax);
    if (eax == 0u)
    {
        ebp = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x18u);
        goto L_10125e1a;
    }
    ebp = rd32(sp0 - 0x2cu);
    edi = rd32(sp0 - 0x18u);
    loc_10 = eax;
L_10125dee: ;
    COW_AT(10125dee)
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t215 = cow_call_regs(g, COW_IMG(0x1015ee20u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x10u);
    t216 = g->edx;
    eax = t215;
    edx = t216;
    COW_AT(10125dfd)
    if (eax != 0u)
    {
    COW_AT(10125e01)
        if (eax != edi)
        {
    COW_AT(10125e05)
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_stdcall(g, COW_IMG(0x10118520u), 0);
            t217 = g->edx;
            edx = t217;
        }
    }
    COW_AT(10125e0c)
    if (rd32(sp0 - 0x10u) != 0u)
    {
        eax = rd32(sp0 - 0x10u);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10125dee;
    }
    eax = rd32(sp0 - 0x10u);
    COW_AT(10125e14)
L_10125e1a: ;
    COW_AT(10125e1a)
    if (rd8(self + 0x4du) == 3u)
    {
    COW_AT(10125e20)
        if (rd8(self + 0x4eu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
    COW_AT(10125e27)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t218 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
            t219 = g->edx;
            eax = t218;
            edx = t219;
    COW_AT(10125e31)
            if ((uint8_t)eax == 0u) goto L_10125e62;
    COW_AT(10125e35)
            if (rd32(self) != edi) goto L_10125e62;
    COW_AT(10125e39)
            if (rd32(sp0 - 0x14u) == 0u) goto L_10125e62;
            ecx = rd32(sp0 - 0x14u);
    COW_AT(10125e41)
            t220 = rd32(self + 8u) - rd32(self + 0x20u);
            wr32(sp0 - 0x2cu, t220);
            t221 = rd32(self + 0x6cu);
            wr32(sp0 - 0x30u, t221);
            g->eax = t220;
            g->edx = t221;
            g->esp = sp0 - 0x28u;
            t222 = cow_thiscall(g, COW_IMG(0x10234a20u), ecx, 2, t221, t220);
            t223 = g->edx;
            eax = t222;
            edx = t223;
    COW_AT(10125e53)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(10125e57)
                wr32(sp0 - 0x2cu, 0x1bu);
                g->ebx = ebx;
                g->edi = edi;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                cow_call_regs(g, COW_IMG(0x10118260u), eax, edi, g->edx, 0, 1, 0x1bu);
                t224 = g->edx;
                edx = t224;
    COW_AT(10125e60)
            }
        }
    }
L_10125e6f: ;
    COW_AT(10125e6f)
    wr8(self + 0x4cu, 0u);
    if (rd8(self + 0x4du) > 6u) goto L_10125f02;
    eax = rd8(self + 0x4du);
    COW_AT(10125e81)
    t226 = rd32(COW_IMG(0x10125f48u) + eax * 4u);
    switch (t226 - RD)
    {
    case 0x10125e88u: goto L_10125e88;
    case 0x10125e8eu: goto L_10125e8e;
    case 0x10125eb4u: goto L_10125eb4;
    case 0x10125ed0u: goto L_10125ed0;
    case 0x10125ee4u: goto L_10125ee4;
    case 0x10125eeau: goto L_10125eea;
    case 0x10125ef0u: goto L_10125ef0;
    default: rt_fatal(g, COW_IMG(0x10125e81u), "switch");
    }
    return;
L_10125527: ;
    COW_AT(10125527)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t158 = cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
    COW_AT(1012552e)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    if (rd8(self + 0x4du) != 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
        goto L_1012564c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x4du);
    COW_AT(1012553b)
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t161 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t162 = g->ecx;
    t163 = g->edx;
    eax = t161;
    ecx = t162;
    edx = t163;
    COW_AT(10125549)
    if ((uint8_t)eax != 1u) goto L_101255bc;
    COW_AT(10125550)
    if (rd32(sp0 - 0x14u) == 0u)
    {
        edi = rd32(sp0 - 0x14u);
        goto L_101255ae;
    }
    edi = rd32(sp0 - 0x14u);
    COW_AT(10125558)
    if ((int32_t)rd32(edi + 0xcu) >= (int32_t)rd32(edi + 0x10u))
    {
        eax = rd32(edi + 0xcu);
        ecx = rd32(edi + 0x10u);
        goto L_101255ae;
    }
    eax = rd32(edi + 0xcu);
    COW_AT(10125562)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t164 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t165 = g->ecx;
    t166 = g->edx;
    eax = t164;
    ecx = t165;
    edx = t166;
    COW_AT(1012556c)
    if ((uint8_t)eax != 0u) goto L_101255ae;
    COW_AT(10125570)
    t167 = rd32(self + 8u);
    wr32(sp0 - 0x2cu, t167);
    t168 = rd32(self + 4u);
    wr32(sp0 - 0x30u, t168);
    g->edx = t168;
    g->esp = sp0 - 0x28u;
    t169 = cow_call_regs(g, COW_IMG(0x102347f0u), eax, edi, g->edx, 0, 2, t168, t167);
    t170 = g->ecx;
    t171 = g->edx;
    eax = t169;
    ecx = t170;
    edx = t171;
    COW_AT(1012557f)
    if ((uint8_t)eax == 0u) goto L_101255ae;
    COW_AT(10125583)
    if ((uint8_t)eax == 3u) goto L_10125590;
    COW_AT(10125587)
    wr8(self + 0x86u, 1u);
L_101255bc: ;
    COW_AT(101255bc)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t174 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t175 = g->ecx;
    t176 = g->edx;
    eax = t174;
    ecx = t175;
    edx = t176;
    COW_AT(101255cc)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(101255d3)
        wr8(self + 0x86u, 0u);
    }
    COW_AT(101255da)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x96u);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t177 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x96u, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t178 = g->edx;
    eax = t177;
    edx = t178;
    COW_AT(101255ea)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(101255f5)
        if (rd32(sp0 - 0x18u) == 0u)
        {
            edi = rd32(sp0 - 0x18u);
        }
        else
        {
            edi = rd32(sp0 - 0x18u);
    COW_AT(10125601)
            if (rd32(sp0 - 0x14u) == 0u)
            {
                eax = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(sp0 - 0x14u);
    COW_AT(1012560d)
                wr32(sp0 - 0x2cu, self + 4u);
                g->eax = eax;
                g->edx = self + 4u;
                g->esp = sp0 - 0x28u;
                t179 = cow_thiscall(g, COW_IMG(0x10118c10u), edi, 1, self + 4u);
                t180 = g->ecx;
                t181 = g->edx;
                eax = t179;
                ecx = t180;
                edx = t181;
    COW_AT(10125618)
                if ((uint8_t)eax != 0u)
                {
    COW_AT(10125620)
                    d182 = (double)rdf32(self + 0x80u);
                    wr8(self + 0x4du, 6u);
                    fpush(g, d182);
                    g->esp = sp0 - 0x28u;
                    t183 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                    eax = t183;
    COW_AT(1012562f)
                    wr32(self, edi);
                    t184 = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
                    wr32(sp0 - 0x10u, t184);
                    d185 = fr(g, (double)(int32_t)t184 * (double)rdf32(COW_IMG(0x10329d38u)));
                    wrf32(self + 0x7cu, (float)d185);
                    edx = (uint32_t)((int32_t)eax >> 0x1fu);
                    eax = t184;
                }
            }
        }
    }
    goto L_10125d11;
L_10125590: ;
    COW_AT(10125590)
    t172 = rd32(sp0 - 0x18u);
    wr8(self + 0x4du, 3u);
    t173 = rd32(edi + 0x14u);
    wr32(self, t172);
    wr32(self + 0x6cu, t173);
    wr8(self + 0x86u, 1u);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = in_ebp;
    return;
L_101255ae: ;
    COW_AT(101255ae)
    wr32(self + 0x74u, 0x41c80000u);
    wr8(self + 0x86u, 0u);
    goto L_101255bc;
L_1012564c: ;
    COW_AT(1012564c)
    wr32(sp0 - 0x30u, 5u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t186 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 5u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t187 = g->edx;
    eax = t186;
    edx = t187;
    COW_AT(1012565a)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(10125665)
        if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1012567c;
        ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012566f)
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t188 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, ecx, g->edx, 1, 0);
        t189 = g->edx;
        eax = t188;
        edx = t189;
    COW_AT(10125674)
        if (eax != 0u) goto L_10125d11;
L_1012567c: ;
    COW_AT(1012567c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t190 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t191 = g->ecx;
        t192 = g->edx;
        eax = t190;
        ecx = t191;
        edx = t192;
    COW_AT(10125686)
        if (eax != 0u)
        {
    COW_AT(1012568e)
            if (rd8(COW_IMG(0x10487f81u)) != 0u)
            {
    COW_AT(1012569c)
                wr32(sp0 - 0x2cu, 0u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t193 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                t194 = g->edx;
                eax = t193;
                edx = t194;
    COW_AT(101256a5)
            }
        }
    }
    goto L_10125d11;
L_101256aa: ;
    COW_AT(101256aa)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t156 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t157 = g->edx;
    eax = t156;
    edx = t157;
    COW_AT(101256ba)
    if ((uint8_t)eax == 1u) goto L_10125d11;
    COW_AT(101256c5)
    goto L_10125d0a;
L_101256ca: ;
    COW_AT(101256ca)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t110 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t111 = g->ecx;
    t112 = g->edx;
    eax = t110;
    ecx = t111;
    edx = t112;
    COW_AT(101256d4)
    if ((uint8_t)eax == 0u)
    {
        edi = 0x8bu;
    }
    else
    {
    COW_AT(101256d8)
        edi = 0x96u;
    }
    COW_AT(101256dd)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t113 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, edi, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t114 = g->ecx;
    t115 = g->edx;
    eax = t113;
    ecx = t114;
    edx = t115;
    COW_AT(101256e9)
    if ((uint8_t)eax != 1u) goto L_10125d0a;
    COW_AT(101256f4)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t116 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t117 = g->ecx;
    t118 = g->edx;
    eax = t116;
    ecx = t117;
    edx = t118;
    COW_AT(101256f9)
    if ((uint8_t)eax == 0u) goto L_1012573d;
    COW_AT(101256fd)
    if (rd8(self + 0xacu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
        goto L_1012573d;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xacu);
    COW_AT(10125707)
    d119 = fr(g, -(double)rdf32(self + 0xa8u) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d119);
    if (!(d119 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_10125816;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    COW_AT(10125732)
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_10125831: ;
    COW_AT(10125831)
    wrf32(COW_IMG(0x1036e5f4u), (float)x0);
L_10125837: ;
    COW_AT(10125837)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t147 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t148 = g->edx;
    eax = t147;
    edx = t148;
    COW_AT(10125847)
    if ((uint8_t)eax == 1u)
    {
    COW_AT(10125852)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t149 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t150 = g->ecx;
        t151 = g->edx;
        eax = t149;
        ecx = t150;
        edx = t151;
    COW_AT(1012585c)
        if (eax != 0u)
        {
    COW_AT(10125864)
            if (rd8(COW_IMG(0x10487f81u)) == 0u)
            {
                ecx = eax;
    COW_AT(1012587c)
                wr32(sp0 - 0x2cu, 1u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t154 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 1u);
                t155 = g->edx;
                eax = t154;
                edx = t155;
    COW_AT(10125883)
            }
            else
            {
                ecx = eax;
    COW_AT(10125870)
                wr32(sp0 - 0x2cu, 0u);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t152 = cow_call_regs(g, COW_IMG(0x100a6070u), eax, g->ecx, g->edx, 0, 1, 0u);
                t153 = g->edx;
                eax = t152;
                edx = t153;
    COW_AT(10125877)
            }
        }
    }
    goto L_10125d11;
L_1012573d: ;
    COW_AT(1012573d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t120 = cow_thiscall(g, COW_IMG(0x101260e0u), self, 0);
    t121 = g->edx;
    d122 = cow_take_float(g);
    eax = t120;
    edx = t121;
    x0 = d122;
    COW_AT(10125744)
    if (x0 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10125765;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125751)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t123 = cow_thiscall(g, COW_IMG(0x101260f0u), self, 0);
    t124 = g->edx;
    d125 = cow_take_float(g);
    eax = t123;
    edx = t124;
    x0 = d125;
    COW_AT(10125758)
    if (x0 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_101257c5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_10125765: ;
    COW_AT(10125765)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t126 = cow_thiscall_cdecl(g, COW_IMG(0x10126100u), self, 1, rd32(sp0 - 0x28u));
    t127 = g->edx;
    d128 = cow_take_float(g);
    eax = t126;
    edx = t127;
    x0 = d128;
    COW_AT(1012576c)
    wrf32(sp0 - 0x10u, (float)(double)(float)x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t129 = cow_thiscall_cdecl(g, COW_IMG(0x10125fe0u), self, 1, rd32(sp0 - 0x28u));
    t130 = g->edx;
    d131 = cow_take_float(g);
    eax = t129;
    edx = t130;
    x0 = d131;
    COW_AT(10125777)
    d132 = fr(g, fr(g, atan2(x0, (double)rdf32(sp0 - 0x10u))) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d132);
    if (!(d132 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_101257a4;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d132, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    COW_AT(1012579c)
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_101257bf: ;
    COW_AT(101257bf)
    wrf32(COW_IMG(0x1036e5f4u), (float)x0);
L_101257c5: ;
    COW_AT(101257c5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t133 = cow_thiscall_cdecl(g, COW_IMG(0x10125fe0u), self, 1, rd32(sp0 - 0x28u));
    t134 = g->ecx;
    t135 = g->edx;
    d136 = cow_take_float(g);
    eax = t133;
    ecx = t134;
    edx = t135;
    x0 = d136;
    COW_AT(101257cc)
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x28u;
    t137 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t138 = g->edx;
    eax = t137;
    edx = t138;
    COW_AT(101257d1)
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t139 = cow_thiscall_cdecl(g, COW_IMG(0x10126100u), self, 1, rd32(sp0 - 0x28u));
    t140 = g->ecx;
    t141 = g->edx;
    d142 = cow_take_float(g);
    eax = t139;
    ecx = t140;
    edx = t141;
    x0 = d142;
    COW_AT(101257dc)
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 0x28u;
    t143 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t144 = g->ecx;
    t145 = g->edx;
    eax = t143;
    ecx = t144;
    edx = t145;
    COW_AT(101257e1)
    wr32(sp0 - 0x10u, eax);
    d146 = fr(g, fr(g, atan2((double)(int32_t)rd32(sp0 - 0xcu), (double)(int32_t)eax)) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e5f4u), (float)d146);
    if (!(d146 < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
        goto L_10125816;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d146, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e5f4u));
    COW_AT(1012580e)
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125831;
L_101257a4: ;
    COW_AT(101257a4)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_101257c5;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(101257b3)
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e5f4u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_101257bf;
L_10125816: ;
    COW_AT(10125816)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_10125837;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10125825)
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e5f4u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125831;
L_10125888: ;
    COW_AT(10125888)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t97 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t98 = g->ecx;
    t99 = g->edx;
    eax = t97;
    ecx = t98;
    edx = t99;
    COW_AT(10125898)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t100 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t101 = g->ecx;
    t102 = g->edx;
    ecx = t101;
    edx = t102;
    ebx = (ebx & 0xffffff00u) | (uint8_t)eax;
    eax = t100;
    COW_AT(101258a2)
    if ((uint8_t)eax == 0u) goto L_101258bf;
    COW_AT(101258a6)
    if ((uint8_t)ebx != 0u) goto L_101258c7;
    COW_AT(101258aa)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t103 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t104 = g->edx;
    eax = t103;
    edx = t104;
    COW_AT(101258ba)
    ebx = (ebx & 0xffffff00u) | (uint8_t)eax;
L_101258bf: ;
    COW_AT(101258bf)
    if ((uint8_t)ebx == 0u) goto L_10125d0a;
L_101258c7: ;
    COW_AT(101258c7)
    t105 = rd32(self + 8u) - rd32(self + 0x3cu);
    wr32(sp0 - 0xcu, t105);
    t106 = rd32(self + 4u) - rd32(self + 0x38u);
    wr32(sp0 - 0x10u, t106);
    t107 = rd32(self + 0x38u);
    t108 = rd32(self + 0x3cu);
    d109 = fr(g, fr(g, atan2((double)(int32_t)t105, (double)(int32_t)t106)) - (double)rdf32(COW_IMG(0x1032d430u)));
    wrf32(COW_IMG(0x1036e634u), (float)d109);
    if (t106 != 0u)
    {
        eax = t106;
        ebx = t107;
        edi = t108;
        goto L_10125915;
    }
    eax = t106;
    ecx = t105;
    ebx = t107;
    edi = t108;
    COW_AT(101258f9)
    if (ecx != 0u) goto L_10125915;
    COW_AT(101258fd)
    wr32(COW_IMG(0x1036e634u), 0xbfc90e56u);
    wr16(self + 0xa6u, 0xcu);
    goto L_10125d11;
L_10125915: ;
    COW_AT(10125915)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x10329d28u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10329d28u)), 1u);
        x0 = (double)rdf32(COW_IMG(0x1036e634u));
        goto L_10125936;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    x0 = (double)rdf32(COW_IMG(0x1036e634u));
    COW_AT(1012592e)
    x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10329d2cu)));
L_10125951: ;
    COW_AT(10125951)
    wrf32(COW_IMG(0x1036e634u), (float)x0);
L_10125957: ;
    COW_AT(10125957)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332c0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u);
    COW_AT(10125978)
        if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u;
            goto L_101259ae;
        }
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u) & 0x100u;
    COW_AT(1012598d)
        if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332bcu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u);
            goto L_101259ae;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u);
    COW_AT(101259a0)
        wr16(self + 0xa6u, 0xbu);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332c0u)), 0u);
    COW_AT(1012596a)
        wr16(self + 0xa6u, 0xau);
    }
    goto L_10125d11;
L_10125936: ;
    COW_AT(10125936)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        goto L_10125957;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10125945)
    x0 = fr(g, (double)rdf32(COW_IMG(0x1036e634u)) - (double)rdf32(COW_IMG(0x10329d2cu)));
    goto L_10125951;
L_101259ae: ;
    COW_AT(101259ae)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u;
        goto L_101259e4;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332bcu)), 0u) & 0x100u;
    COW_AT(101259c3)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u);
        goto L_101259e4;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u);
    COW_AT(101259d6)
    wr16(self + 0xa6u, 0xcu);
    goto L_10125d11;
L_101259e4: ;
    COW_AT(101259e4)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u;
        goto L_10125a1a;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b8u)), 0u) & 0x100u;
    COW_AT(101259f9)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b4u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u);
        goto L_10125a1a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u);
    COW_AT(10125a0c)
    wr16(self + 0xa6u, 0xdu);
    goto L_10125d11;
L_10125a1a: ;
    COW_AT(10125a1a)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u;
        goto L_10125a50;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b4u)), 0u) & 0x100u;
    COW_AT(10125a2f)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x10330274u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u);
        goto L_10125a50;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u);
    COW_AT(10125a42)
    wr16(self + 0xa6u, 0xeu);
    goto L_10125d11;
L_10125a50: ;
    COW_AT(10125a50)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u;
        goto L_10125a86;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x10330274u)), 0u) & 0x100u;
    COW_AT(10125a65)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332b0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u);
        goto L_10125a86;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u);
    COW_AT(10125a78)
    wr16(self + 0xa6u, 0xfu);
    goto L_10125d11;
L_10125a86: ;
    COW_AT(10125a86)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u;
        goto L_10125abc;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332b0u)), 0u) & 0x100u;
    COW_AT(10125a9b)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332acu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u);
        goto L_10125abc;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u);
    COW_AT(10125aae)
    wr16(self + 0xa6u, 0x10u);
    goto L_10125d11;
L_10125abc: ;
    COW_AT(10125abc)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u;
        goto L_10125af2;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332acu)), 0u) & 0x100u;
    COW_AT(10125ad1)
    if (!((double)rdf32(COW_IMG(0x1036e634u)) < (double)rdf32(COW_IMG(0x103332a8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u);
        goto L_10125af2;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u);
    COW_AT(10125ae4)
    wr16(self + 0xa6u, 0x11u);
    goto L_10125d11;
L_10125af2: ;
    COW_AT(10125af2)
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, (double)rdf32(COW_IMG(0x1036e634u)), (double)rdf32(COW_IMG(0x103332a8u)), 0u) & 0x100u;
    COW_AT(10125b0b)
        wr16(self + 0xa6u, 0xau);
    }
    goto L_10125d11;
L_10125b19: ;
    COW_AT(10125b19)
    d52 = (double)rdf32(self + 0x7cu);
    if (!(d52 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10125c00;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125b2d)
    g->ecx = ecx;
    d53 = (double)rdf32(self + 0x80u);
    fpush(g, d53);
    g->esp = sp0 - 0x28u;
    t54 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t55 = g->ecx;
    eax = t54;
    ecx = t55;
    COW_AT(10125b38)
    t56 = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
    wr32(sp0 - 0x10u, t56);
    if ((eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) == (uint32_t)((int32_t)eax >> 0x1fu))
    {
        edx = (uint32_t)((int32_t)eax >> 0x1fu);
        eax = t56;
        goto L_10125c00;
    }
    eax = t56;
    loc_10 = t56;
    COW_AT(10125b47)
    wr16(self + 0x44u, (uint16_t)(rd16(self + 0x44u) + 1u));
    t57 = rd16(self + 0x44u);
    t58 = rd32(self + 0x40u);
    d59 = fr(g, (double)(int32_t)loc_10 * (double)rdf32(COW_IMG(0x10329d38u)));
    wrf32(self + 0x7cu, (float)d59);
    if (rd32(rd32(t58) + (uint32_t)(int16_t)t57 * 4u) != 0u)
    {
        edx = rd32(t58);
    }
    else
    {
        edx = rd32(t58);
    COW_AT(10125b67)
        wr16(self + 0x44u, 0u);
    }
    COW_AT(10125b6d)
    d60 = (double)rdf32(self + 0x80u);
    if (eax != 8u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125bc0)
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
    COW_AT(10125bd8)
            d68 = (double)rdf32(self + 0x80u);
            if (!(d68 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d68, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125bef)
                wr32(sp0 - 0x2cu, 0x16u);
                g->ebx = ebx;
                g->edi = edi;
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t69 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x16u);
                t70 = g->edx;
                eax = t69;
                edx = t70;
    COW_AT(10125bfb)
            }
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(10125bc7)
            wr32(sp0 - 0x2cu, 0x17u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t66 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x17u);
            t67 = g->edx;
            eax = t66;
            edx = t67;
    COW_AT(10125bd3)
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d60, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125b80)
        if ((eax & 0x4100u) != 0u)
        {
            eax = eax & 0x4100u;
    COW_AT(10125b98)
            d63 = (double)rdf32(self + 0x80u);
            if (!(d63 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d63, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10125baf)
                wr32(sp0 - 0x2cu, 0x18u);
                g->ebx = ebx;
                g->edi = edi;
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t64 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x18u);
                t65 = g->edx;
                eax = t64;
                edx = t65;
    COW_AT(10125bbb)
            }
        }
        else
        {
            eax = eax & 0x4100u;
    COW_AT(10125b87)
            wr32(sp0 - 0x2cu, 0x19u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t61 = cow_fastcall(g, COW_IMG(0x1015dd00u), COW_IMG(0x10621838u), edx, 1, 0x19u);
            t62 = g->edx;
            eax = t61;
            edx = t62;
    COW_AT(10125b93)
        }
    }
L_10125cb7: ;
    COW_AT(10125cb7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t86 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t87 = g->ecx;
    t88 = g->edx;
    eax = t86;
    ecx = t87;
    edx = t88;
    COW_AT(10125cc1)
    if (rd32(self) != eax) goto L_10125d0a;
    COW_AT(10125cc5)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8bu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t89 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t90 = g->ecx;
    t91 = g->edx;
    eax = t89;
    ecx = t90;
    edx = t91;
    COW_AT(10125cd5)
    if ((uint8_t)eax == 1u) goto L_10125d0a;
    COW_AT(10125cdc)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x8cu);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t92 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8cu, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t93 = g->ecx;
    t94 = g->edx;
    eax = t92;
    ecx = t93;
    edx = t94;
    COW_AT(10125cec)
    if ((uint8_t)eax == 1u) goto L_10125d0a;
    COW_AT(10125cf3)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x96u);
    wr32(sp0 - 0x38u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t95 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x96u, 1u, 0xffffffffu, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t96 = g->edx;
    eax = t95;
    edx = t96;
    COW_AT(10125d03)
    if ((uint8_t)eax != 1u) goto L_10125d11;
    goto L_10125d0a;
L_10125c00: ;
    COW_AT(10125c00)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t71 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    d74 = cow_take_float(g);
    eax = t71;
    ecx = t72;
    edx = t73;
    x0 = d74;
    COW_AT(10125c05)
    fpush(g, x0);
    g->esp = sp0 - 0x28u;
    t75 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    eax = t75;
    COW_AT(10125c0a)
    wr32(sp0 - 0x10u, (uint32_t)(int16_t)eax);
    t76 = rd32(self + 8u);
    t77 = rd32(self + 0x30u);
    d78 = fr(g, (double)rdf32(self + 0x7cu) - (double)(int32_t)(uint32_t)(int16_t)eax);
    wrf32(self + 0x7cu, (float)d78);
    if ((int32_t)(t76 - t77) >= 0)
    {
        eax = t76 - t77;
        ecx = t77;
        ebx = 1u;
    }
    else
    {
        eax = t76 - t77;
        ecx = t77;
    COW_AT(10125c2a)
        ebx = 0xffffffffu;
    }
    COW_AT(10125c2d)
    t79 = rd16(COW_IMG(0x106218bau));
    t80 = rd16(COW_IMG(0x106218b6u));
    wr32(self + 0x80u, 0u);
    t81 = (uint32_t)(int16_t)(t79 - t80);
    if ((int32_t)((eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu)) <= (int32_t)(uint32_t)((int32_t)(t81 + ((uint32_t)((int32_t)t81 >> 0x1fu) & 3u)) >> 2u))
    {
        ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
        edx = (uint32_t)((int32_t)t81 >> 0x1fu) & 3u;
        edi = t81;
        goto L_10125c6f;
    }
    eax = (uint32_t)((int32_t)(t81 + ((uint32_t)((int32_t)t81 >> 0x1fu) & 3u)) >> 2u);
    edi = t81;
    COW_AT(10125c5e)
    wr32(sp0 - 0x10u, ebx * 8u);
    edx = ebx * 8u;
    x0 = (double)(int32_t)(ebx * 8u);
L_10125cb1: ;
    COW_AT(10125cb1)
    wrf32(self + 0x80u, (float)x0);
    goto L_10125cb7;
L_10125c6f: ;
    COW_AT(10125c6f)
    q82 = (int64_t)cow_muls(0x66666667u, edi);
    t83 = (uint32_t)((int32_t)cow_qhi(q82) >> 2u);
    if ((int32_t)ecx <= (int32_t)(t83 + (t83 >> 0x1fu)))
    {
        edx = t83 + (t83 >> 0x1fu);
        goto L_10125c91;
    }
    eax = t83 >> 0x1fu;
    edx = t83 + (t83 >> 0x1fu);
    COW_AT(10125c84)
    wr32(sp0 - 0x10u, ebx * 3u);
    x0 = (double)(int32_t)(ebx * 3u);
    goto L_10125cb1;
L_10125c91: ;
    COW_AT(10125c91)
    q84 = (int64_t)cow_muls(0x66666667u, edi);
    t85 = (uint32_t)((int32_t)cow_qhi(q84) >> 3u);
    if ((int32_t)ecx <= (int32_t)(t85 + (t85 >> 0x1fu)))
    {
        eax = t85 >> 0x1fu;
        edx = t85 + (t85 >> 0x1fu);
        goto L_10125cb7;
    }
    eax = t85 >> 0x1fu;
    edx = t85 + (t85 >> 0x1fu);
    COW_AT(10125ca6)
    wr32(sp0 - 0x10u, ebx * 5u);
    x0 = (double)(int32_t)(ebx * 5u);
    goto L_10125cb1;
L_10125e16: ;
    COW_AT(10125e16)
    ebp = in_ebp;
    edi = rd32(sp0 - 0x18u);
    goto L_10125e1a;
L_10125e62: ;
    COW_AT(10125e62)
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101252c0u), self, 0);
    t225 = g->edx;
    edx = t225;
    COW_AT(10125e69)
    wr32(self, 0u);
    goto L_10125e6f;
L_10125e88: ;
    COW_AT(10125e88)
    wr8(self + 0x4cu, 0u);
L_10125f02: ;
    COW_AT(10125f02)
    if (rd32(COW_IMG(0x10456bf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456bf8u));
        goto L_10125f12;
    }
    eax = rd32(COW_IMG(0x10456bf8u));
    COW_AT(10125f0b)
    if (rd8(self + 0x4eu) != 0u) goto L_10125f23;
    eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
L_10125f12: ;
    COW_AT(10125f12)
    if (rd32(COW_IMG(0x1045666cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10125f1c)
        wr32(sp0 - 0x2cu, 0u);
        g->esp = sp0 - 0x28u;
        cow_stdcall(g, COW_IMG(0x10009750u), 1, 0u);
    }
L_10125f23: ;
    COW_AT(10125f23)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    return;
L_10125e8e: ;
    COW_AT(10125e8e)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t233 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t234 = g->edx;
    eax = t233;
    edx = t234;
    COW_AT(10125e98)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10125e9c)
        if (rd8(self + 0x4eu) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x4eu);
    COW_AT(10125ea3)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t235 = cow_stdcall(g, COW_IMG(0x10126270u), 0);
            t236 = g->edx;
            eax = t235;
            edx = t236;
    COW_AT(10125eaa)
            if ((uint8_t)eax != 0u)
            {
    COW_AT(10125eae)
                wr8(self + 0x4cu, 2u);
            }
        }
    }
    goto L_10125f02;
L_10125eb4: ;
    COW_AT(10125eb4)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t231 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t232 = g->edx;
    eax = t231;
    edx = t232;
    COW_AT(10125ebe)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10125ec2)
        if (rd8(sp0 - 0x19u) != 0u)
        {
    COW_AT(10125eca)
            wr8(self + 0x4cu, 1u);
        }
    }
    goto L_10125f02;
L_10125ed0: ;
    COW_AT(10125ed0)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t229 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t230 = g->edx;
    eax = t229;
    edx = t230;
    COW_AT(10125eda)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10125ede)
        wr8(self + 0x4cu, 3u);
    }
    goto L_10125f02;
L_10125ee4: ;
    COW_AT(10125ee4)
    wr8(self + 0x4cu, 4u);
    goto L_10125f02;
L_10125eea: ;
    COW_AT(10125eea)
    wr8(self + 0x4cu, 5u);
    goto L_10125f02;
L_10125ef0: ;
    COW_AT(10125ef0)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t227 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t228 = g->edx;
    eax = t227;
    edx = t228;
    COW_AT(10125efa)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10125efe)
        wr8(self + 0x4cu, 6u);
    }
    goto L_10125f02;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10125360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10125372u:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x20u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10125378u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10125383u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012538au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        wr32(sp0 - 0x20u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10125395u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012539fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101253a6u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        g->edi = 0u;
        wr32(sp0 - 0x20u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101253abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101253fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10125409u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012541eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10125430u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10125435u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012543au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012545au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125480u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10125485u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125491u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254a7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101254aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101254f7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101254fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012550bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125512u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012551au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125522u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125527u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012552eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012553bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x10125549u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125550u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125558u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125562u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012556cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125570u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012557fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125583u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125587u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125590u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101255aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101255bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101255ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101255d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101255dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101255eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101255f5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125601u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012560du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125618u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125620u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012562fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012564cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x1012565au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125665u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012566fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125674u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012567cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125686u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012568eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012569cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101256c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        g->edi = 0x8bu;
        (void)sp0;
        return 1;
    }
    case 0x101256d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101256f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101256fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125707u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125732u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012573du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125744u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125751u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125758u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125765u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012576cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125777u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012579cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257c5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101257e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012580eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125816u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125825u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125831u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125837u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125847u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125852u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012585cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125864u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125870u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125877u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012587cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125883u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125888u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125898u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101258a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258aau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101258bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258c7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101258fdu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125915u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012592eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125936u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125945u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125951u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125957u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012596au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125978u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1012598du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259c3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x101259f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a0cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125a9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125aaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125abcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ad1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ae4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125af2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b0bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125b98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bbbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bc0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bd8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125befu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125bfbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10125c2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125c91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ca6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cb1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cc5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cd5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125cdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125cecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125cf3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125d03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x10125d0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125d11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125d1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125d26u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125d45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d5bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125d95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x19u);
        (void)sp0;
        return 1;
    }
    case 0x10125d9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x19u);
        (void)sp0;
        return 1;
    }
    case 0x10125da3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x19u);
        (void)sp0;
        return 1;
    }
    case 0x10125dadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125db7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10125dbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125dbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125dcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125dcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10125dd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125dd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125de1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10125deeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125dfdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10125e01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10125e05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10125e0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10125e14u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10125e16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e1au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e41u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125e9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ea3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125eaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125eaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125eb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ebeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ecau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ed0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125edau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125edeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ee4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125eeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125ef0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125efau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125efeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125f02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125f0bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125f12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125f1cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10125f23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_30;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        loc_30 = rd32(sp0 - 0x30u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10125360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10125360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
