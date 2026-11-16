/* f_0x10032e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10032e70(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t13;
    uint32_t t14;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 20u);

    d1 = fr(g, fr(g, (double)rdf32(sp0 + 0x2cu) + (double)rdf32(sp0 + 0x18u)) + (double)rdf32(sp0 + 4u));
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        x0 = d1;
        goto L_10032ed6;
    }
    eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    x0 = d1;
    d2 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, sqrt(fr(g, x0 + (double)rdf32(sp0 + 0x40u)))));
    d3 = fr(g, sqrt(fr(g, x0 + (double)rdf32(sp0 + 0x40u))));
    wrf32(self + 0xcu, (float)d2);
    d4 = fr(g, fr(g, (double)rdf32(sp0 + 0x1cu) - (double)rdf32(sp0 + 0x28u)) * fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / d3));
    d5 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / d3);
    wrf32(self, (float)d4);
    d6 = fr(g, fr(g, (double)rdf32(sp0 + 0x24u) - (double)rdf32(sp0 + 0xcu)) * d5);
    wrf32(self + 4u, (float)d6);
    d7 = fr(g, fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 0x14u)) * d5);
    wrf32(self + 8u, (float)d7);
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
L_10032ed6: ;
    d8 = (double)rdf32(sp0 + 0x18u);
    d9 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d8, d9, 0u) & 0x4100u) != 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = 1u;
    }
    d10 = (double)rdf32(sp0 + 0x2cu);
    d11 = (double)rdf32(edx * 0x14u + sp0 + 4u);
    if ((cow_fsw(g, d10, d11, 0u) & 0x4100u) == 0u)
    {
        edx = 2u;
    }
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    d12 = fr(g, fr(g, (double)rdf32(edx * 0x14u + sp0 + 4u) - fr(g, (double)rdf32(sp0 + rd32(COW_IMG(0x1035168cu) + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 4u) * 0x14u + 4u) + (double)rdf32(sp0 + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 0x14u + 4u))) + (double)rdf32(COW_IMG(0x1032961cu)));
    t13 = rd32(COW_IMG(0x1035168cu) + edx * 4u);
    t14 = rd32(COW_IMG(0x1035168cu) + rd32(COW_IMG(0x1035168cu) + edx * 4u) * 4u);
    d15 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) * fr(g, sqrt(d12)));
    wrf32(edx * 4u + self, (float)d15);
    d16 = fr(g, fr(g, (double)rdf32(sp0 + t13 * 0x10u + t14 * 4u + 4u) - (double)rdf32(sp0 + t13 * 4u + t14 * 0x10u + 4u)) * fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(d12))));
    d17 = fr(g, (double)rdf32(COW_IMG(0x10329a08u)) / fr(g, sqrt(d12)));
    wrf32(self + 0xcu, (float)d16);
    d18 = fr(g, fr(g, (double)rdf32(edx * 4u + sp0 + t13 * 0x10u + 4u) + (double)rdf32(edx * 0x10u + sp0 + t13 * 4u + 4u)) * d17);
    wrf32(self + t13 * 4u, (float)d18);
    d19 = fr(g, fr(g, (double)rdf32(edx * 4u + sp0 + t14 * 0x10u + 4u) + (double)rdf32(edx * 0x10u + sp0 + t14 * 4u + 4u)) * d17);
    wrf32(self + t14 * 4u, (float)d19);
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10032e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10032e70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 64u);
}
/* COW_ADAPTER END */
