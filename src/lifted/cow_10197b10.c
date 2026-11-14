/* f_0x10197b10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Tail-call thunk: loads the object's vtable pointer from [ecx] and tail-calls the virtual slot at vtable+0x48, forwarding the original stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10197b10(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t vtable = rd32(self);
    const uint32_t target = rd32(vtable + 0x48u);

    /* The original sets eax to the vtable pointer immediately before the jmp. */
    g->eax = vtable;

    /*
     * The target is reached by an indirect tail call.  It is a virtual member
     * function, so thiscall is used.  The original thunk forwards the stack
     * arguments unchanged; the observed target pops one stack argument (4 bytes).
     */
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_thiscall(g, target, self, 1u, arg0);

    /*
     * The thunk itself does not restore edx; whatever the target leaves there is
     * observable.  cow_thiscall is expected to leave g->edx as the callee left it.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10197b10(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* the tail-called target pops one stack argument */
}
/* COW_ADAPTER END */
