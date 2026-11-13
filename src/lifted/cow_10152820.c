/* f_0x10152820 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a global object address and tail-calls a function at 0x10257860, preserving edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152820(Guest* g)
{
    const uint32_t self = COW_IMG(0x105786C8u);
    /* Tail call: jmp 0x10257860. 
       The callee is __fastcall, taking ecx as 'this' and edx as the second register argument.
       We must pass g->edx to preserve it across the call if the callee doesn't modify it, 
       or let the callee's return value dictate eax/edx. 
       Since it's a tail call, we invoke the target directly with the current context registers 
       adjusted for ecx. The helper cow_fastcall expects explicit arguments.
       However, since edx is part of the fastcall convention (2nd arg), and the original just jumps,
       we pass g->edx as the second argument to maintain state if the callee reads it.
    */
    return cow_fastcall(g, COW_IMG(0x10257860u), self, g->edx, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10152820(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret 0 */
}
/* COW_ADAPTER END */
