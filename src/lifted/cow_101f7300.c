/* f_0x101f7300 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword from a 16-byte-stride table at 0x106637ec indexed by the stack argument, or -1 if the global byte at 0x106637a9 is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7300(Guest* g, uint32_t sp0)
{
    (void)g;

    if (rd8(COW_IMG(0x106637A9u)) == 0u)
    {
        return 0xFFFFFFFFu;
    }

    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t addr = (uint32_t)((index << 4) + COW_IMG(0x106637ECu));
    return rd32(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f7300(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
