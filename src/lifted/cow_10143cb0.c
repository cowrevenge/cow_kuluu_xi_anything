/* f_0x10143cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's pointer at offset 8 is non-null, set the byte at offset 0x63 of that pointer to 1 or 0 according to the low byte of the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10143cb0(Guest* g, uint32_t ptr, uint32_t arg)
{
    (void)g;

    if (ptr != 0u)
    {
        wr8(ptr + 0x63u, (uint8_t)((arg & 0xFFu) != 0u ? 1u : 0u));
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ptr = rd32(g->ecx + 8u);
    const uint32_t arg = (ptr != 0u) ? rd8(sp0 + 4u) : 0u;

    cow_fn_10143cb0(g, ptr, arg);

    g->esp = sp0;
    g->eax = ptr;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
