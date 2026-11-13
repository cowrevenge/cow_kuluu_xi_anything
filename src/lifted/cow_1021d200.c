/* f_0x1021d200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global object pointer and tail-calls FUN_1021c040.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1021d200(Guest* g)
{
    const uint32_t self = COW_IMG(0x106646A8u);
    /* Tail call: jmp 0x1021c040. The callee is cdecl (bare ret), takes no stack args, and ecx is `this`. */
    cow_thiscall_cdecl(g, COW_IMG(0x1021C040u), self, 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    const uint32_t result = cow_fn_1021d200(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret in target */
}
/* COW_ADAPTER END */
