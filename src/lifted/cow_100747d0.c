/* f_0x100747d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the non-null argument at offset 0x10 of the object, then tail-calls FUN_10074850 on that argument with the object as its stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100747d0(Guest* g, uint32_t self, uint32_t arg)
{
    if (arg == 0u)
    {
        return;
    }

    wr32(self + 0x10u, arg);

    /*
     * At the original tail jump:
     *   eax = self
     *   ecx = arg
     *   [esp + 4] = self
     *
     * FUN_10074850 is reached as a thiscall with:
     *   this = arg
     *   one stack argument = self
     */
    g->eax = self;
    g->ecx = arg;

    cow_thiscall(g, COW_IMG(0x10074850u), arg, 1u, self);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100747d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    cow_fn_100747d0(g, self, arg);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
