/* f_0x1013a010 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1013a070 on this object and tail-calls FUN_1013a0d0 if it returned true, otherwise FUN_1013a100.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013a010(Guest* g, uint32_t self)
{
    uint32_t r = cow_thiscall_cdecl(g, COW_IMG(0x1013a070u), self, 0u);

    if ((uint8_t)r != 0u)
    {
        g->eax = r;
        cow_thiscall_cdecl(g, COW_IMG(0x1013a0d0u), self, 0u);
    }
    else
    {
        g->eax = r;
        cow_thiscall_cdecl(g, COW_IMG(0x1013a100u), self, 0u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    cow_fn_1013a010(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
