/* f_0x10313fa8 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Reads up to param_2 bytes from a buffered stream object into param_1, stopping at newline or EOF, and returns the destination pointer (or NULL on immediate EOF).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10313fa8(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2, uint32_t param3)
{
    const uint32_t count_addr = sp0 + 8u;   /* [ebp + 0xc] */
    const uint32_t initial = param1;
    uint32_t ebx = param1;
    uint32_t edi = param1;
    const uint32_t esi = param3;

    if ((int32_t)param2 <= 0)
    {
        return 0u;
    }

    cow_cdecl(g, COW_IMG(0x103171adu), 1u, esi);

    for (;;)
    {
        uint32_t count = rd32(count_addr) - 1u;
        wr32(count_addr, count);
        if (count == 0u)
        {
            break;
        }

        int32_t ref = (int32_t)rd32(esi + 4u);
        ref = ref - 1;
        wr32(esi + 4u, (uint32_t)ref);

        uint32_t eax;
        if (ref < 0)
        {
            eax = cow_cdecl(g, COW_IMG(0x10319505u), 1u, esi);
        }
        else
        {
            uint32_t ecx = rd32(esi);
            eax = rd8(ecx);
            ecx = ecx + 1u;
            wr32(esi, ecx);
        }

        if (eax == 0xFFFFFFFFu)
        {
            if (edi == initial)
            {
                ebx = 0u;
                goto done;
            }
            break;
        }

        wr8(edi, (uint8_t)eax);
        edi = edi + 1u;

        if ((uint8_t)eax == 0x0Au)
        {
            break;
        }
    }

    wr8(edi, 0u);

done:
    cow_cdecl(g, COW_IMG(0x103171ffu), 1u, esi);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313fa8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    const uint32_t ebx_save = g->ebx;
    const uint32_t esi_save = g->esi;
    const uint32_t edi_save = g->edi;
    const uint32_t ebp_save = g->ebp;

    const uint32_t result = cow_fn_10313fa8(g, sp0, param1, param2, param3);

    g->ebx = ebx_save;
    g->esi = esi_save;
    g->edi = edi_save;
    g->ebp = ebp_save;

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
