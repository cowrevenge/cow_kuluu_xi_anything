/* f_0x100f6aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   initializes a buffer, queries a status value, and returns either a fixed code or the status.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100f6aa0(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t local = cow_frame(g, g->esp, 4u);
    wr32(local, 0u);

    if (param2 == 0u)
    {
        const uint32_t esi = param1 + 0xe48u;
        const uint32_t r = cow_cdecl(g, COW_IMG(0x1030ff1bu), 4u,
                                     1u, esi, 0x200u, 0u);
        if ((int32_t)r <= 0)
        {
            wr8(esi, 0u);
        }
    }

    const uint32_t esi = cow_thiscall(g, COW_IMG(0x100f44b0u), param1, 3u,
                                      param2, local, 0u);

    uint32_t result;
    if (esi != 0x17u)
    {
        result = esi;
    }
    else
    {
        const uint32_t local_val = rd32(local);
        if (local_val == 0u)
        {
            result = 0x10u;
        }
        else
        {
            const uint32_t r = cow_thiscall(g, COW_IMG(0x100f3240u), param1, 1u,
                                            local_val);
            result = (r == 0u) ? 0x10u : esi;
        }
    }

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    g->ecx = rd32(local);

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_100f6aa0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
