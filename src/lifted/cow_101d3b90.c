/* f_0x101d3b90 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument is nonzero, tail-calls FUN_101ce0f0 with the dword argument in ecx; otherwise returns with al cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101d3b90(Guest* g, uint32_t arg1, uint32_t flag)
{
    /* Original: mov al, byte ptr [esp + 8] */
    const uint32_t eax_before = g->eax;
    const uint32_t eax_with_al = (eax_before & 0xFFFFFF00u) | (flag & 0xFFu);

    /* Original: test al, al / je ret */
    if ((flag & 0xFFu) == 0u)
    {
        /* On the taken branch, al has been set to 0 and edx is untouched. */
        g->edx = g->edx;
        return (eax_before & 0xFFFFFF00u);
    }

    /* Original: mov ecx, dword ptr [esp + 4] */
    /* Then tail-jumps to 0x101ce0f0 with ecx = arg1. */
    /* Preserve the effect of the preceding mov al, byte ptr [esp + 8] before the tail call. */
    g->eax = eax_with_al;

    /* The target ends in a bare ret, so the caller pops its arguments.
       It receives ecx as its first argument/self. */
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x101ce0f0u), arg1, 0u);

    /* The tail call's final eax/edx are what the caller observes. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3b90(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Read only the byte argument first, matching the original's order. */
    const uint32_t flag = rd8(sp0 + 8u);

    uint32_t arg1 = 0u;
    if ((flag & 0xFFu) != 0u)
    {
        /* The original reads [esp + 4] only when the byte is nonzero. */
        arg1 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101d3b90(g, arg1, flag);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
