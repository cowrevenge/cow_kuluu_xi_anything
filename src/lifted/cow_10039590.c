/* f_0x10039590 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's field at +8 is zero, returns 1; otherwise loads a child pointer from the indexed table and tail-calls FUN_10039700 with it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10039590(Guest* g, uint32_t self)
{
    const uint32_t eax = rd32(self + 8u);

    if (eax == 0u)
    {
        /* mov al, 1 after eax was zero */
        return 1u;
    }

    const uint32_t ecx = rd32(self + eax * 4u + 8u);

    /* Tail jmp to FUN_10039700, which ends in ret 4. */
    return cow_thiscall(g, COW_IMG(0x10039700u), ecx, 1u, rd32(g->esp + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10039590(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
