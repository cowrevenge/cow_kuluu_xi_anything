/* f_0x102d8a7c - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls FUN_102e7670(1), then tail-jumps to the function named by the import slot at 0x103cc470.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d8a7c(Guest* g)
{
    /* 102d8a7c: push 1
       102d8a7e: call 0x102e7670
       The callee is stdcall and ends with ret 4, so it pops its one argument word. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d8a83: jmp dword ptr [0x103cc470]
       This is a tail call to an imported function reached through its import slot.
       Use rt_call_indirect so the target sees the current guest stack/registers and
       its own return convention governs the final return. */
    const uint32_t target = rd32(COW_IMG(0x103cc470u));
    rt_call_indirect(g, target);

    /* eax and edx are compared; preserve exactly what the tail callee left there. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d8a7c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d8a7c(g);
    g->esp = sp0;

    /* The tail-called target cleans 8 bytes of its own stack arguments
       (original observed final esp = entry esp + 4 + 8). */
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
