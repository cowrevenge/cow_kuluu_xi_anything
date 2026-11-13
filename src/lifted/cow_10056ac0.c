/* f_0x10056ac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer offset derived from bits 6-10 of the first dword at the argument, or 0 if that dword's low byte is zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10056ac0(Guest* g, uint32_t p)
{
    (void)g;

    const uint32_t v = rd32(p);

    if ((v & 0xFFu) == 0u)
    {
        return 0u;
    }

    return ((v >> 6u) & 0x7Cu) + p;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10056ac0(g, p);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
