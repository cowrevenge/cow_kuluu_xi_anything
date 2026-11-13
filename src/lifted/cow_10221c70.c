/* f_0x10221c70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets bytes 0x69 and 0x6a of the object referenced by [this+8] to 1 when that pointer is non-null, then tail-calls 0x10221cb0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10221c70(Guest* g, uint32_t self)
{
    uint32_t edx_tail = g->edx;

    uint32_t p = rd32(self + 8u);
    if (p != 0u)
    {
        wr8(p + 0x69u, 1u);
        p = rd32(self + 8u);
        wr8(p + 0x6au, 1u);
        edx_tail = (edx_tail & 0xFFFFFF00u) | 1u;
    }

    g->eax = p;
    g->edx = edx_tail;

    cow_fastcall(g, COW_IMG(0x10221cb0u), self, edx_tail, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10221c70(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
