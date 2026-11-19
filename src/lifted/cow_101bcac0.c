/* f_0x101bcac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Reserves a 32-byte-aligned block from a buffer-like object, zero-fills it, advances the write cursor, and returns the block address or 0 on failure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101bcac0(Guest* g, uint32_t self, uint32_t param)
{
    (void)g;

    uint32_t edi = param;
    uint32_t eax = edi & 0x8000001fu;

    if ((int32_t)eax < 0)
    {
        eax = (eax - 1u) | 0xffffffe0u;
        eax = eax + 1u;
    }

    uint32_t edx = edi;
    if (eax != 0u)
    {
        edx = edx - eax + 0x20u;
    }

    uint32_t cur = rd32(self + 8u);
    uint32_t limit = rd32(self + 4u);

    uint32_t sum = cur + edx;
    if ((int32_t)sum >= (int32_t)limit)
    {
        return 0u;
    }

    uint32_t base = rd32(self);
    uint32_t ret = base + cur;

    uint32_t countBytes = edx - edi;
    uint32_t dwordCount = countBytes >> 2;
    uint32_t tailCount = countBytes & 3u;

    uint32_t dest = edi + ret;

    for (uint32_t i = 0; i < dwordCount; ++i)
    {
        wr32(dest, 0u);
        dest += 4u;
    }

    for (uint32_t i = 0; i < tailCount; ++i)
    {
        wr8(dest, 0u);
        dest += 1u;
    }

    uint32_t cur_after = rd32(self + 8u);
    wr32(self + 8u, cur_after + edx);

    return ret;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bcac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101bcac0(g, self, param);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
