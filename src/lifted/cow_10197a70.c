/* f_0x10197a70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   forwards two stack arguments and a this pointer to FUN_101978e0, then returns 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10197a70(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t self)
{
    /*
     * Original:
     *   eax = [esp+8]   -> arg1
     *   ecx = [esp+4]   -> arg0
     *   push eax        -> second argument to callee
     *   push ecx        -> first argument to callee
     *   ecx = [esp+0x14] after the two pushes:
     *       esp = sp0 - 8
     *       [esp + 0x14] = [sp0 + 0x0c]
     *   call 0x101978e0
     *
     * The callee is thiscall and pops two stack words.  The last pushed value is
     * the first C argument, so the call is:
     *       FUN_101978e0(self, arg0, arg1)
     */
    cow_thiscall(g, COW_IMG(0x101978e0u), self, 2u, arg0, arg1);

    /*
     * The original then executes:
     *   mov eax, 1
     *   ret
     *
     * edx is whatever the callee left in g->edx; do not modify it here.
     */
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197a70(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    /*
     * The original reads the callee's this pointer after two pushes:
     *   esp = sp0 - 8
     *   [esp + 0x14] = [sp0 + 0x0c]
     */
    const uint32_t self = rd32(sp0 + 0x0cu);

    const uint32_t result = cow_fn_10197a70(g, arg0, arg1, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
