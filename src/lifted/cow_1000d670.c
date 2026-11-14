/* f_0x1000d670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 32-bit value stored at global 0x104566E8 with its low byte replaced by the byte at offset 8 of that value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1000d670(Guest* g)
{
    (void)g;

    uint32_t eax = rd32(COW_IMG(0x104566E8u));
    eax = (eax & 0xFFFFFF00u) | (uint32_t)rd8(eax + 8u);

    /* edx is not written by the original; leave it unchanged. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000d670(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
