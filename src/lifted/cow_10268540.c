/* f_0x10268540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10268540(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_10268552;
    return 0x80004003u;
L_10268552: ;
    t1 = rd32(arg1 + 0x38u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t1);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->edx;
    t3 = rd32(arg1 + 0x30u);
    wr32(arg2, t3);
    t4 = rd32(arg1 + 0x34u);
    wr32(arg2 + 4u, t4);
    g->edx = t2;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t1);   /* kernel32.dll!LeaveCriticalSection */
    t5 = g->edx;
    g->edx = t5;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10268540(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
