/* f_0x10087990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10087990(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(COW_IMG(0x10480810u), arg2);
    wr32(COW_IMG(0x10480814u), arg3);
    wr32(COW_IMG(0x10480818u), arg4);
    wr32(COW_IMG(0x1048081cu), arg5);
    wr8(COW_IMG(0x10480825u), (uint8_t)arg1);
    g->edx = arg5;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), (arg2 & 0xffffff00u) | (uint8_t)arg1, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_100879db;
    eax = t1;
    ecx = t1;
    edx = t2;
    if (arg4 != 0u) goto L_100879d6;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1009add0u), eax, ecx, edx);
    return;
L_100879d6: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1009adb0u), eax, ecx, edx);
    return;
L_100879db: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087990(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
