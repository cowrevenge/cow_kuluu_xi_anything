/* f_0x10066160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10066160(Guest* g)
{
    double d32;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_860;
    uint32_t loc_8a0;
    uint32_t loc_8a4;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    cow_frame(g, sp0, 2228u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10066178u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x89cu); in_ebp = rd32(sp0 - 0x898u); g->ebp = rd32(sp0 - 0x898u); g->edi = rd32(sp0 - 0x89cu); goto E_10066178;
    case 0x1006619au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; loc_8a0 = rd32(sp0 - 0x8a0u); in_edi = rd32(sp0 - 0x89cu); in_ebp = rd32(sp0 - 0x898u); g->ebp = rd32(sp0 - 0x898u); g->edi = rd32(sp0 - 0x89cu); goto E_1006619a;
    case 0x100661fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100661fc;
    case 0x10066200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a0 = rd32(sp0 - 0x8a0u); loc_860 = rd32(sp0 - 0x860u); goto E_10066200;
    case 0x10066215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066215;
    case 0x10066226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066226;
    case 0x10066255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066255;
    case 0x10066263u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066263;
    case 0x1006627du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_1006627d;
    case 0x1006628au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_1006628a;
    case 0x100662a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_100662a3;
    case 0x100662b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100662b3;
    case 0x10066311u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066311;
    case 0x1006636bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006636b;
    case 0x1006637du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006637d;
    case 0x10066386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066386;
    case 0x10066395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066395;
    case 0x100663b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100663b1;
    case 0x100663cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100663cd;
    case 0x100663e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100663e8;
    case 0x10066403u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066403;
    case 0x10066420u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066420;
    case 0x1006643du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006643d;
    case 0x10066473u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066473;
    case 0x100664a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664a9;
    case 0x100664b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664b9;
    case 0x100664c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664c9;
    case 0x100664d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664d9;
    case 0x100664e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664e9;
    case 0x100664f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100664f9;
    case 0x10066507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066507;
    case 0x1006650cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006650c;
    case 0x10066516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066516;
    case 0x1006652cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006652c;
    case 0x10066542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066542;
    case 0x10066545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066545;
    case 0x10066548u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066548;
    case 0x1006654fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1006654f;
    case 0x10066556u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066556;
    case 0x1006655bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_1006655b;
    case 0x10066564u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066564;
    case 0x100665b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100665b3;
    case 0x100665e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100665e4;
    case 0x10066658u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); goto E_10066658;
    case 0x10066673u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066673;
    case 0x10066680u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066680;
    case 0x10066685u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10066685;
    case 0x100666ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_860 = rd32(sp0 - 0x860u); goto E_100666ce;
    case 0x100666d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_860 = rd32(sp0 - 0x860u); goto E_100666d9;
    case 0x100666f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8a4 = rd32(sp0 - 0x8a4u); loc_860 = rd32(sp0 - 0x860u); goto E_100666f0;
    default: break;
    }
#endif

    COW_AT(10066160)
    wr32(sp0 - 0x894u, in_ebx);
    wr32(sp0 - 0x898u, in_ebp);
    wr32(sp0 - 0x89cu, in_edi);
    wr32(sp0 - 0x85cu, self);
    if (rd8(COW_IMG(0x1047bf40u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf40u));
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf40u));
    COW_AT(10066178)
        wr32(sp0 - 0x8a0u, COW_IMG(0x10066790u));
        wr32(COW_IMG(0x1047bf38u), 0u);
        wr8(COW_IMG(0x1047bf40u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0x89cu;
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10066790u));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(1006619a)
    wr32(sp0 - 0x8a0u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x89cu;
    t3 = cow_thiscall(g, COW_IMG(0x100684f0u), COW_IMG(0x1047bf38u), 1, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10067930u), sp0 - 0x86cu, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10067930u), sp0 - 0x84cu, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10069b60u), sp0 - 0x808u, 0);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t11 = g->edx;
    t12 = rd32(self + 4u);
    wr32(sp0 - 0x8a0u, t12);
    g->eax = t12;
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x100680d0u), sp0 - 0x604u, 1, t12);
    t14 = g->edx;
    wr32(sp0 - 0x860u, t13);
    if ((int32_t)arg1 >= (int32_t)t13)
    {
        edx = t14;
        esi = in_esi;
        goto L_100666ce;
    }
    edx = t14;
    loc_860 = t13;
    COW_AT(100661f9)
    wr32(sp0 - 0x8a0u, in_esi);
    eax = arg1;
    ebx = in_ebx & 0xffffff00u;
    ebp = arg1;
    edi = self;
    loc_8a0 = in_esi;
L_10066200: ;
    COW_AT(10066200)
    wr32(sp0 - 0x8a4u, ebp);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t15 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, ebp);
    t16 = g->edx;
    wr32(sp0 - 0x8a4u, t15);
    if (rd8(t15) != 0x23u)
    {
        edx = t16;
        esi = t15;
        loc_8a4 = t15;
        goto L_10066226;
    }
    eax = t15;
    edx = t16;
    loc_8a4 = t15;
    COW_AT(10066215)
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    cow_thiscall(g, COW_IMG(0x10069cd0u), sp0 - 0x808u, 1, loc_8a4);
    t17 = g->edx;
    edx = t17;
L_10066673: ;
    COW_AT(10066673)
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(sp0 - 0x860u))
    {
        eax = rd32(sp0 - 0x860u);
        ebp = ebp + 1u;
        goto L_100661fc;
    }
    eax = rd32(sp0 - 0x860u);
    COW_AT(10066680)
    if ((uint8_t)ebx == 0u)
    {
        esi = rd32(sp0 - 0x8a0u);
        goto L_100666ce;
    }
    esi = rd32(sp0 - 0x8a0u);
    COW_AT(10066685)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x89cu;
    t171 = cow_thiscall(g, COW_IMG(0x10069d30u), sp0 - 0x808u, 0);
    t172 = g->edx;
    g->edx = t172;
    t173 = cow_thiscall(g, COW_IMG(0x10069a50u), t171, 0);
    t174 = g->edx;
    wr32(sp0 - 0x8a0u, t173);
    cow_fastcall(g, COW_IMG(0x100679e0u), sp0 - 0x86cu, t174, 1, t173);
    t175 = g->edx;
    wr32(sp0 - 0x8a0u, sp0 - 0x84cu);
    wr32(sp0 - 0x8a4u, sp0 - 0x840u);
    g->eax = sp0 - 0x84cu;
    t176 = cow_thiscall(g, COW_IMG(0x10067b70u), sp0 - 0x86cu, 2, sp0 - 0x840u, sp0 - 0x84cu);
    t177 = rd32(t176 + 4u);
    wr32(sp0 - 0x8a0u, t177);
    t178 = cow_fastcall(g, COW_IMG(0x10068530u), COW_IMG(0x1047bf38u), t177, 1, t177);
    t179 = g->edx;
    t180 = cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x840u, t179, 0);
    t181 = g->edx;
    eax = t180;
    edx = t181;
L_100666f0: ;
    COW_AT(100666f0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x89cu;
    t186 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t187 = g->edx;
    g->edx = t187;
    t188 = cow_thiscall(g, COW_IMG(0x10069b90u), sp0 - 0x808u, 0);
    t189 = g->edx;
    t190 = cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x84cu, t189, 0);
    t191 = g->edx;
    cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x86cu, t191, 0);
    t192 = g->edx;
    g->ebx = rd32(sp0 - 0x894u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x89cu);
    g->ebp = rd32(sp0 - 0x898u);
    g->edx = t192;
    return COW_IMG(0x1047bf38u);
L_100661fc: ;
    COW_AT(100661fc)
    edi = rd32(sp0 - 0x85cu);
    loc_860 = rd32(sp0 - 0x860u);
    loc_8a0 = rd32(sp0 - 0x8a0u);
    goto L_10066200;
L_10066226: ;
    COW_AT(10066226)
    wr32(sp0 - 0x8a8u, sp0 - 0x818u);
    g->ebx = ebx;
    g->eax = sp0 - 0x818u;
    g->esp = sp0 - 0x8a0u;
    t18 = cow_thiscall(g, COW_IMG(0x100660a0u), edi, 2, sp0 - 0x818u, loc_8a4);
    wr32(sp0 - 0x834u, rd32(t18));
    t19 = rd32(t18 + 4u);
    wr32(sp0 - 0x830u, t19);
    t20 = rd32(t18 + 8u);
    wr32(sp0 - 0x82cu, t20);
    if (rd32(t18 + 0xcu) != 0x13u)
    {
        edx = t19;
        edi = rd32(t18 + 0xcu);
        goto L_10066311;
    }
    eax = t18;
    ecx = t20;
    edx = t19;
    COW_AT(10066255)
    wr32(sp0 - 0x8a4u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t21 = cow_call_regs(g, COW_IMG(0x10064440u), eax, g->ecx, g->edx, 1, 1, esi);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x8a4u, esi);
    if ((uint8_t)t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        loc_8a4 = esi;
    COW_AT(1006627d)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x8a0u;
        t27 = cow_call_regs(g, COW_IMG(0x10064410u), eax, g->ecx, g->edx, 1, 1, loc_8a4);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x8a4u, esi);
        if ((uint8_t)t27 == 0u)
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            loc_8a4 = esi;
    COW_AT(100662a3)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x8a0u;
            t34 = cow_cdecl(g, COW_IMG(0x10064470u), 1, loc_8a4);
            t35 = g->edx;
            if ((uint8_t)t34 == 0u)
            {
                edx = t35;
            }
            else
            {
                eax = t34;
                edx = t35;
    COW_AT(100662b3)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x8a0u;
                t36 = cow_thiscall(g, COW_IMG(0x10067930u), sp0 - 0x858u, 0);
                t37 = g->edx;
                wr32(sp0 - 0x8a4u, esi);
                t38 = cow_fastcall(g, COW_IMG(0x100679e0u), sp0 - 0x858u, t37, 1, esi);
                t39 = g->edx;
                wr32(sp0 - 0x8a4u, COW_IMG(0x10353e2cu));
                cow_thiscall(g, COW_IMG(0x10067cd0u), sp0 - 0x858u, 1, COW_IMG(0x10353e2cu));
                t40 = (((uint32_t)(int8_t)rd8(rd32(sp0 - 0x854u) + 3u) << 8u | (uint32_t)(int8_t)rd8(rd32(sp0 - 0x854u) + 2u)) << 8u | (uint32_t)(int8_t)rd8(rd32(sp0 - 0x854u) + 1u)) << 8u | (uint32_t)(int8_t)rd8(rd32(sp0 - 0x854u));
                wr32(sp0 - 0x8a4u, t40);
                g->eax = (uint32_t)(int8_t)rd8(rd32(sp0 - 0x854u));
                g->edx = t40;
                t41 = rd8(rd32(sp0 - 0x854u));
                t42 = cow_thiscall(g, COW_IMG(0x10069c70u), sp0 - 0x808u, 1, t40);
                t43 = g->edx;
                cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x858u, t43, 0);
                t44 = g->edx;
                edx = t44;
            }
        }
        else
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            loc_8a4 = esi;
    COW_AT(1006628a)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x8a0u;
            t30 = cow_thiscall_cdecl(g, COW_IMG(0x10064490u), ecx, 1, loc_8a4);
            t31 = g->edx;
            d32 = cow_take_float(g);
            wrf32(sp0 - 0x8a4u, (float)(double)(float)d32);
            g->edx = t31;
            cow_thiscall(g, COW_IMG(0x10069be0u), sp0 - 0x808u, 1, cow_f2bits((double)(float)d32));
            t33 = g->edx;
            edx = t33;
        }
    }
    else
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        loc_8a4 = esi;
    COW_AT(10066263)
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x8a0u;
        t24 = cow_cdecl(g, COW_IMG(0x100644a0u), 1, loc_8a4);
        t25 = g->edx;
        wr32(sp0 - 0x8a4u, t24);
        g->edx = t25;
        cow_thiscall(g, COW_IMG(0x10069bb0u), sp0 - 0x808u, 1, t24);
        t26 = g->edx;
        edx = t26;
    }
    goto L_10066673;
L_10066311: ;
    COW_AT(10066311)
    wr32(sp0 - 0x888u, 0u);
    wr32(sp0 - 0x890u, 0u);
    wr32(sp0 - 0x880u, 0u);
    g->eax = 0u;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t45 = cow_thiscall(g, COW_IMG(0x10069d30u), sp0 - 0x808u, 0);
    t46 = g->edx;
    wr32(sp0 - 0x8a4u, t45);
    t47 = cow_fastcall(g, COW_IMG(0x100683f0u), sp0 - 0x890u, t46, 1, t45);
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x10069d30u), sp0 - 0x808u, 0);
    t50 = g->edx;
    wr32(sp0 - 0x8a4u, t49);
    t51 = cow_fastcall(g, COW_IMG(0x100683f0u), sp0 - 0x888u, t50, 1, t49);
    t52 = g->edx;
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    t53 = cow_fastcall(g, COW_IMG(0x100683f0u), sp0 - 0x880u, t52, 1, sp0 - 0x890u);
    t54 = g->edx;
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x10069a50u), sp0 - 0x888u, 0);
    t56 = g->edx;
    if (rd8(t55) == 0x23u)
    {
        eax = t55;
        edx = t56;
        goto L_100665e4;
    }
    eax = t55;
    edx = t56;
    COW_AT(1006636b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t57 = cow_thiscall(g, COW_IMG(0x10069a50u), sp0 - 0x890u, 0);
    t58 = g->edx;
    if (rd8(t57) == 0x23u)
    {
        eax = t57;
        edx = t58;
        goto L_100665e4;
    }
    eax = t57;
    edx = t58;
    COW_AT(1006637d)
    if (edi > 0x1bu) goto L_100665b3;
    COW_AT(10066386)
    t59 = rd32(COW_IMG(0x1006672cu) + rd8(COW_IMG(0x1006676cu) + edi) * 4u);
    switch (t59 - RD)
    {
    case 0x10066395u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_10066395;
    case 0x100663b1u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100663b1;
    case 0x100663cdu: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100663cd;
    case 0x100663e8u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100663e8;
    case 0x10066403u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_10066403;
    case 0x10066420u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_10066420;
    case 0x1006643du: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_1006643d;
    case 0x10066473u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_10066473;
    case 0x100664a9u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100664a9;
    case 0x100664b9u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100664b9;
    case 0x100664c9u: goto L_100664c9;
    case 0x100664d9u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100664d9;
    case 0x100664e9u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_100664e9;
    case 0x100664f9u: goto L_100664f9;
    case 0x10066516u: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_10066516;
    case 0x1006652cu: edx = rd8(COW_IMG(0x1006676cu) + edi); goto L_1006652c;
    default: rt_fatal(g, COW_IMG(0x1006638eu), "switch");
    }
    return 0;
L_10066395: ;
    COW_AT(10066395)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t131 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t132 = g->edx;
    g->edx = t132;
    t133 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t134 = g->edx;
    eax = t133 * t131;
    edx = t134;
L_1006650c: ;
    COW_AT(1006650c)
    wr32(sp0 - 0x8a4u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    cow_thiscall(g, COW_IMG(0x100684f0u), sp0 - 0x880u, 1, eax);
    t135 = g->edx;
    edx = t135;
L_10066516: ;
    COW_AT(10066516)
    wr32(sp0 - 0x8a4u, sp0 - 0x880u);
    g->eax = sp0 - 0x880u;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t136 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x880u);
    t137 = g->edx;
    eax = t136;
    edx = t137;
L_10066658: ;
    COW_AT(10066658)
    g->eax = eax;
    g->esp = sp0 - 0x8a0u;
    t166 = cow_fastcall(g, COW_IMG(0x100683d0u), sp0 - 0x880u, edx, 0);
    t167 = g->edx;
    t168 = cow_fastcall(g, COW_IMG(0x100683d0u), sp0 - 0x890u, t167, 0);
    t169 = g->edx;
    cow_fastcall(g, COW_IMG(0x100683d0u), sp0 - 0x888u, t169, 0);
    t170 = g->edx;
    edx = t170;
    goto L_10066673;
L_100663b1: ;
    COW_AT(100663b1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t126 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t127 = g->edx;
    t128 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t129 = cow_divs(g, t128, t126);
    t130 = cow_mods(g, t128, t126);
    eax = t129;
    edx = t130;
    goto L_1006650c;
L_100663cd: ;
    COW_AT(100663cd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t122 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t123 = g->edx;
    g->edx = t123;
    t124 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t125 = g->edx;
    eax = t122 + t124;
    edx = t125;
    goto L_1006650c;
L_100663e8: ;
    COW_AT(100663e8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t118 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t119 = g->edx;
    g->edx = t119;
    t120 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t121 = g->edx;
    eax = t120 - t118;
    edx = t121;
    goto L_1006650c;
L_10066403: ;
    COW_AT(10066403)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t109 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t110 = g->edx;
    t111 = g->cf;
    t112 = g->pf;
    t113 = g->zf;
    t114 = g->sf;
    t115 = g->of;
    g->edx = t110;
    t116 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t117 = g->edx;
    eax = t116 << (t109 & 0x1fu);
    edx = t117;
    goto L_1006650c;
L_10066420: ;
    COW_AT(10066420)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t100 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x890u, 0);
    t101 = g->edx;
    t102 = g->cf;
    t103 = g->pf;
    t104 = g->zf;
    t105 = g->sf;
    t106 = g->of;
    g->edx = t101;
    t107 = cow_thiscall(g, COW_IMG(0x10069970u), sp0 - 0x888u, 0);
    t108 = g->edx;
    eax = (uint32_t)((int32_t)t107 >> ((t100 & 0x1fu) < 0x20u ? t100 & 0x1fu : 0x1fu));
    edx = t108;
    goto L_1006650c;
L_1006643d: ;
    COW_AT(1006643d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t93 = cow_thiscall(g, COW_IMG(0x100699a0u), sp0 - 0x890u, 0);
    t94 = g->edx;
    g->edx = t94;
    t95 = cow_thiscall(g, COW_IMG(0x100699a0u), sp0 - 0x888u, 0);
    t96 = g->edx;
    wr32(sp0 - 0x8a4u, t95 & t93);
    g->edx = t96;
    cow_thiscall(g, COW_IMG(0x10068510u), sp0 - 0x880u, 1, t95 & t93);
    t97 = g->edx;
    wr32(sp0 - 0x8a4u, sp0 - 0x880u);
    g->eax = sp0 - 0x880u;
    g->edx = t97;
    t98 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x880u);
    t99 = g->edx;
    eax = t98;
    edx = t99;
    goto L_10066658;
L_10066473: ;
    COW_AT(10066473)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t86 = cow_thiscall(g, COW_IMG(0x100699a0u), sp0 - 0x890u, 0);
    t87 = g->edx;
    g->edx = t87;
    t88 = cow_thiscall(g, COW_IMG(0x100699a0u), sp0 - 0x888u, 0);
    t89 = g->edx;
    wr32(sp0 - 0x8a4u, t88 | t86);
    g->edx = t89;
    cow_thiscall(g, COW_IMG(0x10068510u), sp0 - 0x880u, 1, t88 | t86);
    t90 = g->edx;
    wr32(sp0 - 0x8a4u, sp0 - 0x880u);
    g->eax = sp0 - 0x880u;
    g->edx = t90;
    t91 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x880u);
    t92 = g->edx;
    eax = t91;
    edx = t92;
    goto L_10066658;
L_100664a9: ;
    COW_AT(100664a9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = sp0 - 0x890u;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t84 = cow_thiscall(g, COW_IMG(0x10068f80u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t85 = g->edx;
    eax = t84;
    edx = t85;
L_10066507: ;
    COW_AT(10066507)
    eax = (uint8_t)eax;
    goto L_1006650c;
L_100664b9: ;
    COW_AT(100664b9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t82 = cow_thiscall(g, COW_IMG(0x10068ef0u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t83 = g->edx;
    eax = t82;
    edx = t83;
    goto L_10066507;
L_100664c9: ;
    COW_AT(100664c9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = eax;
    g->edx = sp0 - 0x890u;
    g->esp = sp0 - 0x8a0u;
    t80 = cow_thiscall(g, COW_IMG(0x10069010u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    goto L_10066507;
L_100664d9: ;
    COW_AT(100664d9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = sp0 - 0x890u;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t78 = cow_thiscall(g, COW_IMG(0x100690a0u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t79 = g->edx;
    eax = t78;
    edx = t79;
    goto L_10066507;
L_100664e9: ;
    COW_AT(100664e9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t76 = cow_thiscall(g, COW_IMG(0x10069130u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t77 = g->edx;
    eax = t76;
    edx = t77;
    goto L_10066507;
L_100664f9: ;
    COW_AT(100664f9)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = eax;
    g->edx = sp0 - 0x890u;
    g->esp = sp0 - 0x8a0u;
    t74 = cow_thiscall(g, COW_IMG(0x100691c0u), sp0 - 0x888u, 1, sp0 - 0x890u);
    t75 = g->edx;
    eax = t74;
    edx = t75;
    goto L_10066507;
L_1006652c: ;
    COW_AT(1006652c)
    wr32(sp0 - 0x8a4u, sp0 - 0x888u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t60 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x888u);
    t61 = g->edx;
    if (edi == 0x19u)
    {
        eax = t60;
        edx = t61;
        goto L_10066556;
    }
    eax = t60;
    edx = t61;
    edi = edi - 0x19u;
    COW_AT(10066542)
    if (edi == 1u) goto L_1006654f;
    edi = edi - 1u;
    COW_AT(10066545)
    if (edi != 1u) goto L_10066564;
    COW_AT(10066548)
    wr32(sp0 - 0x8a4u, COW_IMG(0x10353e28u));
    loc_8a4 = COW_IMG(0x10353e28u);
L_1006655b: ;
    COW_AT(1006655b)
    g->esp = sp0 - 0x8a0u;
    cow_fastcall(g, COW_IMG(0x100679e0u), sp0 - 0x86cu, edx, 1, loc_8a4);
L_10066564: ;
    COW_AT(10066564)
    wr32(sp0 - 0x8a4u, sp0 - 0x84cu);
    wr32(sp0 - 0x8a8u, sp0 - 0x824u);
    g->eax = sp0 - 0x824u;
    g->edx = sp0 - 0x84cu;
    g->esp = sp0 - 0x8a0u;
    t62 = cow_thiscall_cdecl(g, COW_IMG(0x10069a50u), sp0 - 0x890u, 2, sp0 - 0x824u, sp0 - 0x84cu);
    t63 = g->edx;
    wr32(sp0 - 0x8acu, t62);
    wr32(sp0 - 0x8b0u, sp0 - 0x840u);
    g->edx = t63;
    g->esp = sp0 - 0x8a8u;
    t64 = cow_thiscall(g, COW_IMG(0x10067bf0u), sp0 - 0x86cu, 2, sp0 - 0x840u, t62);
    t65 = g->edx;
    g->esp = sp0 - 0x8a0u;
    t66 = cow_thiscall(g, COW_IMG(0x10067b70u), t64, 2, sp0 - 0x824u, sp0 - 0x84cu);
    t67 = rd32(t66 + 4u);
    wr32(sp0 - 0x8a4u, t67);
    t68 = cow_fastcall(g, COW_IMG(0x100679e0u), sp0 - 0x84cu, t67, 1, t67);
    t69 = g->edx;
    t70 = cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x824u, t69, 0);
    t71 = g->edx;
    t72 = cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x840u, t71, 0);
    t73 = g->edx;
    eax = t72;
    edx = t73;
    ebx = (ebx & 0xffffff00u) | 1u;
    goto L_10066658;
L_1006654f: ;
    COW_AT(1006654f)
    wr32(sp0 - 0x8a4u, COW_IMG(0x10353e20u));
    loc_8a4 = COW_IMG(0x10353e20u);
    goto L_1006655b;
L_10066556: ;
    COW_AT(10066556)
    wr32(sp0 - 0x8a4u, COW_IMG(0x10353e18u));
    loc_8a4 = COW_IMG(0x10353e18u);
    goto L_1006655b;
L_100665b3: ;
    COW_AT(100665b3)
    wr32(sp0 - 0x8a4u, sp0 - 0x890u);
    g->eax = sp0 - 0x890u;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t138 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x890u);
    t139 = g->edx;
    wr32(sp0 - 0x8a4u, sp0 - 0x888u);
    g->edx = t139;
    t140 = cow_thiscall(g, COW_IMG(0x10069d00u), sp0 - 0x808u, 1, sp0 - 0x888u);
    t141 = g->edx;
    wr32(sp0 - 0x8a4u, esi);
    g->edx = t141;
    t142 = cow_thiscall(g, COW_IMG(0x10069cd0u), sp0 - 0x808u, 1, esi);
    t143 = g->edx;
    eax = t142;
    edx = t143;
    goto L_10066658;
L_100665e4: ;
    COW_AT(100665e4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x8a0u;
    t144 = cow_thiscall(g, COW_IMG(0x10067930u), sp0 - 0x878u, 0);
    t145 = g->edx;
    g->edx = t145;
    t146 = cow_thiscall(g, COW_IMG(0x10069a50u), sp0 - 0x888u, 0);
    t147 = g->edx;
    wr32(sp0 - 0x8a4u, t146);
    t148 = cow_fastcall(g, COW_IMG(0x100679e0u), sp0 - 0x878u, t147, 1, t146);
    t149 = g->edx;
    wr32(sp0 - 0x8a4u, 0u);
    g->edx = t149;
    t150 = cow_thiscall(g, COW_IMG(0x10067d90u), sp0 - 0x878u, 1, 0u);
    t151 = g->edx;
    g->edx = t151;
    t152 = cow_thiscall(g, COW_IMG(0x10069a50u), sp0 - 0x890u, 0);
    t153 = g->edx;
    wr32(sp0 - 0x8a4u, t152);
    g->edx = t153;
    t154 = cow_thiscall(g, COW_IMG(0x10067cd0u), sp0 - 0x878u, 1, t152);
    t155 = g->edx;
    wr32(sp0 - 0x8a4u, 0u);
    g->edx = t155;
    t156 = cow_thiscall(g, COW_IMG(0x10067d90u), sp0 - 0x878u, 1, 0u);
    t157 = g->edx;
    wr32(sp0 - 0x8a4u, esi);
    g->edx = t157;
    t158 = cow_thiscall(g, COW_IMG(0x10067cd0u), sp0 - 0x878u, 1, esi);
    t159 = g->edx;
    wr32(sp0 - 0x8a4u, 0u);
    t160 = cow_thiscall(g, COW_IMG(0x10067d90u), sp0 - 0x878u, 1, 0u);
    t161 = rd32(sp0 - 0x874u);
    wr32(sp0 - 0x8a4u, t161);
    g->edx = t161;
    t162 = cow_thiscall(g, COW_IMG(0x10069cd0u), sp0 - 0x808u, 1, t161);
    t163 = g->edx;
    t164 = cow_fastcall(g, COW_IMG(0x10067950u), sp0 - 0x878u, t163, 0);
    t165 = g->edx;
    eax = t164;
    edx = t165;
    goto L_10066658;
L_100666ce: ;
    COW_AT(100666ce)
    if (rd32(sp0 - 0x608u) == 0u)
    {
        eax = rd32(sp0 - 0x608u);
    }
    else
    {
        eax = rd32(sp0 - 0x608u);
    COW_AT(100666d9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x89cu;
        t182 = cow_thiscall(g, COW_IMG(0x10069d30u), sp0 - 0x808u, 0);
        t183 = g->edx;
        wr32(sp0 - 0x8a0u, t182);
        t184 = cow_fastcall(g, COW_IMG(0x100683f0u), COW_IMG(0x1047bf38u), t183, 1, t182);
        t185 = g->edx;
        eax = t184;
        edx = t185;
    }
    goto L_100666f0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10066160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10066178u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x89cu);
        in_ebp = rd32(sp0 - 0x898u);
        g->esp = sp0 - 0x89cu;
        g->edi = self;
        wr32(sp0 - 0x894u, in_ebx);
        wr32(sp0 - 0x85cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1006619au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        self = g->edi;
        loc_8a0 = rd32(sp0 - 0x8a0u);
        in_edi = rd32(sp0 - 0x89cu);
        in_ebp = rd32(sp0 - 0x898u);
        g->esp = sp0 - 0x89cu;
        wr32(sp0 - 0x894u, in_ebx);
        wr32(sp0 - 0x85cu, self);
        (void)sp0;
        return 1;
    }
    case 0x100661fcu:
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
        g->esp = sp0 - 0x8a0u;
        (void)sp0;
        return 1;
    }
    case 0x10066200u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_860;
        uint32_t loc_8a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a0 = rd32(sp0 - 0x8a0u);
        loc_860 = rd32(sp0 - 0x860u);
        g->esp = sp0 - 0x8a0u;
        (void)sp0;
        return 1;
    }
    case 0x10066215u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        (void)sp0;
        return 1;
    }
    case 0x10066226u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        (void)sp0;
        return 1;
    }
    case 0x10066255u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x10066263u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x1006627du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x1006628au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x100662a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x100662b3u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x10066311u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x1006636bu:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x1006637du:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066386u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066395u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100663b1u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100663cdu:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100663e8u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066403u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066420u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x1006643du:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066473u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664a9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664b9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664c9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664d9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664e9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100664f9u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066507u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x1006650cu:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066516u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x1006652cu:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066542u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x888u);
        (void)sp0;
        return 1;
    }
    case 0x10066545u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x888u);
        (void)sp0;
        return 1;
    }
    case 0x10066548u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x888u);
        (void)sp0;
        return 1;
    }
    case 0x1006654fu:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x888u);
        (void)sp0;
        return 1;
    }
    case 0x10066556u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x888u);
        (void)sp0;
        return 1;
    }
    case 0x1006655bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a4u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x10066564u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        (void)sp0;
        return 1;
    }
    case 0x100665b3u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x100665e4u:
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
        g->esp = sp0 - 0x8a0u;
        wr32(sp0 - 0x8a8u, sp0 - 0x818u);
        wr32(sp0 - 0x8a4u, sp0 - 0x890u);
        (void)sp0;
        return 1;
    }
    case 0x10066658u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        g->esp = sp0 - 0x8a0u;
        (void)sp0;
        return 1;
    }
    case 0x10066673u:
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
        g->esp = sp0 - 0x8a0u;
        (void)sp0;
        return 1;
    }
    case 0x10066680u:
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
        g->esp = sp0 - 0x8a0u;
        (void)sp0;
        return 1;
    }
    case 0x10066685u:
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
        g->esp = sp0 - 0x89cu;
        (void)sp0;
        return 1;
    }
    case 0x100666ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_860;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_860 = rd32(sp0 - 0x860u);
        g->esp = sp0 - 0x89cu;
        (void)sp0;
        return 1;
    }
    case 0x100666d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_860;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_860 = rd32(sp0 - 0x860u);
        g->esp = sp0 - 0x89cu;
        (void)sp0;
        return 1;
    }
    case 0x100666f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_860;
        uint32_t loc_8a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8a4 = rd32(sp0 - 0x8a4u);
        loc_860 = rd32(sp0 - 0x860u);
        g->esp = sp0 - 0x89cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     100661f9: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10066160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10066160(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
