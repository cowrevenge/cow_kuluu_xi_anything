/* f_0x10312ce9 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   loads the floating-point state with __fload_withFB, then tail-jumps to the continuation at 0x10312cf2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10312ce9(Guest* g, uint32_t sp0, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    /* 10312ce9: lea edx, [esp + 0xc] */
    g->edx = sp0 + 0xCu;

    /* 10312ced: call 0x1031b1c5
     * __fload_withFB is cdecl here (bare ret, caller pops).  It receives ecx unchanged
     * and edx as set above.  The call pushes the continuation address 0x10312cf2, so
     * when it returns we are logically at 0x10312cf2 with esp == sp0 - 4.
     */
    cow_cdecl(g, COW_IMG(0x1031b1c5u), 0u);

    /* Fall through / tail call to 0x10312cf2.
     * The continuation expects the original four stack arguments above its own return
     * address.  Since the previous call left [esp] == 0x10312cf2, use cow_cdecl with
     * the original stack arguments to preserve the observable tail-call behaviour.
     */
    cow_cdecl(g, COW_IMG(0x10312cf2u), 4u, a, b, c, d);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312ce9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a = rd32(sp0 + 4u);
    const uint32_t b = rd32(sp0 + 8u);
    const uint32_t c = rd32(sp0 + 12u);
    const uint32_t d = rd32(sp0 + 16u);

    const uint32_t result = cow_fn_10312ce9(g, sp0, a, b, c, d);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
