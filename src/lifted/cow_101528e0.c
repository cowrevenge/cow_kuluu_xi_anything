/* f_0x101528e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   sets ecx to a fixed global thunk argument and tail-calls 0x10257860, preserving the incoming edx register argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101528e0(Guest* g)
{
    const uint32_t ecx_arg = COW_IMG(0x10578658u);
    const uint32_t edx_arg = g->edx;

    cow_fastcall(g, COW_IMG(0x10257860u), ecx_arg, edx_arg, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101528e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;

    const uint32_t result = cow_fn_101528e0(g);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
