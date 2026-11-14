/* f_0x101003c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Masks the third stack argument to 16 bits, forces the second stack argument to 0x1d, then tail-calls FUN_101003e0 with the three stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101003c0(Guest* g, uint32_t sp0)
{
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu) & 0xffffu;

    wr32(sp0 + 8u, 0x1du);
    wr32(sp0 + 0xcu, arg3);

    const uint32_t result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg1, 0x1du, arg3);

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101003c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101003c0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
