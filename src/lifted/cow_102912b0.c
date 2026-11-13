/* f_0x102912b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at param + 0x2c, passing param as the sole stack argument, if that pointer is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102912b0(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t fn = rd32(param + 0x2cu);
    if (fn == 0u)
    {
        return;
    }

    /* mov dword ptr [esp + 4], ecx */
    wr32(sp0 + 4u, param);

    /* jmp eax: tail-call with one stack argument. */
    cow_cdecl(g, fn, 1u, param);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102912b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102912b0(g, sp0, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
