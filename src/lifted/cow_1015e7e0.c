/* f_0x1015e7e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   walks a linked list of nodes, returning the first node that is not marked, has zero bytes at 0x6e/0x70, and whose 0x10 field is not 14.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015e7e0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t local = sp0 - 4u;

    g->esp = sp0 - 8u;

    uint32_t next = cow_thiscall_cdecl(g, COW_IMG(0x10126510u), self, 0u);
    wr32(local, next);

    if (next == 0u)
    {
        return 0u;
    }

    for (;;)
    {
        g->esp = sp0 - 8u;
        uint32_t node = cow_thiscall(g, COW_IMG(0x10126550u), self, 1u, local);

        int cont = 0;

        if ((rd8(node + 0x34u) & 1u) != 0u)
        {
            if (rd8(node + 0x98u) == 0u)
            {
                cont = 1;
            }
            else
            {
                if (rd8(node + 0x6eu) != 0u)
                {
                    cont = 1;
                }
                else if (rd8(node + 0x70u) != 0u)
                {
                    cont = 1;
                }
                else if (rd32(node + 0x10u) != 0xEu)
                {
                    return node;
                }
                else
                {
                    cont = 1;
                }
            }
        }
        else
        {
            if (rd8(node + 0x6eu) != 0u)
            {
                cont = 1;
            }
            else if (rd8(node + 0x70u) != 0u)
            {
                cont = 1;
            }
            else if (rd32(node + 0x10u) != 0xEu)
            {
                return node;
            }
            else
            {
                cont = 1;
            }
        }

        if (!cont)
        {
            return node;
        }

        next = rd32(local);
        if (next == 0u)
        {
            return 0u;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_1015e7e0(g, self, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
