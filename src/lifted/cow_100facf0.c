/* f_0x100facf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100facf0(Guest* g)
{
    double d118;
    double d123;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    int64_t q105;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
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
    uint32_t t119;
    uint32_t t12;
    uint32_t t120;
    uint32_t t121;
    uint32_t t122;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    case 0x100fad3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); goto E_100fad3e;
    case 0x100fad48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); goto E_100fad48;
    case 0x100fad6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); goto E_100fad6a;
    case 0x100fad8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); goto E_100fad8f;
    case 0x100fada1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fada1;
    case 0x100fada8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fada8;
    case 0x100fadbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fadba;
    case 0x100fadd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fadd3;
    case 0x100fadecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fadec;
    case 0x100fadf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fadf8;
    case 0x100fae09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae09;
    case 0x100fae25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae25;
    case 0x100fae2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae2d;
    case 0x100fae35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae35;
    case 0x100fae40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae40;
    case 0x100fae4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae4b;
    case 0x100fae55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae55;
    case 0x100fae68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae68;
    case 0x100fae75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae75;
    case 0x100fae78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae78;
    case 0x100fae7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae7a;
    case 0x100fae90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae90;
    case 0x100fae9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fae9d;
    case 0x100faea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100faea2;
    case 0x100fb50fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fb50f;
    case 0x100fb51eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_100fb51e;
    default: break;
    }
#endif

    COW_AT(100facf0)
    t1 = rd16(rd32(sp0 + 0xcu) + 0xaau);
    t2 = rd8(rd32(sp0 + 0xcu) + 0xa8u);
    t3 = rd16(rd32(sp0 + 0xcu) + 0x42u);
    t4 = rd32(sp0 + 0xcu);
    wr8(sp0 + 0xcu, t3 == 0x118u);
    t5 = (in_eax & 0xffff0000u) | t1;
    t6 = (t5 & 0xffff0000u) | (t2 >> 1u & 3u);
    g->ecx = ((self | t2) & 0xffffff00u) | (t2 >> 1u & 3u);
    g->edx = (in_edx & 0xffff0000u) | t3;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x100f9650u), t6, g->ecx, g->edx, 1, 2, t6, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint16_t)t9 < 0x100u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebx = t4;
        loc_4 = (((self & 0xff00ffffu) | ((uint16_t)t3 == 0x11du) << 0x10u) & 0xffffffu) | ((uint8_t)t7 == 0u) << 0x18u;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebx = t4;
        loc_4 = (((self & 0xff00ffffu) | ((uint16_t)t3 == 0x11du) << 0x10u) & 0xffffffu) | ((uint8_t)t7 == 0u) << 0x18u;
    COW_AT(100fad3e)
        wr16(ebx + 0x42u, (uint16_t)(edx + 0x1bcu));
        edx = edx + 0x1bcu;
    }
    COW_AT(100fad48)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x100fa940u), eax, g->ecx, g->edx, 1, 1, 4u);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = (t11 & 0xffffff00u) | rd8(ebx + 0x80u);
    g->ebx = ebx;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x10253610u), t10, t13, g->edx, 1, 2, 3u, t13);
    t15 = g->ecx;
    t16 = g->edx;
    if (rd8(arg1 + 0xcu) == 2u)
    {
        ecx = t15;
        edx = t16;
        goto L_100fad8f;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(100fad6a)
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 0x10u);
    t18 = g->ecx;
    t19 = g->edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_call_regs(g, COW_IMG(0x100fa950u), t17, t18, t19, 1, 1, 0x10u);
    t21 = g->ecx;
    t22 = g->edx;
    t23 = (t22 & 0xffffff00u) | rd8(ebx + 0x80u);
    g->ebx = ebx;
    g->edx = t23;
    g->esp = sp0 - 0x14u;
    t24 = cow_call_regs(g, COW_IMG(0x10253610u), t20, t21, g->edx, 1, 2, 5u, t23);
    t25 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t25;
    return t24 & 0xffffff00u;
L_100fad8f: ;
    COW_AT(100fad8f)
    if (rd32(ebx + 0x80u) - 1u > 4u)
    {
        eax = rd32(ebx + 0x80u) - 1u;
        goto L_100fae4b;
    }
    eax = rd32(ebx + 0x80u) - 1u;
    COW_AT(100fada1)
    t26 = rd32(COW_IMG(0x100fb640u) + eax * 4u);
    switch (t26 - RD)
    {
    case 0x100fada8u: goto L_100fada8;
    case 0x100fadbau: goto L_100fadba;
    case 0x100fadd3u: goto L_100fadd3;
    case 0x100fadecu: goto L_100fadec;
    case 0x100fae4bu: goto L_100fae4b;
    default: rt_fatal(g, COW_IMG(0x100fada1u), "switch");
    }
    return 0;
L_100fada8: ;
    COW_AT(100fada8)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t60 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x200u);
    t61 = g->ecx;
    t62 = g->edx;
    eax = t60;
    ecx = t61;
    edx = t62;
L_100fae78: ;
    COW_AT(100fae78)
L_100fae7a: ;
    COW_AT(100fae7a)
    wr8(arg1 + 0xcu, 3u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t78 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xau, 1u, 1u);
    if (t78 == 0u)
    {
        eax = t78;
    }
    else
    {
        eax = t78;
    COW_AT(100fae90)
        if ((rd16(eax) & 0x1ffu) != 0xau)
        {
            eax = rd16(eax) & 0x1ffu;
        }
        else
        {
            eax = rd16(eax) & 0x1ffu;
    COW_AT(100fae9d)
            wr16(ebx, rd16(ebx) & 0xfe00u);
        }
    }
    COW_AT(100faea2)
    t79 = rd32(ebx + 0x34u);
    t80 = rd32(ebx + 0x38u);
    g->edx = t80;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100dc150u), 2, t80, t79);
    t81 = g->edx;
    t82 = rd32(ebx + 0x3cu);
    t83 = rd32(ebx + 0x38u);
    g->ecx = t83;
    g->edx = t81;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x101039a0u), 2, t83, t82);
    t84 = g->ecx;
    t85 = g->edx;
    t86 = rd16(ebx + 8u);
    wr16(arg1 + 0x40daau, 0u);
    wr16(arg1 + 0x40da8u, (uint16_t)t86);
    t87 = rd32(ebx + 4u);
    wr32(arg1 + 0x3c390u, t87);
    t88 = rd16(ebx + 8u);
    wr16(arg1 + 0x40da8u, (uint16_t)t88);
    t89 = rd16(ebx + 0x42u);
    wr16(arg1 + 0x40d7cu, (uint16_t)t89);
    wr16(arg1 + 0x40d80u, rd16(ebx + 0xaau));
    t90 = rd8(ebx + 0xa8u);
    wr16(arg1 + 0x40d82u, t90 >> 1u & 3u);
    t91 = rd32(ebx + 0x30u);
    wr32(arg1 + 0x3c350u, t91);
    t92 = rd32(ebx + 0x100u);
    wr32(arg1 + 0x3c354u, t92);
    t93 = rd16(ebx + 0x9cu);
    wr16(arg1 + 0x3c358u, (uint16_t)t93);
    t94 = rd16(ebx + 0x9eu);
    wr16(arg1 + 0x3c35au, (uint16_t)t94);
    t95 = rd16(ebx + 0x62u);
    wr16(arg1 + 0x40d90u, (uint16_t)t95);
    t96 = rd16(ebx + 0x64u);
    wr16(arg1 + 0x40d92u, (uint16_t)t96);
    t97 = rd16(ebx + 0x66u);
    wr16(arg1 + 0x40d94u, (uint16_t)t97);
    t98 = rd16(ebx + 0x40u);
    wr16(arg1 + 0x40d8eu, (uint16_t)t98);
    t99 = rd16(ebx + 0x68u);
    wr16(arg1 + 0x40dbcu, (uint16_t)t99);
    wr16(arg1 + 0x40dbeu, rd16(ebx + 0x6au));
    wr16(arg1 + 0x40dc8u, rd16(ebx + 0x74u));
    t100 = rd16(ebx + 0x76u);
    wr16(arg1 + 0x40dcau, (uint16_t)t100);
    t101 = rd32(ebx + 0x6cu);
    wr32(arg1 + 0x40dc0u, t101);
    t102 = rd32(ebx + 0x70u);
    wr32(arg1 + 0x40dc4u, t102);
    g->eax = t101;
    g->edx = ((t85 | t86 | t89 | t93 | t96 | t99) & 0xffff0000u) | t100;
    g->esp = sp0 - 0x24u;
    t103 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t104 = g->edx;
    q105 = (int64_t)cow_muls(0x88888889u, rd32(ebx + 0xa4u));
    t106 = (uint32_t)((int32_t)(cow_qhi(q105) + rd32(ebx + 0xa4u)) >> 5u);
    t107 = t103 + t106 + (t106 >> 0x1fu);
    wr32(arg1 + 0x40ddcu, t107);
    cow_call_regs(g, COW_IMG(0x10312090u), t107, g->ecx, g->edx, 1, 3, arg1 + 0x3c3a4u, ebx + 0x84u, 0x10u);
    wr8(arg1 + 0x3c3b3u, 0u);
    t108 = rd32(ebx + 0xcu);
    wr32(arg1 + 0x3c360u, t108);
    t109 = rd32(ebx + 0x10u);
    wr32(arg1 + 0x3c364u, t109);
    t110 = rd32(ebx + 0x14u);
    wr32(arg1 + 0x3c368u, t110);
    wr32(arg1 + 0x3c36cu, 0x3f800000u);
    t111 = rd32(ebx + 0xcu);
    wr32(arg1 + 0x3c370u, t111);
    t112 = rd32(ebx + 0x10u);
    wr32(arg1 + 0x3c374u, t112);
    t113 = rd32(ebx + 0x14u);
    wr32(arg1 + 0x3c378u, t113);
    t114 = (t111 & 0xffffff00u) | rd8(ebx + 0xbu);
    g->eax = t114;
    g->ecx = t112;
    g->edx = t113;
    g->esp = sp0 - 0x30u;
    t115 = cow_cdecl(g, COW_IMG(0x100dd990u), 1, t114);
    t116 = g->ecx;
    t117 = g->edx;
    d118 = cow_take_float(g);
    wrf32(arg1 + 0x3c37cu, (float)d118);
    wr32(arg1 + 0x3c380u, 0u);
    t119 = (t116 & 0xffffff00u) | rd8(ebx + 0xbu);
    g->ecx = t119;
    g->edx = t117;
    g->esp = sp0 - 0x34u;
    t120 = cow_cdecl(g, COW_IMG(0x100dd990u), 1, t119);
    t121 = g->ecx;
    t122 = g->edx;
    d123 = cow_take_float(g);
    wrf32(arg1 + 0x3c384u, (float)d123);
    t124 = rd16(arg1 + 0x40dacu);
    wr32(arg1 + 0x3c388u, 0u);
    wr32(arg1 + 0x3c38cu, 0x3f800000u);
    t125 = rd16(ebx + 0x20u);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t125 << 0xau ^ t124) & 0x400u) ^ t124));
    t126 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t126 >> 1u << 0xbu ^ t124) & 0x800u) ^ ((t125 << 0xau ^ t124) & 0x400u) ^ t124));
    t127 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t127 >> 2u << 0xcu ^ t124) & 0x1000u) ^ ((t126 >> 1u << 0xbu ^ t124) & 0x800u) ^ ((t125 << 0xau ^ t124) & 0x400u) ^ t124));
    t128 = rd32(ebx + 0x18u);
    t129 = rd16(arg1 + 0x40daeu);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t128 >> 0xfu << 0xdu ^ t124) & 0x2000u) ^ ((t127 >> 2u << 0xcu ^ t124) & 0x1000u) ^ ((t126 >> 1u << 0xbu ^ t124) & 0x800u) ^ ((t125 << 0xau ^ t124) & 0x400u) ^ t124));
    t130 = ((rd8(ebx + 0x2au) ^ t124) & 7u) ^ ((t128 >> 0xfu << 0xdu ^ t124) & 0x2000u) ^ ((t127 >> 2u << 0xcu ^ t124) & 0x1000u) ^ ((t126 >> 1u << 0xbu ^ t124) & 0x800u) ^ ((t125 << 0xau ^ t124) & 0x400u) ^ ((t120 & 0xffff0000u) | t124);
    wr16(arg1 + 0x40dacu, (uint16_t)t130);
    t131 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40daeu, (uint16_t)(((t131 >> 5u ^ t129) & 7u) ^ t129));
    t132 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40daeu, (uint16_t)(((t132 >> 8u << 3u ^ t129) & 8u) ^ ((t131 >> 5u ^ t129) & 7u) ^ t129));
    t133 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40daeu, (uint16_t)(((t133 >> 9u << 4u ^ t129) & 0x30u) ^ ((t132 >> 8u << 3u ^ t129) & 8u) ^ ((t131 >> 5u ^ t129) & 7u) ^ t129));
    t134 = rd8(ebx + 0x1cu);
    wr16(arg1 + 0x40daeu, (uint16_t)(((((t133 >> 9u << 4u ^ t129) & 0x30u) ^ ((t132 >> 8u << 3u ^ t129) & 8u) ^ ((t131 >> 5u ^ t129) & 7u) ^ t129) & 0x3fu) ^ t134 << 6u));
    t135 = rd8(ebx + 0x1du);
    wr8(arg1 + 0x40de5u, (uint8_t)t135);
    t136 = rd32(ebx + 0x18u);
    t137 = rd16(arg1 + 0x40db0u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t136 >> 0xdu ^ t137) & 1u) ^ t137));
    t138 = rd32(ebx + 0x18u);
    wr16(arg1 + 0x40db0u, (uint16_t)((((t138 >> 0xeu) * 2u ^ t137) & 2u) ^ ((t136 >> 0xdu ^ t137) & 1u) ^ t137));
    t139 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t139 >> 0xbu << 2u ^ t137) & 4u) ^ (((t138 >> 0xeu) * 2u ^ t137) & 2u) ^ ((t136 >> 0xdu ^ t137) & 1u) ^ t137));
    wr16(arg1 + 0x40dacu, (uint16_t)(((rd32(ebx + 0x24u) >> 0x1fu << 7u ^ t130) & 0x80u) ^ t130));
    t140 = ((rd32(ebx + 0x20u) >> 0xcu << 3u ^ t137) & 8u) ^ ((t139 >> 0xbu << 2u ^ t137) & 4u) ^ (((t138 >> 0xeu) * 2u ^ t137) & 2u) ^ ((t136 >> 0xdu ^ t137) & 1u) ^ ((((((t120 | t124 | t129) & 0xffff0000u) | t134) << 6u | t135) & 0xffff0000u) | t137);
    wr16(arg1 + 0x40db0u, (uint16_t)t140);
    t141 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t141 >> 0xeu << 4u ^ t140) & 0x10u) ^ t140));
    t142 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t142 >> 0xdu << 5u ^ t140) & 0x20u) ^ ((t141 >> 0xeu << 4u ^ t140) & 0x10u) ^ t140));
    t143 = ((uint32_t)rd8(ebx + 0x22u) << 7u ^ t140) & 0x80u;
    wr16(arg1 + 0x40db0u, (uint16_t)(t143 ^ ((t142 >> 0xdu << 5u ^ t140) & 0x20u) ^ ((t141 >> 0xeu << 4u ^ t140) & 0x10u) ^ t140));
    t144 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t144 >> 0x11u << 8u ^ t143 ^ t140) & 0x100u) ^ t143 ^ ((t142 >> 0xdu << 5u ^ t140) & 0x20u) ^ ((t141 >> 0xeu << 4u ^ t140) & 0x10u) ^ t140));
    t145 = ((rd32(ebx + 0x20u) >> 0x12u << 9u ^ t143 ^ t140) & 0x200u) ^ ((t144 >> 0x11u << 8u ^ t143 ^ t140) & 0x100u) ^ t143 ^ ((t142 >> 0xdu << 5u ^ t140) & 0x20u) ^ ((t141 >> 0xeu << 4u ^ t140) & 0x10u) ^ t140;
    t146 = rd16(arg1 + 0x40dacu);
    wr16(arg1 + 0x40db0u, (uint16_t)t145);
    wr16(arg1 + 0x40dacu, (uint16_t)(((rd32(ebx + 0x28u) >> 1u << 3u ^ t146) & 8u) ^ t146));
    t147 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t147 >> 0xfu << 6u ^ t145) & 0x40u) ^ t145));
    t148 = rd32(ebx + 0x2cu);
    wr32(arg1 + 0x40dd4u, t148);
    t149 = rd8(ebx + 0x1fu);
    wr8(arg1 + 0x40dbau, (uint8_t)t149);
    wr8(arg1 + 0x40dbbu, rd8(ebx + 0x1eu));
    t150 = rd16(arg1 + 0x40db0u);
    t151 = rd16(ebx + 0x18u);
    wr16(arg1 + 0x3c406u, t151 & 0x1fffu);
    t152 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t152 >> 0x13u << 0xau ^ t150) & 0x400u) ^ t150));
    t153 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db0u, (uint16_t)(((t153 >> 0x14u << 0xbu ^ t150) & 0x800u) ^ ((t152 >> 0x13u << 0xau ^ t150) & 0x400u) ^ t150));
    t154 = ((t153 >> 0x14u << 0xbu ^ t150) & 0x800u) ^ ((t152 >> 0x13u << 0xau ^ t150) & 0x400u) ^ ((((t143 ^ t140) | t146 | t149) & 0xffff0000u) | t150) ^ ((((t143 ^ t140) | t146 | t149 | t150) & 0xffff0000u) | rd8(ebx + 0x23u)) << 0xdu;
    t155 = rd8(ebx + 0x23u);
    wr16(arg1 + 0x40db0u, (uint16_t)((t154 & 0x1fffu) ^ t155 << 0xdu));
    t156 = rd8(ebx + 0xa8u);
    wr16(arg1 + 0x40db0u, (t156 & 1u) << 0xcu ^ (((t154 & 0x1fffu) ^ t155 << 0xdu) & 0xefffu));
    t157 = rd32(ebx + 0x20u);
    wr8(arg1 + 0x40de4u, t157 >> 0x1bu & 1u);
    wr8(arg1 + 0x40de0u, rd8(ebx + 0x24u));
    wr8(arg1 + 0x40de1u, rd8(ebx + 0x25u));
    t158 = rd8(ebx + 0x26u);
    wr8(arg1 + 0x40de2u, (uint8_t)t158);
    t159 = rd32(ebx + 0x20u);
    t160 = rd16(arg1 + 0x40db2u);
    wr16(arg1 + 0x40db2u, (uint16_t)(((t159 >> 0x1cu ^ t160) & 1u) ^ t160));
    t161 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db2u, (uint16_t)((((t161 >> 0x1du) * 2u ^ t160) & 2u) ^ ((t159 >> 0x1cu ^ t160) & 1u) ^ t160));
    t162 = rd32(ebx + 0x20u);
    wr16(arg1 + 0x40db2u, (uint16_t)(((t162 >> 0x1fu << 3u ^ t160) & 8u) ^ (((t161 >> 0x1du) * 2u ^ t160) & 2u) ^ ((t159 >> 0x1cu ^ t160) & 1u) ^ t160));
    wr16(arg1 + 0x40db2u, (uint16_t)(((rd32(ebx + 0x24u) >> 0x19u << 4u ^ t160) & 0x10u) ^ ((t162 >> 0x1fu << 3u ^ t160) & 8u) ^ (((t161 >> 0x1du) * 2u ^ t160) & 2u) ^ ((t159 >> 0x1cu ^ t160) & 1u) ^ t160));
    t163 = rd16(ebx + 0x60u);
    wr16(arg1 + 0x40d7eu, (uint16_t)t163);
    t164 = rd32(ebx + 0x78u);
    wr32(arg1 + 0x40dccu, t164);
    t165 = rd16(ebx + 0x7cu) + rd32(ebx + 0x78u);
    t166 = rd16(arg1 + 0x40db2u);
    t167 = rd32(ebx + 0x78u);
    wr32(arg1 + 0x40dd0u, t165);
    t168 = rd32(ebx + 0x24u);
    wr16(arg1 + 0x40db2u, (uint16_t)(((t168 >> 0x1au << 5u ^ t166) & 0x20u) ^ t166));
    t169 = rd32(ebx + 0x28u);
    wr8(arg1 + 0x40db3u, t169 >> 0x13u & 3u);
    t170 = rd32(ebx + 0xa0u);
    wr32(arg1 + 0x2d67cu, t170);
    g->eax = t170;
    g->ecx = ((t168 >> 0x1au << 5u ^ t166) & 0x20u) ^ (((t158 | t160 | t163) & 0xffff0000u) | t166);
    g->edx = (t169 >> 0x13u & 0xffffff00u) | (t169 >> 0x13u & 3u);
    g->esp = sp0 - 0x14u;
    t171 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t172 = g->ecx;
    t173 = g->edx;
    wr32(arg1 + 0x2d680u, t171);
    t174 = rd8(ebx + 0xa9u);
    wr8(arg1 + 0x40de7u, (uint8_t)t174);
    wr8(arg1 + 0x40de6u, 0u);
    t175 = rd16(ebx + 0xacu);
    t176 = rd16(arg1 + 0x40dacu);
    wr16(arg1 + 0x40de8u, (uint16_t)t175);
    t177 = rd8(ebx + 0xaeu);
    wr8(arg1 + 0x40db4u, (uint8_t)t177);
    t178 = rd16(arg1 + 0x40db2u);
    wr8(arg1 + 0x40db5u, ((rd8(ebx + 0xa8u) >> 2u ^ rd8(arg1 + 0x40db5u)) & 0xeu) ^ rd8(arg1 + 0x40db5u));
    wr16(arg1 + 0x40db6u, rd16(ebx + 0x7eu));
    wr16(arg1 + 0x40db2u, (uint16_t)(((rd32(ebx + 0x24u) >> 0x1cu << 7u ^ t178) & 0x80u) ^ t178));
    t179 = rd32(ebx + 0x24u);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t179 >> 0x1du << 8u ^ t176) & 0x100u) ^ t176));
    t180 = rd32(ebx + 0x24u);
    wr16(arg1 + 0x40dacu, (uint16_t)(((t180 >> 0x1eu << 9u ^ t176) & 0x200u) ^ ((t179 >> 0x1du << 8u ^ t176) & 0x100u) ^ t176));
    t181 = rd8(ebx + 0xafu);
    wr16(arg1 + 0x40dacu, (t181 & 1u) << 6u ^ ((((t180 >> 0x1eu << 9u ^ t176) & 0x200u) ^ ((t179 >> 0x1du << 8u ^ t176) & 0x100u) ^ t176) & 0xffbfu));
    t182 = rd32(ebx + 0x28u);
    wr16(arg1 + 0x40dacu, ((t182 >> 4u << 5u ^ t176) & 0x20u) ^ (t181 & 1u) << 6u ^ ((((t180 >> 0x1eu << 9u ^ t176) & 0x200u) ^ ((t179 >> 0x1du << 8u ^ t176) & 0x100u) ^ t176) & 0xffbfu));
    t183 = ((rd32(ebx + 0x28u) >> 5u << 4u ^ t176) & 0x10u) ^ ((t182 >> 4u << 5u ^ t176) & 0x20u) ^ (((t167 | t176) & 0xffff0000u) | (t181 & 1u)) << 6u ^ ((((t180 >> 0x1eu << 9u ^ t176) & 0x200u) ^ ((t179 >> 0x1du << 8u ^ t176) & 0x100u) ^ t176) & 0xffbfu);
    wr16(arg1 + 0x40dacu, (uint16_t)t183);
    eax = ebx + 0x56u;
    ecx = arg1 + 0x40d84u;
    edx = 5u;
    esi = (t167 & 0xffff0000u) | t176;
L_100fb50f: ;
    COW_AT(100fb50f)
    t184 = rd16(eax);
    wr16(ecx, (uint16_t)t184);
    if (edx != 1u)
    {
        eax = eax + 2u;
        ecx = ecx + 2u;
        edx = edx - 1u;
        esi = (esi & 0xffff0000u) | t184;
        goto L_100fb50f;
    }
    COW_AT(100fb51e)
    t185 = rd32(ebx + 0x44u);
    wr32(arg1 + 0x40d96u, t185);
    t186 = rd32(ebx + 0x48u);
    wr32(arg1 + 0x40d9au, t186);
    t187 = rd32(ebx + 0x4cu);
    wr32(arg1 + 0x40d9eu, t187);
    t188 = rd32(ebx + 0x50u);
    wr32(arg1 + 0x40da2u, t188);
    t189 = rd16(ebx + 0x54u);
    wr32(arg1 + 0x40df0u, 0u);
    wr16(arg1 + 0x40da6u, (uint16_t)t189);
    wr8(arg1 + 0x40deau, 0u);
    wr8(arg1 + 0x40debu, 0u);
    wr8(arg1 + 0x40decu, 0u);
    wr16(arg1 + 8u, 0u);
    wr16(arg1 + 0xau, 0u);
    wr8(arg1 + 0x4194u, 0u);
    wr16(arg1 + 0x4196u, 0u);
    wr16(arg1 + 0x4198u, 0u);
    wr16(arg1 + 0x419au, 0u);
    wr32(arg1 + 0x419cu, 0u);
    wr32(arg1 + 0x41a0u, 0u);
    wr32(arg1 + 0x41a4u, 0u);
    wr16(arg1 + 0x40e2cu, 0u);
    t190 = rd32(ebx + 0x94u);
    wr32(arg1 + 0x4164u, t190);
    t191 = rd32(ebx + 0x98u);
    wr32(arg1 + 0x4168u, t191);
    edi = arg1 + 0x1a660u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = ebx + 0xb0u;
    edi = arg1 + 0x1a61cu;
    ecx = 0x11u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t192 = rd32(ebx + 0xbcu);
    wr32(arg1 + 0x1a660u, t192);
    t193 = rd32(ebx + 0xc0u);
    wr32(arg1 + 0x1a664u, t193);
    t194 = rd32(ebx + 0xc4u);
    wr32(arg1 + 0x1a668u, t194);
    t195 = rd32(ebx + 0xc8u);
    wr32(arg1 + 0x1a66cu, t195);
    wr8(arg1 + 0x40db5u, rd8(arg1 + 0x40db5u) & 0xfeu);
    t196 = rd32(ebx + 0xf4u);
    wr32(arg1 + 0x2cfd8u, t196);
    t197 = rd32(ebx + 0xf8u);
    wr32(arg1 + 0x2cfdcu, t197);
    t198 = rd32(ebx + 0xfcu);
    wr32(arg1 + 0x2cfe0u, t198);
    t199 = (t196 & 0xffffff00u) | rd8(ebx + 0x80u);
    g->ebx = ebx;
    g->edx = t199;
    g->esp = sp0 - 0x14u;
    t200 = cow_call_regs(g, COW_IMG(0x10253610u), t197, t198, g->edx, 1, 2, 4u, t199);
    t201 = g->ecx;
    t202 = g->edx;
    g->esp = sp0 - 0x1cu;
    t203 = cow_call_regs(g, COW_IMG(0x100fa950u), t200, t201, t202, 1, 1, 0x20u);
    t204 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t204;
    return (t203 & 0xffffff00u) | 1u;
L_100fadba: ;
    COW_AT(100fadba)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t54 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x200u);
    t55 = g->ecx;
    t56 = g->edx;
    g->ebx = ebx;
    g->ecx = t55;
    g->edx = t56;
    g->esp = sp0 - 0x18u;
    t57 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x100u);
    t58 = g->ecx;
    t59 = g->edx;
    eax = t57;
    ecx = t58;
    edx = t59;
L_100fae75: ;
    COW_AT(100fae75)
    goto L_100fae78;
L_100fadd3: ;
    COW_AT(100fadd3)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t48 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x2000u);
    t49 = g->ecx;
    t50 = g->edx;
    g->ebx = ebx;
    g->ecx = t49;
    g->edx = t50;
    g->esp = sp0 - 0x18u;
    t51 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x100u);
    t52 = g->ecx;
    t53 = g->edx;
    eax = t51;
    ecx = t52;
    edx = t53;
    goto L_100fae75;
L_100fadec: ;
    COW_AT(100fadec)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_stdcall(g, COW_IMG(0x100f7a80u), 0);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 1u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = t27;
        ecx = t28;
        edx = t29;
    COW_AT(100fadf8)
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t30 = cow_cdecl(g, COW_IMG(0x100f7a90u), 1, 0u);
        t31 = g->ecx;
        t32 = g->edx;
        g->ecx = t31;
        g->edx = t32;
        g->esp = sp0 - 0x18u;
        t33 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, 0u);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    COW_AT(100fae09)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t36 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t37 = g->ecx;
    t38 = g->edx;
    g->ebx = ebx;
    g->ecx = t37;
    g->edx = t38;
    g->esp = sp0 - 0x18u;
    t39 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x100u);
    t40 = g->ecx;
    t41 = g->edx;
    if (rd8(sp0 + 0xcu) != 0u)
    {
        eax = (t39 & 0xffffff00u) | rd8(sp0 + 0xcu);
        ecx = t40;
        edx = t41;
        goto L_100fae40;
    }
    eax = (t39 & 0xffffff00u) | rd8(sp0 + 0xcu);
    ecx = t40;
    edx = t41;
    COW_AT(100fae25)
    if ((uint8_t)(loc_4 >> 0x10u) != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(loc_4 >> 0x10u);
        goto L_100fae40;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)(loc_4 >> 0x10u);
    COW_AT(100fae2d)
    if (loc_4 >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | loc_4 >> 0x18u;
    COW_AT(100fae35)
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t42 = cow_thiscall_cdecl(g, COW_IMG(0x100fb6f0u), ecx, 1, ebx);
        t43 = g->ecx;
        t44 = g->edx;
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    goto L_100fae7a;
L_100fae40: ;
    COW_AT(100fae40)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t45 = cow_cdecl(g, COW_IMG(0x100fb660u), 5, ebx, in_edi, in_esi, in_ebp, in_ebx);
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    goto L_100fae7a;
L_100fae4b: ;
    COW_AT(100fae4b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t63 = cow_stdcall(g, COW_IMG(0x100f7a80u), 0);
    t64 = g->ecx;
    t65 = g->edx;
    if (t63 != 1u)
    {
        eax = t63;
        ecx = t64;
        edx = t65;
    }
    else
    {
        eax = t63;
        ecx = t64;
        edx = t65;
    COW_AT(100fae55)
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t66 = cow_cdecl(g, COW_IMG(0x100f7a90u), 1, 0u);
        t67 = g->ecx;
        t68 = g->edx;
        g->ecx = t67;
        g->edx = t68;
        g->esp = sp0 - 0x18u;
        t69 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, 0u);
        t70 = g->ecx;
        t71 = g->edx;
        eax = t69;
        ecx = t70;
        edx = t71;
    }
    COW_AT(100fae68)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t72 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t73 = g->ecx;
    t74 = g->edx;
    g->ecx = t73;
    g->edx = t74;
    g->esp = sp0 - 8u;
    t75 = cow_cdecl(g, COW_IMG(0x100fb660u), 5, ebx, 1u, in_edi, in_esi, in_ebp);
    t76 = g->ecx;
    t77 = g->edx;
    eax = t75;
    ecx = t76;
    edx = t77;
    goto L_100fae75;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100facf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fad3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100fad48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100fad6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100fad8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fada1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fada8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fadbau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fadd3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fadecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fadf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae35u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fae55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fae68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fae75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fae78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fae7au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fae9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100faea2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fb50fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100fb51eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100facf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100facf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
