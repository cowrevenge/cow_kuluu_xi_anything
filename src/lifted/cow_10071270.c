/* f_0x10071270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10071270(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10071294u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071294;
    case 0x10071298u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071298;
    case 0x100712a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712a8;
    case 0x100712c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712c2;
    case 0x100712c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712c7;
    case 0x100712d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712d5;
    case 0x100712e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712e4;
    case 0x100712f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100712f3;
    case 0x1007130cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007130c;
    case 0x10071329u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071329;
    case 0x1007133bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007133b;
    case 0x10071354u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071354;
    case 0x10071372u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071372;
    case 0x10071385u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071385;
    case 0x100713a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100713a2;
    case 0x100713b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100713b4;
    case 0x100713cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100713cf;
    case 0x100713dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100713db;
    case 0x100713f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100713f6;
    case 0x10071402u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071402;
    case 0x1007141du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007141d;
    case 0x10071429u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071429;
    case 0x10071446u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071446;
    case 0x10071458u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071458;
    case 0x10071475u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071475;
    case 0x10071487u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071487;
    case 0x100714a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100714a4;
    case 0x100714b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100714b6;
    case 0x100714d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100714d3;
    case 0x100714edu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100714ed;
    case 0x1007150du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007150d;
    case 0x1007151fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007151f;
    case 0x1007153cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007153c;
    case 0x10071556u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071556;
    case 0x10071573u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071573;
    case 0x10071585u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071585;
    case 0x100715a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100715a2;
    case 0x100715b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100715b4;
    case 0x100715d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100715d1;
    case 0x100715e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100715e3;
    case 0x10071600u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071600;
    case 0x10071612u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071612;
    case 0x1007162fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007162f;
    case 0x10071641u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071641;
    case 0x1007165eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007165e;
    case 0x10071670u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071670;
    case 0x1007168eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007168e;
    case 0x1007169au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007169a;
    case 0x100716bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100716ba;
    case 0x100716ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100716dd;
    case 0x100716fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100716fa;
    case 0x1007170cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007170c;
    case 0x1007172cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007172c;
    case 0x1007174fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007174f;
    case 0x1007176cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007176c;
    case 0x1007177eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007177e;
    case 0x1007179bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007179b;
    case 0x100717adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717ad;
    case 0x100717b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717b4;
    case 0x100717b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717b9;
    case 0x100717d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717d1;
    case 0x100717e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717e0;
    case 0x100717fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100717fd;
    case 0x1007180cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007180c;
    case 0x1007182au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007182a;
    case 0x10071833u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071833;
    case 0x1007183au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007183a;
    case 0x1007183fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007183f;
    case 0x10071855u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071855;
    case 0x1007185cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007185c;
    case 0x1007185eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007185e;
    case 0x10071866u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071866;
    case 0x1007187au: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1007187a;
    case 0x10071880u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_10071880;
    default: break;
    }
#endif

    COW_AT(10071270)
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    edi = ((rd32(self + 4u) >> 7u & 0x7ffffu) << 4u) - 0x10u;
L_10071298: ;
    COW_AT(10071298)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10028720u), 1, 1u);
    t2 = g->edx;
    if ((int32_t)t1 < (int32_t)(edi * 2u))
    {
        eax = t1;
        edx = t2;
        goto L_100712c2;
    }
    ecx = edi * 2u;
    edx = t2;
    COW_AT(100712a8)
    d3 = (double)(int32_t)rd32(rd32(COW_IMG(0x1047d128u)) + 0x4000cu);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032c8d8u)), 0u) & 0x4100u) != 0u) goto L_100712d5;
    eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032c8d8u)), 0u) & 0x4100u;
L_100712c2: ;
    COW_AT(100712c2)
    esi = 4u;
L_100712c7: ;
    COW_AT(100712c7)
    g->eax = eax;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x100740c0u), t4, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (esi != 1u)
    {
        eax = t5;
        edx = t7;
        esi = esi - 1u;
        goto L_100712c7;
    }
    ecx = t6;
    edx = t7;
L_100712d5: ;
    COW_AT(100712d5)
    if ((rd32(self + 4u) & 0x7fu) > 0x5fu) goto L_1007183a;
    eax = rd32(self + 4u) & 0x7fu;
    COW_AT(100712e4)
    t8 = rd32(COW_IMG(0x1007189cu) + rd8(COW_IMG(0x10071914u) + eax) * 4u);
    switch (t8 - RD)
    {
    case 0x100712f3u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100712f3;
    case 0x1007133bu: goto L_1007133b;
    case 0x10071385u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071385;
    case 0x100713b4u: goto L_100713b4;
    case 0x100713dbu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100713db;
    case 0x10071402u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071402;
    case 0x10071429u: goto L_10071429;
    case 0x10071458u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071458;
    case 0x10071487u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071487;
    case 0x100714b6u: goto L_100714b6;
    case 0x100714edu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100714ed;
    case 0x1007151fu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_1007151f;
    case 0x10071556u: goto L_10071556;
    case 0x10071585u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071585;
    case 0x100715b4u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100715b4;
    case 0x100715e3u: goto L_100715e3;
    case 0x10071612u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071612;
    case 0x10071641u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071641;
    case 0x10071670u: goto L_10071670;
    case 0x1007169au: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_1007169a;
    case 0x100716ddu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100716dd;
    case 0x1007170cu: goto L_1007170c;
    case 0x1007174fu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_1007174f;
    case 0x1007177eu: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_1007177e;
    case 0x100717adu: goto L_100717ad;
    case 0x100717b4u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100717b4;
    case 0x100717e0u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_100717e0;
    case 0x1007180cu: goto L_1007180c;
    case 0x10071833u: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_10071833;
    case 0x1007183au: ecx = rd8(COW_IMG(0x10071914u) + eax); goto L_1007183a;
    default: rt_fatal(g, COW_IMG(0x100712ecu), "switch");
    }
    return 0;
L_10071294: ;
    COW_AT(10071294)
    goto L_10071298;
L_100712f3: ;
    COW_AT(100712f3)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x6du;
    g->esp = sp0 - 8u;
    t174 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x6du, 1u, in_edi, in_esi, in_ebp);
    t175 = g->ecx;
    t176 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t174 == 0u)
    {
        ecx = t175;
        edx = t176;
    COW_AT(10071329)
        t180 = ((rd32(0x24u) & 0xffffff00u) | (rd32(0x24u) & 0x80u)) ^ 0x1bu;
        wr32(0x24u, t180);
        eax = t180;
        esi = 0u;
    }
    else
    {
        eax = t174;
        edx = t176;
        esi = t174;
    COW_AT(1007130c)
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
        t177 = g->ecx;
        t178 = g->edx;
        wr32(esi, COW_IMG(0x1032c8acu));
        t179 = ((rd32(esi + 0x24u) & 0xffffff00u) | (rd32(esi + 0x24u) & 0x80u)) ^ 0x1bu;
        wr32(esi + 0x24u, t179);
        eax = t179;
        ecx = t177;
        edx = t178;
    }
L_1007185e: ;
    COW_AT(1007185e)
    if (esi == 0u) goto L_10071294;
    COW_AT(10071866)
    g->edx = rd32(esi);
    t187 = rd32(esi);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t187 + 0x1cu), esi, 1, self);
    t188 = g->ecx;
    t189 = g->edx;
    if (arg1 == 0u)
    {
        ecx = t188;
        edx = t189;
    }
    else
    {
        ecx = t188;
        edx = t189;
    COW_AT(1007187a)
        t190 = rd32(arg1 + 0x14u);
        wr32(esi + 0x28u, t190);
    }
    COW_AT(10071880)
    wr16(esi + 0x1au, (rd16(esi + 0x1au) & 0xfff1u) | 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return esi;
L_1007133b: ;
    COW_AT(1007133b)
    g->eax = eax;
    g->ecx = edi + 0x51u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t167 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x51u, 1u, in_edi, in_esi, in_ebp);
    t168 = g->ecx;
    t169 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t167 == 0u)
    {
        eax = t167;
        ecx = t168;
    COW_AT(10071372)
        t173 = (rd32(0x24u) & 0xffffff80u) ^ 0x5du;
        wr32(0x24u, t173);
        edx = t173;
        esi = 0u;
    }
    else
    {
        eax = t167;
        edx = t169;
        esi = t167;
    COW_AT(10071354)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t170 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
        t171 = g->ecx;
        wr32(esi, COW_IMG(0x1032c880u));
        t172 = (rd32(esi + 0x24u) & 0xffffff80u) ^ 0x5du;
        wr32(esi + 0x24u, t172);
        eax = t170;
        ecx = t171;
        edx = t172;
    }
    goto L_1007185e;
L_10071385: ;
    COW_AT(10071385)
    g->eax = edi + 0x6du;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t161 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x6du, 1u, in_edi, in_esi, in_ebp);
    t162 = g->ecx;
    t163 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t161 == 0u)
    {
        eax = t161;
        ecx = t162;
        edx = t163;
        goto L_10071298;
    }
    eax = t161;
    edx = t163;
    esi = t161;
    COW_AT(100713a2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t164 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t165 = g->ecx;
    t166 = g->edx;
    wr32(esi, COW_IMG(0x1032c8acu));
    eax = t164;
    ecx = t165;
    edx = t166;
    goto L_1007185e;
L_100713b4: ;
    COW_AT(100713b4)
    g->eax = eax;
    g->ecx = edi + 0x30u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t155 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x30u, 1u, in_edi, in_esi, in_ebp);
    t156 = g->ecx;
    t157 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t155 == 0u)
    {
        eax = t155;
        ecx = t156;
        edx = t157;
        goto L_10071298;
    }
    eax = t155;
    edx = t157;
    COW_AT(100713cf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t158 = cow_thiscall(g, COW_IMG(0x10176f60u), eax, 0);
    t159 = g->ecx;
    t160 = g->edx;
    eax = t158;
    ecx = t159;
    edx = t160;
L_1007185c: ;
    COW_AT(1007185c)
    esi = eax;
    goto L_1007185e;
L_100713db: ;
    COW_AT(100713db)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x34u;
    g->esp = sp0 - 8u;
    t149 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x34u, 1u, in_edi, in_esi, in_ebp);
    t150 = g->ecx;
    t151 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t149 == 0u)
    {
        eax = t149;
        ecx = t150;
        edx = t151;
        goto L_10071298;
    }
    eax = t149;
    edx = t151;
    COW_AT(100713f6)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t152 = cow_thiscall(g, COW_IMG(0x10176e80u), eax, 0);
    t153 = g->ecx;
    t154 = g->edx;
    eax = t152;
    ecx = t153;
    edx = t154;
    goto L_1007185c;
L_10071402: ;
    COW_AT(10071402)
    g->eax = edi + 0x30u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t143 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x30u, 1u, in_edi, in_esi, in_ebp);
    t144 = g->ecx;
    t145 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t143 == 0u)
    {
        eax = t143;
        ecx = t144;
        edx = t145;
        goto L_10071298;
    }
    eax = t143;
    edx = t145;
    COW_AT(1007141d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t146 = cow_thiscall(g, COW_IMG(0x10176fe0u), eax, 0);
    t147 = g->ecx;
    t148 = g->edx;
    eax = t146;
    ecx = t147;
    edx = t148;
    goto L_1007185c;
L_10071429: ;
    COW_AT(10071429)
    g->eax = eax;
    g->ecx = edi + 0x70u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t137 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x70u, 1u, in_edi, in_esi, in_ebp);
    t138 = g->ecx;
    t139 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t137 == 0u)
    {
        eax = t137;
        ecx = t138;
        edx = t139;
        goto L_10071298;
    }
    eax = t137;
    edx = t139;
    esi = t137;
    COW_AT(10071446)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t140 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t141 = g->ecx;
    t142 = g->edx;
    wr32(esi, COW_IMG(0x1032c854u));
    eax = t140;
    ecx = t141;
    edx = t142;
    goto L_1007185e;
L_10071458: ;
    COW_AT(10071458)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x52u;
    g->esp = sp0 - 8u;
    t131 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x52u, 1u, in_edi, in_esi, in_ebp);
    t132 = g->ecx;
    t133 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t131 == 0u)
    {
        eax = t131;
        ecx = t132;
        edx = t133;
        goto L_10071298;
    }
    eax = t131;
    edx = t133;
    esi = t131;
    COW_AT(10071475)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t134 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t135 = g->ecx;
    t136 = g->edx;
    wr32(esi, COW_IMG(0x1032c828u));
    eax = t134;
    ecx = t135;
    edx = t136;
    goto L_1007185e;
L_10071487: ;
    COW_AT(10071487)
    g->eax = edi + 0x3cu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t125 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x3cu, 1u, in_edi, in_esi, in_ebp);
    t126 = g->ecx;
    t127 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t125 == 0u)
    {
        eax = t125;
        ecx = t126;
        edx = t127;
        goto L_10071298;
    }
    eax = t125;
    edx = t127;
    esi = t125;
    COW_AT(100714a4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t128 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t129 = g->ecx;
    t130 = g->edx;
    wr32(esi, COW_IMG(0x1032c7fcu));
    eax = t128;
    ecx = t129;
    edx = t130;
    goto L_1007185e;
L_100714b6: ;
    COW_AT(100714b6)
    g->eax = eax;
    g->ecx = edi + 0x40u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t117 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x40u, 1u, in_edi, in_esi, in_ebp);
    t118 = g->ecx;
    t119 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t117 == 0u)
    {
        eax = t117;
        ecx = t118;
        edx = t119;
        goto L_10071298;
    }
    eax = t117;
    edx = t119;
    esi = t117;
    COW_AT(100714d3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t120 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t121 = g->edx;
    t122 = cow_fastcall(g, COW_IMG(0x100220e0u), esi + 0x30u, t121, 0);
    t123 = g->ecx;
    t124 = g->edx;
    wr32(esi, COW_IMG(0x1032c7d0u));
    eax = t122;
    ecx = t123;
    edx = t124;
    goto L_1007185e;
L_100714ed: ;
    COW_AT(100714ed)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x84u;
    g->esp = sp0 - 8u;
    t111 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x84u, 1u, in_edi, in_esi, in_ebp);
    t112 = g->ecx;
    t113 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t111 == 0u)
    {
        eax = t111;
        ecx = t112;
        edx = t113;
        goto L_10071298;
    }
    eax = t111;
    edx = t113;
    esi = t111;
    COW_AT(1007150d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t114 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t115 = g->ecx;
    t116 = g->edx;
    wr32(esi, COW_IMG(0x1032c7a4u));
    eax = t114;
    ecx = t115;
    edx = t116;
    goto L_1007185e;
L_1007151f: ;
    COW_AT(1007151f)
    g->eax = edi + 0x50u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t103 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x50u, 1u, in_edi, in_esi, in_ebp);
    t104 = g->ecx;
    t105 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t103 == 0u)
    {
        eax = t103;
        ecx = t104;
        edx = t105;
        goto L_10071298;
    }
    eax = t103;
    edx = t105;
    esi = t103;
    COW_AT(1007153c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t106 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t107 = g->edx;
    g->edx = t107;
    t108 = cow_thiscall(g, COW_IMG(0x1001cf80u), esi + 0x30u, 0);
    t109 = g->ecx;
    t110 = g->edx;
    wr32(esi, COW_IMG(0x1032c778u));
    eax = t108;
    ecx = t109;
    edx = t110;
    goto L_1007185e;
L_10071556: ;
    COW_AT(10071556)
    g->eax = eax;
    g->ecx = edi + 0x30u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t97 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x30u, 1u, in_edi, in_esi, in_ebp);
    t98 = g->ecx;
    t99 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t97 == 0u)
    {
        eax = t97;
        ecx = t98;
        edx = t99;
        goto L_10071298;
    }
    eax = t97;
    edx = t99;
    esi = t97;
    COW_AT(10071573)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t100 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t101 = g->ecx;
    t102 = g->edx;
    wr32(esi, COW_IMG(0x1032c74cu));
    eax = t100;
    ecx = t101;
    edx = t102;
    goto L_1007185e;
L_10071585: ;
    COW_AT(10071585)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x30u;
    g->esp = sp0 - 8u;
    t91 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x30u, 1u, in_edi, in_esi, in_ebp);
    t92 = g->ecx;
    t93 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t91 == 0u)
    {
        eax = t91;
        ecx = t92;
        edx = t93;
        goto L_10071298;
    }
    eax = t91;
    edx = t93;
    esi = t91;
    COW_AT(100715a2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t94 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t95 = g->ecx;
    t96 = g->edx;
    wr32(esi, COW_IMG(0x1032c720u));
    eax = t94;
    ecx = t95;
    edx = t96;
    goto L_1007185e;
L_100715b4: ;
    COW_AT(100715b4)
    g->eax = edi + 0x50u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t85 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x50u, 1u, in_edi, in_esi, in_ebp);
    t86 = g->ecx;
    t87 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t85 == 0u)
    {
        eax = t85;
        ecx = t86;
        edx = t87;
        goto L_10071298;
    }
    eax = t85;
    edx = t87;
    esi = t85;
    COW_AT(100715d1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t88 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t89 = g->ecx;
    t90 = g->edx;
    wr32(esi, COW_IMG(0x1032c6f4u));
    eax = t88;
    ecx = t89;
    edx = t90;
    goto L_1007185e;
L_100715e3: ;
    COW_AT(100715e3)
    g->eax = eax;
    g->ecx = edi + 0x31u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t79 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x31u, 1u, in_edi, in_esi, in_ebp);
    t80 = g->ecx;
    t81 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t79 == 0u)
    {
        eax = t79;
        ecx = t80;
        edx = t81;
        goto L_10071298;
    }
    eax = t79;
    edx = t81;
    esi = t79;
    COW_AT(10071600)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t82 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t83 = g->ecx;
    t84 = g->edx;
    wr32(esi, COW_IMG(0x1032c6c8u));
    eax = t82;
    ecx = t83;
    edx = t84;
    goto L_1007185e;
L_10071612: ;
    COW_AT(10071612)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x31u;
    g->esp = sp0 - 8u;
    t73 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x31u, 1u, in_edi, in_esi, in_ebp);
    t74 = g->ecx;
    t75 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t73 == 0u)
    {
        eax = t73;
        ecx = t74;
        edx = t75;
        goto L_10071298;
    }
    eax = t73;
    edx = t75;
    esi = t73;
    COW_AT(1007162f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t76 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t77 = g->ecx;
    t78 = g->edx;
    wr32(esi, COW_IMG(0x1032c69cu));
    eax = t76;
    ecx = t77;
    edx = t78;
    goto L_1007185e;
L_10071641: ;
    COW_AT(10071641)
    g->eax = edi + 0x31u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t67 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x31u, 1u, in_edi, in_esi, in_ebp);
    t68 = g->ecx;
    t69 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t67 == 0u)
    {
        eax = t67;
        ecx = t68;
        edx = t69;
        goto L_10071298;
    }
    eax = t67;
    edx = t69;
    esi = t67;
    COW_AT(1007165e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t70 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(esi, COW_IMG(0x1032c670u));
    eax = t70;
    ecx = t71;
    edx = t72;
    goto L_1007185e;
L_10071670: ;
    COW_AT(10071670)
    g->eax = eax;
    g->ecx = edi + 0x128u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t61 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x128u, 1u, in_edi, in_esi, in_ebp);
    t62 = g->ecx;
    t63 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t61 == 0u)
    {
        eax = t61;
        ecx = t62;
        edx = t63;
        goto L_10071298;
    }
    eax = t61;
    edx = t63;
    COW_AT(1007168e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t64 = cow_thiscall(g, COW_IMG(0x10047f80u), eax, 0);
    t65 = g->ecx;
    t66 = g->edx;
    eax = t64;
    ecx = t65;
    edx = t66;
    goto L_1007185c;
L_1007169a: ;
    COW_AT(1007169a)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x98u;
    g->esp = sp0 - 8u;
    t53 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x98u, 1u, in_edi, in_esi, in_ebp);
    t54 = g->ecx;
    t55 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t53 == 0u)
    {
        eax = t53;
        ecx = t54;
        edx = t55;
        goto L_10071298;
    }
    eax = t53;
    edx = t55;
    esi = t53;
    COW_AT(100716ba)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t56 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t57 = g->edx;
    g->edx = t57;
    t58 = cow_thiscall(g, COW_IMG(0x1003b540u), esi + 0x30u, 0);
    t59 = g->ecx;
    t60 = g->edx;
    wr32(esi, COW_IMG(0x1032c644u));
    wr32(esi + 0x30u, COW_IMG(0x1032c628u));
    eax = t58;
    ecx = t59;
    edx = t60;
    goto L_1007185e;
L_100716dd: ;
    COW_AT(100716dd)
    g->eax = edi + 0x40u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x40u, 1u, in_edi, in_esi, in_ebp);
    t48 = g->ecx;
    t49 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t47 == 0u)
    {
        eax = t47;
        ecx = t48;
        edx = t49;
        goto L_10071298;
    }
    eax = t47;
    edx = t49;
    esi = t47;
    COW_AT(100716fa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t50 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t51 = g->ecx;
    t52 = g->edx;
    wr32(esi, COW_IMG(0x1032c5fcu));
    eax = t50;
    ecx = t51;
    edx = t52;
    goto L_1007185e;
L_1007170c: ;
    COW_AT(1007170c)
    g->eax = eax;
    g->ecx = edi + 0xb8u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t39 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0xb8u, 1u, in_edi, in_esi, in_ebp);
    t40 = g->ecx;
    t41 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t39 == 0u)
    {
        eax = t39;
        ecx = t40;
        edx = t41;
        goto L_10071298;
    }
    eax = t39;
    edx = t41;
    esi = t39;
    COW_AT(1007172c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x1003b540u), esi + 0x30u, 0);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(esi, COW_IMG(0x1032c5d0u));
    wr32(esi + 0x30u, COW_IMG(0x1032c5b4u));
    eax = t44;
    ecx = t45;
    edx = t46;
    goto L_1007185e;
L_1007174f: ;
    COW_AT(1007174f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edi + 0x40u;
    g->esp = sp0 - 8u;
    t33 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x40u, 1u, in_edi, in_esi, in_ebp);
    t34 = g->ecx;
    t35 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t33 == 0u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        goto L_10071298;
    }
    eax = t33;
    edx = t35;
    esi = t33;
    COW_AT(1007176c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t36 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(esi, COW_IMG(0x1032c588u));
    eax = t36;
    ecx = t37;
    edx = t38;
    goto L_1007185e;
L_1007177e: ;
    COW_AT(1007177e)
    g->eax = edi + 0x50u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x50u, 1u, in_edi, in_esi, in_ebp);
    t28 = g->ecx;
    t29 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_10071298;
    }
    eax = t27;
    edx = t29;
    esi = t27;
    COW_AT(1007179b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t30 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t31 = g->ecx;
    t32 = g->edx;
    wr32(esi, COW_IMG(0x1032c55cu));
    eax = t30;
    ecx = t31;
    edx = t32;
    goto L_1007185e;
L_100717ad: ;
    COW_AT(100717ad)
    ecx = edi + 0x40u;
    loc_1c = edi + 0x40u;
L_100717b9: ;
    COW_AT(100717b9)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, loc_1c, 1u, in_edi, in_esi, in_ebp);
    t22 = g->ecx;
    t23 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_10071298;
    }
    eax = t21;
    edx = t23;
    esi = t21;
    COW_AT(100717d1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(esi, COW_IMG(0x1032c530u));
    eax = t24;
    ecx = t25;
    edx = t26;
    goto L_1007185e;
L_100717b4: ;
    COW_AT(100717b4)
    edx = edi + 0x40u;
    loc_1c = edi + 0x40u;
    goto L_100717b9;
L_100717e0: ;
    COW_AT(100717e0)
    g->eax = edi + 0x50u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0x50u, 1u, in_edi, in_esi, in_ebp);
    t16 = g->ecx;
    t17 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_10071298;
    }
    eax = t15;
    edx = t17;
    esi = t15;
    COW_AT(100717fd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(esi, COW_IMG(0x1032c504u));
    eax = t18;
    ecx = t19;
    edx = t20;
    goto L_1007185e;
L_1007180c: ;
    COW_AT(1007180c)
    g->eax = eax;
    g->ecx = edi + 0xdcu;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, edi + 0xdcu, 1u, in_edi, in_esi, in_ebp);
    t10 = g->ecx;
    t11 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10071298;
    }
    eax = t9;
    edx = t11;
    COW_AT(1007182a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_thiscall(g, COW_IMG(0x101893b0u), eax, 0);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_1007185c;
L_10071833: ;
    COW_AT(10071833)
    edx = edi + 0x30u;
    loc_1c = edi + 0x30u;
L_1007183f: ;
    COW_AT(1007183f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t181 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, loc_1c, 1u, in_edi, in_esi, in_ebp);
    t182 = g->ecx;
    t183 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t181 == 0u)
    {
        eax = t181;
        ecx = t182;
        edx = t183;
        goto L_10071298;
    }
    eax = t181;
    edx = t183;
    COW_AT(10071855)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t184 = cow_thiscall(g, COW_IMG(0x10071d80u), eax, 0);
    t185 = g->ecx;
    t186 = g->edx;
    eax = t184;
    ecx = t185;
    edx = t186;
    goto L_1007185c;
L_1007183a: ;
    COW_AT(1007183a)
    eax = edi + 0x30u;
    loc_1c = edi + 0x30u;
    goto L_1007183f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10071270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10071294u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100712f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007130cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071329u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007133bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071354u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071372u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071385u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100713a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100713b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100713cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100713dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100713f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071402u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007141du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071429u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10071446u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071458u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10071475u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071487u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100714a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100714b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100714d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100714edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007150du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007151fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007153cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071556u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10071573u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071585u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100715a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100715b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100715d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100715e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10071600u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071612u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007162fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071641u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007165eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071670u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007168eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007169au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100716bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100716ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100716fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007170cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007172cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007174fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007176cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007177eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007179bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100717adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100717b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100717b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100717d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100717e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100717fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007180cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007182au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071833u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007183au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007183fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 1u;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10071855u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007185cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007185eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071866u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1007187au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10071880u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10071270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10071270(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
