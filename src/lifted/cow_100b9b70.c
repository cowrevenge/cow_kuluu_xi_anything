/* f_0x100b9b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9b70(Guest* g)
{
    double d2;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
    d2 = fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329cecu)));
    wrf32(rd32(self + 0x260u) + 0x16cu, (float)d2);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
