/* f_0x1023ebb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes an 8-byte local buffer, calls FUN_10118f70 on it, and if a field is nonzero calls thunk_FUN_10152f20 and FUN_1011d7f0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1023ebb0(Guest* g, uint32_t self)
{
    const uint32_t buf = cow_frame(g, g->esp, 8u);

    wr16(buf + 0x0u, 0);
    wr16(buf + 0x2u, 0);
    wr16(buf + 0x4u, 0);
    wr16(buf + 0x6u, 0);

    cow_thiscall(g, COW_IMG(0x10118f70u), rd32(self + 0x8u), 1u, buf);

    if (rd32(self + 0x18u) != 0u)
    {
        uint32_t r = cow_cdecl(g, COW_IMG(0x10152ef0u), 4u,
                               8u,
                               0x3fu,
                               buf,
                               0u);

        cow_cdecl(g, COW_IMG(0x1011d7f0u), 1u, r);
    }

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ebb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1023ebb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
