/* f_0x10274020 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1027e0f0 twice, once with param+8 and once with param+0x70.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10274020(Guest* g, uint32_t self, uint32_t param)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = param + 8u;
    const uint32_t arg2 = param + 0x70u;

    /*
     * Original stack layout:
     *   entry esp = sp0
     *   push esi                 -> [sp0-4] = esi
     *   push (param+8)           -> [sp0-8] = arg1
     *   call FUN_1027e0f0        -> [sp0-12] = return address
     *
     * Then:
     *   push (param+0x70)        -> [sp0-12] = arg2
     *   call FUN_1027e0f0        -> [sp0-16] = return address
     *   add esp, 8               -> pops both arguments
     *   pop esi
     *   ret
     *
     * Preserve the stack contents seen by the callee during each call.
     */

    /* First call: emulate push esi; push arg1; call. */
    g->esp = sp0 - 4u;
    wr32(g->esp, self);                 /* saved esi */
    cow_cdecl(g, COW_IMG(0x1027e0f0u), 1u, arg1);

    /*
     * After the first call the original leaves arg1 on the stack and has
     * saved esi below it.  Restore that layout before the second call.
     */
    g->esp = sp0 - 8u;
    wr32(g->esp, arg1);                 /* [sp0-8] = first argument */
    wr32(g->esp + 4u, self);            /* [sp0-4] = saved esi */

    /* Second call: push arg2; call; caller pops 8 bytes. */
    cow_cdecl(g, COW_IMG(0x1027e0f0u), 1u, arg2);

    /*
     * The original then does add esp,8; pop esi; ret.
     * The adapter restores esp and esi is not compared after return.
     */
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10274020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10274020(g, g->esi, param);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
