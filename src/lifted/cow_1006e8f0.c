/* f_0x1006e8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_1006e8f0(Guest* g)
{
    double d1;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 <= 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = arg1;
        edx = arg2;
        esi = arg3;
L_1006e905: ;
        d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg4 + 0x10u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(ecx) * (double)rdf32(arg4))) + fr(g, (double)rdf32(arg4 + 0x20u) * (double)rdf32(ecx + 8u))) + (double)rdf32(arg4 + 0x30u));
        wrf32(edx, (float)d1);
        d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg4 + 0x14u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(ecx) * (double)rdf32(arg4 + 4u))) + fr(g, (double)rdf32(arg4 + 0x24u) * (double)rdf32(ecx + 8u))) + (double)rdf32(arg4 + 0x34u));
        wrf32(edx + 4u, (float)d2);
        d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(arg4 + 0x18u) * (double)rdf32(ecx + 4u)) + fr(g, (double)rdf32(ecx) * (double)rdf32(arg4 + 8u))) + fr(g, (double)rdf32(arg4 + 0x28u) * (double)rdf32(ecx + 8u))) + (double)rdf32(arg4 + 0x38u));
        wrf32(edx + 8u, (float)d3);
        if (esi != 1u)
        {
            ecx = ecx + 0xcu;
            edx = edx + 0xcu;
            esi = esi - 1u;
            goto L_1006e905;
        }
        eax = arg4;
        edx = edx + 0xcu;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006e8f0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
