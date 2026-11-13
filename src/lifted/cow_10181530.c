/* f_0x10181530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_10175e50 with ecx adjusted by 0x34330, passing through its two float* stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10181530(Guest* g, uint32_t self, uint32_t param1, uint32_t param2)
{
    (void)g;
    (void)self;
    (void)param1;
    (void)param2;
    /* This function is a pure tail-call thunk: add ecx, 0x34330 then jmp to FUN_10175e50.
       The actual work is done by the callee via cow_stdcall in the adapter. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10181530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    /* add ecx, 0x34330 */
    g->ecx += 0x34330u;
    /* tail call to FUN_10175e50 (stdcall, ret 8) */
    const uint32_t result = cow_stdcall(g, COW_IMG(0x10175e50u), 2, param1, param2);
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
