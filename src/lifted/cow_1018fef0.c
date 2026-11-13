/* f_0x1018fef0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the length of a null-terminated byte string, or -1 if the pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1018fef0(Guest* g, uint32_t str)
{
    if (str == 0u)
    {
        /* Original: or eax, 0xffffffff; leaves edx and ecx unchanged. */
        return 0xFFFFFFFFu;
    }

    /* Original: or ecx, 0xffffffff; xor eax, eax; repne scasb al, byte ptr es:[edi] */
    uint32_t ecx = 0xFFFFFFFFu;
    uint32_t edi = str;

    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        edi += 1u;
        ecx -= 1u;

        if (b == 0u)
        {
            break;
        }
    }

    /* Original: not ecx; dec ecx; mov eax, ecx */
    uint32_t result = (uint32_t)(~ecx) - 1u;

    /* Match the original's final ecx on the non-null path. edx is never written. */
    g->ecx = result;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t str = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1018fef0(g, str);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
