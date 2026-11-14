/* f_0x102d93ef - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   pushes 1, calls FUN_102e7670, then tail-jumps to the imported function at [0x103cc468].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102d93ef(Guest* g, uint32_t self, uint32_t sp0)
{
    (void)self;

    /* 102d93ef: push 1
       102d93f1: call 0x102e7670
       The callee ends in ret 4, so it is stdcall with one stack argument. */
    cow_stdcall(g, COW_IMG(0x102e7670u), 1u, 1u);

    /* 102d93f6: jmp dword ptr [0x103cc468]
       Tail call through an import slot.  The target is a stdcall Windows API
       that pops 16 bytes, i.e. it receives four stack arguments.  Those
       arguments are already on the guest stack for this function's caller,
       so pass them through unchanged. */
    const uint32_t target = rd32(COW_IMG(0x103cc468u));

    cow_stdcall(g, target, 4u,
                rd32(sp0 + 4u),
                rd32(sp0 + 8u),
                rd32(sp0 + 12u),
                rd32(sp0 + 16u));

    /* eax and edx are observable after the tail call. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d93ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102d93ef(g, g->ecx, sp0);
    g->esp = sp0;

    /* The tail-called target ends in ret 16. */
    rt_return(g, result, 16u);
}
/* COW_ADAPTER END */
