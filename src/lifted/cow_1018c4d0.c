/* f_0x1018c4d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets a global byte flag, calls a helper, and tail-calls another routine when a global dword is non-zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018c4d0(Guest* g)
{
    wr8(COW_IMG(0x10377c6cu), (uint8_t)1u);

    cow_cdecl(g, COW_IMG(0x1018c2b0u), 0);

    const uint32_t ecx = rd32(COW_IMG(0x1065cb04u));
    if (ecx != 0u)
    {
        cow_thiscall_cdecl(g, COW_IMG(0x101889e0u), ecx, 0);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018c4d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
