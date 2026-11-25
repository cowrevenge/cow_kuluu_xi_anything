/* f_0x102d7c47 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102d7c47(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d7c88u: edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d7c88;
    default: break;
    }
#endif

    COW_AT(102d7c47)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 0xcu);
    d1 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    d2 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(sp0 - 8u, (float)(double)(float)d1);
    wrf32(sp0 - 0xcu, (float)(double)(float)d2);
    t3 = rd32(sp0 + 8u);
    esi = t3;
    edi = sp0 - 0x20u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wrf32(sp0 + 0xcu, (float)fr(g, 1.0 - (double)(float)d1));
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    wr32(sp0 - 0x30u, sp0 - 0x20u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102d64b1u), sp0 - 0x20u, self, g->edx, 0, 2, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t4 = g->edx;
    edx = t4;
    COW_AT(102d7c88)
    d5 = fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 - 0x20u)) * (double)rdf32(sp0 + 0xcu));
    d6 = (double)rdf32(sp0 + 0xcu);
    wrf32(sp0 + 0xcu, (float)d5);
    d7 = (double)rdf32(sp0 - 0x18u);
    d8 = (double)rdf32(sp0 - 0x20u);
    d9 = fr(g, fr(g, fr(g, d8 * d8) * d6) + (double)rdf32(sp0 - 8u));
    d10 = fr(g, fr(g, d7 * (double)rdf32(sp0 - 0x20u)) * d6);
    d11 = fr(g, fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 - 0x18u)) * d6);
    wrf32(arg1, (float)d9);
    d12 = fr(g, (double)rdf32(sp0 + 0xcu) + fr(g, d7 * (double)rdf32(sp0 - 0xcu)));
    d13 = fr(g, d7 * (double)rdf32(sp0 - 0xcu));
    wrf32(arg1 + 4u, (float)d12);
    d14 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(sp0 - 0xcu));
    wrf32(sp0 + 8u, (float)d14);
    wrf32(arg1 + 8u, (float)fr(g, d10 - d14));
    wrf32(arg1 + 0xcu, (float)0.0);
    d15 = fr(g, (double)rdf32(sp0 + 0xcu) - d13);
    wrf32(arg1 + 0x10u, (float)d15);
    d16 = (double)rdf32(sp0 - 0x1cu);
    d17 = fr(g, fr(g, fr(g, d16 * d16) * d6) + (double)rdf32(sp0 - 8u));
    wrf32(arg1 + 0x14u, (float)d17);
    d18 = fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(sp0 - 0xcu));
    wrf32(arg1 + 0x18u, (float)fr(g, d18 + d11));
    wrf32(arg1 + 0x1cu, (float)0.0);
    d19 = fr(g, (double)rdf32(sp0 + 8u) + d10);
    wrf32(arg1 + 0x20u, (float)d19);
    wrf32(arg1 + 0x24u, (float)fr(g, d11 - d18));
    d20 = fr(g, fr(g, fr(g, d7 * d7) * d6) + (double)rdf32(sp0 - 8u));
    wrf32(arg1 + 0x28u, (float)d20);
    t21 = rd32(sp0 - 0x24u);
    t22 = rd32(sp0 - 0x28u);
    wrf32(arg1 + 0x2cu, (float)0.0);
    wrf32(arg1 + 0x30u, (float)0.0);
    wrf32(arg1 + 0x34u, (float)0.0);
    wrf32(arg1 + 0x38u, (float)0.0);
    wrf32(arg1 + 0x3cu, (float)1.0);
    g->esi = t21;
    g->edi = t22;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d7c47(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d7c88u:
    {
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7c47(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d7c47(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
