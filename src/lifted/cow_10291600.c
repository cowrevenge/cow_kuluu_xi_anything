/* f_0x10291600 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the first stack argument by +0x68 and tail-calls FUN_1027a720.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10291600(Guest* g, uint32_t sp0)
{
    uint32_t arg1 = rd32(sp0 + 4u);
    uint32_t arg2 = rd32(sp0 + 8u);

    arg1 += 0x68u;
    wr32(sp0 + 4u, arg1);

    g->ecx = arg1;

    cow_cdecl(g, COW_IMG(0x1027a720u), 2u, arg1, arg2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291600(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10291600(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
