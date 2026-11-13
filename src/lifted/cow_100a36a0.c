/* f_0x100a36a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   clamps the first stack argument to zero when it is at least 12, stores it back, and tail-calls FUN_10108110 with that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a36a0(Guest* g, uint32_t sp0)
{
    uint32_t arg = rd32(sp0 + 4u);

    if (arg >= 0xCu)          /* jb: unsigned compare */
    {
        arg = 0u;
    }

    wr32(sp0 + 4u, arg);

    cow_cdecl(g, COW_IMG(0x10108110u), 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a36a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a36a0(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);   /* tail callee ends in bare ret */
}
/* COW_ADAPTER END */
