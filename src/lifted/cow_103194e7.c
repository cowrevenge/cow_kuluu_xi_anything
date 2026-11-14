/* f_0x103194e7 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 8 to the 32-bit value at the pointer argument, then returns the 64-bit value at [updated_value - 8] as edx:eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u64 stack_args=1 */
uint64_t cow_fn_103194e7(Guest* g, uint32_t ptr)
{
    (void)g;

    uint32_t eax = ptr;

    /* add dword ptr [eax], 8 */
    uint32_t old = rd32(eax);
    wr32(eax, old + 8u);

    /* mov ecx, dword ptr [eax] */
    uint32_t ecx = rd32(eax);

    /* mov eax, dword ptr [ecx - 8] */
    uint32_t low = rd32(ecx - 8u);

    /* mov edx, dword ptr [ecx - 4] */
    uint32_t high = rd32(ecx - 4u);

    return ((uint64_t)high << 32) | (uint64_t)low;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103194e7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint64_t result = cow_fn_103194e7(g, arg);

    g->esp = sp0;
    g->edx = (uint32_t)(result >> 32);
    rt_return(g, (uint32_t)result, 0u);
}
/* COW_ADAPTER END */
