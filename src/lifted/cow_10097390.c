/* f_0x10097390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the pointer argument is non-null, stores 1 at [ptr] and stores (byte_arg == 0) at [ptr + 4].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10097390(Guest* g, uint32_t ptr, uint32_t byte_arg)
{
    g->eax = ptr;

    if (ptr != 0u)
    {
        uint8_t c = (uint8_t)byte_arg;

        /* mov cl, byte ptr [esp + 8] */
        g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)c;

        /* mov byte ptr [eax], 1 */
        wr8(ptr, 1u);

        /* test cl, cl / sete cl */
        c = (c == 0u) ? 1u : 0u;
        g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)c;

        /* mov byte ptr [eax + 4], cl */
        wr8(ptr + 4u, c);
    }

    /* edx is never written by the original; leave it alone. */
    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(sp0 + 4u);
    uint32_t byte_arg = 0u;

    /* The original reads the second stack argument only when ptr != NULL. */
    if (ptr != 0u)
    {
        byte_arg = rd8(sp0 + 8u);
    }

    const uint32_t result = cow_fn_10097390(g, ptr, byte_arg);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
