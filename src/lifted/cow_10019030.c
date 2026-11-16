/* f_0x10019030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10019030(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329148u)), self, 1, arg1);
    t2 = g->edx;
    t3 = rd32(self + 4u);
    g->eax = arg2;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329018u)), t3, 6, t3, arg2, 0u, 1u, arg1, t1 + 1u);
    return (t4 & 0xffffff00u) | t4 == 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10019030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
