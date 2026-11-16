/* f_0x102e778a - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 32-bit value at offset 4 of the pointer argument and returns the new value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e778a(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t addr = param + 4u;
    const uint32_t old = rd32(addr);
    const uint32_t next = old + 1u;

    wr32(addr, next);
    return rd32(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e778a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102e778a(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
