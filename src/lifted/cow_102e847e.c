/* f_0x102e847e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the first four dwords at the two stack arguments are equal, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102e847e(Guest* g, uint32_t src, uint32_t dst)
{
    uint32_t esi = src;
    uint32_t edi = dst;
    uint32_t ecx = 4u;
    uint32_t zf = 1u; /* from xor eax, eax; overwritten by the first cmpsd */

    while (ecx != 0u)
    {
        uint32_t a = rd32(esi);
        uint32_t b = rd32(edi);
        uint32_t r = (uint32_t)(a - b);

        zf = (r == 0u) ? 1u : 0u;

        esi += 4u;
        edi += 4u;
        ecx--;

        if (zf == 0u)
        {
            break;
        }
    }

    /* Original never writes edx; leave it as it was on entry. */
    g->edx = g->edx;

    /* Original leaves ecx as the repe cmpsd loop left it. */
    g->ecx = ecx;

    /* xor eax, eax followed by sete al: upper bits are zero. */
    return zf ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e847e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102e847e(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
