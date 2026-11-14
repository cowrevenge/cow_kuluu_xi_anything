/* f_0x1015eb70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_1015e910 with the string pointer 0x103762c4 as its single stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015eb70(Guest* g)
{
    cow_stdcall(g, COW_IMG(0x1015e910u), 1u, COW_IMG(0x103762c4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015eb70(Guest* g)
{
    const uint32_t sp0 = g->esp;

    g->esp = sp0;
    cow_fn_1015eb70(g);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* target ends in ret 4 */
}
/* COW_ADAPTER END */
