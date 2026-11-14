/* f_0x10216a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets the 16-bit field at offset 0x30 of the object in ecx to 0xFFFF, then calls FUN_10150d40(2) if the global at 0x1057847c is nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10216a30(Guest* g, uint32_t self)
{
    wr16(self + 0x30u, 0xFFFFu);

    uint32_t ecx = rd32(COW_IMG(0x1057847Cu));
    g->ecx = ecx;

    if (ecx != 0u)
    {
        cow_stdcall(g, COW_IMG(0x10150d40u), 1u, 2u);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10216a30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
