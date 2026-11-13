/* f_0x102f690f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the function pointer stored at offset 0x28 of the object in [param+4], if present, then clears [param+4] and [param+0x10].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102f690f(Guest* g, uint32_t param)
{
    uint32_t saved_esi = g->esi;
    uint32_t saved_ecx = g->ecx;
    uint32_t saved_edx = g->edx;
    uint32_t saved_ebx = g->ebx;
    uint32_t saved_edi = g->edi;
    uint32_t saved_ebp = g->ebp;

    uint32_t eax = rd32(param + 0x4u);
    uint32_t edx = saved_edx;

    if (eax != 0u)
    {
        uint32_t target = rd32(eax + 0x28u);

        g->eax = eax;
        g->ecx = saved_ecx;
        g->edx = saved_edx;
        g->ebx = saved_ebx;
        g->esi = param;
        g->edi = saved_edi;
        g->ebp = saved_ebp;

        cow_cdecl(g, target, 1u, param);

        eax = g->eax;
        edx = g->edx;
    }

    (void)rd32(param + 0x4u);
    wr32(param + 0x4u, 0u);

    (void)rd32(param + 0x10u);
    wr32(param + 0x10u, 0u);

    g->esi = saved_esi;
    g->ecx = saved_ecx;
    g->ebx = saved_ebx;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    g->edx = edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f690f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102f690f(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
