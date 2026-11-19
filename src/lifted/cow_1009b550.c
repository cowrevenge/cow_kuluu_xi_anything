/* f_0x1009b550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009b550(Guest* g)
{
    uint32_t cf;
    double d176;
    double d57;
    double d58;
    double d65;
    double d66;
    double d69;
    double d70;
    double d73;
    double d77;
    double d80;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t71;
    uint32_t t72;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1009b562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_1009b562;
    case 0x1009b56cu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_1009b56c;
    case 0x1009b57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009b57f;
    case 0x1009b587u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009b587;
    case 0x1009b598u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009b598;
    case 0x1009b5a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5a9;
    case 0x1009b5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5b2;
    case 0x1009b5b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5b4;
    case 0x1009b5c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5c1;
    case 0x1009b5dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5df;
    case 0x1009b5e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b5e3;
    case 0x1009b60eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b60e;
    case 0x1009b61fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b61f;
    case 0x1009b647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b647;
    case 0x1009b64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b64e;
    case 0x1009b650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b650;
    case 0x1009b659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b659;
    case 0x1009b666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b666;
    case 0x1009b67fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b67f;
    case 0x1009b685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b685;
    case 0x1009b68bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b68b;
    case 0x1009b691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b691;
    case 0x1009b697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b697;
    case 0x1009b69du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b69d;
    case 0x1009b6a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b6a4;
    case 0x1009b6d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b6d9;
    case 0x1009b6e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b6e3;
    case 0x1009b6e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b6e9;
    case 0x1009b6f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b6f0;
    case 0x1009b724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b724;
    case 0x1009b72au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b72a;
    case 0x1009b730u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b730;
    case 0x1009b737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b737;
    case 0x1009b742u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b742;
    case 0x1009b771u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b771;
    case 0x1009b778u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b778;
    case 0x1009b77eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b77e;
    case 0x1009b784u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b784;
    case 0x1009b78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b78f;
    case 0x1009b796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b796;
    case 0x1009b7a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009b7a3;
    case 0x1009b7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7a8;
    case 0x1009b7afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7af;
    case 0x1009b7b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7b0;
    case 0x1009b7b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7b5;
    case 0x1009b7f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7f0;
    case 0x1009b7f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b7f8;
    case 0x1009b806u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b806;
    case 0x1009b80cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b80c;
    case 0x1009b812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b812;
    case 0x1009b869u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b869;
    case 0x1009b887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b887;
    case 0x1009b933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b933;
    case 0x1009b94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b94c;
    case 0x1009b963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b963;
    case 0x1009b967u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b967;
    case 0x1009b975u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b975;
    case 0x1009b97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b97b;
    case 0x1009b983u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b983;
    case 0x1009b989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b989;
    case 0x1009b98bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b98b;
    case 0x1009b9dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b9dc;
    case 0x1009b9e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b9e2;
    case 0x1009b9e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b9e6;
    case 0x1009b9fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009b9fc;
    case 0x1009ba00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba00;
    case 0x1009ba02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba02;
    case 0x1009ba0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba0c;
    case 0x1009ba14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba14;
    case 0x1009ba4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba4e;
    case 0x1009ba55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba55;
    case 0x1009ba63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba63;
    case 0x1009ba69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ba69;
    case 0x1009baa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009baa1;
    case 0x1009baa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009baa8;
    case 0x1009bc37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009bc37;
    case 0x1009bce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bce7;
    case 0x1009bce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bce9;
    case 0x1009bcf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bcf3;
    case 0x1009bcfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bcfb;
    case 0x1009bd9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bd9f;
    case 0x1009bda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bda9;
    case 0x1009bdb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009bdb1;
    case 0x1009be4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009be4c;
    case 0x1009be55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009be55;
    case 0x1009be78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009be78;
    case 0x1009be95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009be95;
    case 0x1009c0d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c0d4;
    case 0x1009c0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c0ec;
    case 0x1009c112u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c112;
    case 0x1009c148u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c148;
    case 0x1009c14eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c14e;
    case 0x1009c155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c155;
    case 0x1009c159u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c159;
    case 0x1009c168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c168;
    case 0x1009c173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c173;
    case 0x1009c62du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c62d;
    case 0x1009c645u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c645;
    case 0x1009c65bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c65b;
    case 0x1009c668u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c668;
    case 0x1009c6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; goto E_1009c6a1;
    case 0x1009c6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c6f2;
    case 0x1009c740u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c740;
    case 0x1009c75bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c75b;
    case 0x1009c784u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c784;
    case 0x1009c79fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c79f;
    case 0x1009c7aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c7aa;
    case 0x1009c7c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; goto E_1009c7c7;
    case 0x1009c8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c8f5;
    case 0x1009c8fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c8fd;
    case 0x1009c907u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c907;
    case 0x1009c916u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c916;
    case 0x1009c91du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c91d;
    case 0x1009c938u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c938;
    case 0x1009c946u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c946;
    case 0x1009c94fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c94f;
    case 0x1009c958u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c958;
    case 0x1009c966u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c966;
    case 0x1009c96fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c96f;
    case 0x1009c976u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c976;
    case 0x1009c980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c980;
    case 0x1009c99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c99c;
    case 0x1009c9b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9b7;
    case 0x1009c9beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9be;
    case 0x1009c9d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9d9;
    case 0x1009c9e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9e4;
    case 0x1009c9ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9eb;
    case 0x1009c9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9f4;
    case 0x1009c9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009c9fd;
    case 0x1009ca07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca07;
    case 0x1009ca0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca0e;
    case 0x1009ca14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca14;
    case 0x1009ca2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca2e;
    case 0x1009ca3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca3c;
    case 0x1009ca46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca46;
    case 0x1009ca4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca4c;
    case 0x1009ca5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca5e;
    case 0x1009ca64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca64;
    case 0x1009ca6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca6e;
    case 0x1009ca74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca74;
    case 0x1009ca7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca7a;
    case 0x1009ca89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca89;
    case 0x1009ca8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca8f;
    case 0x1009ca95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ca95;
    case 0x1009caa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009caa4;
    case 0x1009caaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009caaa;
    case 0x1009cab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cab0;
    case 0x1009cab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cab6;
    case 0x1009cabcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cabc;
    case 0x1009cacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cacb;
    case 0x1009cad1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cad1;
    case 0x1009cad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cad7;
    case 0x1009cae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cae6;
    case 0x1009caecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009caec;
    case 0x1009caf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009caf2;
    case 0x1009caffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009caff;
    case 0x1009cb05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb05;
    case 0x1009cb13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb13;
    case 0x1009cb19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb19;
    case 0x1009cb37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb37;
    case 0x1009cb4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb4e;
    case 0x1009cb63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb63;
    case 0x1009cb8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb8d;
    case 0x1009cb9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cb9b;
    case 0x1009cbd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cbd6;
    case 0x1009cbedu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cbed;
    case 0x1009cc02u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc02;
    case 0x1009cc30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc30;
    case 0x1009cc43u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc43;
    case 0x1009cc5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc5a;
    case 0x1009cc6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc6f;
    case 0x1009cc99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cc99;
    case 0x1009cca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cca7;
    case 0x1009ccbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ccbe;
    case 0x1009ccc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ccc3;
    case 0x1009ccc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ccc9;
    case 0x1009cd38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cd38;
    case 0x1009cd69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cd69;
    case 0x1009cd77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cd77;
    case 0x1009cd91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cd91;
    case 0x1009cda2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cda2;
    case 0x1009cdd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cdd3;
    case 0x1009cde1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cde1;
    case 0x1009cdf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cdf7;
    case 0x1009cdfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009cdfe;
    case 0x1009ce08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce08;
    case 0x1009ce0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce0e;
    case 0x1009ce22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce22;
    case 0x1009ce2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce2c;
    case 0x1009ce32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce32;
    case 0x1009ce50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce50;
    case 0x1009ce6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce6b;
    case 0x1009ce7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; zf = g->zf; loc_54 = rd32(sp0 - 0x54u); goto E_1009ce7c;
    default: break;
    }
#endif

    COW_AT(1009b550)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd8(rd32(sp0 + 0xcu) + 0xau) != 0u)
    {
        esi = rd32(sp0 + 0xcu);
        goto L_1009b56c;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 0xcu) + 0xau);
    COW_AT(1009b562)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1009b56c: ;
    COW_AT(1009b56c)
    t1 = rd16(esi + 8u);
    wr32(sp0 - 0x54u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t2 = cow_cdecl(g, COW_IMG(0x1009ceb0u), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_1009b587;
    }
    eax = t2;
    COW_AT(1009b57f)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return eax;
L_1009b587: ;
    COW_AT(1009b587)
    if (rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(1009b598)
        wr32(sp0 - 0x54u, 0x2acu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
        t5 = g->edx;
        if (t4 == 0u)
        {
    COW_AT(1009b5b2)
            eax = 0u;
        }
        else
        {
            eax = t4;
            edx = t5;
    COW_AT(1009b5a9)
            g->eax = eax;
            g->esp = sp0 - 0x50u;
            t6 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
            eax = t6;
        }
    COW_AT(1009b5b4)
        wr32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u, eax);
    }
    COW_AT(1009b5c1)
    t7 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x74u);
    wr32(sp0 - 0x3cu, t7);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u) == rd32(esi + 4u))
    {
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x78u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = rd32(esi + 4u);
    COW_AT(1009b5df)
        if (eax != 0u)
        {
    COW_AT(1009b5e3)
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
            t8 = g->edx;
            g->eax = rd16(esi + 8u);
            t9 = rd16(esi + 8u);
            t10 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + t9 * 4u), t8, 0);
            t11 = g->edx;
            wr32(sp0 - 0x54u, 0u);
            t12 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            t13 = cow_thiscall(g, COW_IMG(0x1008a350u), t12, 1, 0u);
            t14 = g->ecx;
            eax = t13;
            ecx = t14;
        }
    COW_AT(1009b60e)
        t15 = rd32(esi + 4u);
        wr32(sp0 - 0x54u, t15);
        t16 = (eax & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x58u, t16);
        g->ecx = ecx;
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x10099a40u), 7, t16, t15, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
        t17 = g->ecx;
        ecx = t17;
    }
    COW_AT(1009b61f)
    t18 = (ecx & 0xffff0000u) | rd16(esi + 8u);
    if ((rd8(esi + 0x30u) & 7u) == 1u)
    {
        eax = (rd8(esi + 0x30u) & 7u) - 1u;
        ecx = t18;
        edx = (uint16_t)t18;
        ebx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t18 * 4u) + 0x138u) >> 0x1fu;
        goto L_1009b64e;
    }
    eax = (rd8(esi + 0x30u) & 7u) - 1u;
    ecx = t18;
    edx = (uint16_t)t18;
    ebx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t18 * 4u) + 0x138u) >> 0x1fu;
    COW_AT(1009b647)
    if (eax != 6u)
    {
        eax = (eax - 6u & 0xffffff00u) | 7u;
        goto L_1009b650;
    }
    eax = (eax - 6u & 0xffffff00u) | 7u;
L_1009b64e: ;
    COW_AT(1009b64e)
    eax = (eax & 0xffffff00u) | 0x17u;
L_1009b650: ;
    COW_AT(1009b650)
    if (((uint8_t)eax & rd8(esi + 0xau)) != (uint8_t)eax)
    {
        edx = (edx & 0xffffff00u) | ((uint8_t)eax & rd8(esi + 0xau));
    }
    else
    {
        edx = (edx & 0xffffff00u) | ((uint8_t)eax & rd8(esi + 0xau));
    COW_AT(1009b659)
        t19 = rd32(esi + 4u);
        wr32(sp0 - 0x54u, t19);
        wr32(sp0 - 0x58u, ecx);
        g->eax = t19;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t20 = cow_cdecl(g, COW_IMG(0x10099a40u), 7, ecx, t19, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    COW_AT(1009b666)
    t23 = (ecx & 0xffff0000u) | rd16(esi + 8u);
    if ((rd16(esi + 0x30u) & 7u) == 0u)
    {
        eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
        ecx = t23;
        ebp = rd32(esi + 4u);
        edi = (uint16_t)t23;
        goto L_1009b697;
    }
    eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
    ecx = t23;
    ebp = rd32(esi + 4u);
    edi = (uint16_t)t23;
    COW_AT(1009b67f)
    if ((uint16_t)eax == 1u) goto L_1009b697;
    COW_AT(1009b685)
    if ((uint16_t)eax == 7u) goto L_1009b697;
    COW_AT(1009b68b)
    if ((uint16_t)eax == 5u) goto L_1009b697;
    COW_AT(1009b691)
    if ((uint16_t)eax != 6u) goto L_1009b6d9;
L_1009b697: ;
    COW_AT(1009b697)
    if ((rd8(esi + 0xau) & 8u) == 0u) goto L_1009b6d9;
    COW_AT(1009b69d)
    if ((uint16_t)ecx < 0x700u) goto L_1009b6d9;
    COW_AT(1009b6a4)
    t24 = rd16(esi) >> 9u;
    wr32(sp0 - 0x54u, t24);
    wr32(sp0 - 0x58u, 0x38u);
    wr32(sp0 - 0x5cu, esi + 0x34u);
    wr32(sp0 - 0x60u, 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t25 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x20u, 0x10u, esi + 0x34u, 0x38u, t24, rd32(sp0 - 0x50u));
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    eax = t25;
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    edx = rd16(esi + 8u);
    loc_54 = sp0 - 0x20u;
L_1009b7b0: ;
    COW_AT(1009b7b0)
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10093430u), ecx, 1, loc_54);
    t32 = g->edx;
    edx = t32;
L_1009b7b5: ;
    COW_AT(1009b7b5)
    t33 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t33 + 0x74u, edi);
    wr32(t33 + 0x78u, ebp);
    t34 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u & 0xefu) << 8u;
    t35 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t35 + 0x124u, t34);
    if ((rd8(esi + 0xau) & 0x20u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(esi + 0xau);
        goto L_1009b94c;
    }
    eax = t35;
    edx = (edx & 0xffffff00u) | rd8(esi + 0xau);
    COW_AT(1009b7f0)
    if ((uint8_t)ebx != 0u) goto L_1009b94c;
    COW_AT(1009b7f8)
    if ((rd16(esi + 0x30u) & 7u) == 5u) goto L_1009b812;
    eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
    COW_AT(1009b806)
    if ((uint16_t)eax == 6u) goto L_1009b812;
    COW_AT(1009b80c)
    if ((uint16_t)eax != 7u) goto L_1009b887;
L_1009b812: ;
    COW_AT(1009b812)
    t36 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) & 0xfffffffeu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t36);
    t37 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t38 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu);
    wr8(t37 + 0xefu, 0u);
    wr32(t37 + 0x12cu, t38 & 0xffffffbfu);
    wr16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf4u, 0u);
    eax = 0u;
L_1009b869: ;
    COW_AT(1009b869)
    wr16((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xfcu, 0u);
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_1009b869;
    }
L_1009b887: ;
    COW_AT(1009b887)
    t39 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xfffffff1u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t39);
    t40 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffffff00u) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0x8fu) | 0x80u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t40);
    t41 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffff00ffu) | ((rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) >> 8u & 0xf8u) << 8u >> 8u | 8u) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t41);
    t42 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) | 0x1000u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t42);
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u, 0u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 8u & 1u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        goto L_1009ce7c;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009b933)
    t43 = (rd32(eax + 0x120u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(eax + 0x120u) >> 8u | 0x40u) << 8u;
    t44 = rd32(sp0 - 0x4cu);
    t45 = rd32(sp0 - 0x50u);
    wr32(eax + 0x120u, t43);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = t44;
    g->edi = t45;
    g->ebp = rd32(sp0 - 0x48u);
    return (eax & 0xffffff00u) | 1u;
L_1009b6d9: ;
    COW_AT(1009b6d9)
    if ((uint16_t)eax != 1u) goto L_1009b771;
    COW_AT(1009b6e3)
    if ((rd8(esi + 0xau) & 0x40u) == 0u) goto L_1009b724;
    COW_AT(1009b6e9)
    if ((uint16_t)ecx < 0x700u) goto L_1009b724;
    COW_AT(1009b6f0)
    t26 = rd16(esi) >> 9u;
    wr32(sp0 - 0x54u, t26);
    wr32(sp0 - 0x58u, 0x48u);
    wr32(sp0 - 0x5cu, esi + 0x44u);
    wr32(sp0 - 0x60u, 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x20u, 0x10u, esi + 0x44u, 0x48u, t26, rd32(sp0 - 0x50u));
    t27 = g->edx;
    eax = sp0 - 0x20u;
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    edx = t27;
L_1009b7af: ;
    COW_AT(1009b7af)
    wr32(sp0 - 0x54u, eax);
    loc_54 = eax;
    goto L_1009b7b0;
L_1009b724: ;
    COW_AT(1009b724)
    if ((uint16_t)eax != 1u) goto L_1009b771;
    COW_AT(1009b72a)
    if ((rd8(esi + 0xau) & 0x40u) == 0u) goto L_1009b771;
    COW_AT(1009b730)
    if ((uint16_t)ecx >= 0x400u) goto L_1009b78f;
    COW_AT(1009b737)
    if (rd8(esi + 0x44u) <= 0x20u)
    {
        eax = esi + 0x44u;
        edx = (edx & 0xffffff00u) | rd8(esi + 0x44u);
        goto L_1009b771;
    }
    eax = esi + 0x44u;
    COW_AT(1009b742)
    t28 = rd16(esi) >> 9u;
    wr32(sp0 - 0x54u, t28);
    wr32(sp0 - 0x58u, 0x48u);
    wr32(sp0 - 0x5cu, eax);
    wr32(sp0 - 0x60u, 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t29 = cow_cdecl(g, COW_IMG(0x100dde40u), 6, sp0 - 0x20u, 0x10u, eax, 0x48u, t28, rd32(sp0 - 0x50u));
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    eax = t29;
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    edx = rd16(esi + 8u);
    loc_54 = sp0 - 0x20u;
    goto L_1009b7b0;
L_1009b771: ;
    COW_AT(1009b771)
    if ((uint16_t)ecx >= 0x400u) goto L_1009b78f;
    COW_AT(1009b778)
    if ((rd8(esi + 0xau) & 8u) == 0u) goto L_1009b78f;
    COW_AT(1009b77e)
    if (rd8(esi + 0x34u) != 1u) goto L_1009b78f;
    COW_AT(1009b784)
    if (rd8(esi + 0x35u) > 0x20u)
    {
        eax = esi + 0x35u;
        edx = (edx & 0xffffff00u) | rd8(esi + 0x35u);
        goto L_1009b7a8;
    }
    eax = esi + 0x35u;
    edx = (edx & 0xffffff00u) | rd8(esi + 0x35u);
L_1009b78f: ;
    COW_AT(1009b78f)
    if ((uint16_t)ecx >= 0x700u) goto L_1009b7b5;
    COW_AT(1009b796)
    wr32(sp0 - 0x54u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t30 = cow_cdecl(g, COW_IMG(0x1008a930u), 1, ebp);
    t31 = g->edx;
    if (t30 != 0u)
    {
        eax = t30;
        edx = t31;
    }
    else
    {
        edx = t31;
    COW_AT(1009b7a3)
        eax = COW_IMG(0x1035bb44u);
    }
L_1009b7a8: ;
    COW_AT(1009b7a8)
    ecx = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    goto L_1009b7af;
L_1009b94c: ;
    COW_AT(1009b94c)
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u) != 0u)
    {
        eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        goto L_1009b9e2;
    }
    eax = (rd16(esi + 8u) & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x145u);
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009b963)
    if ((uint8_t)ebx != 0u) goto L_1009b9dc;
    COW_AT(1009b967)
    if ((rd16(esi + 0x30u) & 7u) == 1u)
    {
        eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
        goto L_1009b983;
    }
    eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
    COW_AT(1009b975)
    if ((uint16_t)eax == 7u) goto L_1009b983;
    COW_AT(1009b97b)
    eax = (eax & 0xffffff00u) | (edx & 7u);
    zf = (uint8_t)((edx & 7u) - 7u) == 0u;
L_1009b989: ;
    COW_AT(1009b989)
    if (zf) goto L_1009b9dc;
    COW_AT(1009b98b)
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t46 = cow_call_regs(g, COW_IMG(0x1008ee30u), eax, ecx, g->edx, 1, 0);
    t47 = g->edx;
    t48 = cow_fastcall(g, COW_IMG(0x10092900u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), t47, 0);
    wr32(sp0 - 0x54u, 0u);
    cow_thiscall(g, COW_IMG(0x1008a350u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, 0u);
    t49 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 8u | 0x80u) << 8u;
    t50 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t51 = rd32(sp0 - 0x44u);
    t52 = rd32(sp0 - 0x48u);
    t53 = rd32(sp0 - 0x4cu);
    t54 = rd32(sp0 - 0x50u);
    wr32(t50 + 0x12cu, t49);
    g->ebx = t51;
    g->esi = t53;
    g->edi = t54;
    g->ebp = t52;
    return t50 & 0xffffff00u;
L_1009b983: ;
    COW_AT(1009b983)
    eax = (eax & 0xffffff00u) | (edx & 0x17u);
    zf = (uint8_t)((edx & 0x17u) - 0x17u) == 0u;
    goto L_1009b989;
L_1009b9dc: ;
    COW_AT(1009b9dc)
    wr8(ecx + 0x145u, (uint8_t)edx);
L_1009b9e2: ;
    COW_AT(1009b9e2)
    if ((uint8_t)ebx == 0u) goto L_1009ba00;
    COW_AT(1009b9e6)
    if (!(rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) & 1u))
    {
        ecx = rd16(esi + 8u);
        goto L_1009ba00;
    }
    ecx = rd16(esi + 8u);
    COW_AT(1009b9fc)
    eax = (eax & 0xffffff00u) | 1u;
L_1009ba02: ;
    COW_AT(1009ba02)
    if (!(rd8(esi + 0xau) & 1u)) goto L_1009bce7;
    COW_AT(1009ba0c)
    if ((uint8_t)eax != 0u) goto L_1009bce7;
    COW_AT(1009ba14)
    t55 = rd32(esi + 0x14u);
    wr32(sp0 - 0x28u, t55);
    t56 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    d57 = (double)rdf32(esi + 0xcu);
    d58 = (double)rdf32(esi + 0x10u);
    wrf32(t56 + 0x44u, (float)d57);
    wrf32(t56 + 0x48u, (float)d58);
    wr32(t56 + 0x4cu, t55);
    if ((ebp & 0xff000000u) == 0x1000000u)
    {
    COW_AT(1009ba4e)
        if ((int8_t)(rd32(esi + 0x18u) >> 8u) >= 0)
        {
            eax = rd32(esi + 0x18u);
    COW_AT(1009ba55)
            if ((rd16(esi + 0x30u) & 7u) != 2u)
            {
                eax = (eax & 0xffff0000u) | (rd16(esi + 0x30u) & 7u);
    COW_AT(1009ba63)
                if ((uint16_t)eax != 3u)
                {
    COW_AT(1009ba69)
                    t59 = rd32(esi + 0x14u);
                    t60 = rd32(esi + 0x10u);
                    t61 = rd32(esi + 0xcu);
                    wr32(sp0 + 0xcu, t59);
                    wr32(sp0 - 0x40u, t60);
                    wr32(sp0 - 0x3cu, t61);
                    wr32(sp0 - 0x54u, sp0 - 0x34u);
                    t62 = rd32(sp0 + 0xcu);
                    wr32(sp0 - 0x58u, t62);
                    wr32(sp0 - 0x5cu, t60);
                    wr32(sp0 - 0x60u, t61);
                    g->eax = t61;
                    g->esp = sp0 - 0x50u;
                    t63 = cow_thiscall(g, COW_IMG(0x10181300u), rd32(COW_IMG(0x10631f24u)), 4, t61, t60, t62, sp0 - 0x34u);
                    if ((uint8_t)t63 == 1u)
                    {
    COW_AT(1009baa1)
                        t64 = rd32(sp0 - 0x34u);
                        wr32(esi + 0x10u, t64);
                    }
                }
            }
        }
    }
    COW_AT(1009baa8)
    d65 = (double)(float)(double)rdf32(esi + 0x14u);
    wrf32(sp0 - 0x28u, (float)d65);
    d66 = (double)rdf32(esi + 0xcu);
    t67 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t68 = rd16(esi + 8u);
    d69 = (double)rdf32(esi + 0x14u);
    d70 = (double)rdf32(esi + 0x10u);
    wrf32(t67 + 0x24u, (float)d66);
    wrf32(t67 + 0x28u, (float)d70);
    wrf32(t67 + 0x2cu, (float)d69);
    t71 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wrf32(t71 + 4u, (float)d66);
    wrf32(t71 + 8u, (float)d70);
    wr32(t71 + 0xcu, cow_f2bits(d65));
    t72 = (t68 & 0xffffff00u) | rd8(esi + 0xbu);
    wr32(sp0 - 0x54u, t72);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x100dd990u), 1, t72);
    d73 = cow_take_float(g);
    t74 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t74 + 0x34u, 0u);
    wrf32(t74 + 0x38u, (float)d73);
    wr32(t74 + 0x3cu, 0u);
    t75 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t75 + 0x14u, 0u);
    wrf32(t75 + 0x18u, (float)d73);
    wr32(t75 + 0x1cu, 0u);
    t76 = rd8(esi + 0x1cu);
    wr32(sp0 + 0xcu, t76);
    d77 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x15cu, (float)d77);
    t78 = rd8(esi + 0x1du);
    t79 = rd16(esi + 8u);
    wr32(sp0 + 0xcu, t78);
    d80 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(rd32(COW_IMG(0x10480af0u) + t79 * 4u) + 0x9cu, (float)d80);
    t81 = rd16(esi + 0x18u) & 0x1fffu;
    wr32(sp0 - 0x54u, t81);
    cow_thiscall(g, COW_IMG(0x1008cd20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, t81);
    t82 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xdu << 0x13u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x80000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t82);
    t83 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) ^ ((rd32(esi + 0x18u) >> 0xeu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x40000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t83);
    t84 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x18u) >> 0xfu << 0x14u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x100000u);
    t85 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t86 = rd32(esi + 0x18u);
    t87 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
    wr32(t85 + 0x120u, t84);
    if ((uint8_t)ebx != 0u)
    {
        eax = t85;
        ecx = (t86 >> 0xfu << 0x14u ^ t87) & 0x100000u;
    }
    else
    {
    COW_AT(1009bc37)
        wr16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1f8u, rd32(esi + 0x18u) >> 0x11u);
        t88 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ (((uint32_t)rd8(esi + 0x20u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x2000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t88);
        t89 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 1u << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x4000u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t89);
        t90 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 2u << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x40000u);
        t91 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        t92 = rd32(esi + 0x20u);
        t93 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
        wr32(t91 + 0x120u, t90);
        eax = t91;
        ecx = (t92 >> 2u << 0x12u ^ t93) & 0x40000u;
    }
L_1009bce9: ;
    COW_AT(1009bce9)
    if ((rd8(esi + 0xau) & 2u) != 0u)
    {
    COW_AT(1009bcf3)
        if ((uint8_t)ebx == 0u)
        {
    COW_AT(1009bcfb)
            t94 = rd32(esi + 0x2cu);
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x188u, t94);
            t95 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ (((uint32_t)rd8(esi + 0x20u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x2000u);
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t95);
            t96 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 1u << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x4000u);
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t96);
            t97 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) ^ ((rd32(esi + 0x20u) >> 2u << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x40000u);
            t98 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
            t99 = rd32(esi + 0x20u);
            t100 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
            wr32(t98 + 0x120u, t97);
            eax = t98;
            ecx = (t99 >> 2u << 0x12u ^ t100) & 0x40000u;
        }
    }
    COW_AT(1009bd9f)
    if ((rd8(esi + 0xau) & 4u) == 0u) goto L_1009c8f5;
    COW_AT(1009bda9)
    if ((uint8_t)ebx != 0u) goto L_1009ce7c;
    COW_AT(1009bdb1)
    t101 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
    t102 = t101 ^ (((uint32_t)rd8(esi + 0x20u) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x2000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t102);
    t103 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
    t104 = t103 ^ ((rd32(esi + 0x20u) >> 1u << 0xeu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x4000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t104);
    t105 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
    t106 = t105 ^ ((rd32(esi + 0x20u) >> 2u << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x40000u);
    t107 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t107 + 0x120u, t106);
    if (rd8(esi + 0x20u) & 1u) goto L_1009be78;
    COW_AT(1009be4c)
    if ((rd32(esi + 0x28u) & 0x4000000u) != 0u) goto L_1009be78;
    COW_AT(1009be55)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    ecx = ((uint32_t)rd8(esi + 0x2au) << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x6000u;
L_1009be95: ;
    COW_AT(1009be95)
    t108 = rd32(eax + 0x124u) ^ ecx;
    wr32(eax + 0x124u, t108);
    t109 = rd32(esi + 0x20u) >> 5u & 7u;
    wr32(sp0 - 0x54u, t109);
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10097a20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), 1, t109);
    t110 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u);
    t111 = t110 ^ ((rd32(esi + 0x20u) >> 8u << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u)) & 0x400000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u, t111);
    t112 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr8(sp0 + 0xcu, rd32(esi + 0x20u) >> 9u & 3u);
    t113 = (rd32(t112 + 0x120u) & 0x3fffffffu) ^ (uint32_t)(uint8_t)rd32(sp0 + 0xcu) << 0x1eu;
    wr32(t112 + 0x120u, t113);
    t114 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffefffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t114);
    t115 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xffdfffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t115);
    t116 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xff7fffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t116);
    t117 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u);
    t118 = t117 ^ ((rd32(esi + 0x20u) >> 0xdu << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x1000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t118);
    t119 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u);
    t120 = t119 ^ ((rd32(esi + 0x20u) >> 0xeu << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x400000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t120);
    t121 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u);
    t122 = t121 ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0xfu) << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0x2000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t122);
    t123 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xfbffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t123);
    t124 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xf7ffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t124);
    t125 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u) & 0xefffffffu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u, t125);
    t126 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u) & 0xfffffff7u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x140u, t126);
    t127 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x13u) << 4u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10u);
    t128 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr32(t128 + 0x128u, t127);
    if (!(rd8(esi + 0x28u) & 1u))
    {
    COW_AT(1009c0ec)
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x14u) << 5u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x20u);
        edx = ((uint32_t)(int8_t)(rd32(esi + 0x20u) >> 0x14u) << 5u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x20u;
    }
    else
    {
    COW_AT(1009c0d4)
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) | 0x20u;
        edx = rd16(esi + 8u);
    }
    COW_AT(1009c112)
    wr32(eax + 0x128u, ecx);
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xecu, rd8(esi + 0x1eu));
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 1u & 1u))
    {
        eax = rd16(esi + 8u);
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 1u;
    COW_AT(1009c148)
        if (!(rd8(esi + 0x28u) & 1u)) goto L_1009c168;
    COW_AT(1009c14e)
        if (rd8(esi + 0x1fu) == 0x21u) goto L_1009c173;
        eax = (eax & 0xffffff00u) | rd8(esi + 0x1fu);
    COW_AT(1009c155)
        if ((uint8_t)eax == 0x2fu) goto L_1009c173;
    COW_AT(1009c159)
        wr32(sp0 - 0x54u, (uint8_t)eax);
        g->eax = (uint8_t)eax;
        g->esp = sp0 - 0x50u;
        t129 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, (uint8_t)eax);
        t130 = g->ecx;
        if ((uint8_t)t129 != 0u) goto L_1009c173;
        ecx = t130;
L_1009c168: ;
    COW_AT(1009c168)
        t131 = rd8(esi + 0x1fu);
        wr32(ecx + 0x16cu, t131);
    }
L_1009c173: ;
    COW_AT(1009c173)
    t132 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)rd8(esi + 0x23u) << 0xbu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x3800u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t132);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1d4u, 0u);
    t133 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) >> 8u & 0xbfu) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t133);
    t134 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1cu << 0x10u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x10000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t134);
    t135 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1du << 6u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x40u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t135);
    t136 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x15u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x100u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t136);
    t137 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x20u) >> 0x1eu << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 4u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t137);
    t138 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x27u) << 8u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x100u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t138);
    t139 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x20u) >> 4u << 9u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x200u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t139);
    t140 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x16u << 0xau ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x400u);
    t141 = rd32(esi + 0x28u);
    t142 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t140);
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1ffu, rd8(esi + 0x29u));
    t143 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x20u) >> 0x1fu << 9u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 0x200u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t143);
    t144 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x19u << 0xau ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t144);
    t145 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1bu << 0xdu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t145);
    t146 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x24u) >> 0x1cu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000u);
    t147 = rd32(esi + 0x24u);
    t148 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t146);
    t149 = rd32(esi + 0x24u) >> 0x1du & 1u;
    wr32(sp0 - 0x54u, t149);
    t150 = rd16(esi + 8u);
    wr32(sp0 - 0x58u, t150);
    g->eax = t150;
    g->esp = sp0 - 0x50u;
    t151 = cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t149, 1, 2, t150, t149);
    t152 = rd32(esi + 0x24u) >> 0x1eu & 1u;
    wr32(sp0 - 0x5cu, t152);
    t153 = rd16(esi + 8u);
    wr32(sp0 - 0x60u, t153);
    g->esp = sp0 - 0x58u;
    cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, t153, 1, 2, t153, t152);
    t154 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd32(esi + 0x24u) >> 0x1fu << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0x800000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t154);
    t155 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 2u << 0x17u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x800000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t155);
    t156 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 3u << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x1000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t156);
    t157 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 4u << 0x19u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x2000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t157);
    t158 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ ((rd32(esi + 0x28u) >> 5u << 0x1bu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x8000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t158);
    t159 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)(rd32(esi + 0x28u) >> 6u) << 0x1eu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x40000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t159);
    t160 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0x7fffffffu) ^ (uint32_t)(int8_t)(rd32(esi + 0x28u) >> 0x19u & 1u) << 0x1fu;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t160);
    t161 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) ^ (((uint32_t)(int8_t)rd8(esi + 0x28u) << 0x16u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu)) & 0x400000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t161);
    t162 = (rd32(esi + 0x28u) >> 7u & 1u) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xfffffffeu);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t162);
    t163 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x1au << 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 4u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t163);
    t164 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x1bu << 7u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x80u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t164);
    t165 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x1eu << 0xfu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x8000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t165);
    if ((rd32(esi + 0x28u) & 0x10000000u) == 0u)
    {
    COW_AT(1009c645)
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) & 0xffffffbfu;
    }
    else
    {
    COW_AT(1009c62d)
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) | 0x40u;
    }
    COW_AT(1009c65b)
    wr32(eax + 0x120u, ecx);
    if (!(rd8(esi + 0x22u) & 1u))
    {
    COW_AT(1009c6a1)
        t167 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) ^ ((rd32(esi + 0x28u) >> 0x1du << 3u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u)) & 8u);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t167);
        t168 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xffefffffu;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t168);
    }
    else
    {
    COW_AT(1009c668)
        t166 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) & 0xfffffff7u;
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u, t166);
        wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) | 0x100000u);
    }
    COW_AT(1009c6f2)
    t169 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ (((uint32_t)rd8(esi + 0x2bu) << 0xcu ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x1000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t169);
    t170 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) & 0xffff00ffu) | (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) >> 8u & 0xdfu) << 8u;
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t170);
    if (rd8(esi + 0x1au) & 1u)
    {
    COW_AT(1009c740)
        if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 0xeu & 1u))
        {
    COW_AT(1009c75b)
            t171 = rd32(COW_IMG(0x10485630u)) + 1u;
            wr32(COW_IMG(0x10485630u), t171);
            t172 = (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 8u | 0x40u) << 8u;
            wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu, t172);
        }
    }
    COW_AT(1009c784)
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 0x1eu & 1u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(1009c7aa)
        wr8(eax + 0x294u, 0u);
        wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x1dbu, rd8(esi + 0x24u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(1009c79f)
        wr8(eax + 0x294u, rd8(esi + 0x24u));
    }
    COW_AT(1009c7c7)
    t173 = rd8(esi + 0x25u);
    t174 = rd16(esi + 8u);
    wr32(sp0 + 0xcu, t173);
    t175 = rd32(COW_IMG(0x10480af0u) + t174 * 4u);
    d176 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a378u)));
    wrf32(t175 + 0x208u, (float)d176);
    t177 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu) ^ ((rd16(esi + 0x26u) >> 4u << 0x18u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu)) & 0xf000000u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x13cu, t177);
    wr8(sp0 + 0xcu, rd8(esi + 0x26u) & 0xfu);
    t178 = (uint8_t)rd32(sp0 + 0xcu);
    t179 = t178 >> 6u & 1u;
    wr32(sp0 - 0x54u, t179);
    t180 = t178 >> 4u & 3u;
    wr32(sp0 - 0x58u, t180);
    wr32(sp0 - 0x5cu, t178 & 0xfu);
    g->esp = sp0 - 0x50u;
    cow_fastcall(g, COW_IMG(0x1009ad20u), rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u), t180, 3, t178 & 0xfu, t180, t179);
    t181 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u) ^ ((rd32(esi + 0x28u) >> 0x1fu << 0x12u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u)) & 0x40000u);
    t182 = rd32(esi + 0x28u);
    t183 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x130u, t181);
    t184 = rd32(esi + 0x28u) >> 0x13u & 3u;
    wr32(sp0 - 0x54u, t184);
    t185 = rd16(esi + 8u);
    wr32(sp0 - 0x58u, t185);
    g->ecx = t185;
    cow_call_regs(g, COW_IMG(0x1008aa80u), g->eax, g->ecx, (t182 >> 0x1fu << 0x12u ^ t183) & 0x40000u, 1, 2, t185, t184);
    t186 = g->ecx;
    t187 = rd32(esi + 0x20u) >> 0x11u & 1u;
    wr32(sp0 - 0x5cu, t187);
    t188 = rd16(esi + 8u);
    wr32(sp0 - 0x60u, t188);
    g->eax = t188;
    g->esp = sp0 - 0x58u;
    t189 = cow_call_regs(g, COW_IMG(0x1008aad0u), g->eax, g->ecx, t187, 1, 2, t188, t187);
    t190 = rd32(esi + 0x20u) >> 0x12u & 1u;
    wr32(sp0 - 0x64u, t190);
    t191 = rd16(esi + 8u);
    wr32(sp0 - 0x68u, t191);
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x1008ab20u), g->eax, g->ecx, t191, 1, 2, t191, t190);
    t192 = g->edx;
    t193 = rd32(esi + 0x20u) >> 0xbu & 1u;
    wr32(sp0 - 0x6cu, t193);
    t194 = rd16(esi + 8u);
    wr32(sp0 - 0x70u, t194);
    g->esp = sp0 - 0x68u;
    cow_thiscall_cdecl(g, COW_IMG(0x1008ab70u), t194, 2, t194, t193);
    t195 = g->ecx;
    t196 = rd32(esi + 0x20u) >> 0xcu & 1u;
    wr32(sp0 - 0x74u, t196);
    t197 = rd16(esi + 8u);
    wr32(sp0 - 0x78u, t197);
    g->eax = t197;
    g->ecx = t195;
    g->esp = sp0 - 0x70u;
    t198 = cow_call_regs(g, COW_IMG(0x1008aba0u), g->eax, g->ecx, t196, 1, 2, t197, t196);
    t199 = g->ecx;
    eax = t198;
    ecx = t199;
L_1009c907: ;
    COW_AT(1009c907)
    if ((rd8(esi + 0x30u) & 7u) > 7u)
    {
        eax = rd8(esi + 0x30u) & 7u;
        goto L_1009ce7c;
    }
    eax = rd8(esi + 0x30u) & 7u;
    COW_AT(1009c916)
    t200 = rd32(COW_IMG(0x1009ce88u) + eax * 4u);
    switch (t200 - RD)
    {
    case 0x1009c91du: goto L_1009c91d;
    case 0x1009c99cu: goto L_1009c99c;
    case 0x1009cb37u: goto L_1009cb37;
    case 0x1009cbd6u: goto L_1009cbd6;
    case 0x1009cc43u: goto L_1009cc43;
    case 0x1009cd38u: goto L_1009cd38;
    case 0x1009cda2u: goto L_1009cda2;
    case 0x1009ce50u: goto L_1009ce50;
    default: rt_fatal(g, COW_IMG(0x1009c916u), "switch");
    }
    return 0;
L_1009ba00: ;
    COW_AT(1009ba00)
    eax = eax & 0xffffff00u;
    goto L_1009ba02;
L_1009bce7: ;
    COW_AT(1009bce7)
    goto L_1009bce9;
L_1009be78: ;
    COW_AT(1009be78)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    ecx = (rd8(esi + 0x2au) * 2u ^ rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x124u)) & 0xeu;
    goto L_1009be95;
L_1009c8f5: ;
    COW_AT(1009c8f5)
    if ((uint8_t)ebx != 0u) goto L_1009ce7c;
    COW_AT(1009c8fd)
    goto L_1009c907;
L_1009c91d: ;
    COW_AT(1009c91d)
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 0x1eu & 1u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd16(esi + 8u);
    COW_AT(1009c958)
        if (rd32(eax + 0x120u) >> 5u & 1u)
        {
            edx = rd32(eax + 0x120u) >> 5u;
        }
        else
        {
            edx = rd32(eax + 0x120u) >> 5u;
    COW_AT(1009c966)
            if (rd16(eax + 0x210u) == 0u)
            {
    COW_AT(1009c96f)
                wr8(eax + 0xeeu, 1u);
            }
        }
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        edx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 0x1eu;
    COW_AT(1009c938)
        if (rd32(eax + 0x120u) >> 5u & 1u)
        {
            ecx = rd32(eax + 0x120u) >> 5u;
        }
        else
        {
            ecx = rd32(eax + 0x120u) >> 5u;
    COW_AT(1009c946)
            if (rd16(eax + 0x210u) == 0u)
            {
    COW_AT(1009c94f)
                wr8(eax + 0xeeu, 0u);
            }
        }
    }
    COW_AT(1009c976)
    if ((rd8(esi + 0xau) & 0x10u) == 0u) goto L_1009ce7c;
    COW_AT(1009c980)
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, esi + 0x32u);
    t233 = (ecx & 0xffff0000u) | rd16(esi + 8u);
    wr32(sp0 - 0x5cu, t233);
    g->eax = esi + 0x32u;
    g->esp = sp0 - 0x40u;
    t234 = cow_thiscall_cdecl(g, COW_IMG(0x1009afe0u), t233, 7, t233, esi + 0x32u, 1u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return (t234 & 0xffffff00u) | 1u;
L_1009c99c: ;
    COW_AT(1009c99c)
    if (!(rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x120u) >> 5u & 1u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009c9b7)
        wr8(eax + 0xeeu, 2u);
    }
    COW_AT(1009c9be)
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 6u & 1u)
    {
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 6u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x12cu) >> 6u;
    COW_AT(1009c9d9)
        if (rd16(esi + 0x32u) < 0x213u)
        {
            ecx = (ecx & 0xffff0000u) | rd16(esi + 0x32u);
            goto L_1009c9fd;
        }
        ecx = (ecx & 0xffff0000u) | rd16(esi + 0x32u);
    COW_AT(1009c9e4)
        if ((uint16_t)ecx > 0x228u) goto L_1009c9fd;
    COW_AT(1009c9eb)
        if (rd8(eax + 0xefu) == 3u) goto L_1009ca14;
    COW_AT(1009c9f4)
        wr8(eax + 0xefu, 3u);
L_1009ca0e: ;
    COW_AT(1009ca0e)
        wr32(eax + 0x120u, rd32(eax + 0x120u) | 1u);
    }
L_1009ca14: ;
    COW_AT(1009ca14)
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xfcu) == rd16(esi + 0x32u))
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = (ecx & 0xffff0000u) | rd16(esi + 0x32u);
    COW_AT(1009ca2e)
        wr16(eax + 0xf4u, rd16(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, (uint16_t)ecx);
    }
    COW_AT(1009ca3c)
    if (rd16(esi + 0x32u) < 0x32u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
        goto L_1009ca5e;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
    COW_AT(1009ca46)
    if ((uint16_t)eax > 0x3bu) goto L_1009ca5e;
    COW_AT(1009ca4c)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
L_1009caff: ;
    COW_AT(1009caff)
    wr32(eax + 0x128u, rd32(eax + 0x128u) | 8u);
L_1009cb05: ;
    COW_AT(1009cb05)
    if (rd16(esi + 0x32u) < 0x18u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
        goto L_1009ce7c;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
    cf = rd16(esi + 0x32u) < 0x18u;
    zf = (uint16_t)(rd16(esi + 0x32u) - 0x18u) == 0u;
    COW_AT(1009cb13)
    if (!cf && !zf) goto L_1009ce7c;
    COW_AT(1009cb19)
    t228 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t229 = rd32(sp0 - 0x44u);
    t230 = rd32(sp0 - 0x48u);
    t231 = rd32(sp0 - 0x4cu);
    t232 = rd32(sp0 - 0x50u);
    wr8(t228 + 0xf6u, 1u);
    g->ebx = t229;
    g->esi = t231;
    g->edi = t232;
    g->ebp = t230;
    return (t228 & 0xffffff00u) | 1u;
L_1009c9fd: ;
    COW_AT(1009c9fd)
    if (rd8(eax + 0xefu) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0xefu);
        goto L_1009ca14;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0xefu);
    COW_AT(1009ca07)
    wr8(eax + 0xefu, 0u);
    goto L_1009ca0e;
L_1009ca5e: ;
    COW_AT(1009ca5e)
    if ((uint16_t)eax < 0x974u) goto L_1009ca6e;
    COW_AT(1009ca64)
    if ((uint16_t)eax <= 0x978u) goto L_1009caf2;
L_1009ca6e: ;
    COW_AT(1009ca6e)
    if ((uint16_t)eax < 0x737u) goto L_1009ca89;
    COW_AT(1009ca74)
    if ((uint16_t)eax > 0x746u) goto L_1009ca89;
    COW_AT(1009ca7a)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    goto L_1009caff;
L_1009ca89: ;
    COW_AT(1009ca89)
    if ((uint16_t)eax < 0x9bau) goto L_1009caa4;
    COW_AT(1009ca8f)
    if ((uint16_t)eax > 0x9beu) goto L_1009caa4;
    COW_AT(1009ca95)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    goto L_1009caff;
L_1009caa4: ;
    COW_AT(1009caa4)
    if ((uint16_t)eax < 0x3c0u) goto L_1009cab0;
    COW_AT(1009caaa)
    if ((uint16_t)eax <= 0x3c9u) goto L_1009caf2;
L_1009cab0: ;
    COW_AT(1009cab0)
    if ((uint16_t)eax < 0x32eu) goto L_1009cacb;
    COW_AT(1009cab6)
    if ((uint16_t)eax > 0x331u) goto L_1009cacb;
    COW_AT(1009cabc)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    goto L_1009caff;
L_1009cacb: ;
    COW_AT(1009cacb)
    if ((uint16_t)eax < 0x979u) goto L_1009cae6;
    COW_AT(1009cad1)
    if ((uint16_t)eax > 0x97du) goto L_1009cae6;
    COW_AT(1009cad7)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    goto L_1009caff;
L_1009cae6: ;
    COW_AT(1009cae6)
    if ((uint16_t)eax < 0x9bfu) goto L_1009cb05;
    COW_AT(1009caec)
    if ((uint16_t)eax > 0x9c3u) goto L_1009cb05;
L_1009caf2: ;
    COW_AT(1009caf2)
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    goto L_1009caff;
L_1009cb37: ;
    COW_AT(1009cb37)
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xefu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cb4e)
        t222 = rd32(eax + 0x120u);
        wr8(eax + 0xefu, 0u);
        wr32(eax + 0x120u, t222 | 1u);
    }
    COW_AT(1009cb63)
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xeeu, 3u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xfcu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cb8d)
        wr16(eax + 0xf4u, rd16(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, 0u);
    }
    COW_AT(1009cb9b)
    t223 = rd32(esi + 0x34u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf8u, t223);
    t224 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) | 8u;
    t225 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t226 = rd32(sp0 - 0x4cu);
    t227 = rd32(sp0 - 0x50u);
    wr32(t225 + 0x128u, t224);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = t226;
    g->edi = t227;
    g->ebp = rd32(sp0 - 0x48u);
    return (t225 & 0xffffff00u) | 1u;
L_1009cbd6: ;
    COW_AT(1009cbd6)
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xefu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cbed)
        t214 = rd32(eax + 0x120u);
        wr8(eax + 0xefu, 0u);
        wr32(eax + 0x120u, t214 | 1u);
    }
    COW_AT(1009cc02)
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xeeu, 4u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xfcu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cc30)
        wr16(eax + 0xf4u, rd16(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, 0u);
    }
L_1009ccc9: ;
    COW_AT(1009ccc9)
    t215 = rd32(esi + 0x34u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf8u, t215);
    t216 = rd32(esi + 0x38u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x184u, t216);
    t217 = rd16(esi + 0x3cu) + rd32(esi + 0x38u);
    wr32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x180u, t217);
    t218 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x128u) | 8u;
    t219 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t220 = rd32(sp0 - 0x4cu);
    t221 = rd32(sp0 - 0x50u);
    wr32(t219 + 0x128u, t218);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = t220;
    g->edi = t221;
    g->ebp = rd32(sp0 - 0x48u);
    return (t219 & 0xffffff00u) | 1u;
L_1009cc43: ;
    COW_AT(1009cc43)
    if (rd8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xefu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cc5a)
        t213 = rd32(eax + 0x120u);
        wr8(eax + 0xefu, 0u);
        wr32(eax + 0x120u, t213 | 1u);
    }
    COW_AT(1009cc6f)
    wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xeeu, 5u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xfcu) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cc99)
        wr16(eax + 0xf4u, rd16(eax + 0xf4u) | 1u);
        wr16(eax + 0xfcu, 0u);
    }
    COW_AT(1009cca7)
    if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf8u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        ecx = rd32(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf8u);
    COW_AT(1009ccbe)
        if (ecx != rd32(esi + 0x34u))
        {
    COW_AT(1009ccc3)
            wr32(eax + 0x120u, rd32(eax + 0x120u) | 1u);
        }
    }
    goto L_1009ccc9;
L_1009cd38: ;
    COW_AT(1009cd38)
    t211 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    wr8(t211 + 0xeeu, 6u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x10eu) != ((rd16(esi + 0x32u) & 0xffff00ffu) | (rd16(esi + 0x32u) >> 8u | 0x90u) << 8u))
    {
        eax = (((t211 & 0xffff0000u) | rd16(esi + 0x32u)) & 0xffff00ffu) | (rd16(esi + 0x32u) >> 8u | 0x90u) << 8u;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cd69)
        wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 2u);
        wr16(ecx + 0x10eu, (uint16_t)eax);
    }
    COW_AT(1009cd77)
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
        goto L_1009ce7c;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cd91)
    t212 = rd32(sp0 - 0x50u);
    wr16(eax + 0xfcu, 0u);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = t212;
    g->ebp = rd32(sp0 - 0x48u);
    return (eax & 0xffffff00u) | 1u;
L_1009cda2: ;
    COW_AT(1009cda2)
    t205 = rd16(esi + 8u);
    wr8(rd32(COW_IMG(0x10480af0u) + t205 * 4u) + 0xeeu, 7u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0x10eu) != ((rd16(esi + 0x32u) & 0xffff00ffu) | (rd16(esi + 0x32u) >> 8u | 0x90u) << 8u))
    {
        eax = (((t205 & 0xffff0000u) | rd16(esi + 0x32u)) & 0xffff00ffu) | (rd16(esi + 0x32u) >> 8u | 0x90u) << 8u;
        ecx = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cdd3)
        wr8(ecx + 0xf5u, rd8(ecx + 0xf5u) | 2u);
        wr16(ecx + 0x10eu, (uint16_t)eax);
    }
    COW_AT(1009cde1)
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    COW_AT(1009cdf7)
        wr16(eax + 0xfcu, 0u);
    }
    COW_AT(1009cdfe)
    if (rd16(esi + 0x32u) < 0x7b8u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
    COW_AT(1009ce08)
        if ((uint16_t)eax <= 0x7cbu)
        {
    COW_AT(1009ce0e)
            wr8(rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u) + 0xf6u, 2u);
        }
    }
    COW_AT(1009ce22)
    if (rd16(esi + 0x32u) < 0x7d3u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
        goto L_1009ce7c;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x32u);
    COW_AT(1009ce2c)
    if ((uint16_t)eax > 0x7dau) goto L_1009ce7c;
    COW_AT(1009ce32)
    t206 = rd16(esi + 8u);
    t207 = rd32(sp0 - 0x44u);
    t208 = rd32(sp0 - 0x48u);
    t209 = rd32(sp0 - 0x4cu);
    t210 = rd32(sp0 - 0x50u);
    wr8(rd32(COW_IMG(0x10480af0u) + t206 * 4u) + 0xf6u, 2u);
    g->ebx = t207;
    g->esi = t209;
    g->edi = t210;
    g->ebp = t208;
    return (t206 & 0xffffff00u) | 1u;
L_1009ce50: ;
    COW_AT(1009ce50)
    t201 = rd32(COW_IMG(0x10480af0u) + rd16(esi + 8u) * 4u);
    t202 = rd16(esi + 8u);
    wr8(t201 + 0xeeu, 8u);
    if ((rd8(esi + 0xau) & 0x10u) == 0u)
    {
        eax = (t201 & 0xffffff00u) | rd8(esi + 0xau);
    }
    else
    {
        eax = (t201 & 0xffffff00u) | rd8(esi + 0xau);
        edx = t202;
    COW_AT(1009ce6b)
        wr32(sp0 - 0x54u, esi + 0x32u);
        t203 = (edx & 0xffff0000u) | rd16(esi + 8u);
        wr32(sp0 - 0x58u, t203);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t204 = cow_call_regs(g, COW_IMG(0x1009b3f0u), g->eax, g->ecx, t203, 1, 2, t203, esi + 0x32u);
        eax = t204;
    }
L_1009ce7c: ;
    COW_AT(1009ce7c)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x4cu);
    g->edi = rd32(sp0 - 0x50u);
    g->ebp = rd32(sp0 - 0x48u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1009b550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1009b562u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b56cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1009b57fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b587u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b598u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5a9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5b2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5b4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5c1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b5e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b60eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b61fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b647u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b64eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b650u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b659u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b666u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b67fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b685u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b68bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b691u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b697u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b69du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b6a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b6d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b6e3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b6e9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b6f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b724u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b72au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b730u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b737u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b742u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b771u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b778u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b77eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b784u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b78fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b796u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7a3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7a8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7afu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7b0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7b5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7f0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b7f8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b806u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b80cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b812u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b869u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009b887u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b933u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b94cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b963u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b967u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b975u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b97bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b983u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b989u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b98bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b9dcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b9e2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b9e6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009b9fcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba00u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba02u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba0cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba14u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba55u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba63u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ba69u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009baa1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x1009baa8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009bc37u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bce7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009bce9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bcf3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bcfbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bd9fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bda9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009bdb1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009be4cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009be55u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009be78u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009be95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c0d4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c0ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c112u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c148u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c14eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c155u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c159u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c168u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c173u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c62du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c645u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c65bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c668u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 0xfffffff7u;
        (void)sp0;
        return 1;
    }
    case 0x1009c6a1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c6f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c740u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c75bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c784u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c79fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c7aau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c7c7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c8f5u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c8fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c907u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c916u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c91du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c938u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c946u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c94fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009c958u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c966u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009c96fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009c976u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009c980u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1009c99cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9b7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9beu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9d9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9e4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9ebu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9f4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009c9fdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca07u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca0eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca14u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca2eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca3cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca46u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca4cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca5eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca64u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca6eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca74u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca7au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca89u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca8fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ca95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009caa4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009caaau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cab0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cab6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cabcu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cacbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cad1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cad7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cae6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009caecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009caf2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009caffu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb05u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb13u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb19u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb37u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb63u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb8du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cb9bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cbd6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cbedu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc02u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc30u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc43u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc5au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc6fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cc99u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cca7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->ebp = 0u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ccbeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ccc3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebx = 1u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009ccc9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->edi = 8u;
        (void)sp0;
        return 1;
    }
    case 0x1009cd38u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cd69u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cd77u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cd91u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cda2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cdd3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cde1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cdf7u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1009cdfeu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce08u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce0eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce22u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce2cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce32u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce50u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce6bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1009ce7cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1009b550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1009b550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
