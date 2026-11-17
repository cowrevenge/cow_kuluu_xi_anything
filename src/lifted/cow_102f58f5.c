/* f_0x102f58f5 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   For each of `count` entries, copies `length` bytes from the pointer stored at src_base + (src_index + i)*4 to the pointer stored at dst_base + (dst_index + i)*4.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102f58f5(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2,
                     uint32_t param3, uint32_t param4, int32_t param5)
{
    (void)g;

    const uint32_t counter_addr = sp0 + 8u;   /* [ebp + 0xc] */
    const uint32_t length_addr  = sp0 + 24u;  /* [ebp + 0x1c] */

    if ((int32_t)param5 <= 0)
        return;

    /* Reproduce the pushes that establish the frame/scratch area, because the
       original may later read these stack locations if the caller-supplied
       pointers overlap the stack.  The values themselves are not compared after
       return, but they can affect copied data. */
    wr32(sp0 - 4u,  g->ebp);
    wr32(sp0 - 8u,  g->ebx);
    wr32(sp0 - 12u, g->esi);
    wr32(sp0 - 16u, g->edi);

    uint32_t src_ptr_array = param1 + param2 * 4u;
    uint32_t dst_ptr_array = param3 + param4 * 4u;

    wr32(counter_addr, (uint32_t)param5);

    for (;;)
    {
        uint32_t length = rd32(length_addr);

        uint32_t src = rd32(src_ptr_array);
        uint32_t dst = rd32(dst_ptr_array);

        uint32_t n_dwords = length >> 2;
        for (uint32_t i = 0; i < n_dwords; ++i)
        {
            wr32(dst + i * 4u, rd32(src + i * 4u));
        }

        src += n_dwords * 4u;
        dst += n_dwords * 4u;

        uint32_t n_bytes = length & 3u;

        src_ptr_array += 4u;
        dst_ptr_array += 4u;

        uint32_t counter = rd32(counter_addr) - 1u;
        wr32(counter_addr, counter);

        for (uint32_t i = 0; i < n_bytes; ++i)
        {
            wr8(dst + i, rd8(src + i));
        }

        if (counter == 0u)
            break;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f58f5(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);
    const uint32_t param4 = rd32(sp0 + 16u);
    const int32_t  param5 = (int32_t)rd32(sp0 + 20u);

    /* param6 is only read by the original when param5 > 0. */
    const uint32_t param6 = ((int32_t)param5 > 0) ? rd32(sp0 + 24u) : 0u;

    cow_fn_102f58f5(g, sp0, param1, param2, param3, param4, param5);

    (void)param6;

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
