/* f_0x1001b230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001b230(Guest* g)
{
    double d3;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 4u);
    wr32(self + 0xcu, 0u);
    if (t1 != 0u)
    {
        esi = t1;
        ecx = 0u;
        edx = in_edx;
L_1001b24a: ;
        if (rd32(esi + 4u) != 0u)
        {
            eax = rd32(esi + 4u);
            d3 = (double)rdf32(eax + 0x10u);
            if (d3 != (double)rdf32(COW_IMG(0x1032961cu)))
            {
                g->edx = rd32(esi);
                t4 = rd32(esi);
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(t4 + 0x38u), esi, 4, arg1, self + 0x10u, arg2, ecx);
                t5 = g->edx;
                edx = t5;
            }
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(esi) + 0x38u), esi, 4, arg1, self + 0x10u, arg2, ecx);
            t2 = g->edx;
            edx = t2;
        }
        if (arg1 != 0u)
        {
            d6 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(esi + 0x10u)) * (double)rdf32(self + 0xcu)) + fr(g, (double)rdf32(esi + 0x1cu) * (double)rdf32(esi + 0x10u)));
            wrf32(self + 0xcu, (float)d6);
        }
        if (rd32(esi + 4u) != 0u)
        {
            ecx = esi;
            esi = rd32(esi + 4u);
            goto L_1001b24a;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
