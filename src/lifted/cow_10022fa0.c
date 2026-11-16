/* f_0x10022fa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10022fa0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x10456e4cu), arg1);
    if (rd32(COW_IMG(0x10456e4cu)) == 0u) goto L_10022fcd;
    ecx = rd32(COW_IMG(0x10456e4cu));
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t1;
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(rd32(t1) + 0x130u), ecx, 2, t1, ecx);
    return t2;
L_10022fcd: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022fa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10022fa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
