/* f_0x1006ad30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies three dwords from the second stack argument into offsets 0x30, 0x34, and 0x38 of the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1006ad30(Guest* g, uint32_t dest, uint32_t src)
{
    uint32_t edx;
    uint32_t ecx;

    g->ecx = src;
    g->eax = dest;

    edx = rd32(src);
    g->edx = edx;
    wr32(dest + 0x30u, edx);

    edx = rd32(src + 4u);
    g->edx = edx;
    wr32(dest + 0x34u, edx);

    ecx = rd32(src + 8u);
    g->ecx = ecx;
    wr32(dest + 0x38u, ecx);

    return dest;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ad30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 8u);
    const uint32_t dest = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1006ad30(g, dest, src);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
