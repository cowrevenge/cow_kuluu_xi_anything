/* f_0x102e77f5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the first four dwords at the two pointers are equal, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102e77f5(Guest* g, uint32_t lhs, uint32_t rhs)
{
    uint32_t ecx = 4u;
    uint32_t zf = 1u; /* from xor eax, eax */

    while (ecx != 0u)
    {
        uint32_t a = rd32(lhs);
        uint32_t b = rd32(rhs);

        zf = (a == b) ? 1u : 0u;

        lhs += 4u;
        rhs += 4u;
        --ecx;

        if (zf == 0u)
        {
            break;
        }
    }

    g->ecx = ecx;
    return zf ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e77f5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102e77f5(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
