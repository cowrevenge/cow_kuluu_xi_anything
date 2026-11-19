/* f_0x10281460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10281460(Guest* g)
{
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102814d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102814d3;
    case 0x102814e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102814e6;
    case 0x102814f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102814f7;
    case 0x102814f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_102814f8;
    default: break;
    }
#endif

    COW_AT(10281460)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t2, t3, 1, 3, 0u, 2u, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t6, 1, 0);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    t7 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u);
    wr32(sp0 - 0x28u, t7);
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t7, sp0 - 4u, sp0 - 8u);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    wr32(sp0 - 0x34u, t8);
    g->ecx = t8;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t8, sp0 - 0x10u, sp0 - 0xcu);
    t9 = g->ecx;
    t10 = (uint32_t)((int32_t)(rd32(sp0 - 0x10u) - (uint32_t)((int32_t)rd32(sp0 - 0x10u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x10u, t10);
    t11 = (uint32_t)((int32_t)(rd32(sp0 - 0xcu) - (uint32_t)((int32_t)rd32(sp0 - 0xcu) >> 0x1fu)) >> 1u);
    t12 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, t11);
    if ((int32_t)rd32(sp0 + 4u) <= 0)
    {
        eax = t11;
        ecx = t9;
        edx = (uint32_t)((int32_t)t12 >> 0x1fu);
        edi = in_edi;
        loc_14 = in_esi;
        loc_10 = t10;
    }
    else
    {
        eax = t11;
        ecx = t9;
        edx = (uint32_t)((int32_t)t12 >> 0x1fu);
        esi = rd32(sp0 + 4u);
        loc_10 = t10;
    COW_AT(102814d3)
        d13 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wr32(sp0 - 0x18u, in_edi);
        wrf32(sp0 + 4u, (float)d13);
        edi = rd32(sp0 + 4u);
L_102814e6: ;
    COW_AT(102814e6)
        wr32(sp0 - 0x1cu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x18u;
        t14 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, edx, 1, 1, edi);
        t15 = g->ecx;
        t16 = g->edx;
        g->ecx = t15;
        g->edx = t16;
        t17 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        if (esi != 1u)
        {
            eax = t17;
            ecx = t18;
            edx = t19;
            esi = esi - 1u;
            loc_10 = rd32(sp0 - 0x10u);
            goto L_102814e6;
        }
        eax = t17;
        ecx = t18;
        edx = t19;
    COW_AT(102814f7)
        edi = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(102814f8)
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t20 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, ecx, edx, 1, 3, 1u, loc_14, loc_10);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->esp = sp0 - 0x18u;
    t23 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t22, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x1cu, 0xffffffffu);
    g->ecx = t24;
    g->edx = t25;
    t26 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->edx = t28;
    g->esp = sp0 - 0x1cu;
    t29 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    t30 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->edx = t30;
    return t29;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10281460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102814d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102814e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102814f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102814f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        wr32(sp0 - 0x24u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10281460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10281460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
