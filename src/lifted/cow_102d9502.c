/* f_0x102d9502 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102d9502(Guest* g)
{
    double d1;
    double d14;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d9581u: edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d9581;
    default: break;
    }
#endif

    COW_AT(102d9502)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    d1 = fr(g, (double)rdf32(arg2) - (double)rdf32(arg3));
    wr32(sp0 - 0x28u, in_edi);
    d2 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg3 + 4u));
    wr32(sp0 - 0x2cu, arg1);
    d3 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg3 + 8u));
    wr32(sp0 - 0x30u, arg1);
    d4 = fr(g, (double)rdf32(arg2) - (double)rdf32(arg4));
    wrf32(sp0 - 0x10u, (float)(double)(float)d4);
    d5 = fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(arg4 + 4u));
    wrf32(sp0 - 0xcu, (float)(double)(float)d5);
    d6 = fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(arg4 + 8u));
    d7 = (double)(float)fr(g, fr(g, d6 * d2) - fr(g, (double)(float)d5 * d3));
    wrf32(sp0 - 0x1cu, (float)d7);
    d8 = (double)(float)fr(g, fr(g, d3 * (double)(float)d4) - fr(g, d6 * d1));
    wrf32(sp0 - 0x18u, (float)d8);
    d9 = (double)(float)fr(g, fr(g, (double)(float)d5 * d1) - fr(g, (double)(float)d4 * d2));
    wrf32(sp0 - 0x14u, (float)d9);
    esi = sp0 - 0x1cu;
    edi = arg1;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x102d64b1u), arg4, self, g->edx, 0, 2, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t10 = g->edx;
    edx = t10;
    COW_AT(102d9581)
    t11 = rd32(sp0 - 0x20u);
    t12 = rd32(sp0 - 0x24u);
    t13 = rd32(sp0 - 0x28u);
    d14 = fr(g, fr(g, fr(g, (double)rdf32(arg1 + 8u) * (double)rdf32(arg2 + 8u)) + fr(g, (double)rdf32(arg1 + 4u) * (double)rdf32(arg2 + 4u))) + fr(g, (double)rdf32(arg1) * (double)rdf32(arg2)));
    wrf32(arg1 + 0xcu, (float)-d14);
    g->ebx = t11;
    g->esi = t12;
    g->edi = t13;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d9502(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d9581u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9502(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d9502(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
