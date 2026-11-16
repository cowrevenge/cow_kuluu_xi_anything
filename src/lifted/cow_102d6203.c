/* f_0x102d6203 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d6203(Guest* g)
{
    double d1;
    uint32_t eax;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    d1 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    if (!((double)rdf32(COW_IMG(0x10345db4u)) <= d1))
    {
        x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
        goto L_102d622b;
    }
    eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x10345db4u)), d1, 1u);
    x0 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    if (!(x0 <= (double)rdf32(COW_IMG(0x10340be8u)))) goto L_102d622d;
    return 1u;
L_102d622b: ;
L_102d622d: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d6203(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d6203(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
