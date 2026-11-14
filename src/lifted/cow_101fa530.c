/* f_0x101fa530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101ee440, clears a byte at the object pointer stored in a global, and sets a global byte to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101fa530(Guest* g)
{
    cow_cdecl(g, COW_IMG(0x101ee440u), 0);

    const uint32_t edx_after_call = g->edx;

    const uint32_t eax = rd32(COW_IMG(0x10663894u));
    wr8(eax + 0x66u, 0u);
    wr8(COW_IMG(0x106218E5u), 1u);

    g->edx = edx_after_call;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101fa530(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
