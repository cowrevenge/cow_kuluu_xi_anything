/* f_0x1000d980 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Allocates a pair of wide-string buffers, copies two strings into them, and appends the block to a growable array owned by the object in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1000d980(Guest* g, uint32_t self, uint32_t str1, uint32_t str2)
{
    const uint32_t p = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, 8u);
    if (p == 0u)
    {
        return 0x8007000eu;
    }

    const uint32_t lstrlenW = rd32(COW_IMG(0x1032913cu));
    const uint32_t CoTaskMemAlloc = rd32(COW_IMG(0x103294acu));
    const uint32_t CoTaskMemFree = rd32(COW_IMG(0x103294a8u));

    const uint32_t len1 = cow_stdcall(g, lstrlenW, 1u, str1);
    const uint32_t size1 = len1 * 2u + 2u;

    const uint32_t len2 = cow_stdcall(g, lstrlenW, 1u, str2);
    const uint32_t size2 = len2 * 2u + 2u;

    const uint32_t buf1 = cow_stdcall(g, CoTaskMemAlloc, 1u, size1);
    wr32(p, buf1);

    const uint32_t buf2 = cow_stdcall(g, CoTaskMemAlloc, 1u, size2);
    wr32(p + 4u, buf2);

    if (buf1 == 0u || buf2 == 0u)
    {
        cow_stdcall(g, CoTaskMemFree, 1u, buf1);
        cow_stdcall(g, CoTaskMemFree, 1u, buf2);
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, p);
        return 0x8007000eu;
    }

    uint32_t dst = buf1;
    uint32_t src = str1;
    uint32_t n = size1;
    uint32_t q = n >> 2;
    for (uint32_t i = 0; i < q; ++i)
    {
        wr32(dst + i * 4u, rd32(src + i * 4u));
    }
    dst += q * 4u;
    src += q * 4u;
    n &= 3u;
    for (uint32_t i = 0; i < n; ++i)
    {
        wr8(dst + i, rd8(src + i));
    }

    dst = buf2;
    src = str2;
    n = size2;
    q = n >> 2;
    for (uint32_t i = 0; i < q; ++i)
    {
        wr32(dst + i * 4u, rd32(src + i * 4u));
    }
    dst += q * 4u;
    src += q * 4u;
    n &= 3u;
    for (uint32_t i = 0; i < n; ++i)
    {
        wr8(dst + i, rd8(src + i));
    }

    uint32_t capacity = rd32(self + 8u);
    uint32_t count = rd32(self + 4u);

    if (count == capacity)
    {
        const uint32_t old_data = rd32(self);
        capacity = capacity * 2u;
        wr32(self + 8u, capacity);

        const uint32_t new_data = cow_cdecl(g, COW_IMG(0x10313110u), 2u, old_data, capacity * 4u);
        wr32(self, new_data);
    }

    const uint32_t data = rd32(self);
    if (data == 0u)
    {
        return 0x8007000eu;
    }

    wr32(data + count * 4u, p);
    wr32(self + 4u, count + 1u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t str1 = rd32(sp0 + 4u);
    const uint32_t str2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_1000d980(g, self, str1, str2);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
