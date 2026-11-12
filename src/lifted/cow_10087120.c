/* f_0x10087120 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores a single byte argument into a global byte at 0x10487ef5.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10087120(Guest* g, uint32_t param)
{
    (void)g;
    wr8(COW_IMG(0x10487ef5u), (uint8_t)param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    cow_fn_10087120(g, param);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
