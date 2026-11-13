/* f_0x10311cef - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311cba with the first stack argument and the second stack argument masked by 0xfff7ffff.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10311cef(Guest* g, uint32_t param1, uint32_t param2)
{
    cow_cdecl(g, COW_IMG(0x10311cbau), 2u, param1, param2 & 0xfff7ffffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311cef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_10311cef(g, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
