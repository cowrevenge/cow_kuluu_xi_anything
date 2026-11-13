/* f_0x10010100 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zero-initializes the first dword of the object, calls the imported critical-section initializer on the following dword, and returns the object pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10010100(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    wr32(self, 0u);

    /*
     * Original stack at the call:
     *   push esi          -> esp = sp0 - 4
     *   push eax          -> esp = sp0 - 8
     *   call [import]     -> callee sees ret addr at sp0 - 12, arg at sp0 - 8
     *
     * The helper pushes the argument and return address from the current esp.
     * Leave one slot below sp0 so the argument lands at the same address as
     * the original push eax.
     */
    g->esp -= 4u;
    cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1u, self + 4u);

    /* Restore the callee-saved register exactly as the original push/pop esi does. */
    g->esi = saved_esi;

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10010100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10010100(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
