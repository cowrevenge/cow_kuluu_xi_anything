/* f_0x100547a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_100547a0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(self + 0x38u);
    d2 = (double)rdf32(sp0 + 4u);
    if (!(d1 < d2))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
        ecx = self + 0x38u;
        edx = self + 0x30u;
        goto L_100547d9;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
    ecx = self + 0x38u;
L_100547b4: ;
    if (!((double)rdf32(ecx) < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        edx = ecx;
        ecx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        edx = ecx;
        ecx = ecx + 8u;
    }
    d3 = (double)rdf32(sp0 + 4u);
    if ((double)rdf32(ecx) < d3)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d3, 0u);
        goto L_100547b4;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d3, 0u);
L_100547d9: ;
    d4 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(edx)) / fr(g, (double)rdf32(ecx) - (double)rdf32(edx)));
    if (!(d4 < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        x0 = d4;
        goto L_1005480f;
    }
    x0 = d4;
    d5 = fr(g, x0 * x0);
    g->edx = edx;
    fpush(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d5 + d5)) * (double)rdf32(edx + 4u)) + fr(g, (double)rdf32(ecx + 4u) * fr(g, d5 + d5))));
    return;
L_1005480f: ;
    d6 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    d7 = fr(g, d6 * d6);
    g->edx = edx;
    fpush(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d7 + d7)) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(edx + 4u) * fr(g, d7 + d7))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100547a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100547a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
