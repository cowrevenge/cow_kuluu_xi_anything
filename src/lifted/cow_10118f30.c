/* f_0x10118f30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Loads a pointer from self+0xC; if non-null, reads its vtable and tail-calls the function at vtable[2].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10118f30(Guest* g, uint32_t self)
{
    const uint32_t ecx = rd32(self + 0xcu);
    if (ecx == 0u)
    {
        return g->eax;
    }
    const uint32_t eax = rd32(ecx);
    const uint32_t target = rd32(eax + 8u);
    rt_call_indirect(g, target);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10118f30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
