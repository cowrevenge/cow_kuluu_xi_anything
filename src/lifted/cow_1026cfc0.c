/* f_0x1026cfc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on self+0x4034 with a local buffer, and if it succeeds calls another helper on self+0x2c with the same buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1026cfc0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t buf = cow_frame(g, sp0, 0x14u);

    wr32(buf + 0x00u, 0xCCCCCCCCu);
    wr32(buf + 0x04u, 0xCCCCCCCCu);
    wr32(buf + 0x08u, 0xCCCCCCCCu);
    wr32(buf + 0x0Cu, 0xCCCCCCCCu);

    g->esp = sp0 - 0x14u;
    uint32_t r = cow_cdecl(g, COW_IMG(0x1026d0eau), 2u, self + 0x4034u, buf);

    if ((int32_t)r >= 0)
    {
        wr32(buf + 0x08u, 5u);

        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x1026d1d4u), 2u, self + 0x2cu, buf);
    }

    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10316dabu), 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026cfc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    cow_fn_1026cfc0(g, self, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
