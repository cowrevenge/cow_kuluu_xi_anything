/* f_0x1027a8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027a8c0(Guest* g)
{
    double d1;
    double d14;
    double d15;
    double d16;
    double d17;
    double d19;
    double d2;
    double d20;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = fr(g, fr(g, (double)rdf32(rd32(sp0 + 8u) + 0x14u) + (double)rdf32(rd32(sp0 + 8u))) + (double)rdf32(rd32(sp0 + 8u) + 0x28u));
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        ecx = rd32(sp0 + 8u);
        x0 = d1;
        goto L_1027a91d;
    }
    ecx = rd32(sp0 + 8u);
    x0 = d1;
    d2 = fr(g, (double)rdf32(COW_IMG(0x10329ce4u)) / fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu)))))));
    d3 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu))))));
    wrf32(arg1 + 0xcu, (float)d2);
    d4 = fr(g, fr(g, (double)rdf32(ecx + 0x24u) - (double)rdf32(ecx + 0x18u)) * d3);
    wrf32(arg1, (float)d4);
    d5 = fr(g, fr(g, (double)rdf32(ecx + 8u) - (double)rdf32(ecx + 0x20u)) * d3);
    wrf32(arg1 + 4u, (float)d5);
    d6 = fr(g, fr(g, (double)rdf32(ecx + 0x10u) - (double)rdf32(ecx + 4u)) * d3);
    wrf32(arg1 + 8u, (float)d6);
    return;
L_1027a91d: ;
    d7 = (double)rdf32(ecx + 0x14u);
    if ((cow_fsw(g, d7, (double)rdf32(ecx), 0u) & 0x4100u) != 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = 1u;
    }
    d8 = (double)rdf32(ecx + 0x28u);
    d9 = (double)rdf32(ecx + edx * 0x14u);
    if ((cow_fsw(g, d8, d9, 0u) & 0x4100u) == 0u)
    {
        edx = 2u;
    }
    t10 = ecx + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 0x10u + rd32(COW_IMG(0x103b4080u) + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 4u) * 4u;
    t11 = ecx + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 4u + rd32(COW_IMG(0x103b4080u) + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 4u) * 0x10u;
    t12 = rd32(COW_IMG(0x103b4080u) + edx * 4u);
    t13 = rd32(COW_IMG(0x103b4080u) + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 4u);
    d14 = fr(g, fr(g, (double)rdf32(ecx + edx * 0x14u) - fr(g, (double)rdf32(ecx + rd32(COW_IMG(0x103b4080u) + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 4u) * 0x14u) + (double)rdf32(ecx + rd32(COW_IMG(0x103b4080u) + edx * 4u) * 0x14u))) + rdf64(COW_IMG(0x1032a100u)));
    wr32(sp0 + 8u, t11);
    if (!((double)rdf32(t11) < (double)rdf32(t10)))
    {
        esi = t12;
        edi = t13;
        loc_4 = t10;
        x0 = fr(g, sqrt(d14));
    }
    else
    {
        esi = t12;
        edi = t13;
        loc_4 = t10;
        x0 = fr(g, sqrt(d14));
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    }
    d15 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * x0);
    wrf32(arg1 + edx * 4u, (float)d15);
    d16 = fr(g, fr(g, (double)rdf32(ecx + edx * 4u + esi * 0x10u) + (double)rdf32(ecx + edx * 0x10u + esi * 4u)) * fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / x0));
    d17 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / x0);
    wrf32(arg1 + esi * 4u, (float)d16);
    t18 = rd32(sp0 + 8u);
    d19 = fr(g, fr(g, (double)rdf32(ecx + edi * 0x10u + edx * 4u) + (double)rdf32(ecx + edi * 4u + edx * 0x10u)) * d17);
    wrf32(arg1 + edi * 4u, (float)d19);
    d20 = fr(g, fr(g, (double)rdf32(t18) - (double)rdf32(loc_4)) * d17);
    wrf32(arg1 + 0xcu, (float)d20);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027a8c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027a8c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
