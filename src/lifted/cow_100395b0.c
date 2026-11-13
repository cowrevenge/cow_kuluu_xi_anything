/* f_0x100395b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Decrements the reference count at offset 8 of the object in ecx; if it was nonzero, loads the child pointer selected by the new count and tail-calls FUN_10039740 with that child in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100395b0(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(self + 8u);

    if (eax == 0u)
    {
        return;
    }

    eax = eax - 1u;
    wr32(self + 8u, eax);

    uint32_t ecx = rd32(self + eax * 4u + 0xcu);

    g->eax = eax;
    g->ecx = ecx;

    cow_thiscall_cdecl(g, COW_IMG(0x10039740u), ecx, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100395b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100395b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
