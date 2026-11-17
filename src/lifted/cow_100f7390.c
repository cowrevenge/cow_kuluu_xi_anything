/* f_0x100f7390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   if the global object pointer is null it returns 2; otherwise it calls the thiscall helper with the global as this, passing a pointer to the caller's first stack argument and selected later stack argum

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_100f7390(Guest* g, uint32_t sp0)
{
    const uint32_t self = rd32(COW_IMG(0x104DF908u));

    if (self == 0u)
    {
        /* Original: mov eax, 2; ret.  EDX is untouched. */
        return 2u;
    }

    /*
     * Original non-null path:
     *   mov eax, [esp + 0x10]   ; caller argument 4
     *   mov edx, [esp + 0x0c]   ; caller argument 3
     *   push eax
     *   push edx
     *   push 9
     *   push 0
     *   lea eax, [esp + 0x14]   ; eax = sp0 + 4, address of caller argument 1
     *   push 0
     *   push eax
     *   call 0x100f2500
     *
     * The callee is thiscall in ecx and pops six stack words.
     * Arguments in source order are the last-pushed first:
     *   sp0 + 4, 0, 0, 9, [sp0 + 0x0c], [sp0 + 0x10]
     */
    const uint32_t arg3 = rd32(sp0 + 0x0Cu);
    const uint32_t arg4 = rd32(sp0 + 0x10u);

    /*
     * Match the register state the original has immediately before the call.
     * EDX is compared by the judge, and the callee may preserve it.
     */
    g->ecx = self;
    g->edx = arg3;
    g->eax = sp0 + 4u;

    cow_thiscall(g,
                 COW_IMG(0x100F2500u),
                 self,
                 6u,
                 sp0 + 4u,
                 0u,
                 0u,
                 9u,
                 arg3,
                 arg4);

    /* Original leaves the callee's EAX and EDX in eax/edx. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f7390(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
