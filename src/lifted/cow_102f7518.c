/* f_0x102f7518 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Advances a byte-stream matcher state, consuming bytes while a 4-byte pattern prefix matches, and returns 0 on full match, -2/-5/-3 on failure paths.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102f7518(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;
    const uint32_t entry_edx = g->edx;

    if (self == 0u)
    {
        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        g->edx = entry_edx;
        return 0xFFFFFFFEu;
    }

    uint32_t state = rd32(self + 0x1cu);
    if (state == 0u)
    {
        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        g->edx = entry_edx;
        return 0xFFFFFFFEu;
    }

    if (rd32(state) != 0xDu)
    {
        wr32(state, 0xDu);
        wr32(state + 4u, 0u);
    }

    uint32_t count = rd32(self + 4u);
    wr32(sp0 + 4u, count);

    if (count == 0u)
    {
        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        g->edx = entry_edx;
        return 0xFFFFFFFBu;
    }

    uint32_t ptr = rd32(self);
    uint32_t cur = ptr;
    uint32_t idx = rd32(state + 4u);

    while (count != 0u)
    {
        if (idx >= 4u)
        {
            break;
        }

        uint32_t dl = rd8(cur);
        uint32_t tb = rd8(COW_IMG(0x103488f8u) + idx);

        if (dl == tb)
        {
            idx = idx + 1u;
        }
        else if (dl == 0u)
        {
            uint32_t edx = 4u - idx;
            idx = edx;
        }
        else
        {
            idx = 0u;
        }

        cur = cur + 1u;
        count = count - 1u;
    }

    uint32_t delta = cur - ptr;
    wr32(self + 8u, rd32(self + 8u) + delta);

    wr32(self, cur);
    wr32(self + 4u, count);
    wr32(state + 4u, idx);

    if (idx != 4u)
    {
        g->ebx = entry_ebx;
        g->esi = entry_esi;
        g->edi = entry_edi;
        g->ebp = entry_ebp;
        g->edx = count;
        return 0xFFFFFFFDu;
    }

    uint32_t saved_edi = rd32(self + 8u);
    uint32_t saved_ebx = rd32(self + 0x14u);

    cow_cdecl(g, COW_IMG(0x102f6fbfu), 1u, self);

    uint32_t state2 = rd32(self + 0x1cu);

    wr32(self + 8u, saved_edi);
    wr32(self + 0x14u, saved_ebx);
    wr32(state2, 7u);

    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f7518(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102f7518(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
