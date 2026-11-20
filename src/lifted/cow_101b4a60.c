/* f_0x101b4a60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   appends a caller-supplied buffer to this object's stream, then notifies FUN_101b46a0 and returns 1, or returns -1 on the documented rejection cases.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101b4a60(Guest* g, uint32_t self, uint32_t src, uint32_t len_minus_one)
{
    uint32_t flag;
    uint32_t count;
    uint32_t dst;
    uint32_t this_arg;
    uint32_t first_arg;
    uint32_t second_arg;
    uint32_t third_arg;
    uint32_t saved_ebx;
    uint32_t saved_esi;
    uint32_t saved_edi;
    uint32_t saved_ebp;

    if (src == 0u)
    {
        return 0xFFFFFFFFu;
    }

    flag = (uint32_t)rd8(self + 0x21e0u);

    if (flag != 0u)
    {
        if (rd32(self + 4u) == rd32(self + 0x21d4u))
        {
            return 0xFFFFFFFFu;
        }
    }
    else
    {
        if (rd32(self + 4u) == 0x3cu)
        {
            return 0xFFFFFFFFu;
        }
    }

    count = len_minus_one + 1u;

    if (flag != 0u)
    {
        dst = rd32(self + 0x21d8u) + rd32(self + 0x21ccu);

        for (uint32_t i = 0u; i < (count >> 2u); ++i)
        {
            wr32(dst + i * 4u, rd32(src + i * 4u));
        }

        for (uint32_t i = 0u; i < (count & 3u); ++i)
        {
            wr8(dst + (count & ~3u) + i, rd8(src + (count & ~3u) + i));
        }

        first_arg = rd32(self + 0x21d8u) + rd32(self + 0x21ccu);
        this_arg = rd32(self + 0x21d0u) + (rd32(self + 4u) << 4);
    }
    else
    {
        uint32_t off = rd32(self + 0x21ccu);

        dst = self + off + 0x3c8u;

        for (uint32_t i = 0u; i < (count >> 2u); ++i)
        {
            wr32(dst + i * 4u, rd32(src + i * 4u));
        }

        for (uint32_t i = 0u; i < (count & 3u); ++i)
        {
            wr8(dst + (count & ~3u) + i, rd8(src + (count & ~3u) + i));
        }

        first_arg = self + off + 0x3c8u;
        this_arg = (rd32(self + 4u) << 4) + self + 8u;
    }

    second_arg = len_minus_one;
    third_arg = 0u;

    saved_ebx = g->ebx;
    saved_esi = g->esi;
    saved_edi = g->edi;
    saved_ebp = g->ebp;

    g->ebx = self;
    g->esi = src;
    g->edi = dst;
    g->ebp = len_minus_one;

    cow_thiscall(g, COW_IMG(0x101b46a0u), this_arg, 3u, first_arg, second_arg, third_arg);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    wr32(self + 0x21ccu, rd32(self + 0x21ccu) + count);
    wr32(self + 4u, rd32(self + 4u) + 1u);

    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b4a60(g, g->ecx, rd32(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
