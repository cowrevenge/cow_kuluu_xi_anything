/* f_0x101b45c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies the byte at offset 4 and the dword at offset 0xc from the source object to the destination object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b45c0(Guest* g, uint32_t self, uint32_t src)
{
    (void)g;
    wr8(self + 4u, rd8(src + 4u));
    wr32(self + 0xcu, rd32(src + 0xcu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b45c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);
    cow_fn_101b45c0(g, self, src);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
