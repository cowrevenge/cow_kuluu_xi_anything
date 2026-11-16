/* f_0x100633b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
uint32_t cow_fn_100633b0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0xcu) <= 1)
    {
        eax = in_eax;
        edx = 1u;
    }
    else
    {
        edi = rd32(self + 0xcu);
        eax = in_eax;
        edx = 1u;
        esi = rd32(self + 4u) + 8u;
L_100633c4: ;
        d1 = (double)rdf32(sp0 + 4u);
        if (d1 < (double)rdf32(esi))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(esi), 0u);
            goto L_100633d9;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(esi), 0u);
        if ((int32_t)(edx + 1u) < (int32_t)edi)
        {
            edx = edx + 1u;
            esi = esi + 8u;
            goto L_100633c4;
        }
        edx = edx + 1u;
    }
L_100633d9: ;
    d2 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(edx * 8u + rd32(self + 4u) - 8u)) / fr(g, (double)rdf32(edx * 8u + rd32(self + 4u)) - (double)rdf32(edx * 8u + rd32(self + 4u) - 8u)));
    if (!(d2 < (double)rdf32(COW_IMG(0x10329a08u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
        ecx = rd32(self + 4u);
        edx = edx * 2u - 2u;
        x0 = d2;
        goto L_1006341c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
    ecx = rd32(self + 4u);
    edx = edx * 2u - 2u;
    x0 = d2;
    d3 = fr(g, x0 * x0);
    g->edx = edx;
    fpush(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d3 + d3)) * (double)rdf32(ecx + edx * 4u + 4u)) + fr(g, fr(g, d3 + d3) * (double)rdf32(ecx + edx * 4u + 0xcu))));
    return eax;
L_1006341c: ;
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    d5 = fr(g, d4 * d4);
    g->edx = edx;
    fpush(g, fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d5 + d5)) * (double)rdf32(ecx + edx * 4u + 0xcu)) + fr(g, fr(g, d5 + d5) * (double)rdf32(ecx + edx * 4u + 4u))));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100633b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100633b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
