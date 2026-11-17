/* f_0x102d0da0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 0 for the early-exit condition, otherwise scans backward through paired tables, updates param_2+0x104, and returns a 32-bit product.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d0da0(Guest* g, uint32_t param1, uint32_t param2)
{
    (void)g;

    if (rd32(param1 + 0x2d64u) != 0u)
    {
        if ((rd32(param2 + 0xb88u) & 7u) != 7u)
        {
            return 0u;
        }
    }

    int32_t iVar1 = (int32_t)rd32(param2 + 0x104u);
    int32_t iVar2 = iVar1 - 1;

    if (iVar2 > 0)
    {
        uint32_t piVar5 = param2 + 0x110u + (uint32_t)iVar2 * 4u;
        uint32_t piVar6 = param1 + 0x2af0u + (uint32_t)iVar2 * 0xccu;

        while (rd32(piVar6) == 0u)
        {
            int32_t iVar3 = 0;
            int32_t count = (int32_t)rd32(param2 + 0x10cu);

            if (count > 0)
            {
                uint32_t piVar4 = piVar5;

                do
                {
                    if (rd32(piVar4) != 0u)
                    {
                        goto lab_102d0e2c;
                    }

                    iVar3 = iVar3 + 1;
                    piVar4 = piVar4 + 0x218u;   /* int* + 0x86 elements */
                } while (iVar3 < count);
            }

            iVar2 = iVar2 - 1;
            piVar5 = piVar5 - 4u;               /* int* - 1 element */
            piVar6 = piVar6 - 0xccu;            /* int* - 0x33 elements */

            if (iVar2 < 1)
            {
                break;
            }
        }
    }

lab_102d0e2c:
    wr32(param2 + 0x104u, (uint32_t)(iVar2 + 1));

    int32_t count = (int32_t)rd32(param2 + 0x10cu);
    int32_t left = count + 3;
    int32_t right = iVar1 - (iVar2 + 1);

    return (uint32_t)((int32_t)left * (int32_t)right);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d0da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102d0da0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
