/* f_0x10038520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10038520(Guest* g)
{
    double d18;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038675u: ecx = g->ecx; in_esi = g->esi; self = rd32(sp0 - 4u); goto E_10038675;
    case 0x10038676u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10038676;
    case 0x1003867du: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003867d;
    case 0x1003868au: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003868a;
    case 0x100386a2u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100386a2;
    case 0x100386c3u: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100386c3;
    case 0x100386ccu: eax = g->eax; ecx = g->ecx; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100386cc;
    case 0x100386cdu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_100386cd;
    default: break;
    }
#endif

    COW_AT(10038520)
    wr32(sp0 - 4u, self);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1011bae0u), g->eax, rd32(COW_IMG(0x104e1b90u)), in_edx, 1, 1, self);
    t1 = g->edx;
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t2);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t2) + 0xfcu), rd32(t2), 4, t2, 0u, 1u, 2u);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 2u);
    wr32(sp0 - 0x10u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t3);
    cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 2u, 2u);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t4);
    cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 4u, 2u);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 5u);
    wr32(sp0 - 0x10u, 0u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t5);
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 5u, 2u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0x1bu);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t6);
    cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 0x1bu, 1u);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0x13u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x13u, 2u);
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0x14u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t8);
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x14u, 2u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 1u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 1u, 1u, 1u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 4u);
    wr32(sp0 - 0x10u, 1u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x14u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 1u, 4u, 1u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 7u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 7u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0xeu);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t12);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t12, 0xeu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x1cu);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x1cu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x89u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t14);
    t15 = rd32(t14);
    cow_thiscall(g, rd32(t15 + 0xc8u), t15, 3, t14, 0x89u, 0u);
    t16 = g->ecx;
    wr8(COW_IMG(0x10463950u) + rd32(COW_IMG(0x1047b950u)), 2u);
    if (rd8(COW_IMG(0x10463950u)) == 2u)
    {
        loc_4 = self;
    }
    else
    {
        ecx = (t16 & 0xffffff00u) | rd8(COW_IMG(0x10463950u));
    COW_AT(10038675)
        wr32(sp0 - 8u, in_esi);
        eax = COW_IMG(0x10463950u);
        loc_4 = self;
L_10038676: ;
    COW_AT(10038676)
        if (rd8(eax) == 1u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax);
            goto L_100386c3;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax);
L_1003867d: ;
    COW_AT(1003867d)
        wr32(sp0 - 4u, 0x3f800000u);
        if ((uint8_t)ecx == 3u)
        {
    COW_AT(1003868a)
            t17 = (uint32_t)(int8_t)rd8(eax + 1u);
            wr32(sp0 - 4u, t17);
            d18 = fr(g, (double)(int32_t)t17 * (double)rdf32(COW_IMG(0x10329ce4u)));
            wrf32(sp0 - 4u, (float)(double)(float)d18);
            eax = eax + 2u;
        }
    COW_AT(100386a2)
        t19 = rd32(sp0 - 4u);
        wr32(sp0 - 0xcu, t19);
        t20 = rd32(eax + 4u);
        wr32(sp0 - 0x10u, t20);
        wr32(sp0 - 0x14u, rd32(eax));
        wr32(sp0 - 0x18u, eax + 8u);
        g->ecx = rd32(eax);
        t21 = rd32(eax);
        g->esp = sp0 - 8u;
        t22 = cow_call_regs(g, COW_IMG(0x10038720u), eax + 8u, g->ecx, g->edx, 1, 4, eax + 8u, t21, t20, t19);
        t23 = g->ecx;
        if (rd8(t22 + 1u) != 1u)
        {
            eax = t22 + 1u;
            ecx = (t23 & 0xffffff00u) | rd8(t22 + 1u);
            goto L_1003867d;
        }
        eax = t22 + 1u;
        ecx = (t23 & 0xffffff00u) | rd8(t22 + 1u);
        loc_4 = rd32(sp0 - 4u);
L_100386c3: ;
    COW_AT(100386c3)
        if (rd8(eax + 1u) != 2u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
            eax = eax + 1u;
            goto L_10038676;
        }
    COW_AT(100386cc)
    }
    COW_AT(100386cd)
    t24 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047b950u), 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x1bu);
    t25 = rd32(t24 + 0xcu);
    wr32(sp0 - 0x10u, t25);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t25) + 0xc8u), rd32(t25), 3, t25, 0x1bu, 0u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 7u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t26);
    cow_thiscall(g, rd32(rd32(t26) + 0xc8u), rd32(t26), 3, t26, 7u, 1u);
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0xeu);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x10u, t27);
    cow_thiscall(g, rd32(rd32(t27) + 0xc8u), rd32(t27), 3, t27, 0xeu, 1u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038520(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038675u:
    {
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = g->esi;
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = COW_IMG(0x10463950u);
        (void)sp0;
        return 1;
    }
    case 0x10038676u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003867du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003868au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100386a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100386c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100386ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100386cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10038520(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10038520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
