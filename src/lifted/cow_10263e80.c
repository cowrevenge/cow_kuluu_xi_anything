/* f_0x10263e80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Builds a 0x30-byte structure from a source object and copies a clamped prefix of it to a destination buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10263e80(Guest* g, uint32_t sp0, uint32_t src, uint32_t size, uint32_t dst)
{
    if (size == 0u)
    {
        g->edx = g->edx; /* unchanged */
        return 0u;
    }

    if (dst == 0u)
    {
        g->edx = g->edx; /* unchanged */
        return 0x80004003u;
    }

    uint32_t clamped = size;
    if (clamped >= 0x30u)
    {
        clamped = 0x30u;
    }

    const uint32_t buf = cow_frame(g, sp0, 0x30u);

    uint32_t edx = rd32(src + 0x4u);
    wr32(buf + 0x8u, edx & 0xffffffdfu);

    wr32(buf + 0x0u, clamped);
    wr32(buf + 0x4u, rd32(src + 0x8u));
    wr32(buf + 0x28u, rd32(src + 0xcu));
    wr32(buf + 0x2cu, rd32(src + 0x14u));
    wr32(buf + 0xcu, rd32(src + 0x10u));
    wr32(buf + 0x10u, rd32(src + 0x20u));
    wr32(buf + 0x14u, rd32(src + 0x24u));
    wr32(buf + 0x18u, rd32(src + 0x28u));
    wr32(buf + 0x1cu, rd32(src + 0x2cu));

    uint32_t v40 = rd32(src + 0x40u);
    if ((edx & 0x8u) != 0u)
    {
        wr32(buf + 0x20u, v40);
        wr32(buf + 0x24u, rd32(src + 0x3cu));
    }
    else
    {
        wr32(buf + 0x20u, v40);
        wr32(buf + 0x24u, 0u);
    }

    uint32_t s = buf;
    uint32_t d = dst;

    uint32_t qwords = clamped >> 2;
    while (qwords != 0u)
    {
        wr32(d, rd32(s));
        s += 4u;
        d += 4u;
        --qwords;
    }

    uint32_t bytes = clamped & 3u;
    while (bytes != 0u)
    {
        wr8(d, rd8(s));
        s += 1u;
        d += 1u;
        --bytes;
    }

    g->edx = clamped;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10263e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);
    const uint32_t size = rd32(sp0 + 8u);
    const uint32_t dst = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10263e80(g, sp0, src, size, dst);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
