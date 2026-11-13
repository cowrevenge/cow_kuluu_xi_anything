/* f_0x102d9338 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls FUN_102e7670(1), then tail-jumps through import slot 0x103cc464.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102d9338(Guest* g, uint32_t sp0)
{
    /* 102d9338: push 1
       102d933a: call 0x102e7670
       The callee is stdcall and ends in ret 4. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d933f: jmp dword ptr [0x103cc464]
       Tail call through an import slot.  The imported function is stdcall
       and pops 8 bytes, so rt_return below must use 8.  Read the two
       stack arguments that the original tail jump would have left in place. */
    const uint32_t target = rd32(COW_IMG(0x103cc464u));
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);

    cow_stdcall(g, target, 2u, a0, a1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9338(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102d9338(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);   /* tail-call target pops 8 bytes */
}
/* COW_ADAPTER END */
