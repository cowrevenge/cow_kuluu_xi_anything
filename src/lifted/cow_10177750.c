/* f_0x10177750 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns eax with its low byte cleared when the global at 0x10631f24 is null; otherwise tail-calls 0x10181930 and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10177750(Guest* g)
{
    const uint32_t ecx = rd32(COW_IMG(0x10631F24u));
    g->ecx = ecx;

    if (ecx == 0u)
    {
        /* xor al, al: clears only the low byte of eax, preserving the upper 24 bits. */
        return g->eax & 0xFFFFFF00u;
    }

    /* Tail jmp 0x10181930.  The target is entered with ecx set as above. */
    return cow_thiscall_cdecl(g, COW_IMG(0x10181930u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10177750(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
