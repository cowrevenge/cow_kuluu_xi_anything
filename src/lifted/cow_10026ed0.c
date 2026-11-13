/* f_0x10026ed0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies two 32-bit words from the second stack argument to the first stack argument, preserving the original read/write order.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10026ed0(Guest* g, uint32_t dest, uint32_t src)
{
    uint32_t edx = rd32(src);
    wr32(dest, edx);

    uint32_t eax = rd32((uint32_t)(src + 4u));
    wr32((uint32_t)(dest + 4u), eax);

    g->eax = eax;
    g->ecx = dest;
    g->edx = edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10026ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t src = rd32((uint32_t)(sp0 + 8u));
    const uint32_t dest = rd32((uint32_t)(sp0 + 4u));

    const uint32_t result = cow_fn_10026ed0(g, dest, src);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
