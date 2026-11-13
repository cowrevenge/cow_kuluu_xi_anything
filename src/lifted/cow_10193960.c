/* f_0x10193960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit mask (1 << (shift & 31)) with its low byte set to 1 if the second argument has that bit set, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10193960(Guest* g, uint32_t shift, uint32_t value)
{
    (void)g;

    const unsigned c = (unsigned)((uint8_t)shift) & 31u;
    const uint32_t mask = 1u << c;
    const uint32_t bit = ((value & mask) != 0u) ? 1u : 0u;

    return (mask & 0xFFFFFF00u) | bit;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t shift = rd32(sp0 + 4u);
    const uint32_t value = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10193960(g, shift, value);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
