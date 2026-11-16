/* f_0x100699d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_100699d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) > 3u) goto L_10069a04;
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10069a10u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100699e2u: goto L_100699e2;
    case 0x100699e8u: goto L_100699e8;
    case 0x100699feu: goto L_100699fe;
    case 0x10069a04u: goto L_10069a04;
    default: rt_fatal(g, COW_IMG(0x100699dbu), "switch");
    }
    return;
L_100699e2: ;
    fpush(g, (double)(int32_t)rd32(self));
    return;
L_100699e8: ;
    fpush(g, (double)(int64_t)cow_i64(rd32(self), 0u));
    return;
L_100699fe: ;
    fpush(g, (double)rdf32(self));
    return;
L_10069a04: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100699d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100699d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
