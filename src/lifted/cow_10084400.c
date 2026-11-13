/* f_0x10084400 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the sign-extended byte at offset 0xEE of the pointer stored at self+0x70, or the global at 0x1047d610 when that pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10084400(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t p = rd32(self + 0x70u);
    if (p == 0u)
    {
        return rd32(COW_IMG(0x1047d610u));
    }

    return (uint32_t)(int32_t)(int8_t)rd8(p + 0xeeu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10084400(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
