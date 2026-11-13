/* f_0x10017570 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the vtable pointer 0x10329ec0 at `this`, advances `this` by 12, and tail-calls FUN_10018e90.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10017570(Guest* g, uint32_t self, uint32_t edx)
{
    wr32(self, COW_IMG(0x10329EC0u));
    cow_fastcall(g, COW_IMG(0x10018E90u), self + 0xCu, edx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10017570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10017570(g, g->ecx, g->edx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
