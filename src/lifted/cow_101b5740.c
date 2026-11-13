/* f_0x101b5740 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the dword at self+0x8c84 if FUN_101b6e90 returns a nonzero low byte, otherwise returns -1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b5740(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* Original: mov esi, ecx before the call, so the callee sees esi == self. */
    g->esi = self;

    /* Original: call 0x101b6e90 with no stack arguments.  It is reached with ecx == self. */
    const uint32_t ok = cow_thiscall_cdecl(g, COW_IMG(0x101b6e90u), self, 0u);

    /* Original restores esi with pop esi before returning. */
    g->esi = saved_esi;

    if ((uint8_t)ok == 0u)
    {
        return 0xFFFFFFFFu;
    }

    return rd32(self + 0x8c84u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b5740(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
