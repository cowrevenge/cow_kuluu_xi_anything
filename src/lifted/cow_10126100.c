/* f_0x10126100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10126100(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    double x0;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 4u) - rd32(self + 0x38u);
    t2 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    d3 = fr(g, (double)(int32_t)t1 / fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032df9cu))));
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        loc_4 = t2;
        x0 = d3;
        goto L_1012614a;
    }
    loc_4 = t2;
    x0 = d3;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_1012614a: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a3f0u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u);
        goto L_10126161;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_10126161: ;
    if (x0 < (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u) == 0u)
        {
            x0 = (double)rdf32(COW_IMG(0x103295d8u));
        }
    }
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
