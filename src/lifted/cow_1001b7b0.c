/* f_0x1001b7b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the byte at offset 0x20 to 1, then tail-calls FUN_10071e90 with the first dword of the pointer at offset 0x1c when that pointer is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1001b7b0(Guest* g, uint32_t self)
{
    wr8(self + 0x20u, 1u);

    uint32_t p = rd32(self + 0x1cu);
    if (p != 0u)
    {
        uint32_t q = rd32(p);
        cow_thiscall_cdecl(g, COW_IMG(0x10071e90u), q, 0u);
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_1001b7b0(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
