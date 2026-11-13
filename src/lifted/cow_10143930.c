/* f_0x10143930 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Searches the 12 bytes at self+0x168 for the low byte of the stack argument and returns its index, or 0 if not found.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10143930(Guest* g, uint32_t self, uint32_t ch)
{
    (void)g;

    const uint32_t target = ch & 0xFFu;
    uint32_t eax = 0u;

    for (;;)
    {
        if (rd8((uint32_t)(self + eax + 0x168u)) == target)
        {
            return eax;
        }

        eax = eax + 1u;

        /* cmp eax, 0xc / jl: signed comparison */
        if ((int32_t)eax >= (int32_t)0xCu)
        {
            break;
        }
    }

    /* xor al, al */
    return eax & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10143930(g, g->ecx, rd8(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
