/* f_0x102513e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0 and stores a selected dword through the second argument, or returns -1 if the first argument is null or lacks flag 0x10.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102513e0(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t sp0)
{
    const uint32_t esi = arg0;
    const uint32_t edi = arg1;

    wr32(edi, 0u);

    if (esi == 0u)
    {
        return 0xFFFFFFFFu;
    }

    if ((rd8(esi) & 0x10u) == 0u)
    {
        return 0xFFFFFFFFu;
    }

    const uint32_t arg1_addr = sp0 + 8u;

    {
        const uint32_t saved_ebx = g->ebx;
        const uint32_t saved_esi = g->esi;
        const uint32_t saved_edi = g->edi;
        const uint32_t saved_ebp = g->ebp;

        cow_cdecl(g, COW_IMG(0x1026f510u), 2u, arg1_addr, 0u);

        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
    }

    const uint32_t eax = rd32(esi + 0xCu);
    const uint32_t edx = rd32(arg1_addr);

    uint32_t ecx = eax + eax * 2u;
    ecx = (uint32_t)(ecx << 6);

    const uint32_t value = rd32(ecx + edx + 0xA8u);
    wr32(edi, value);

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102513e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102513e0(g, arg0, arg1, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
