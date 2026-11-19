/* f_0x101844c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101844c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_100;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_dc;
    uint32_t loc_e0;
    uint32_t loc_e4;
    uint32_t loc_ec;
    uint32_t loc_f0;
    uint32_t loc_f4;
    uint32_t loc_f8;
    uint32_t loc_fc;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg14 = rd32(sp0 + 0x38u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 304u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101844deu: eax = g->eax; self = g->ecx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xfcu); in_esi = rd32(sp0 - 0xf8u); in_ebp = rd32(sp0 - 0xf4u); in_ebx = rd32(sp0 - 0xf0u); g->ebp = rd32(sp0 - 0xf4u); g->ebx = rd32(sp0 - 0xf0u); g->edi = rd32(sp0 - 0xfcu); g->esi = rd32(sp0 - 0xf8u); goto E_101844de;
    case 0x101844efu: eax = g->eax; self = g->ecx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0xfcu); in_esi = rd32(sp0 - 0xf8u); in_ebp = rd32(sp0 - 0xf4u); in_ebx = rd32(sp0 - 0xf0u); loc_dc = rd32(sp0 - 0xdcu); g->ebp = rd32(sp0 - 0xf4u); g->ebx = rd32(sp0 - 0xf0u); g->edi = rd32(sp0 - 0xfcu); g->esi = rd32(sp0 - 0xf8u); goto E_101844ef;
    case 0x10184503u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184503;
    case 0x10184535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184535;
    case 0x10184550u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_dc = rd32(sp0 - 0xdcu); goto E_10184550;
    case 0x1018458au: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018458a;
    case 0x101845ecu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101845ec;
    case 0x10184613u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); goto E_10184613;
    case 0x1018469eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018469e;
    case 0x101846cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); goto E_101846cf;
    case 0x101846dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101846dc;
    case 0x101846e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_101846e1;
    case 0x101848fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); goto E_101848fa;
    case 0x1018492cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018492c;
    case 0x1018493au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1018493a;
    case 0x10184978u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10184978;
    case 0x1018498au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); goto E_1018498a;
    case 0x1018498eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); goto E_1018498e;
    case 0x101849d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101849d6;
    case 0x101849dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101849da;
    case 0x101849dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_f4 = rd32(sp0 - 0xf4u); goto E_101849dc;
    case 0x10184a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10184a0e;
    case 0x10184a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184a21;
    case 0x10184a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184a36;
    case 0x10184a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184a39;
    case 0x10184a44u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184a44;
    case 0x10184ac5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184ac5;
    case 0x10184acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184acf;
    case 0x10184adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184adb;
    case 0x10184aeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184aee;
    case 0x10184af2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184af2;
    case 0x10184af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184af4;
    case 0x10184affu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184aff;
    case 0x10184b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b05;
    case 0x10184b0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b0c;
    case 0x10184b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b10;
    case 0x10184b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b13;
    case 0x10184b2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b2a;
    case 0x10184b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_d0 = rd32(sp0 - 0xd0u); goto E_10184b3f;
    case 0x10184b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184b9d;
    case 0x10184bb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184bb6;
    case 0x10184bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_f8 = rd32(sp0 - 0xf8u); loc_ec = rd32(sp0 - 0xecu); loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); goto E_10184bcd;
    case 0x10184c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_ec = rd32(sp0 - 0xecu); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184c49;
    case 0x10184c64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_100 = rd32(sp0 - 0x100u); loc_fc = rd32(sp0 - 0xfcu); loc_f8 = rd32(sp0 - 0xf8u); loc_f4 = rd32(sp0 - 0xf4u); loc_f0 = rd32(sp0 - 0xf0u); loc_ec = rd32(sp0 - 0xecu); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d4 = rd32(sp0 - 0xd4u); loc_d0 = rd32(sp0 - 0xd0u); goto E_10184c64;
    default: break;
    }
#endif

    COW_AT(101844c0)
    wr32(sp0 - 0xf0u, in_ebx);
    wr32(sp0 - 0xf4u, in_ebp);
    wr32(sp0 - 0xf8u, in_esi);
    wr32(sp0 - 0xfcu, in_edi);
    if (rd32(arg1 + 0x18u) == 0u)
    {
        loc_f0 = in_ebx;
        loc_f4 = in_ebp;
        loc_f8 = in_esi;
        loc_fc = in_edi;
    }
    else
    {
        ebp = rd32(arg1 + 0x18u);
    COW_AT(101844de)
        wr32(sp0 - 0xdcu, 0u);
        if (rd32(COW_IMG(0x106631d4u)) == 0u)
        {
            loc_f0 = in_ebx;
            loc_f4 = in_ebp;
            loc_f8 = in_esi;
            loc_fc = in_edi;
            loc_dc = 0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x106631d4u));
    COW_AT(101844ef)
            wr32(sp0 - 0x100u, 0x31305f6cu);
            g->eax = eax;
            g->esp = sp0 - 0xfcu;
            t1 = cow_stdcall(g, COW_IMG(0x10178760u), 1, 0x31305f6cu);
            wr32(sp0 - 0xdcu, t1);
            if (t1 == 0u)
            {
                loc_dc = t1;
    COW_AT(10184535)
                wr32(sp0 - 0x100u, 0u);
                t6 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t6);
                t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t7);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t7) + 0xb8u), t6, 3, t7, t6, 0u);
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
                loc_dc = rd32(sp0 - 0xdcu);
            }
            else
            {
                edi = t1;
                loc_dc = t1;
    COW_AT(10184503)
                wr32(sp0 - 0x100u, 1u);
                t2 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t2);
                t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t3);
                g->edx = t2;
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t3) + 0xb8u), rd32(t3), 3, t3, t2, 1u);
                t4 = g->edx;
                wr32(sp0 - 0x100u, edi + 8u);
                t5 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t5);
                cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t5, edi + 8u);
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = rd32(sp0 - 0xf4u);
                loc_f8 = rd32(sp0 - 0xf8u);
                loc_fc = rd32(sp0 - 0xfcu);
                loc_dc = rd32(sp0 - 0xdcu);
            }
        }
    COW_AT(10184550)
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0x104u, 0x89u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x108u, t8);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t9 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0x108u;
        cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 0);
        t10 = g->edx;
        edi = sp0 - 0xdcu;
        eax = 0u;
        ecx = 0x1au;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(self + 0x394a4u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
            edx = t10;
    COW_AT(101845ec)
            wr32(sp0 - 0x10cu, 0u);
            wr32(sp0 - 0x110u, 0u);
            wr32(sp0 - 0x114u, sp0 - 0xdcu);
            g->eax = sp0 - 0xdcu;
            g->esp = sp0 - 0x108u;
            t17 = cow_thiscall(g, COW_IMG(0x1018b9a0u), ecx, 3, sp0 - 0xdcu, 0u, 0u);
            wr32(sp0 - 0x10cu, sp0 - 0xdcu);
            t18 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x110u, t18);
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t18, sp0 - 0xdcu);
            edx = rd32(self + 0x394a8u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(1018458a)
            wr32(sp0 - 0x10cu, sp0 - 0x74u);
            wr32(sp0 - 0x110u, sp0 - 0xdcu);
            g->eax = sp0 - 0xdcu;
            g->esp = sp0 - 0x108u;
            t11 = cow_thiscall(g, COW_IMG(0x10188b70u), ecx, 2, sp0 - 0xdcu, sp0 - 0x74u);
            wr32(sp0 - 0x10cu, sp0 - 0xdcu);
            t12 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x110u, t12);
            g->edx = t12;
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t12, sp0 - 0xdcu);
            t13 = g->edx;
            wr32(sp0 - 0x10cu, sp0 - 0x74u);
            t14 = rd32(self + 0x394acu);
            wr32(sp0 - 0x110u, t14);
            cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, t14, sp0 - 0x74u);
            wr32(sp0 - 0x10cu, 1u);
            t15 = rd32(self + 0x394a8u);
            wr32(sp0 - 0x110u, t15);
            t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x114u, t16);
            cow_thiscall(g, rd32(rd32(t16) + 0xb8u), rd32(t16), 3, t16, t15, 1u);
            edx = rd32(self + 0x394acu);
        }
    COW_AT(10184613)
        wr32(sp0 - 0x10cu, 1u);
        wr32(sp0 - 0x110u, edx);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x114u, t19);
        g->edx = edx;
        g->esp = sp0 - 0x114u;
        cow_thiscall(g, rd32(rd32(t19) + 0xb8u), rd32(t19), 0);
        t20 = g->edx;
        wr32(sp0 - 0x118u, 0u);
        wr32(sp0 - 0x11cu, 0u);
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        cow_thiscall(g, COW_IMG(0x1018b9e0u), rd32(COW_IMG(0x1065cb04u)), 3, sp0 - 0x100u, 0u, 0u);
        wr32(sp0 - 0x118u, 0u);
        wr32(sp0 - 0x11cu, 0u);
        wr32(sp0 - 0x120u, sp0 - 0xf8u);
        wr32(sp0 - 0x124u, sp0 - 0xecu);
        wr32(sp0 - 0x128u, sp0 - 0xf0u);
        cow_thiscall(g, COW_IMG(0x1018ba20u), rd32(COW_IMG(0x1065cb04u)), 5, sp0 - 0xf0u, sp0 - 0xecu, sp0 - 0xf8u, 0u, 0u);
        t21 = rd32(sp0 - 0x100u);
        wr32(sp0 - 0x118u, t21);
        wr32(sp0 - 0x11cu, 0x8bu);
        t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x120u, t22);
        g->esp = sp0 - 0x120u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), t21, 0);
        wr32(sp0 - 0x124u, 1u);
        wr32(sp0 - 0x128u, 0x1cu);
        t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x12cu, t23);
        t24 = rd32(t23);
        g->esp = sp0 - 0x110u;
        cow_thiscall(g, rd32(t24 + 0xc8u), t24, 7, t23, 0x1cu, 1u, rd32(sp0 - 0x120u), 0x8bu, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
        t25 = g->ecx;
        if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            ecx = (t25 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
            goto L_1018492c;
        }
        eax = rd32(COW_IMG(0x1045666cu));
        ecx = (t25 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92du);
    COW_AT(1018469e)
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, 0x8cu);
        t26 = rd32(eax + 0xcu);
        wr32(sp0 - 0x11cu, t26);
        g->edx = rd32(t26);
        t27 = rd32(t26);
        g->esp = sp0 - 0x118u;
        cow_thiscall(g, rd32(t27 + 0xc8u), ecx, 1, t26);
        t28 = g->edx;
        wr32(sp0 - 0x11cu, 3u);
        wr32(sp0 - 0x120u, 0x23u);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x124u, t29);
        g->esp = sp0 - 0x104u;
        cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 8, t29, 0x23u, 3u, 0x8cu, 0u, rd32(sp0 - 0x110u), 1u, rd32(sp0 - 0x108u));
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
        loc_fc = rd32(sp0 - 0xfcu);
        loc_100 = rd32(sp0 - 0x100u);
L_101846cf: ;
    COW_AT(101846cf)
        wr32(sp0 - 0x108u, 0u);
        wr32(sp0 - 0x10cu, 0x30u);
        wr32(sp0 - 0x110u, eax);
        g->esp = sp0 - 0x110u;
        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 0);
        loc_108 = 0u;
L_101846dc: ;
    COW_AT(101846dc)
        eax = rd32(COW_IMG(0x1045666cu));
        loc_10c = 0x30u;
L_101846e1: ;
    COW_AT(101846e1)
        t37 = rd32(sp0 - 0xecu);
        wr32(sp0 - 0x114u, t37);
        wr32(sp0 - 0x118u, 0x22u);
        t38 = rd32(eax + 0xcu);
        wr32(sp0 - 0x11cu, t38);
        g->esp = sp0 - 0x11cu;
        cow_thiscall(g, rd32(rd32(rd32(eax + 0xcu)) + 0xc8u), t37, 0);
        t39 = rd32(sp0 - 0x100u);
        wr32(sp0 - 0x120u, t39);
        wr32(sp0 - 0x124u, 0x24u);
        t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x128u, t40);
        g->esp = sp0 - 0xe8u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 16, t40, 0x24u, t39, rd32(sp0 - 0x11cu), 0x22u, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu));
        t41 = rd32(sp0 - 0xc0u);
        wr32(sp0 - 0xecu, t41);
        wr32(sp0 - 0xf0u, 0x25u);
        t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf4u, t42);
        g->esp = sp0 - 0xe4u;
        cow_thiscall(g, rd32(rd32(t42) + 0xc8u), rd32(t42), 4, t42, 0x25u, t41, rd32(sp0 - 0xe8u));
        wr32(sp0 - 0xe8u, self + 0x3913cu);
        t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xecu, t43);
        g->edx = self + 0x3913cu;
        g->esp = sp0 - 0xecu;
        cow_thiscall(g, rd32(rd32(t43) + 0xa8u), rd32(t43), 0);
        t44 = g->edx;
        wr32(sp0 - 0xf0u, 1u);
        wr32(sp0 - 0xf4u, 0x11u);
        wr32(sp0 - 0xf8u, 0u);
        t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xfcu, t45);
        g->esp = sp0 - 0xbcu;
        cow_thiscall(g, rd32(rd32(t45) + 0xfcu), rd32(t45), 16, t45, 0u, 0x11u, 1u, rd32(sp0 - 0xecu), self + 0x3913cu, rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u));
        wr32(sp0 - 0xc0u, 2u);
        wr32(sp0 - 0xc4u, 0x10u);
        wr32(sp0 - 0xc8u, 0u);
        t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xccu, t46);
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 11, t46, 0u, 0x10u, 2u, rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u));
        wr32(sp0 - 0xa4u, 5u);
        wr32(sp0 - 0xa8u, 1u);
        wr32(sp0 - 0xacu, 0u);
        t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xb0u, t47);
        cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 1u, 5u);
        wr32(sp0 - 0xa4u, 2u);
        wr32(sp0 - 0xa8u, 2u);
        wr32(sp0 - 0xacu, 0u);
        t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xb0u, t48);
        g->esp = sp0 - 0x88u;
        cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 10, t48, 0u, 2u, 2u, rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
        wr32(sp0 - 0x8cu, 1u);
        wr32(sp0 - 0x90u, 3u);
        wr32(sp0 - 0x94u, 0u);
        t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t49);
        cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 0u, 3u, 1u);
        wr32(sp0 - 0x8cu, 6u);
        wr32(sp0 - 0x90u, 4u);
        wr32(sp0 - 0x94u, 0u);
        t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t50);
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 0);
        wr32(sp0 - 0x9cu, 2u);
        wr32(sp0 - 0xa0u, 5u);
        wr32(sp0 - 0xa4u, 0u);
        t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa8u, t51);
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 2, t51, 0u);
        wr32(sp0 - 0xa4u, 1u);
        wr32(sp0 - 0xa8u, 6u);
        wr32(sp0 - 0xacu, 0u);
        t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xb0u, t52);
        g->esp = sp0 - 0x88u;
        cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 10, t52, 0u, 6u, 1u, 5u, 2u, rd32(sp0 - 0x98u), 0u, 4u, 6u);
        wr32(sp0 - 0x8cu, 1u);
        wr32(sp0 - 0x90u, 4u);
        wr32(sp0 - 0x94u, 1u);
        t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x98u, t53);
        g->esp = sp0 - 0x8cu;
        cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 3, t53, 1u, 4u);
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 1u);
        t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x9cu, t54);
        g->esp = sp0 - 0x64u;
        cow_thiscall(g, rd32(rd32(t54) + 0xfcu), rd32(t54), 14, t54, 1u, 1u, 1u, 1u, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
        wr32(sp0 - 0x68u, 1u);
        wr32(sp0 - 0x6cu, 1u);
        wr32(sp0 - 0x70u, 2u);
        t55 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x74u, t55);
        g->esp = sp0 - 0x70u;
        cow_thiscall(g, rd32(rd32(t55) + 0xfcu), rd32(t55), 1, t55);
        wr32(sp0 - 0x74u, 1u);
        wr32(sp0 - 0x78u, 4u);
        wr32(sp0 - 0x7cu, 2u);
        t56 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x80u, t56);
        g->esp = sp0 - 0x80u;
        cow_thiscall(g, rd32(rd32(t56) + 0xfcu), rd32(t56), 0);
        wr32(sp0 - 0x84u, 1u);
        wr32(sp0 - 0x88u, 0xdu);
        wr32(sp0 - 0x8cu, 0u);
        t57 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x90u, t57);
        g->esp = sp0 - 0x90u;
        cow_thiscall(g, rd32(rd32(t57) + 0xfcu), rd32(t57), 0);
        wr32(sp0 - 0x94u, 1u);
        wr32(sp0 - 0x98u, 0xeu);
        wr32(sp0 - 0x9cu, 0u);
        t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xa0u, t58);
        g->esp = sp0 - 0xa0u;
        cow_thiscall(g, rd32(rd32(t58) + 0xfcu), rd32(t58), 0);
        wr32(sp0 - 0xa4u, 3u);
        wr32(sp0 - 0xa8u, 0xdu);
        wr32(sp0 - 0xacu, 1u);
        t59 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xb0u, t59);
        g->esp = sp0 - 0xb0u;
        cow_thiscall(g, rd32(rd32(t59) + 0xfcu), rd32(t59), 0);
        wr32(sp0 - 0xb4u, 3u);
        wr32(sp0 - 0xb8u, 0xeu);
        wr32(sp0 - 0xbcu, 1u);
        t60 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xc0u, t60);
        g->eax = t60;
        t61 = rd32(t60);
        g->esp = sp0 - 0xc0u;
        t62 = cow_thiscall(g, rd32(t61 + 0xfcu), t61, 0);
        t63 = g->ecx;
        wr32(sp0 - 0xc4u, rd32(COW_IMG(0x10632038u)));
        g->edx = rd32(COW_IMG(0x10632038u));
        t64 = rd32(COW_IMG(0x10632038u));
        cow_cdecl(g, COW_IMG(0x10177400u), 1, t64);
        t65 = g->edx;
        wr32(sp0 - 0xc4u, 0u);
        wr32(sp0 - 0xc8u, 0x1bu);
        t66 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xccu, t66);
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, rd32(rd32(t66) + 0xc8u), rd32(t66), 0);
        if (arg14 == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(1018498a)
            wr32(sp0 - 0xd0u, 0u);
            wr32(sp0 - 0xd4u, 0xfu);
            loc_d0 = 0u;
            loc_d4 = 0xfu;
            loc_c4 = 0u;
            loc_c8 = 0x1bu;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101848fa)
            wr32(sp0 - 0xd0u, 1u);
            wr32(sp0 - 0xd4u, 0xfu);
            wr32(sp0 - 0xd8u, eax);
            g->esp = sp0 - 0xc0u;
            cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 6, eax, 0xfu, 1u, rd32(sp0 - 0xccu), 0x1bu, 0u);
            wr32(sp0 - 0xc4u, 5u);
            wr32(sp0 - 0xc8u, 0x19u);
            t67 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xccu, t67);
            g->esp = sp0 - 0xccu;
            cow_thiscall(g, rd32(rd32(t67) + 0xc8u), rd32(t67), 0);
            wr32(sp0 - 0xd0u, 0x60u);
            wr32(sp0 - 0xd4u, 0x18u);
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
            loc_d0 = 0x60u;
            loc_d4 = 0x18u;
            loc_c4 = 5u;
            loc_c8 = 0x19u;
        }
    COW_AT(1018498e)
        wr32(sp0 - 0xd8u, eax);
        g->esp = sp0 - 0xd8u;
        cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 0);
        wr32(sp0 - 0xdcu, 5u);
        wr32(sp0 - 0xe0u, 0x13u);
        t68 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xe4u, t68);
        g->esp = sp0 - 0xe4u;
        cow_thiscall(g, rd32(rd32(t68) + 0xc8u), rd32(t68), 0);
        wr32(sp0 - 0xe8u, 6u);
        wr32(sp0 - 0xecu, 0x14u);
        t69 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xf0u, t69);
        g->esp = sp0 - 0xf0u;
        cow_thiscall(g, rd32(rd32(t69) + 0xc8u), rd32(t69), 0);
        if (rd16(arg1 + 0xd4u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101849da)
            wr32(sp0 - 0xf4u, 3u);
            loc_f4 = 3u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            ecx = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(101849d6)
            wr32(sp0 - 0xf4u, 2u);
            loc_f4 = 2u;
        }
    COW_AT(101849dc)
        wr32(sp0 - 0xf8u, 0x16u);
        wr32(sp0 - 0xfcu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xfcu;
        t70 = cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 0);
        t71 = g->edx;
        wr32(self + 0x39120u, 0u);
        wr32(sp0 - 0x100u, arg1 + 0x40u);
        wr32(sp0 - 0x104u, 0x100u);
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, arg1 + 0x40u);
        if (rd32(ebp + 0x60u) == 0u)
        {
            loc_f0 = rd32(sp0 - 0xf0u);
            loc_f4 = rd32(sp0 - 0xf4u);
            loc_f8 = 0x16u;
            loc_fc = rd32(sp0 - 0xfcu);
        }
        else
        {
            edi = rd32(ebp + 0x60u);
    COW_AT(10184a0e)
            wr32(sp0 - 0xe4u, 0u);
            if ((int32_t)rd32(ebp + 0x44u) <= 0)
            {
                loc_f8 = 0x16u;
                loc_e4 = 0u;
                loc_ec = rd32(sp0 - 0xecu);
                loc_e0 = rd32(sp0 - 0xe0u);
                goto L_10184bcd;
            }
            loc_f8 = 0x16u;
            loc_e4 = 0u;
            loc_e0 = rd32(sp0 - 0xe0u);
L_10184a21: ;
    COW_AT(10184a21)
            wr32(sp0 - 0xecu, 0u);
            if ((int32_t)rd32(edi) <= 0)
            {
                loc_ec = 0u;
            }
            else
            {
                esi = rd32(edi + 4u);
    COW_AT(10184a36)
                esi = esi + 4u;
                loc_ec = 0u;
L_10184a39: ;
    COW_AT(10184a39)
                if (rd32(esi + 0x24u) != 0u)
                {
                    eax = rd32(esi + 0x24u);
    COW_AT(10184a44)
                    wr32(sp0 - 0x100u, sp0 - 0xd0u);
                    wr32(sp0 - 0x104u, 0u);
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, 0u, sp0 - 0xd0u);
                    t72 = rd32(sp0 - 0xe8u);
                    wr32(sp0 - 0x100u, t72);
                    wr32(sp0 - 0x104u, 0x8bu);
                    t73 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0x108u, t73);
                    g->esp = sp0 - 0xc8u;
                    cow_thiscall(g, rd32(rd32(t73) + 0xc8u), rd32(t73), 16, t73, 0x8bu, t72, rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu));
                    t74 = rd32(sp0 - 0xa4u);
                    wr32(sp0 - 0xccu, t74);
                    wr32(sp0 - 0xd0u, 0x22u);
                    t75 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xd4u, t75);
                    g->esp = sp0 - 0xb4u;
                    cow_thiscall(g, rd32(rd32(t75) + 0xc8u), rd32(t75), 8, t75, 0x22u, t74, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u));
                    t76 = rd32(sp0 - 0x98u);
                    wr32(sp0 - 0xb8u, t76);
                    wr32(sp0 - 0xbcu, 0x24u);
                    t77 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xc0u, t77);
                    g->esp = sp0 - 0xc0u;
                    cow_thiscall(g, rd32(rd32(t77) + 0xc8u), rd32(t77), 0);
                    t78 = rd32(sp0 - 0x98u);
                    wr32(sp0 - 0xc4u, t78);
                    wr32(sp0 - 0xc8u, 0x25u);
                    t79 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xccu, t79);
                    g->edx = t78;
                    g->esp = sp0 - 0xccu;
                    cow_thiscall(g, rd32(rd32(t79) + 0xc8u), rd32(t79), 0);
                    t80 = g->edx;
                    if ((uint32_t)(int16_t)rd16(esi + 0x20u) == rd32(self + 0x39120u))
                    {
                        edx = t80;
                    }
                    else
                    {
                        eax = (uint32_t)(int16_t)rd16(esi + 0x20u);
                        edx = t80;
    COW_AT(10184ac5)
                        wr32(self + 0x39120u, eax);
                        if (eax == 0u)
                        {
    COW_AT(10184adb)
                            if (rd32(self + 0x390fcu) == 0u)
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184af2)
                                wr32(sp0 - 0xd0u, 3u);
                                loc_d0 = 3u;
                            }
                            else
                            {
                                eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                                edx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10184aee)
                                wr32(sp0 - 0xd0u, 2u);
                                loc_d0 = 2u;
                            }
                        }
                        else
                        {
    COW_AT(10184acf)
                            wr32(sp0 - 0xd0u, 1u);
                            eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                            loc_d0 = 1u;
                        }
    COW_AT(10184af4)
                        wr32(sp0 - 0xd4u, 0x16u);
                        wr32(sp0 - 0xd8u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0xccu;
                        cow_thiscall(g, rd32(rd32(eax) + 0xc8u), rd32(eax), 3, eax, 0x16u, loc_d0);
                        t81 = g->edx;
                        edx = t81;
                    }
    COW_AT(10184aff)
                    if (rd32(esi) == 0u)
                    {
    COW_AT(10184b2a)
                        wr32(sp0 - 0xd0u, 0u);
                        wr32(sp0 - 0xd4u, 0u);
                        t83 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xd8u, t83);
                        g->esp = sp0 - 0xd8u;
                        cow_thiscall(g, rd32(rd32(t83) + 0xf4u), rd32(t83), 0);
                        loc_d0 = 0u;
                    }
                    else
                    {
                        eax = rd32(esi);
    COW_AT(10184b05)
                        if (rd32(eax + 0x40u) == 0u)
                        {
    COW_AT(10184b10)
                            eax = rd32(eax + 0x44u);
                        }
                        else
                        {
                            ecx = rd32(eax + 0x40u);
    COW_AT(10184b0c)
                            eax = ecx;
                        }
    COW_AT(10184b13)
                        wr32(sp0 - 0xd0u, eax);
                        wr32(sp0 - 0xd4u, 0u);
                        t82 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                        wr32(sp0 - 0xd8u, t82);
                        g->esp = sp0 - 0xd8u;
                        cow_thiscall(g, rd32(rd32(t82) + 0xf4u), t82, 0);
                        loc_d0 = rd32(sp0 - 0xd0u);
                    }
    COW_AT(10184b3f)
                    t84 = (uint32_t)(int16_t)rd16(esi + 0x1cu);
                    wr32(sp0 - 0xdcu, t84);
                    wr32(sp0 - 0xe0u, 0x1bu);
                    t85 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xe4u, t85);
                    g->esp = sp0 - 0xe4u;
                    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 0);
                    t86 = rd32(ebp + 0x20u);
                    wr32(sp0 - 0xe8u, t86);
                    t87 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xecu, t87);
                    g->esp = sp0 - 0xecu;
                    cow_thiscall(g, rd32(rd32(t87) + 0x130u), rd32(t87), 0);
                    t88 = rd32(ebp + 0x24u);
                    wr32(sp0 - 0xf0u, t88);
                    t89 = rd32(esi + 0x24u);
                    wr32(sp0 - 0xf4u, t89);
                    wr32(sp0 - 0xf8u, 0u);
                    t90 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                    wr32(sp0 - 0xfcu, t90);
                    g->edx = t89;
                    g->esp = sp0 - 0xfcu;
                    cow_thiscall(g, rd32(rd32(t90) + 0x14cu), rd32(t90), 0);
                    t91 = g->edx;
                    t92 = rd32(esi + 0x14u);
                    wr32(sp0 - 0x100u, t92);
                    wr32(sp0 - 0x104u, 0u);
                    t93 = rd32(ebp + 0x2cu);
                    wr32(sp0 - 0x108u, t93);
                    g->ebx = self;
                    cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(COW_IMG(0x1045666cu)), 3, t93, 0u, t92);
                    loc_f8 = 0u;
                    loc_e4 = rd32(sp0 - 0xe4u);
                    loc_ec = rd32(sp0 - 0xecu);
                    loc_e0 = 0x1bu;
                }
    COW_AT(10184b9d)
                wr32(sp0 - 0xecu, loc_ec + 1u);
                if ((int32_t)(loc_ec + 1u) < (int32_t)rd32(edi))
                {
                    esi = esi + 0xc0u;
                    loc_ec = loc_ec + 1u;
                    goto L_10184a39;
                }
                loc_ec = loc_ec + 1u;
            }
    COW_AT(10184bb6)
            wr32(sp0 - 0xe4u, loc_e4 + 1u);
            if ((int32_t)(loc_e4 + 1u) < (int32_t)rd32(ebp + 0x44u))
            {
                edi = edi + 0x24u;
                loc_e4 = loc_e4 + 1u;
                goto L_10184a21;
            }
            loc_e4 = loc_e4 + 1u;
L_10184bcd: ;
    COW_AT(10184bcd)
            wr32(sp0 - 0x100u, 0u);
            wr32(sp0 - 0x104u, 0x8bu);
            t94 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x108u, t94);
            g->esp = sp0 - 0xccu;
            cow_thiscall(g, rd32(rd32(t94) + 0xc8u), rd32(t94), 15, t94, 0x8bu, 0u, rd32(sp0 - 0xfcu), loc_f8, rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), loc_ec, rd32(sp0 - 0xe8u), loc_e4, loc_e0, rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u));
            wr32(sp0 - 0xd0u, 1u);
            wr32(sp0 - 0xd4u, 0x89u);
            t95 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xd8u, t95);
            g->esp = sp0 - 0xd8u;
            cow_thiscall(g, rd32(rd32(t95) + 0xc8u), rd32(t95), 0);
            wr32(sp0 - 0xdcu, 0u);
            wr32(sp0 - 0xe0u, 0x1bu);
            t96 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xe4u, t96);
            g->esp = sp0 - 0xe4u;
            cow_thiscall(g, rd32(rd32(t96) + 0xc8u), rd32(t96), 0);
            wr32(sp0 - 0xe8u, 1u);
            wr32(sp0 - 0xecu, 0xfu);
            t97 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xf0u, t97);
            g->esp = sp0 - 0xf0u;
            cow_thiscall(g, rd32(rd32(t97) + 0xc8u), rd32(t97), 0);
            wr32(sp0 - 0xf4u, 1u);
            wr32(sp0 - 0xf8u, 0x16u);
            t98 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0xfcu, t98);
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(t98) + 0xc8u), rd32(t98), 0);
            if (1u)
            {
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = 1u;
                loc_f8 = 0x16u;
                loc_fc = rd32(sp0 - 0xfcu);
            }
            else
            {
    COW_AT(10184c49)
                wr32(sp0 - 0x100u, 0u);
                t99 = rd32(self + 0x394b0u);
                wr32(sp0 - 0x104u, t99);
                t100 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x108u, t100);
                g->esp = sp0 - 0xfcu;
                cow_thiscall(g, rd32(rd32(t100) + 0xb8u), rd32(t100), 3, t100, t99, 0u);
                loc_f0 = rd32(sp0 - 0xf0u);
                loc_f4 = 1u;
                loc_f8 = 0x16u;
                loc_fc = rd32(sp0 - 0xfcu);
            }
        }
    }
    COW_AT(10184c64)
    g->ebx = loc_f0;
    g->esi = loc_f8;
    g->edi = loc_fc;
    g->ebp = loc_f4;
    return;
L_1018492c: ;
    COW_AT(1018492c)
    if (rd8(eax + 0x92eu) == 0u)
    {
        loc_10c = 1u;
        loc_108 = rd32(sp0 - 0x108u);
        goto L_101846e1;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x92eu);
    COW_AT(1018493a)
    wr32(sp0 - 0x114u, 3u);
    wr32(sp0 - 0x118u, 0x8cu);
    t30 = rd32(eax + 0xcu);
    wr32(sp0 - 0x11cu, t30);
    g->edx = rd32(t30);
    t31 = rd32(t30);
    g->esp = sp0 - 0xf8u;
    cow_thiscall(g, rd32(t31 + 0xc8u), ecx, 9, t30, 0x8cu, 3u, rd32(sp0 - 0x110u), 1u, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    t32 = g->edx;
    wr32(sp0 - 0xfcu, 0u);
    wr32(sp0 - 0x100u, 0x23u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x104u, t33);
    g->edx = t32;
    t34 = rd32(t33);
    g->esp = sp0 - 0x104u;
    cow_thiscall(g, rd32(t34 + 0xc8u), t34, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = t36;
        loc_fc = 0u;
        loc_100 = 0x23u;
        goto L_101846cf;
    }
    eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    ecx = (t35 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x92fu);
    COW_AT(10184978)
    wr32(sp0 - 0x108u, 1u);
    wr32(sp0 - 0x10cu, 0x30u);
    wr32(sp0 - 0x110u, eax);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, rd32(rd32(eax) + 0xc8u), ecx, 0);
    loc_108 = 1u;
    goto L_101846dc;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101844c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101844deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xfcu);
        in_esi = rd32(sp0 - 0xf8u);
        in_ebp = rd32(sp0 - 0xf4u);
        in_ebx = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xfcu;
        g->ebx = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101844efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_dc;
        eax = g->eax;
        self = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xfcu);
        in_esi = rd32(sp0 - 0xf8u);
        in_ebp = rd32(sp0 - 0xf4u);
        in_ebx = rd32(sp0 - 0xf0u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->ebx = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184503u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184535u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10184550u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_dc;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_dc = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xfcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018458au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->eax = sp0 - 0xdcu;
        g->esi = arg1;
        wr32(sp0 - 0x104u, 0x89u);
        wr32(sp0 - 0x100u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101845ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x108u;
        g->eax = sp0 - 0xdcu;
        g->esi = arg1;
        wr32(sp0 - 0x104u, 0x89u);
        wr32(sp0 - 0x100u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10184613u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x108u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018469eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        wr32(sp0 - 0x10cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x101846cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101846dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        wr32(sp0 - 0x10cu, 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x101846e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101848fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xccu;
        g->esi = arg1;
        wr32(sp0 - 0xc8u, 0x1bu);
        wr32(sp0 - 0xc4u, 0u);
        wr32(sp0 - 0xbcu, 1u);
        wr32(sp0 - 0xb8u, 0xeu);
        wr32(sp0 - 0xa4u, 3u);
        wr32(sp0 - 0x98u, 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x1018492cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        wr32(sp0 - 0x10cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1018493au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->esi = arg1;
        wr32(sp0 - 0x10cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10184978u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x104u;
        g->esi = arg1;
        wr32(sp0 - 0x100u, 0x23u);
        wr32(sp0 - 0xfcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1018498au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        g->esp = sp0 - 0xccu;
        g->esi = arg1;
        wr32(sp0 - 0xc8u, 0x1bu);
        wr32(sp0 - 0xc4u, 0u);
        wr32(sp0 - 0xbcu, 1u);
        wr32(sp0 - 0xb8u, 0xeu);
        wr32(sp0 - 0xa4u, 3u);
        wr32(sp0 - 0x98u, 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x1018498eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        g->esp = sp0 - 0xd4u;
        g->esi = arg1;
        wr32(sp0 - 0xbcu, 1u);
        wr32(sp0 - 0xb8u, 0xeu);
        wr32(sp0 - 0xa4u, 3u);
        wr32(sp0 - 0x98u, 0xeu);
        (void)sp0;
        return 1;
    }
    case 0x101849d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->esi = arg1;
        wr32(sp0 - 0xecu, 0x14u);
        wr32(sp0 - 0xe8u, 6u);
        wr32(sp0 - 0xe0u, 0x13u);
        wr32(sp0 - 0xdcu, 5u);
        (void)sp0;
        return 1;
    }
    case 0x101849dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0xf0u;
        g->esi = arg1;
        wr32(sp0 - 0xecu, 0x14u);
        wr32(sp0 - 0xe8u, 6u);
        wr32(sp0 - 0xe0u, 0x13u);
        wr32(sp0 - 0xdcu, 5u);
        (void)sp0;
        return 1;
    }
    case 0x101849dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_f4 = rd32(sp0 - 0xf4u);
        g->esp = sp0 - 0xf4u;
        g->esi = arg1;
        wr32(sp0 - 0xecu, 0x14u);
        wr32(sp0 - 0xe8u, 6u);
        wr32(sp0 - 0xe0u, 0x13u);
        wr32(sp0 - 0xdcu, 5u);
        (void)sp0;
        return 1;
    }
    case 0x10184a0eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0xf8u, 0x16u);
        (void)sp0;
        return 1;
    }
    case 0x10184a21u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0xecu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184a39u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184a44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184ac5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184acfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184adbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184aeeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184af2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184af4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xd0u;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b2au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xc8u, 0x25u);
        wr32(sp0 - 0xbcu, 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10184b3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_d0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xd8u;
        wr32(sp0 - 0xd4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10184b9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184bb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184bcdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_e0;
        uint32_t loc_e4;
        uint32_t loc_ec;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    case 0x10184c49u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_100;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_ec;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xfcu;
        wr32(sp0 - 0xf8u, 0x16u);
        wr32(sp0 - 0xf4u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10184c64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_100;
        uint32_t loc_d0;
        uint32_t loc_d4;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_ec;
        uint32_t loc_f0;
        uint32_t loc_f4;
        uint32_t loc_f8;
        uint32_t loc_fc;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_100 = rd32(sp0 - 0x100u);
        loc_fc = rd32(sp0 - 0xfcu);
        loc_f8 = rd32(sp0 - 0xf8u);
        loc_f4 = rd32(sp0 - 0xf4u);
        loc_f0 = rd32(sp0 - 0xf0u);
        loc_ec = rd32(sp0 - 0xecu);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_d0 = rd32(sp0 - 0xd0u);
        g->esp = sp0 - 0xfcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101844c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101844c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
