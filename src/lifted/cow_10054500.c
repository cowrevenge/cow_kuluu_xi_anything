/* f_0x10054500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10054500(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    d1 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        d2 = (double)rdf32(sp0 + 4u);
        if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            wr32(sp0 + 4u, 0u);
        }
    }
    else
    {
        eax = cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        wr32(sp0 + 4u, 0x3f800000u);
    }
    d3 = (double)rdf32(self + 0x38u);
    d4 = (double)rdf32(sp0 + 4u);
    if (!(d3 < d4))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
        ecx = self + 0x38u;
        edx = self + 0x30u;
        goto L_1005456e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
    ecx = self + 0x38u;
L_10054549: ;
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
    d5 = (double)rdf32(sp0 + 4u);
    if ((double)rdf32(ecx) < d5)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d5, 0u);
        goto L_10054549;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d5, 0u);
L_1005456e: ;
    if ((double)rdf32(edx) != (double)rdf32(ecx)) goto L_10054581;
    g->edx = edx;
    fpush(g, (double)rdf32(ecx + 4u));
    return;
L_10054581: ;
    g->edx = edx;
    fpush(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(edx)) / fr(g, (double)rdf32(ecx) - (double)rdf32(edx))) * fr(g, (double)rdf32(ecx + 4u) - (double)rdf32(edx + 4u))) + (double)rdf32(edx + 4u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10054500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10054500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
