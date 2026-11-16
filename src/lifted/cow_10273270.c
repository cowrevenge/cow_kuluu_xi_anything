/* f_0x10273270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10273270(Guest* g)
{
    double d10;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    double loc_10_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    if (rd32(sp0 + 4u) != 0xffffffffu)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099b0f4u));
    }
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24u, t1);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t2 = cow_cdecl(g, COW_IMG(0x1028dbd0u), 2, t1, sp0 - 0xcu);
    d3 = fr(g, (double)(int32_t)rd32(COW_IMG(0x1099b0dcu)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d3);
    d4 = fr(g, (double)(int32_t)rd32(COW_IMG(0x1099b0e0u)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 8u, (float)d4);
    d5 = (double)(float)fabs(fr(g, fr(g, (double)rdf32(t1 + 0x10u) - (double)rdf32(t1 + 4u)) * (double)rdf32(COW_IMG(0x10329a08u))));
    wrf32(sp0 - 0x10u, (float)d5);
    d6 = fabs(fr(g, fr(g, (double)rdf32(t1 + 0xcu) - (double)rdf32(t1)) * (double)rdf32(COW_IMG(0x10329a08u))));
    if ((cow_fsw(g, d6, d5, 1u) & 0x4100u) != 0u)
    {
        ebx = COW_IMG(0x1099b1d0u) + eax * 0x34u;
        edi = COW_IMG(0x1099b33cu) + eax * 0x7cu;
        loc_10_f = d5;
        x0 = d6;
        d9 = fr(g, tan(fr(g, fr(g, (double)rdf32(ebx + 0x14u) * (double)rdf32(COW_IMG(0x10329a08u))) * rdf64(COW_IMG(0x10340b08u)))));
        d10 = fr(g, loc_10_f / (double)rdf32(sp0 + 8u));
        wrf32(sp0 + 4u, (float)d9);
        x0 = fr(g, fr(g, d10 / d9) * (double)rdf32(sp0 + 8u));
    }
    else
    {
        ebx = COW_IMG(0x1099b1d0u) + eax * 0x34u;
        edi = COW_IMG(0x1099b33cu) + eax * 0x7cu;
        x0 = d6;
        d7 = fr(g, tan(fr(g, fr(g, fr(g, fr(g, (double)rdf32(ebx + 0x14u) / (double)rdf32(sp0 + 8u)) * (double)rdf32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x10329a08u))) * rdf64(COW_IMG(0x10340b08u)))));
        d8 = fr(g, x0 / (double)rdf32(sp0 + 4u));
        wrf32(sp0 + 8u, (float)d7);
        x0 = fr(g, fr(g, d8 / d7) * (double)rdf32(sp0 + 4u));
    }
    wr32(sp0 - 0x20u, edi);
    t11 = rd32(sp0 - 0xcu);
    t12 = rd32(sp0 - 8u);
    t13 = rd32(sp0 - 4u);
    wrf32(edi + 0x78u, (float)x0);
    wr32(edi + 0x5cu, t11);
    wr32(edi + 0x60u, t12);
    wr32(edi + 0x64u, t13);
    g->eax = t11;
    g->edx = t13;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, edi);
    t15 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t15;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10273270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
