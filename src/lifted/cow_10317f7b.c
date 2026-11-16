/* f_0x10317f7b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10317f7b(Guest* g)
{
    double d1;

    d1 = fr(g, rdf64(COW_IMG(0x1034a2c8u)) - fr(g, fr(g, rdf64(COW_IMG(0x1034a2c8u)) / rdf64(COW_IMG(0x1034a2d0u))) * rdf64(COW_IMG(0x1034a2d0u))));
    if (!(d1 > rdf64(COW_IMG(0x1034a1e0u)))) goto L_10317fb5;
    return 1u;
L_10317fb5: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317f7b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10317f7b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
