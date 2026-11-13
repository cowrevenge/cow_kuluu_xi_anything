/* f_0x10097a60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 in al if the object's dword at offset 0x170 is 2 or 3, otherwise clears al, preserving the upper 24 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10097a60(Guest* g, uint32_t self)
{
    uint32_t v = rd32(self + 0x170u);

    /* The original never writes edx, so leave it exactly as it was on entry. */
    g->edx = g->edx;

    if (v == 2u || v == 3u)
    {
        /* mov al, 1: set low byte to 1, preserve upper 24 bits */
        return (v & 0xFFFFFF00u) | 1u;
    }

    /* xor al, al: clear low byte, preserve upper 24 bits */
    return v & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10097a60(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
