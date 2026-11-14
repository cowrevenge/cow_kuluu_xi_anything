/* f_0x10076750 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies four 32-bit fields from the stack argument structure into this-object offsets 0x30, 0x34, 0x38, and 0x3c, leaving eax and edx with the last values loaded.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10076750(Guest* g, uint32_t self, uint32_t param)
{
    uint32_t eax = param;
    uint32_t edx;

    g->eax = eax;

    edx = rd32(eax + 0x8u);
    g->edx = edx;
    wr32(self + 0x38u, edx);

    edx = rd32(eax + 0xCu);
    g->edx = edx;
    wr32(self + 0x3Cu, edx);

    edx = rd32(eax);
    g->edx = edx;
    wr32(self + 0x30u, edx);

    eax = rd32(eax + 0x4u);
    g->eax = eax;
    wr32(self + 0x34u, eax);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10076750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10076750(g, self, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
