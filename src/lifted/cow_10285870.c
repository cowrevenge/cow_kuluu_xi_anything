/* f_0x10285870 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   If the object has a non-null function pointer at offset 0x30, tail-jumps to it with ecx set to the object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10285870(Guest* g, uint32_t self)
{
    const uint32_t target = rd32(self + 0x30u);

    if (target != 0u)
    {
        /*
         * Original:
         *   ecx = self
         *   eax = target
         *   [esp+4] = ecx
         *   jmp eax
         *
         * The stack argument is already at [esp+4], and ecx is set for the
         * callee.  Use the same low-level indirect-call helper used for the
         * original tail jmp.
         */
        g->ecx = self;
        g->eax = target;
        rt_call_indirect(g, target);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    cow_fn_10285870(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
