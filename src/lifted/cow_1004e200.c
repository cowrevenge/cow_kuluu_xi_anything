/* f_0x1004e200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   pushes two float arguments from the stack onto the x87 FPU stack and calls FUN_103138fa.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1004e200(Guest* g, uint32_t sp0)
{
    fpush(g, rdf32(sp0 + 4u));
    fpush(g, rdf32(sp0 + 8u));
    cow_cdecl(g, COW_IMG(0x103138fau), 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1004e200(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
