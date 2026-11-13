/* f_0x102c44f9 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls memset with the second, third, and fourth stack arguments as destination, value, and size.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102c44f9(Guest* g, uint32_t dst, uint32_t val, uint32_t size)
{
    cow_cdecl(g, COW_IMG(0x10316dd0u), 3u, dst, val, size);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c44f9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 8u);
    const uint32_t val = rd32(sp0 + 12u);
    const uint32_t size = rd32(sp0 + 16u);

    cow_fn_102c44f9(g, dst, val, size);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
