/* f_0x1015f960 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1015f980 with the stack argument, then returns the dword at self + 0x8c + 4*result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015f960(Guest* g, uint32_t sp0, uint32_t self, uint32_t arg)
{
    const uint32_t saved_esi = g->esi;

    /*
     * Original stack layout before the call:
     *   sp0       : return address
     *   sp0 + 4   : arg
     *   sp0 - 4   : saved esi
     *   sp0 - 8   : pushed arg
     *   sp0 - 12  : return address for FUN_1015f980
     *
     * cow_cdecl will push the argument and return address relative to the
     * current esp, so leave esp at sp0 - 4 and store the saved esi there.
     */
    g->esp = sp0 - 4u;
    wr32(sp0 - 4u, saved_esi);

    const uint32_t idx = cow_cdecl(g, COW_IMG(0x1015f980u), 1u, arg);

    /* The original caller restores esi after the call. */
    g->esi = saved_esi;

    return rd32(self + idx * 4u + 0x8Cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_1015f960(g, sp0, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
