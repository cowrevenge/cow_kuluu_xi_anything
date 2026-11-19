/* f_0x10253380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10253380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10253391u: ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10253391;
    case 0x102533aau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_102533aa;
    case 0x102533b2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102533b2;
    case 0x102533c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102533c8;
    case 0x102533dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102533dc;
    case 0x102533eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102533ea;
    case 0x102533f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102533f1;
    case 0x102533f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_102533f8;
    case 0x1025341bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1025341b;
    case 0x10253434u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10253434;
    case 0x10253442u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10253442;
    case 0x10253456u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10253456;
    case 0x1025346fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1025346f;
    default: break;
    }
#endif

    COW_AT(10253380)
    wr32(sp0 - 0x24u, in_esi);
    if ((int32_t)arg1 > 3)
    {
        edi = in_edi;
        loc_24 = in_esi;
        goto L_1025346f;
    }
    COW_AT(10253391)
    if (rd8(COW_IMG(0x10389d0du) + arg1 * 0x14u) == 0u)
    {
        edi = in_edi;
        loc_24 = in_esi;
        goto L_1025346f;
    }
    COW_AT(102533aa)
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u) != 0u)
    {
        edx = in_edx;
        loc_24 = in_esi;
        loc_28 = in_edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
    COW_AT(102533b2)
        t1 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
        wr32(sp0 - 0x2cu, t1);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t1, in_edx, 1, 3, t1, in_edi, in_esi);
        t3 = g->edx;
        wr32(COW_IMG(0x10389d14u) + arg1 * 0x14u, t2);
        if (t2 == 0u)
        {
            edx = t3;
            loc_24 = in_esi;
            loc_28 = in_edi;
        }
        else
        {
            edi = t2;
    COW_AT(102533c8)
            t4 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
            eax = 0u;
            ecx = t4 >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t4 & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = t4;
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    }
    COW_AT(102533dc)
    if (rd32(COW_IMG(0x10662dccu)) == 0u)
    {
        edi = loc_28;
        goto L_1025346f;
    }
    eax = rd32(COW_IMG(0x10662dccu));
    edi = loc_28;
    COW_AT(102533ea)
    if (rd8(COW_IMG(0x10389d0cu) + arg1 * 0x14u) == 0u) goto L_1025346f;
    COW_AT(102533f1)
    if (rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u) == 0u) goto L_1025346f;
    eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
    COW_AT(102533f8)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101be260u), sp0 - 0x20u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    t6 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
    wr32(sp0 - 0x2cu, t6);
    g->eax = sp0 - 0x20u;
    g->edx = t5;
    t7 = rd32(COW_IMG(0x10662dccu));
    t8 = cow_thiscall(g, COW_IMG(0x101c4bf0u), t7, 2, t6, sp0 - 0x20u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
        ecx = t9;
        edx = t10;
        goto L_10253456;
    }
    eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
    COW_AT(1025341b)
    wr32(sp0 - 0x28u, 0u);
    t11 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u);
    wr32(sp0 - 0x2cu, t11);
    wr32(sp0 - 0x30u, eax);
    t12 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
    wr32(sp0 - 0x34u, t12);
    g->eax = eax;
    g->edx = t11;
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, COW_IMG(0x101c47b0u), rd32(COW_IMG(0x10662dccu)), 4, t12, eax, t11, 0u);
    t14 = g->edx;
    if ((int32_t)t13 < 0)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
    COW_AT(10253434)
        t15 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
        wr32(sp0 - 0x28u, t15);
        g->eax = eax;
        g->edx = t15;
        g->esp = sp0 - 0x24u;
        t16 = cow_thiscall(g, COW_IMG(0x101c49f0u), rd32(COW_IMG(0x10662dccu)), 1, t15);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    COW_AT(10253442)
    wr8(COW_IMG(0x10389d0cu) + arg1 * 0x14u, 0u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101be2a0u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = edi;
    return;
L_10253456: ;
    COW_AT(10253456)
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    t19 = g->edx;
    wr32(COW_IMG(0x10389d14u) + arg1 * 0x14u, 0u);
    cow_thiscall(g, COW_IMG(0x101be2a0u), sp0 - 0x20u, 0);
    loc_24 = rd32(sp0 - 0x24u);
L_1025346f: ;
    COW_AT(1025346f)
    g->esi = loc_24;
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10253380(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10253391u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102533aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102533f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1025341bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10253434u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10253442u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10253456u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->esi = COW_IMG(0x10389d08u) + arg1 * 0x14u;
        wr32(sp0 - 0x28u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1025346fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10253380(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10253380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
