/* f_0x10320f85 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the double-dereferenced pointer at [ebp-0x14] equals 0xC0000005, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10320f85(Guest* g, uint32_t ebp)
{
    uint32_t p = rd32(ebp + 0xFFFFFFECu);
    uint32_t q = rd32(p);
    uint32_t v = rd32(q);

    uint32_t ecx = (v == 0xC0000005u) ? 1u : 0u;
    g->ecx = ecx;

    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320f85(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10320f85(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
