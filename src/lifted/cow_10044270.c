/* f_0x10044270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10044270(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1004427cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1004427c;
    case 0x100442bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100442bd;
    case 0x100442c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100442c1;
    case 0x100442c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100442c3;
    case 0x100442ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442ce;
    case 0x100442d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442d5;
    case 0x100442dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442dc;
    case 0x100442e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442e3;
    case 0x100442eau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442ea;
    case 0x100442f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100442f0;
    case 0x1004430eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004430e;
    case 0x10044339u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044339;
    case 0x10044349u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044349;
    case 0x10044350u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044350;
    case 0x10044357u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044357;
    case 0x1004435eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004435e;
    case 0x10044364u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044364;
    case 0x1004436bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004436b;
    case 0x10044372u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044372;
    case 0x10044379u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044379;
    case 0x10044380u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044380;
    case 0x10044386u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044386;
    case 0x1004438du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004438d;
    case 0x10044394u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044394;
    case 0x1004439bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004439b;
    case 0x100443a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443a2;
    case 0x100443a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443a8;
    case 0x100443afu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443af;
    case 0x100443b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443b6;
    case 0x100443bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443bd;
    case 0x100443c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443c4;
    case 0x100443cau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443ca;
    case 0x100443d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443d1;
    case 0x100443d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443d8;
    case 0x100443dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443df;
    case 0x100443e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443e6;
    case 0x100443ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100443ec;
    case 0x10044400u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044400;
    case 0x10044414u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044414;
    case 0x1004442bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004442b;
    case 0x10044442u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044442;
    case 0x10044459u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044459;
    case 0x10044463u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044463;
    case 0x1004446au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004446a;
    case 0x10044478u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10044478;
    default: break;
    }
#endif

    COW_AT(10044270)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, 0x1105u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1006bd90u), 1, 0x1105u);
    COW_AT(1004427c)
    t1 = rd32(COW_IMG(0x10353418u));
    t2 = rd32(COW_IMG(0x10353408u));
    wr32(COW_IMG(0x1047bb98u), rd32(COW_IMG(0x10353414u)));
    t3 = rd32(COW_IMG(0x1035340cu));
    wr32(COW_IMG(0x1047bb9cu), t1);
    t4 = rd32(COW_IMG(0x1047d128u));
    wr32(COW_IMG(0x1047bb90u), t2);
    wr32(COW_IMG(0x1047bb94u), t3);
    if (rd32(t4 + 0x40008u) == 0u)
    {
        edx = t2;
    COW_AT(100442c1)
        eax = 0u;
    }
    else
    {
        eax = rd32(t4 + 0x40008u);
        edx = t2;
    COW_AT(100442bd)
        eax = rd32(eax);
    }
    COW_AT(100442c3)
    wr32(sp0 - 0xcu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x10075520u), COW_IMG(0x1047bb90u), 1, eax);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(100442ce)
    wr32(sp0 - 0xcu, 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x10u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(100442d5)
    if (eax == 0u)
    {
    COW_AT(100442ea)
        wr32(COW_IMG(0x1047bb88u), 0u);
    }
    else
    {
    COW_AT(100442dc)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t10 = cow_thiscall(g, COW_IMG(0x1000cfb0u), eax, 0);
        eax = t10;
    COW_AT(100442e3)
        wr32(COW_IMG(0x1047bb88u), eax);
    }
    COW_AT(100442f0)
    wr32(sp0 - 0xcu, sp0 - 4u);
    wr32(sp0 - 0x10u, 0x100u);
    wr32(sp0 - 0x14u, 0x100u);
    wr32(sp0 - 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1006a150u), rd32(COW_IMG(0x1047bfa8u)), 3, 0x100u, 0x100u, sp0 - 4u);
    eax = t11;
    COW_AT(1004430e)
    wr32(sp0 - 0xcu, 0x100u);
    wr32(sp0 - 0x10u, 0x100u);
    wr32(rd32(COW_IMG(0x1047bb88u)) + 4u, eax);
    t12 = rd32(sp0 - 4u);
    t13 = rd32(COW_IMG(0x1047bb88u));
    wr32(t13 + 8u, t12);
    g->eax = t12;
    g->edx = t13;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1000ad70u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, 0x100u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(10044339)
    wr32(sp0 - 0xcu, 0x48u);
    t16 = rd32(COW_IMG(0x1047bb88u));
    wr32(t16 + 0xcu, eax);
    g->eax = eax;
    g->esp = sp0;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t16, edx, 1, 3, 0x48u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(10044349)
    if (eax == 0u)
    {
    COW_AT(1004435e)
        wr32(COW_IMG(0x1047bba0u), 0u);
    }
    else
    {
    COW_AT(10044350)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(10044357)
        wr32(COW_IMG(0x1047bba0u), eax);
    }
    COW_AT(10044364)
    wr32(sp0 - 0xcu, 0x48u);
    g->eax = eax;
    g->esp = sp0;
    t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(1004436b)
    if (eax == 0u)
    {
    COW_AT(10044380)
        wr32(COW_IMG(0x1047bba4u), 0u);
    }
    else
    {
    COW_AT(10044372)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t26 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    COW_AT(10044379)
        wr32(COW_IMG(0x1047bba4u), eax);
    }
    COW_AT(10044386)
    wr32(sp0 - 0xcu, 0x48u);
    g->eax = eax;
    g->esp = sp0;
    t29 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(1004438d)
    if (eax == 0u)
    {
    COW_AT(100443a2)
        wr32(COW_IMG(0x1047bba8u), 0u);
    }
    else
    {
    COW_AT(10044394)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t32 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    COW_AT(1004439b)
        wr32(COW_IMG(0x1047bba8u), eax);
    }
    COW_AT(100443a8)
    wr32(sp0 - 0xcu, 0x48u);
    g->eax = eax;
    g->esp = sp0;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(100443af)
    if (eax == 0u)
    {
    COW_AT(100443c4)
        wr32(COW_IMG(0x1047bbacu), 0u);
    }
    else
    {
    COW_AT(100443b6)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t38 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
        t39 = g->ecx;
        t40 = g->edx;
        eax = t38;
        ecx = t39;
        edx = t40;
    COW_AT(100443bd)
        wr32(COW_IMG(0x1047bbacu), eax);
    }
    COW_AT(100443ca)
    wr32(sp0 - 0xcu, 0x48u);
    g->eax = eax;
    g->esp = sp0;
    t41 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(100443d1)
    if (eax == 0u)
    {
    COW_AT(100443e6)
        wr32(COW_IMG(0x1047bbb0u), 0u);
    }
    else
    {
    COW_AT(100443d8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t43 = cow_thiscall(g, COW_IMG(0x10043df0u), eax, 0);
        t44 = g->edx;
        eax = t43;
        edx = t44;
    COW_AT(100443df)
        wr32(COW_IMG(0x1047bbb0u), eax);
    }
    COW_AT(100443ec)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x42u);
    wr32(sp0 - 0x14u, 0x1000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_thiscall(g, COW_IMG(0x10043e50u), rd32(COW_IMG(0x1047bba0u)), 3, 0x1000u, 0x42u, 1u);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(10044400)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x44u);
    wr32(sp0 - 0x14u, 0x1000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, COW_IMG(0x10043e50u), rd32(COW_IMG(0x1047bba4u)), 3, 0x1000u, 0x44u, 1u);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    COW_AT(10044414)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x144u);
    wr32(sp0 - 0x14u, 0x1000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_thiscall(g, COW_IMG(0x10043e50u), rd32(COW_IMG(0x1047bba8u)), 3, 0x1000u, 0x144u, 1u);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    COW_AT(1004442b)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x142u);
    wr32(sp0 - 0x14u, 0x1000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t51 = cow_thiscall(g, COW_IMG(0x10043e50u), rd32(COW_IMG(0x1047bbacu)), 3, 0x1000u, 0x142u, 1u);
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(10044442)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x152u);
    wr32(sp0 - 0x14u, 0x2000u);
    g->eax = eax;
    g->edx = edx;
    t53 = rd32(COW_IMG(0x1047bbb0u));
    g->esp = sp0 - 8u;
    t54 = cow_thiscall(g, COW_IMG(0x10043e50u), t53, 3, 0x2000u, 0x152u, 1u);
    t55 = g->ecx;
    t56 = g->edx;
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(10044459)
    wr32(sp0 - 0xcu, 0xd0u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t57 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xd0u);
    eax = t57;
    COW_AT(10044463)
    if (eax == 0u) goto L_10044478;
    COW_AT(1004446a)
    wr32(eax, COW_IMG(0x1032afd8u));
    wr32(COW_IMG(0x1047bbb4u), eax);
    g->esi = rd32(sp0 - 8u);
    return eax;
L_10044478: ;
    COW_AT(10044478)
    wr32(COW_IMG(0x1047bbb4u), 0u);
    g->esi = rd32(sp0 - 8u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10044270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1004427cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100442bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442dcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100442f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004430eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10044339u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044349u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044350u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044357u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004435eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044364u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004436bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044372u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044379u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044380u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044386u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004438du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044394u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004439bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100443ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044400u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044414u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004442bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044442u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044459u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044463u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004446au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10044478u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10044270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10044270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
