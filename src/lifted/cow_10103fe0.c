/* f_0x10103fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores a 16-bit value at offset 2, zeroes the 16-bit field at offset 6, and increments the 8-bit field at offset 5.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10103fe0(Guest* g, uint32_t obj, uint32_t value)
{
    uint32_t cl;

    (void)g;

    wr16(obj + 2u, (uint16_t)value);

    cl = rd8(obj + 5u);
    cl = (cl + 1u) & 0xFFu;

    wr16(obj + 6u, (uint16_t)0u);
    wr8(obj + 5u, (uint8_t)cl);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t obj = rd32(sp0 + 4u);
    const uint32_t value = rd16(sp0 + 8u);

    cow_fn_10103fe0(g, obj, value);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
