/* f_0x10291610 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x78 to the first stack argument, stores it back, then tail-calls FUN_10274670 with the modified first argument and the unchanged second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10291610(Guest* g, uint32_t sp0)
{
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg1_mod = arg1 + 0x78u;
    const uint32_t arg2 = rd32(sp0 + 8u);

    wr32(sp0 + 4u, arg1_mod);

    cow_cdecl(g, COW_IMG(0x10274670u), 2u, arg1_mod, arg2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291610(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10291610(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
