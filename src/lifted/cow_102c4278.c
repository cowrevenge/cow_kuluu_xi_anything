/* f_0x102c4278 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Advances a stream-like object by consuming bytes while matching a 4-byte prefix table, updating its state and counters, and returns a status code.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102c4278(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t arg_slot = sp0 + 4u;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    uint32_t eax;
    uint32_t edx;

    if (self == 0u)
    {
        eax = 0xFFFFFFFEu;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return eax;
    }

    uint32_t state_obj = rd32(self + 0x1cu);
    if (state_obj == 0u)
    {
        eax = 0xFFFFFFFEu;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return eax;
    }

    if (rd32(state_obj) != 0xDu)
    {
        wr32(state_obj, 0xDu);
        state_obj = rd32(self + 0x1cu);
        wr32(state_obj + 4u, 0u);
    }

    uint32_t count = rd32(self + 4u);
    wr32(arg_slot, count);

    if (count == 0u)
    {
        eax = 0xFFFFFFFBu;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return eax;
    }

    uint32_t ecx = rd32(self + 0x1cu);
    uint32_t ebx = rd32(self);
    uint32_t edi = ebx;
    eax = rd32(ecx + 4u);

    uint32_t remaining = count;

    while (eax < 4u)
    {
        uint32_t dl = rd8(edi) & 0xFFu;
        uint32_t table_byte = rd8(COW_IMG(0x10342f84u) + eax) & 0xFFu;

        if (dl == table_byte)
        {
            eax = eax + 1u;
        }
        else if (dl == 0u)
        {
            edx = 4u;
            edx = edx - eax;
            eax = edx;
        }
        else
        {
            eax = 0u;
        }

        edi = edi + 1u;
        remaining = remaining - 1u;
        wr32(arg_slot, remaining);

        if (remaining == 0u)
        {
            break;
        }
    }

    edx = edi;
    wr32(self, edi);
    edx = edx - ebx;
    wr32(self + 8u, rd32(self + 8u) + edx);

    edx = rd32(arg_slot);
    wr32(self + 4u, edx);

    wr32(ecx + 4u, eax);

    if (eax != 4u)
    {
        eax = 0xFFFFFFFDu;
        g->edx = edx;
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        return eax;
    }

    uint32_t saved_edi_local = rd32(self + 8u);
    uint32_t saved_ebx_local = rd32(self + 0x14u);

    g->edx = edx;
    cow_cdecl(g, COW_IMG(0x102c3d20u), 1u, self);

    eax = rd32(self + 0x1cu);
    wr32(self + 8u, saved_edi_local);
    wr32(self + 0x14u, saved_ebx_local);
    wr32(eax, 7u);

    eax = 0u;

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4278(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102c4278(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
