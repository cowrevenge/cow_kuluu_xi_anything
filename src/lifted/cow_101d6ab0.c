/* f_0x101d6ab0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the global pointer at 0x106631E0 is non-null, forwards the two stack arguments to the thiscall function at 0x101D6AD0 with that global as `this`; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101d6ab0(Guest* g, uint32_t sp0)
{
    const uint32_t ecx = rd32(COW_IMG(0x106631E0u));
    g->ecx = ecx;

    if (ecx == 0u)
    {
        /* Original jumps to ret before loading eax/edx from the stack. */
        return g->eax;
    }

    const uint32_t eax = rd32(sp0 + 8u);
    const uint32_t edx = rd32(sp0 + 4u);

    /*
       Original:
         mov eax, [esp+8]
         mov edx, [esp+4]
         push eax
         push edx
         call 0x101d6ad0

       The callee is thiscall and ends in ret 8.  The last pushed value is
       the first argument, so the callee receives (edx, eax).
    */
    g->eax = eax;
    g->edx = edx;

    const uint32_t result = cow_thiscall(g, COW_IMG(0x101d6AD0u), ecx, 2u, edx, eax);

    g->eax = result;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101d6ab0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
