/* f_0x102aa260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102aa260(Guest* g)
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
    uint32_t esi;
    double x0;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(arg1 + 0x14u) > 0)
    {
        eax = rd32(arg1 + 0x58u);
        ecx = eax + 8u;
        edx = eax + 8u;
        esi = 0u;
L_102aa27a: ;
        d1 = (double)rdf32(ecx - 8u);
        d2 = (double)rdf32(ecx - 4u);
        d3 = fr(g, sqrt(fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, (double)rdf32(ecx) * (double)rdf32(ecx)))));
        if (!(d3 < (double)rdf32(COW_IMG(0x1032a42cu))))
        {
            x0 = d3;
            d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
            d5 = fr(g, d4 * (double)rdf32(edx - 8u));
            wrf32(edx - 8u, (float)d5);
            d6 = fr(g, d4 * (double)rdf32(edx - 4u));
            wrf32(edx - 4u, (float)d6);
            d7 = fr(g, d4 * (double)rdf32(edx));
            wrf32(edx, (float)d7);
        }
        else
        {
            x0 = d3;
            wr32(ecx - 8u, 0u);
            wr32(ecx - 4u, 0u);
            wr32(ecx, 0x3f800000u);
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x14u))
        {
            eax = rd32(arg1 + 0x14u);
            ecx = ecx + 0xcu;
            edx = edx + 0xcu;
            esi = esi + 1u;
            goto L_102aa27a;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102aa260(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
