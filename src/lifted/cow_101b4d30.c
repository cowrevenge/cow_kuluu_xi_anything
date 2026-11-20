/* f_0x101b4d30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Removes a trailing two-byte suffix when present, otherwise trims one byte after optional checks, updating length/capacity and terminating the string.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b4d30(Guest* g, uint32_t self)
{
    uint32_t len = rd32(self + 0x1c8u);
    uint32_t cap;
    uint32_t dst;
    uint32_t count;
    uint32_t res;

    if ((int32_t)len < 2)
        goto fail;

    if (rd8(self + len - 1u) != 0x65u)
        goto fail;

    if (rd8(self + len - 2u) != 0x85u)
        goto fail;

    cap = rd32(self + 0x1c4u);

    if (len != cap)
        goto pass_ne;

    len -= 2u;
    wr32(self + 0x1c8u, len);

    cap -= 2u;
    wr32(self + 0x1c4u, cap);

    wr8(self + cap, 0u);
    return 1u;

pass_ne:
    len -= 2u;
    wr32(self + 0x1c8u, len);

    count = cap - len;
    dst = self + len;

    cow_cdecl(g, COW_IMG(0x10314a10u), 3u, dst, dst + 2u, count);

    cap = rd32(self + 0x1c4u);
    cap -= 2u;
    goto tail;

fail:
    cap = rd32(self + 0x1c4u);

    if (len != cap)
        goto fail_ne;

    if ((int32_t)cap <= 0)
        return 1u;

    if ((int32_t)len < 2)
        goto fail_eq_dec;

    dst = self + len - 2u;
    res = cow_cdecl(g, COW_IMG(0x1011c900u), 1u, dst);

    if ((res & 0xFFu) != 0u)
        goto fail_eq_dec;

    len = rd32(self + 0x1c8u);
    cap = rd32(self + 0x1c4u);

    len -= 2u;
    cap -= 2u;

    wr32(self + 0x1c8u, len);
    goto tail;

fail_eq_dec:
    len = rd32(self + 0x1c8u);
    len -= 1u;
    wr32(self + 0x1c8u, len);

    cap = rd32(self + 0x1c4u);
    cap -= 1u;
    goto tail;

fail_ne:
    if ((int32_t)len <= 0)
        return 1u;

    if ((int32_t)len < 2)
        goto fail_ne_dec;

    dst = self + len - 2u;
    res = cow_cdecl(g, COW_IMG(0x1011c900u), 1u, dst);

    if ((res & 0xFFu) != 0u)
        goto fail_ne_dec;

    len = rd32(self + 0x1c8u);
    cap = rd32(self + 0x1c4u);

    len -= 2u;
    wr32(self + 0x1c8u, len);

    count = cap - len;
    dst = self + len;

    cow_cdecl(g, COW_IMG(0x10314a10u), 3u, dst, dst + 2u, count);

    cap = rd32(self + 0x1c4u);
    cap -= 2u;
    goto tail;

fail_ne_dec:
    len = rd32(self + 0x1c8u);
    cap = rd32(self + 0x1c4u);

    len -= 1u;
    wr32(self + 0x1c8u, len);

    count = cap - len;
    dst = self + len;

    cow_cdecl(g, COW_IMG(0x10314a10u), 3u, dst, dst + 1u, count);

    cap = rd32(self + 0x1c4u);
    cap -= 1u;
    goto tail;

tail:
    wr32(self + 0x1c4u, cap);
    wr8(self + cap, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b4d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b4d30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
