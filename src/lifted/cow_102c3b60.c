/* f_0x102c3b60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Formats date/time fields from a structure into a buffer using a cached format string.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102c3b60(Guest* g, uint32_t self, uint32_t data)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    if (rd32(self + 0x210u) == 0u)
    {
        uint32_t v = cow_cdecl(g, COW_IMG(0x102c43fcu), 2u, self, 0x1du);
        wr32(self + 0x210u, v);
    }

    const uint32_t rem6 = (uint32_t)(int32_t)((int32_t)(uint32_t)rd8(data + 6u) % 61);
    const uint32_t rem5 = (uint32_t)(int32_t)((int32_t)(uint32_t)rd8(data + 5u) % 60);
    const uint32_t rem4 = (uint32_t)(int32_t)((int32_t)(uint32_t)rd8(data + 4u) % 24);
    const uint32_t word0 = (uint32_t)rd16(data);

    int32_t d2 = (int32_t)(uint32_t)rd8(data + 2u) - 1;
    const uint32_t rem2 = (uint32_t)(d2 % 12);

    const uint32_t table_addr = (uint32_t)(COW_IMG(0x10342f54u) + (rem2 * 4u));
    const uint32_t rem3 = (uint32_t)(int32_t)((int32_t)(uint32_t)rd8(data + 3u) % 32);

    cow_cdecl(g,
              COW_IMG(0x10312031u),
              8u,
              rd32(self + 0x210u),
              COW_IMG(0x103c8458u),
              rem3,
              table_addr,
              word0,
              rem4,
              rem5,
              rem6);

    const uint32_t result = rd32(self + 0x210u);

    g->esi = entry_esi;
    g->edi = entry_edi;
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t data = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102c3b60(g, self, data);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
