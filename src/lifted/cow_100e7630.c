/* f_0x100e7630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   loads a 64-bit value from [self+0x98] and shifts it right by 45 using __aullshr, then returns the low byte masked with 0x3f.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7630(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 0x98u);
    uint32_t edx = rd32(self + 0x9cu);
    uint32_t ecx = (self & 0xFFFFFF00u) | 0x2Du;

    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;

    cow_cdecl(g, COW_IMG(0x103152d0u), 0u);

    eax = g->eax;
    eax = (eax & 0xFFFFFF00u) | (uint8_t)((uint8_t)eax & 0x3Fu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e7630(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
