/* f_0x101bc7a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the dword at [this+4] is non-zero, else 0 (in al, upper bits of eax are from the load).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101bc7a0(Guest* g, uint32_t self)
{
    (void)g;
    uint32_t val = rd32(self + 4u);
    /* setne al: sets al to 1 if ZF=0 (val != 0), else 0. Upper bits of eax remain from the load. */
    return (val & 0xFFFFFF00u) | (uint8_t)((val != 0) ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101bc7a0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
