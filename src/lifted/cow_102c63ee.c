/* f_0x102c63ee - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Copies packed image data from an object into a destination buffer, using a per-row mask, with special handling for 1-, 2-, and 4-bit formats and a bulk copy when the row mask is 0xFF.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c63ee(Guest* g, uint32_t self, uint32_t dst, uint32_t param3)
{
    const uint32_t depth = rd8(self + 0x10bu);

    if (param3 == 0xffu) {
        const uint32_t width = rd32(self + 0xc8u);
        const uint32_t src = rd32(self + 0xecu);
        const uint32_t size = ((depth * width) + 7u) >> 3;

        cow_cdecl(g, COW_IMG(0x103169e0u), 3u, dst, src + 1u, size);
        return;
    }

    uint32_t edi = dst;
    uint32_t esi = rd32(self + 0xecu) + 1u;

    if (depth == 1u) {
        const uint32_t width = rd32(self + 0xc8u);
        if (width == 0u) return;

        const uint32_t maskbit = rd8(self + 0x72u) & 1u;
        uint32_t edx;
        uint32_t end;
        int32_t step;

        if (maskbit != 0u) {
            edx = 0u;
            end = 7u;
            step = 1;
        } else {
            edx = 7u;
            end = 0u;
            step = -1;
        }

        uint32_t mask = 0x80u;
        uint32_t count = width;

        do {
            if ((mask & param3) != 0u) {
                const uint32_t srcByte = rd8(esi);
                const uint32_t bit = ((srcByte >> edx) & 1u) << edx;
                const uint32_t keep = ((0x7f7fu >> ((7u - edx) & 0x1fu)) & 0xffu);
                const uint32_t dstByte = rd8(edi);

                wr8(edi, (uint32_t)((dstByte & keep) | (bit & 0xffu)));
            }

            if (edx == end) {
                edx = (maskbit != 0u) ? 0u : 7u;
                ++esi;
                ++edi;
            } else {
                edx = (uint32_t)((int32_t)edx + step);
            }

            if (mask == 1u) {
                mask = 0x80u;
            } else {
                mask >>= 1;
            }

            --count;
        } while (count != 0u);

        return;
    }

    if (depth == 2u) {
        const uint32_t width = rd32(self + 0xc8u);
        if (width == 0u) return;

        const uint32_t maskbit = rd8(self + 0x72u) & 1u;
        uint32_t edx;
        uint32_t end;
        int32_t step;

        if (maskbit != 0u) {
            edx = 0u;
            end = 6u;
            step = 2;
        } else {
            edx = 6u;
            end = 0u;
            step = -2;
        }

        uint32_t mask = 0x80u;
        uint32_t count = width;

        do {
            if ((mask & param3) != 0u) {
                const uint32_t srcByte = rd8(esi);
                const uint32_t bits = ((srcByte >> edx) & 3u) << edx;
                const uint32_t keep = ((0x3f3fu >> ((6u - edx) & 0x1fu)) & 0xffu);
                const uint32_t dstByte = rd8(edi);

                wr8(edi, (uint32_t)((dstByte & keep) | (bits & 0xffu)));
            }

            if (edx == end) {
                edx = (maskbit != 0u) ? 0u : 6u;
                ++esi;
                ++edi;
            } else {
                edx = (uint32_t)((int32_t)edx + step);
            }

            if (mask == 1u) {
                mask = 0x80u;
            } else {
                mask >>= 1;
            }

            --count;
        } while (count != 0u);

        return;
    }

    if (depth == 4u) {
        const uint32_t width = rd32(self + 0xc8u);
        if (width == 0u) return;

        const uint32_t maskbit = rd8(self + 0x72u) & 1u;
        uint32_t edx;
        uint32_t end;
        int32_t step;

        if (maskbit != 0u) {
            edx = 0u;
            end = 4u;
            step = 4;
        } else {
            edx = 4u;
            end = 0u;
            step = -4;
        }

        uint32_t mask = 0x80u;
        uint32_t count = width;

        do {
            if ((mask & param3) != 0u) {
                const uint32_t srcByte = rd8(esi);
                const uint32_t bits = ((srcByte >> edx) & 0xfu) << edx;
                const uint32_t keep = ((0xf0fu >> ((4u - edx) & 0x1fu)) & 0xffu);
                const uint32_t dstByte = rd8(edi);

                wr8(edi, (uint32_t)((dstByte & keep) | (bits & 0xffu)));
            }

            if (edx == end) {
                edx = (maskbit != 0u) ? 0u : 4u;
                ++esi;
                ++edi;
            } else {
                edx = (uint32_t)((int32_t)edx + step);
            }

            if (mask == 1u) {
                mask = 0x80u;
            } else {
                mask >>= 1;
            }

            --count;
        } while (count != 0u);

        return;
    }

    const uint32_t width = rd32(self + 0xc8u);
    if (width == 0u) return;

    const uint32_t size = depth >> 3;
    uint32_t mask = 0x80u;
    uint32_t count = width;

    do {
        if ((mask & (param3 & 0xffu)) != 0u) {
            cow_cdecl(g, COW_IMG(0x103169e0u), 3u, edi, esi, size);
        }

        esi += size;
        edi += size;

        if (mask == 1u) {
            mask = 0x80u;
        } else {
            mask >>= 1;
        }

        --count;
    } while (count != 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c63ee(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t dst = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    cow_fn_102c63ee(g, self, dst, param3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
