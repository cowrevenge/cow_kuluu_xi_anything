/* f_0x100163e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores a byte argument into a global variable at address 0x104569c6.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100163e0(Guest* g, uint8_t param)
{
    (void)g;
    wr8(COW_IMG(0x104569c6u), param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100163e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint8_t arg = (uint8_t)rd8(sp0 + 4u);
    cow_fn_100163e0(g, arg);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
