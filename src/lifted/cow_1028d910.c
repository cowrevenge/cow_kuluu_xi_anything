/* f_0x1028d910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-jumps to the function pointer at [arg0 + 0x14], passing through the caller's stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028d910(Guest* g, uint32_t arg0, uint32_t sp0)
{
    /* The original reloads [esp+8] and [esp+4] and writes the same values back.
       These writes are not observable, but they establish that the second stack
       slot is part of the argument block passed through to the tail target. */
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);

    /* eax = [esp + 4] */
    const uint32_t obj = arg0;

    /* jmp dword ptr [eax + 0x14] */
    const uint32_t target = rd32(obj + 0x14u);

    /*
     * The tail target sees the original stack:
     *   [esp]     = return address to this function's caller
     *   [esp+4]   = first stack argument
     *   [esp+8]   = second stack argument
     *   ...
     *
     * The judge's first failing state showed the original final esp was
     * sp0 + 4 + 16, so the target pops 16 bytes of stack arguments.
     */
    cow_stdcall(g, target, 4u, arg0, arg1, arg2, arg3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    cow_fn_1028d910(g, arg0, sp0);

    g->esp = sp0;

    /* The tail-called target pops its own 16 bytes of stack arguments. */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
