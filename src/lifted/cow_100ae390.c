/* f_0x100ae390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sign-extends the 16-bit stack argument at [esp+4], stores it back as a dword, and tail-calls FUN_10229530 with that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ae390(Guest* g, uint32_t sp0, uint32_t param)
{
    wr32(sp0 + 4u, param);
    cow_cdecl(g, COW_IMG(0x10229530u), 1u, param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = (uint32_t)(int32_t)(int16_t)rd16(sp0 + 4u);
    cow_fn_100ae390(g, sp0, param);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
