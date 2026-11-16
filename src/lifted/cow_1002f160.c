/* f_0x1002f160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1002f160(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1045b690u) + arg1 * 4u) == 0u) goto L_1002f18f;
    edx = rd32(COW_IMG(0x1045b690u) + arg1 * 4u);
    t1 = rd32(COW_IMG(0x10457554u) + arg1 * 4u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t2;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x14cu), arg1, 4, t2, arg1, edx, t1);
    return t3;
L_1002f18f: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002f160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002f160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
