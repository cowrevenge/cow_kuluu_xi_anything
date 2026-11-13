/* f_0x100a0b10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the sign-extended 16-bit table entry at 0x1035b880 indexed by the low 16 bits of the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100a0b10(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t index = param & 0xFFFFu;
    const uint32_t addr = COW_IMG(0x1035b880u) + index * 2u;

    return (uint32_t)(int32_t)(int16_t)rd16(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a0b10(g, rd32(sp0 + 4u));

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
