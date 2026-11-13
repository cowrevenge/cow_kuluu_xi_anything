/* f_0x10305545 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies two fields from the structure passed on the stack into the structure referenced at offset 0x19c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10305545(Guest* g, uint32_t param)
{
    uint32_t ecx = rd32(param + 0x19Cu);
    uint32_t edx = rd32(param + 0x110u);

    g->edx = edx;

    wr32(ecx + 0x5Cu, edx);

    uint32_t eax = rd32(param + 0x60u);
    wr32(ecx + 0x60u, eax);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305545(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10305545(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
