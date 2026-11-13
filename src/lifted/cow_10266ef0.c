/* f_0x10266ef0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   adjusts the first stack argument by 0x10, stores it back, sets ecx to it, and tail-calls 0x10266ba0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10266ef0(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    const uint32_t adjusted = arg0 + 0x10u;

    /* Original: mov ecx, [esp+4]; add ecx, 0x10; mov [esp+4], ecx */
    g->ecx = adjusted;
    wr32(sp0 + 4u, adjusted);

    /* Tail call to 0x10266ba0 with the same two stack arguments, first one adjusted. */
    const uint32_t result = cow_stdcall(g, COW_IMG(0x10266ba0u), 2u, adjusted, arg1);

    /* eax and edx are compared; cow_stdcall leaves g->edx as the target left it. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10266ef0(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 8u);   /* target ret 8 */
}
/* COW_ADAPTER END */
