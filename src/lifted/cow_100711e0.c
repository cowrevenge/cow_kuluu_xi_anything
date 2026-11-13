/* f_0x100711e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the stack argument is non-null, copies the DWORD at argument+0x14 into this+4; returns the DWORD that was read, or 0 when the argument is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100711e0(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax = arg;

    if (eax != 0u)
    {
        eax = rd32(eax + 0x14u);
        wr32(self + 4u, eax);
    }

    /* edx is never written by the original; preserve it exactly. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100711e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100711e0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
