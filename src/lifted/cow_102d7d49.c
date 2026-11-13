/* f_0x102d7d49 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls FUN_102e7670(1), then tail-jumps through the function pointer at 0x103cc4a8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d7d49(Guest* g, uint32_t sp0)
{
    (void)sp0;

    /* 102d7d49: push 1
       102d7d4b: call 0x102e7670
       The callee is stdcall and ends in ret 4. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d7d50: jmp dword ptr [0x103cc4a8]
       Tail jump: execute the indirect target with the current guest stack/registers.
       The target is reached through an import slot, so read the pointer first. */
    rt_call_indirect(g, rd32(COW_IMG(0x103cc4a8u)));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d7d49(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_102d7d49(g, sp0);

    g->esp = sp0;

    /* The tail target pops 8 bytes (ret 8), so the effective return adjustment is 8. */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
