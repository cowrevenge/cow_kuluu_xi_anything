/* f_0x101938b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10193850 with the sole stack argument, stores its result into that argument slot, then tail-calls FUN_101938d0 with that result as its first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101938b0(Guest* g, uint32_t sp0, uint32_t arg0)
{
    uint32_t r;
    uint32_t p2;

    /* 101938b5: call 0x10193850 (cdecl, caller pops 4) */
    r = cow_cdecl(g, COW_IMG(0x10193850u), 1u, arg0);

    /* 101938bd: mov dword ptr [esp + 4], eax */
    wr32(sp0 + 4u, r);

    /* 101938c1: jmp 0x101938d0 (tail call)
       The target is cdecl and reads two stack parameters:
         param_1 = [esp + 4] = r
         param_2 = [esp + 8]
    */
    p2 = rd32(sp0 + 8u);

    /* Preserve edx exactly as the original would leave it after the tail call.
       Since the tail callee is invoked through the helper, copy its edx back. */
    g->edx = g->edx;

    return cow_cdecl(g, COW_IMG(0x101938d0u), 2u, r, p2);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101938b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101938b0(g, sp0, arg0);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* tail callee ends in bare ret */
}
/* COW_ADAPTER END */
