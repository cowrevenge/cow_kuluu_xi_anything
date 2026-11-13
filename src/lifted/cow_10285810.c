/* f_0x10285810 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at offset 0x18 of the argument, passing that argument as the sole stack argument; returns immediately if the pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10285810(Guest* g, uint32_t self)
{
    const uint32_t target = rd32(self + 0x18u);

    if (target == 0u)
    {
        return;
    }

    /*
     * The original does:
     *   mov [esp+4], ecx
     *   jmp eax
     *
     * ecx is the original stack argument, so this is a tail call to target
     * with one stack argument.  Model it as a cdecl indirect call.
     */
    cow_cdecl(g, target, 1u, self);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    cow_fn_10285810(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
