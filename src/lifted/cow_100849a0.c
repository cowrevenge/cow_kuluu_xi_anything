/* f_0x100849a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_100849a0(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        goto L_100849ae;
    }
    eax = rd32(self + 0x70u);
    fpush(g, (double)rdf32(eax + 0x204u));
    return eax;
L_100849ae: ;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100849a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100849a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
