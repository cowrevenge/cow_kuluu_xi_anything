/* f_0x10325673 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   copies bytes from the source buffer into the destination buffer until the count reaches zero or a NUL byte is encountered, updating the destination pointer and count in place.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10325673(Guest* g, uint32_t src, uint32_t dstpp, uint32_t countp)
{
    (void)g;

    if (rd32(countp) == 0u)
    {
        return;
    }

    uint32_t dstp = dstpp;
    uint32_t s = src;

    for (;;)
    {
        uint8_t c = rd8(s);
        if (c == 0u)
        {
            break;
        }

        uint32_t dst = rd32(dstp);
        wr8(dst, c);

        uint32_t new_dst = rd32(dstp) + 1u;
        wr32(dstp, new_dst);

        s += 1u;

        uint32_t cnt = rd32(countp) - 1u;
        wr32(countp, cnt);

        if (cnt == 0u)
        {
            break;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325673(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t countp = rd32(sp0 + 12u);
    uint32_t dstpp = 0u;
    uint32_t src = 0u;

    if (rd32(countp) != 0u)
    {
        dstpp = rd32(sp0 + 8u);
        src = rd32(sp0 + 4u);
    }

    cow_fn_10325673(g, src, dstpp, countp);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
