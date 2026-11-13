/* f_0x102bc4c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces the signed byte at offset 4 of the argument structure with the byte from a 4-byte-stride table indexed by that byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bc4c0(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t idx = (uint32_t)(int32_t)(int8_t)rd8(self + 4u);
    uint32_t addr = COW_IMG(0x103c7b60u) + (uint32_t)(idx * 4u);

    wr8(self + 4u, rd8(addr));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    cow_fn_102bc4c0(g, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
