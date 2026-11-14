/* f_0x102d67fd - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Calls FUN_102e7670(1), then tail-jumps to the imported function at [0x103cc428], forwarding the caller's stack arguments and cleanup.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d67fd(Guest* g, uint32_t sp0)
{
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    const uint32_t target = rd32(COW_IMG(0x103cc428u));

    /*
     * The tail jump happens with the caller's original stack visible.
     * The target pops 12 bytes (three stack words), which is what produces
     * the observed original esp = esp0 + 16:
     *   - the earlier FUN_102e7670 cleanup leaves esp = esp0
     *   - the tail-called target pops 12 bytes
     *   - rt_return then advances esp by the same 12 bytes for the caller
     */
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    const uint32_t result = cow_stdcall(g, target, 3u, a0, a1, a2);
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d67fd(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d67fd(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 12u);   /* target pops three stack argument words */
}
/* COW_ADAPTER END */
