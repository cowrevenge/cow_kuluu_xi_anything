/* f_0x101ddac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Normalizes the byte at [esp+4] to a 0/1 dword and tail-calls FUN_101dda90 with that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ddac0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t slot = sp0 + 4u;
    const uint8_t b = rd8(slot);
    const uint32_t v = (b == 0u) ? 1u : 0u;

    wr32(slot, v);

    cow_thiscall(g, COW_IMG(0x101dda90u), self, 1u, v);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ddac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ddac0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
