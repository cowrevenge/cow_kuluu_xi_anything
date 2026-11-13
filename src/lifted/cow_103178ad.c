/* f_0x103178ad - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the local flag at [ebp-0x20] is zero, tail-forwards four ebp-relative values to FUN_103177cf; otherwise returns unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103178ad(Guest* g, uint32_t ebp)
{
    if (rd32(ebp - 0x20u) != 0u)
    {
        return g->eax;
    }

    const uint32_t a = rd32(ebp + 0x8u);
    const uint32_t b = rd32(ebp + 0xcu);
    const uint32_t c = rd32(ebp - 0x1cu);
    const uint32_t d = rd32(ebp + 0x18u);

    const uint32_t eax = cow_stdcall(g, COW_IMG(0x103177cfu), 4u, a, b, c, d);
    g->eax = eax;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103178ad(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103178ad(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
