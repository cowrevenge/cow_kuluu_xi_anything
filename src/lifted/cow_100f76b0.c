/* f_0x100f76b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a cached pointer's low byte forced to 1, or initializes the pointer and tail-calls its constructor.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f76b0(Guest* g)
{
    const uint32_t val = rd32(COW_IMG(0x104df908u));

    if (val != 0u)
    {
        /* mov al, 1 preserves the upper 24 bits of eax. */
        return (val & 0xFFFFFF00u) | 1u;
    }

    wr32(COW_IMG(0x104df908u), COW_IMG(0x104df8a8u));

    /* The original tail-jumps with eax = 0 and ecx = &DAT_104df8a8. */
    g->eax = 0u;
    g->ecx = COW_IMG(0x104df8a8u);

    cow_thiscall_cdecl(g, COW_IMG(0x100f1ba0u), COW_IMG(0x104df8a8u), 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f76b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f76b0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
