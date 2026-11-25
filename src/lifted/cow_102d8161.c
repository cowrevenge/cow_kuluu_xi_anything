/* f_0x102d8161 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102d8161(Guest* g)
{
    double d1;
    double d10;
    double d12;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d23;
    double d24;
    double d28;
    double d3;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t11;
    uint32_t t13;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d8196u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_102d8196;
    case 0x102d81e0u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102d81e0;
    default: break;
    }
#endif

    COW_AT(102d8161)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x2cu, in_ebx);
    d1 = fr(g, (double)rdf32(arg3) - (double)rdf32(arg2));
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wrf32(sp0 - 0x10u, (float)(double)(float)d1);
    d2 = fr(g, (double)rdf32(arg3 + 4u) - (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 0xcu, (float)(double)(float)d2);
    d3 = fr(g, (double)rdf32(arg3 + 8u) - (double)rdf32(arg2 + 8u));
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wrf32(sp0 - 8u, (float)(double)(float)d3);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102d64b1u), sp0 - 0x10u, self, g->edx, 0, 2, sp0 - 0x10u, sp0 - 0x10u);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(102d8196)
    d6 = fr(g, fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(arg4 + 4u)) - fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(arg4 + 8u)));
    wrf32(sp0 - 0x28u, (float)(double)(float)d6);
    d7 = fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg4 + 8u)) - fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(arg4)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d7);
    d8 = fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg4 + 4u));
    d9 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(arg4));
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    wr32(sp0 - 0x3cu, sp0 - 0x1cu);
    d10 = (double)(float)fr(g, d9 - d8);
    wrf32(sp0 - 0x20u, (float)d10);
    esi = sp0 - 0x28u;
    edi = sp0 - 0x1cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x102d64b1u), sp0 - 0x1cu, ecx, g->edx, 0, 2, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    COW_AT(102d81e0)
    t11 = rd32(sp0 - 0x18u);
    d12 = fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x14u));
    wr32(arg1 + 0x10u, t11);
    t13 = rd32(sp0 - 0x14u);
    d14 = fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x18u));
    wr32(arg1 + 0x20u, t13);
    d15 = (double)rdf32(sp0 - 0x1cu);
    d16 = fr(g, fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x18u)) - fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 - 0x1cu)));
    d17 = fr(g, fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 - 0x1cu)) - fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x14u)));
    wrf32(arg1, (float)d15);
    d18 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x18u) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(arg2))) + fr(g, (double)rdf32(sp0 - 0x14u) * (double)rdf32(arg2 + 8u)));
    wrf32(arg1 + 0x30u, (float)-d18);
    d19 = fr(g, d12 - d14);
    wrf32(arg1 + 4u, (float)d19);
    t20 = rd32(sp0 - 0x10u);
    t21 = rd32(sp0 - 0x34u);
    wrf32(arg1 + 0x14u, (float)d17);
    t22 = rd32(sp0 - 0x30u);
    wrf32(arg1 + 0x24u, (float)d16);
    d23 = fr(g, d16 * (double)rdf32(arg2 + 8u));
    d24 = fr(g, fr(g, d17 * (double)rdf32(arg2 + 4u)) + fr(g, d19 * (double)rdf32(arg2)));
    wr32(arg1 + 8u, t20);
    t25 = rd32(sp0 - 0xcu);
    wr32(arg1 + 0x18u, t25);
    t26 = rd32(sp0 - 8u);
    wr32(arg1 + 0x28u, t26);
    wrf32(arg1 + 0x34u, (float)-fr(g, d24 + d23));
    t27 = rd32(sp0 - 0x2cu);
    d28 = fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(arg2 + 4u)) + fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(arg2))) + fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(arg2 + 8u)));
    wrf32(arg1 + 0x38u, (float)-d28);
    wrf32(arg1 + 0xcu, (float)0.0);
    wrf32(arg1 + 0x1cu, (float)0.0);
    wrf32(arg1 + 0x2cu, (float)0.0);
    wrf32(arg1 + 0x3cu, (float)1.0);
    g->ebx = t27;
    g->esi = t22;
    g->edi = t21;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d8161(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d8196u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102d81e0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
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
void cow_adapter_102d8161(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102d8161(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
