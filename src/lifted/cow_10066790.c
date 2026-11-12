/* f_0x10066790 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global address and tail-calls FUN_100683d0 with that value in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10066790(Guest* g)
{
    const uint32_t target = COW_IMG(0x1047BF38u);
    /* Tail call: jmp 0x100683d0 with ecx set to the global address.
       The callee is __fastcall (ecx holds param_1) and ends in a bare ret,
       so we use cow_thiscall_cdecl which sets ecx and lets the caller pop. */
    return cow_thiscall_cdecl(g, COW_IMG(0x100683d0u), target, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10066790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10066790(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret in target: caller pops 0 bytes */
}
/* COW_ADAPTER END */
