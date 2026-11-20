/* f_0x10307a45 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes a bounded product by repeatedly incrementing selected entries of param_2, using param_1 as control data, and returns the final product in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10307a45(Guest* g, uint32_t param1, uint32_t param2)
{
    uint32_t esi = param1;
    uint32_t ebx = rd32(esi + 0x64u);
    uint32_t edx = rd32(esi + 0x54u);
    uint32_t limit = edx;

    uint32_t edi = 2u;
    uint32_t eax = 0u;
    uint32_t ecx = 0u;

    uint32_t local_8 = 0u;
    uint32_t local_c = 1u;
    uint32_t flag = 0u;

    for (;;)
    {
        eax = edi;

        if ((int32_t)ebx > 1)
        {
            ecx = ebx - 1u;
            do
            {
                eax = (uint32_t)((int32_t)eax * (int32_t)edi);
                ecx = ecx - 1u;
            } while (ecx != 0u);
        }

        if ((int32_t)eax > (int32_t)limit)
            break;

        edi = edi + 1u;
    }

    edi = edi - 1u;
    local_8 = edi;

    if ((int32_t)local_8 < 2)
    {
        uint32_t vtable = rd32(esi);
        wr32(vtable + 0x14u, 0x37u);

        vtable = rd32(esi);
        wr32(vtable + 0x18u, eax);

        uint32_t target = rd32(rd32(esi));

        g->edx = limit;
        cow_cdecl(g, target, 1u, esi);
    }

    local_c = 1u;

    if ((int32_t)ebx > 0)
    {
        uint32_t dest = param2;
        uint32_t value = edi;
        uint32_t count = ebx;
        uint32_t counter = ebx;

        do
        {
            wr32(dest, value);
            dest = dest + 4u;
            count = count - 1u;
        } while (count != 0u);

        do
        {
            eax = local_c;
            eax = (uint32_t)((int32_t)eax * (int32_t)local_8);
            local_c = eax;
            counter = counter - 1u;
        } while (counter != 0u);
    }

    flag = 0u;
    local_8 = 0u;

    if ((int32_t)ebx <= 0)
    {
        g->edx = edx;
        return local_c;
    }

    for (;;)
    {
        for (;;)
        {
            esi = param1;

            uint32_t idx = local_8;

            if (rd32(esi + 0x28u) == 2u)
            {
                idx = rd32(COW_IMG(0x10349550u) + idx * 4u);
            }

            uint32_t ptr = param2 + idx * 4u;
            uint32_t divisor = rd32(ptr);

            eax = local_c;
            int32_t dividend = (int32_t)eax;
            int32_t divisor_s = (int32_t)divisor;

            int32_t quotient = dividend / divisor_s;
            int32_t remainder = dividend % divisor_s;

            eax = (uint32_t)quotient;
            edx = (uint32_t)remainder;

            edi = divisor + 1u;
            eax = (uint32_t)((int32_t)eax * (int32_t)edi);

            if ((int32_t)eax > (int32_t)limit)
                break;

            local_8 = local_8 + 1u;

            wr32(ptr, edi);
            local_c = eax;
            flag = 1u;

            if ((int32_t)local_8 >= (int32_t)ebx)
                break;
        }

        if (flag == 0u)
        {
            g->edx = edx;
            return local_c;
        }

        flag = 0u;
        local_8 = 0u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307a45(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10307a45(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
