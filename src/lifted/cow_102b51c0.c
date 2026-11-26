/* f_0x102b51c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_102b51c0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d4;
    double d6;
    double d9;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b51cdu: esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_102b51cd;
    case 0x102b51e1u: esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b51e1;
    case 0x102b51e9u: esi = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_102b51e9;
    case 0x102b5205u: esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b5205;
    case 0x102b5225u: esi = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_102b5225;
    case 0x102b5263u: esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); goto E_102b5263;
    default: break;
    }
#endif

    COW_AT(102b51c0)
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(sp0 + 0x10u) != 1u)
    {
        esi = rd32(sp0 + 0x10u);
        goto L_102b51e9;
    }
    COW_AT(102b51cd)
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t3);
    g->esp = sp0 - 0xcu;
    COW_RET(0x102b51e1u);
    cow_call_regs(g, COW_IMG(0x102b4d60u), t1, g->ecx, g->edx, 1, 3, t3, t2, t1);
    d4 = cow_take_float(g);
    x0 = d4;
    COW_AT(102b51e1)
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, x0);
    return;
L_102b51e9: ;
    COW_AT(102b51e9)
    wr32(sp0 + 0x10u, 0x3f800000u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    if (esi == 0u)
    {
        loc_c = in_esi;
        loc_4 = 0u;
        goto L_102b5263;
    }
    loc_c = in_esi;
    loc_4 = 0u;
L_102b5205: ;
    COW_AT(102b5205)
    t5 = rd32(sp0 + 0xcu);
    d6 = fr(g, cow_bits2f(loc_4) + (double)rdf32(sp0 + 0x10u));
    wr32(sp0 - 0x10u, t5);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t7);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t8);
    wrf32(sp0 - 4u, (float)(double)(float)d6);
    g->esp = sp0 - 0xcu;
    COW_RET(0x102b5225u);
    cow_call_regs(g, COW_IMG(0x102b4d60u), t5, g->ecx, g->edx, 1, 3, t8, t7, t5);
    d9 = cow_take_float(g);
    x0 = d9;
    COW_AT(102b5225)
    d10 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(sp0 - 8u));
    wrf32(sp0 - 8u, (float)(double)(float)d10);
    d11 = fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 0x10u, (float)d11);
    d12 = (double)rdf32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)fr(g, d12 + d12));
    d13 = (double)rdf32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d13 + d13));
    d14 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 0xcu, (float)fr(g, d14 + d14));
    if (esi != 1u)
    {
        esi = esi - 1u;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        goto L_102b5205;
    }
    loc_c = rd32(sp0 - 0xcu);
    loc_4 = rd32(sp0 - 4u);
L_102b5263: ;
    COW_AT(102b5263)
    g->esi = loc_c;
    fpush(g, fr(g, (double)rdf32(sp0 - 8u) / cow_bits2f(loc_4)));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b51c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b51cdu:
    {
        uint32_t esi;
        uint32_t in_esi;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b51e1u:
    {
        uint32_t esi;
        double x0;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b51e9u:
    {
        uint32_t esi;
        uint32_t in_esi;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b5205u:
    {
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102b5225u:
    {
        uint32_t esi;
        double x0;
        esi = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102b5263u:
    {
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_c;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b51c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b51c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
