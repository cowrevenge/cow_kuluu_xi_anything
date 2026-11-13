/* f_0x1015eb60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Writes a pointer to the string "menu_query" into the first stack argument slot and tail-calls FUN_1015e910.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015eb60(Guest* g, uint32_t sp0)
{
    wr32(sp0 + 4u, COW_IMG(0x103762b0u));
    cow_stdcall(g, COW_IMG(0x1015e910u), 1, rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015eb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015eb60(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* ret 4 from the tail-called target */
}
/* COW_ADAPTER END */
