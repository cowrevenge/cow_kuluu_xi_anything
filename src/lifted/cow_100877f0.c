/* f_0x100877f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_100877f0(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10087670u), 0);
    if ((uint8_t)t1 != 0u) goto L_10087806;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_10087806: ;
    fpush(g, fr(g, (double)(int64_t)cow_i64(rd32(COW_IMG(0x1048081cu)), 0u) * (double)rdf32(COW_IMG(0x1032a22cu))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100877f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100877f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
