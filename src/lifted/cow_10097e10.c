/* f_0x10097e10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the stack argument into global 0x104804bc and returns 1 in eax (lower byte only).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10097e10(Guest* g, uint32_t param)
{
    wr32(COW_IMG(0x104804BCu), param);
    /* mov al, 1: sets low byte to 1, preserves upper bytes of eax from previous instruction */
    return (param & 0xFFFFFF00u) | 0x1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10097e10(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
