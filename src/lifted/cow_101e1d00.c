/* f_0x101e1d00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Scans the first ten 0x24-byte records starting at self+4 and returns the address of the first record whose first dword is zero, or 0 if none is found.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e1d00(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t addr = self + 4u;
    uint32_t count = 0u;

    while (count < 10u)
    {
        if (rd32(addr) == 0u)
        {
            return addr;
        }

        ++count;
        addr += 0x24u;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101e1d00(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
