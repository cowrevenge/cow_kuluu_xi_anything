/* f_0x100c1620 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   sign-extends the word at [esp+4], stores it back, adjusts ecx by 0x858, then tail-calls FUN_101c8450.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c1620(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t arg_addr = sp0 + 4u;
    const uint32_t arg = (uint32_t)(int32_t)(int16_t)rd16(arg_addr);

    wr32(arg_addr, arg);

    cow_thiscall(g, COW_IMG(0x101c8450u), self + 0x858u, 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c1620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c1620(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* target ret 4 */
}
/* COW_ADAPTER END */
