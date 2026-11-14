/* f_0x101088a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the input pointer adjusted backward by the 16-bit count at offset 4, or 0 if that count is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101088a0(Guest* g, uint32_t param)
{
    const uint32_t ecx0 = g->ecx;
    const uint16_t w = rd16((uint32_t)(param + 4u));

    if (w == 0u)
    {
        /* Original: mov cx, 0 leaves the high 16 bits of ecx unchanged. */
        g->ecx = (uint32_t)(ecx0 & 0xFFFF0000u);

        /* edx is never written by the original, so leave it alone. */
        return 0u;
    }

    /* Original: mov cx, w; and ecx, 0xffff -> ecx = zero-extended w. */
    g->ecx = (uint32_t)w;

    /* Original: sub eax, ecx with eax = param. */
    return (uint32_t)(param - (uint32_t)w);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101088a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32((uint32_t)(sp0 + 4u));

    const uint32_t result = cow_fn_101088a0(g, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
