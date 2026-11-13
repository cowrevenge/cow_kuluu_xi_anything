/* f_0x1000ec90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Closes the registry key stored at *self by calling the imported function, then clears *self; returns the imported function's status, or 0 if *self was already null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000ec90(Guest* g, uint32_t self)
{
    const uint32_t key = rd32(self);

    if (key == 0u)
    {
        return 0u;
    }

    const uint32_t saved_esi = g->esi;
    const uint32_t saved_esp = g->esp;

    /* Emulate the original's "push esi" so the callee sees the same stack depth. */
    g->esp = saved_esp - 4u;
    g->esi = self;

    const uint32_t target = rd32(COW_IMG(0x10329024u));
    cow_stdcall(g, target, 1u, key);

    g->esi = saved_esi;
    g->esp = saved_esp;

    wr32(self, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ec90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000ec90(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
