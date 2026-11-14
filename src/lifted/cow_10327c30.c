/* f_0x10327c30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads the value at [ebp - 0x10] into ecx and tail-calls the thunk at 0x102641f0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327c30(Guest* g)
{
    const uint32_t ecx = rd32(g->ebp - 0x10u);
    const uint32_t edx = g->edx;

    const uint32_t eax = cow_fastcall(g, COW_IMG(0x102641f0u), ecx, edx, 0u);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327c30(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
