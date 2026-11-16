/* f_0x10230ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10230ed0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10230edb;
    return arg1 & 0xffffff00u;
L_10230edb: ;
    t1 = (self & 0xffffff00u) | rd8(arg1);
    t2 = (in_edx & 0xffffff00u) | rd8(arg1 + 1u);
    g->esp = sp0;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10230a30u), t1, 2, t2, t1);
    return (t3 & 0xffffff00u) | (uint8_t)t3 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
