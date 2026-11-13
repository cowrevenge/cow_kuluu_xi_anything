/* f_0x1004e470 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0x20000001 when bit 0x20000000 is set in the dword at self+0xd8, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1004e470(Guest* g, uint32_t self)
{
    uint32_t masked = rd32(self + 0xd8u) & 0x20000000u;
    uint32_t cl = (masked == 0x20000000u) ? 1u : 0u;
    uint32_t eax = (masked & 0xFFFFFF00u) | cl;

    /* The original zeroes ecx and then sets its low byte. ecx is not compared,
       but reproducing the final value is harmless. */
    g->ecx = cl;

    /* edx is untouched by the original. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1004e470(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
