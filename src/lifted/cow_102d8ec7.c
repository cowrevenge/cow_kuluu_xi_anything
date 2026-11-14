/* f_0x102d8ec7 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls FUN_102e7670(1), then tail-jumps to the import at 0x103cc4c0 with the two stack arguments that are above this function's return address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d8ec7(Guest* g, uint32_t sp0)
{
    /* 102d8ec9: call 0x102e7670; callee is stdcall ret 4 */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /*
     * 102d8ece: jmp dword ptr [0x103cc4c0]
     *
     * This is a tail call.  After the preceding stdcall cleanup, esp has
     * returned to sp0, so the target sees [sp0] as its return address and
     * its stack arguments at [sp0+4] and [sp0+8].  The observed final esp
     * is sp0+12, so the target pops two argument words: ret 8.
     */
    const uint32_t target = rd32(COW_IMG(0x103cc4c0u));
    cow_stdcall(g, target, 2u, rd32(sp0 + 4u), rd32(sp0 + 8u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8ec7(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_102d8ec7(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 8u);   /* tail-called target pops 8 argument bytes */
}
/* COW_ADAPTER END */
