/* f_0x101f36b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears a byte in the object referenced by [this+8] and copies two global dwords into this+0x14 and this+0x18.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101f36b0(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 8u);
    g->eax = eax;
    wr8(eax + 0x84u, 0u);

    uint32_t edx = rd32(COW_IMG(0x10666E2Cu));
    g->edx = edx;
    wr32(self + 0x14u, edx);

    eax = rd32(COW_IMG(0x1066375Cu));
    g->eax = eax;
    wr32(self + 0x18u, eax);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f36b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f36b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
