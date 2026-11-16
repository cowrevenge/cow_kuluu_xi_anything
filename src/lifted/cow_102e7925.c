/* f_0x102e7925 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Decrements the reference count at [arg+4]; if it becomes zero, calls FUN_102da74b(this, 1) and returns 0, otherwise returns the new count.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e7925(Guest* g, uint32_t self)
{
    const uint32_t addr = self + 4u;
    const uint32_t old = rd32(addr);
    const uint32_t neu = old - 1u;

    wr32(addr, neu);

    if (neu != 0u)
    {
        return neu;
    }

    /* Original state at the call:
       ecx = self, eax = 0, stack has pushed 1.
       FUN_102da74b is thiscall with one stack argument. */
    g->ecx = self;
    g->eax = 0u;

    cow_thiscall(g, COW_IMG(0x102da74bu), self, 1u, 1u);

    /* xor eax, eax */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7925(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102e7925(g, self);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
