/* f_0x1004e320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies three dwords from the stack argument structure to the object pointed to by ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1004e320(Guest* g, uint32_t self, uint32_t src)
{
    uint32_t eax;
    uint32_t edx;

    eax = src;

    edx = rd32(eax);
    wr32(self, edx);

    edx = rd32(eax + 4u);
    wr32(self + 4u, edx);

    eax = rd32(eax + 8u);
    wr32(self + 8u, eax);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1004e320(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
