/* f_0x101bced0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns -1 if the global pointer at 0x10662dc0 is null; otherwise tail-calls 0x101bd820 with that pointer in ecx and returns its result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bced0(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x10662DC0u));

    if (self == 0u)
    {
        return 0xFFFFFFFFu;
    }

    /*
     * Original tail jmp passes the current ecx (the loaded global pointer)
     * to 0x101bd820.  The target ends in a bare ret, so the caller pops
     * any stack arguments; this wrapper has none.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x101BD820u), self, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bced0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_101bced0(g);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
