/* f_0x100e7740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a 64-bit value from [ptr+8] and [ptr+0xc], shifts it right by 0x21 using __aullshr, and returns the low 32 bits masked with 0x3ff.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7740(Guest* g, uint32_t ptr)
{
    const uint32_t low = rd32(ptr + 0x8u);
    const uint32_t high = rd32(ptr + 0xcu);
    const uint32_t ecx = (rd32(g->esp + 4u) & 0xFFFFFF00u) | 0x21u;

    g->eax = low;
    g->edx = high;
    g->ecx = ecx;

    cow_cdecl(g, COW_IMG(0x103152d0u), 0u);

    return g->eax & 0x3FFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e7740(g, ptr);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
