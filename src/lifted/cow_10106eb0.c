/* f_0x10106eb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies a length-prefixed string-like block from src to dst, clamping the length to 0x80, and returns the next source pointer or the original source on failure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10106eb0(Guest* g, uint32_t src, uint32_t end, uint32_t dst)
{
    (void)g;

    const uint32_t dst4 = dst + 4u;
    wr8(dst4, 0u);

    if (src >= end)
    {
        return src;
    }

    const uint32_t dword_at_src = rd32(src);
    wr32(dst, dword_at_src);

    const uint32_t word_addr = src + 4u;
    const uint32_t copy_src = word_addr + 2u;

    uint32_t len = (uint32_t)rd16(word_addr);
    if (len > 0x80u)
    {
        len = 0x80u;
    }

    /* Original uses [esp + 0x10] after three pushes, which is the caller's first stack argument slot. */
    wr16(g->esp + 4u, (uint16_t)len);

    const uint32_t copy_end = copy_src + len;
    if (copy_end > end)
    {
        return copy_src;
    }

    uint32_t n = len >> 2;
    uint32_t s = copy_src;
    uint32_t d = dst4;

    while (n != 0u)
    {
        wr32(d, rd32(s));
        s += 4u;
        d += 4u;
        --n;
    }

    n = len & 3u;
    while (n != 0u)
    {
        wr8(d, rd8(s));
        s += 1u;
        d += 1u;
        --n;
    }

    wr8(dst + 0x83u, 0u);

    return copy_end;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10106eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);
    const uint32_t end = rd32(sp0 + 8u);
    const uint32_t dst = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10106eb0(g, src, end, dst);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
