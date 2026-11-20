/* f_0x102abee0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   walks a record list from [param_1 + 0x48], invoking param_2 for each triple of dwords while maintaining a global counter.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102abee0(Guest* g, uint32_t param_1, uint32_t param_2, uint32_t param_3)
{
    const uint32_t global_counter = COW_IMG(0x109aaac0u);

    uint32_t esi = rd32(param_1 + 0x48u);
    uint32_t edi = 0u;
    uint32_t eax = rd32(esi);
    uint32_t ebx = 0u;
    uint32_t ebp = 0u;
    esi += 4u;

    wr32(global_counter, ebp);

    if (eax == 0u)
        return;

    uint32_t outer_count = eax;

    for (;;)
    {
        eax = rd32(esi);
        esi += 4u;

        if ((int32_t)eax <= 0)
        {
            eax = (uint32_t)(-(int32_t)eax);
            uint32_t ecx = 0u;

            if (eax != 0u)
            {
                for (;;)
                {
                    if (ecx == 0u)
                    {
                        ebp = rd32(esi);
                        ebx = rd32(esi + 4u);
                        esi += 4u;
                        ecx = 1u;
                        esi += 4u;
                        eax -= 3u;
                    }
                    else
                    {
                        if (ecx == 1u)
                        {
                            ebp = edi;
                        }
                        else
                        {
                            ebx = edi;
                        }
                        eax -= 1u;
                        ecx = (uint32_t)(-(int32_t)ecx);
                    }

                    edi = rd32(esi);
                    esi += 4u;

                    uint32_t counter = eax;

                    if (param_2 != 0u)
                    {
                        cow_cdecl(g, param_2, 4u, ebp, ebx, edi, param_3);
                        counter = eax;
                    }

                    uint32_t edx = rd32(global_counter);
                    edx += 1u;
                    wr32(global_counter, edx);

                    if (counter == 0u)
                        break;

                    eax = counter;
                }
            }
        }
        else
        {
            for (;;)
            {
                ebp = rd32(esi);
                ebx = rd32(esi + 4u);
                esi += 8u;

                eax -= 3u;
                uint32_t counter = eax;

                edi = rd32(esi);
                esi += 4u;

                if (param_2 != 0u)
                {
                    cow_cdecl(g, param_2, 4u, ebp, ebx, edi, param_3);
                    counter = eax;
                }

                uint32_t edx = rd32(global_counter);
                edx += 1u;
                wr32(global_counter, edx);

                if (counter == 0u)
                    break;

                eax = counter;
            }
        }

        outer_count -= 1u;
        if (outer_count == 0u)
            break;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102abee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 12u);

    cow_fn_102abee0(g, param_1, param_2, param_3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
