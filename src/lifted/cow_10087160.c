/* f_0x10087160 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the global dword at 0x104807EC shifted right by one, with bits 1-7 of the low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10087160(Guest* g)
{
    (void)g;
    uint32_t eax = rd32(COW_IMG(0x104807ECu));
    eax >>= 1;
    eax = (eax & 0xFFFFFF00u) | (eax & 1u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10087160(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
