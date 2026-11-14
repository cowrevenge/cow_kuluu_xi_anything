/* f_0x101360c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a nonzero 32-bit value iff this object, the global object, and that global's +8 field are all nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101360c0(Guest* g, uint32_t self)
{
    (void)g;

    uint32_t eax = rd32(self + 8u);
    if (eax == 0u)
    {
        return 0u;
    }

    eax = rd32(COW_IMG(0x10663740u));
    if (eax == 0u)
    {
        return 0u;
    }

    uint32_t ecx = rd32(eax + 8u);
    if (ecx == 0u)
    {
        return eax & 0xFFFFFF00u;
    }

    return (eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101360c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101360c0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
