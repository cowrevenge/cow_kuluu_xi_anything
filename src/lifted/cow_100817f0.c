/* f_0x100817f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100817f0(Guest* g)
{
    double d24;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100817feu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100817fe;
    case 0x100819a8u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100819a8;
    case 0x100819bdu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100819bd;
    case 0x100819c7u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100819c7;
    case 0x100819ceu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100819ce;
    case 0x10081a26u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_10081a26;
    default: break;
    }
#endif

    COW_AT(100817f0)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
    }
    else
    {
    COW_AT(100817fe)
        t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t1);
        t2 = rd32(t1);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t2 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t1, 0xeu, 1u);
        t3 = g->edx;
        t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 0x1cu, 0u);
        t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t5) + 0xc8u), rd32(t5), 3, t5, 0xfu, 1u);
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 0x19u, 5u);
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x18u, 0u);
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0x1bu, 1u);
        t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 0x13u, 5u);
        t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x14u, 6u);
        t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 0x10u, 2u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0x11u, 2u);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 1u, 5u);
        t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 0u, 2u, 0u);
        t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t15) + 0xfcu), rd32(t15), 4, t15, 0u, 3u, 2u);
        t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, 0u, 4u, 6u);
        t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t17) + 0xfcu), rd32(t17), 4, t17, 0u, 5u, 0u);
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 0u, 6u, 2u);
        t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 1u, 1u, 1u);
        t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t20;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t21 = rd32(COW_IMG(0x1045666cu));
        t22 = cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 1u, 4u, 1u);
        t23 = g->edx;
        if (rd32(COW_IMG(0x1047d578u)) == 0u)
        {
            edx = t23;
            goto L_100819ce;
        }
        eax = t22;
        edx = t23;
        esi = rd32(COW_IMG(0x1047d578u));
L_100819a8: ;
    COW_AT(100819a8)
        d24 = (double)rdf32(esi + 0x8cu);
        if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
        {
            eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        }
        else
        {
            eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100819bd)
            g->eax = eax;
            g->edx = rd32(esi);
            t25 = rd32(esi);
            g->esp = sp0 - 4u;
            t26 = cow_thiscall(g, rd32(t25 + 0x284u), esi, 0);
            t27 = g->edx;
            eax = t26;
            edx = t27;
        }
    COW_AT(100819c7)
        if (rd32(esi + 0x54u) != 0u)
        {
            esi = rd32(esi + 0x54u);
            goto L_100819a8;
        }
L_100819ce: ;
    COW_AT(100819ce)
        t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(t28) + 0xc8u), rd32(t28), 3, t28, 0xeu, 1u);
        t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t29) + 0xc8u), rd32(t29), 3, t29, 0x19u, 8u);
        t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        cow_thiscall(g, rd32(rd32(t30) + 0xc8u), rd32(t30), 3, t30, 0x18u, 0x60u);
        t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = t31;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t32 = rd32(COW_IMG(0x1045666cu));
        t33 = cow_thiscall(g, rd32(rd32(t31) + 0xc8u), rd32(t31), 3, t31, 0x1bu, 0u);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    COW_AT(10081a26)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100817f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100817feu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100819a8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100819bdu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100819c7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100819ceu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10081a26u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100817f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100817f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
