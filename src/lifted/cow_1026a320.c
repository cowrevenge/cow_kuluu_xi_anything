/* f_0x1026a320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies four DWORDs from the stack argument pointer into the object pointed to by ecx, leaving eax and edx as the last loaded values.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1026a320(Guest* g, uint32_t self, uint32_t src)
{
    uint32_t edx;
    uint32_t eax;

    edx = rd32(src);
    wr32(self, edx);

    edx = rd32(src + 4u);
    wr32(self + 4u, edx);

    edx = rd32(src + 8u);
    wr32(self + 8u, edx);

    eax = rd32(src + 0xcu);
    wr32(self + 0xcu, eax);

    g->edx = edx;
    g->eax = eax;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026a320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1026a320(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
