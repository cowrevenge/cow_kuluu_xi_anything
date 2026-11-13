/* f_0x101ebb80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears a byte in the object referenced by this+8, then calls FUN_10118b60 with arguments 0x10 and 9.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101ebb80(Guest* g, uint32_t self)
{
    uint32_t p = rd32(self + 8u);
    wr8(p + 0x86u, 0u);

    g->ecx = rd32(self + 8u);
    cow_thiscall(g, COW_IMG(0x10118b60u), g->ecx, 2u, 0x10u, 9u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ebb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ebb80(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
