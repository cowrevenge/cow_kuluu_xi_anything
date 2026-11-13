/* f_0x101e4950 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a sub-object from [this+8], calls FUN_10118db0 on it with (1,0), then tail-calls FUN_101186a0 with that sub-object as this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101e4950(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t sub = rd32(self + 8u);

    /* 101e495a: call 0x10118db0
       Original stack order:
         push 0
         push 1
       so the first argument is 1 and the second is 0.
       The callee is thiscall and ends in ret 8. */
    (void)cow_thiscall(g, COW_IMG(0x10118db0u), sub, 2u, 1u, 0u);

    /* 101e495f: mov ecx, esi
       101e4961: pop esi
       Restore the caller-saved registers exactly as the original does before
       the tail jump. */
    g->ecx = sub;
    g->esi = entry_esi;

    /* 101e4962: jmp 0x101186a0
       Tail call.  The target is entered with ecx = sub and the current
       eax/edx values left by the previous call.  It ends in a bare ret, so
       use the caller-pops variant. */
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x101186a0u), sub, 0u);

    /* Preserve the final eax/edx state for the judge. */
    g->eax = result;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101e4950(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
