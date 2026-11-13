/* f_0x100a4a60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte replaced by the byte at (stack_arg + ecx + 0x83e).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100a4a60(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;
    uint32_t eax = arg;
    const uint32_t addr = (uint32_t)(eax + self + 0x83Eu);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)(uint8_t)rd8(addr);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100a4a60(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
