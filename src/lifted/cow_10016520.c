/* f_0x10016520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores two global dwords into the two caller-supplied dwords and returns the second global value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10016520(Guest* g, uint32_t dst1, uint32_t dst2)
{
    const uint32_t v1 = rd32(COW_IMG(0x10456a58u));
    wr32(dst1, v1);

    const uint32_t v2 = rd32(COW_IMG(0x10456c08u));
    wr32(dst2, v2);

    g->edx = dst2;
    return v2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst1 = rd32(sp0 + 4u);
    const uint32_t dst2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10016520(g, dst1, dst2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
