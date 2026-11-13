/* f_0x100eaee0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100eaeb0(0, arg3), then FUN_100eaf00(result, arg3), and returns 1 while preserving the upper bits of eax from the second call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100eaee0(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg1;
    (void)arg2;

    uint32_t r1 = cow_cdecl(g, COW_IMG(0x100eaeb0u), 2u, 0u, arg3);
    uint32_t r2 = cow_cdecl(g, COW_IMG(0x100eaf00u), 2u, r1, arg3);

    /*
     * The original never writes edx directly.  Its final value is whatever
     * the callees leave there; the call helpers update g->edx accordingly.
     */
    g->edx = g->edx;

    /* mov al, 1: low byte becomes 1, upper 24 bits remain from eax after second call. */
    return (r2 & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eaee0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_100eaee0(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
