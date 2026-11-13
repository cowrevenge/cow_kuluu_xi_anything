/* f_0x10157640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object has either of the low two flag bits set at +0x5c and a nonzero byte at +0x20, tail-calls FUN_101598a0; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10157640(Guest* g, uint32_t self)
{
    if ((rd8(self + 0x5Cu) & 3u) == 0u)
    {
        return 0u;
    }

    const uint32_t al = (uint32_t)rd8(self + 0x20u);
    if (al == 0u)
    {
        return 0u;
    }

    /* Original: mov al, byte ptr [ecx + 0x20] preserves the upper 24 bits of eax. */
    g->eax = (g->eax & 0xFFFFFF00u) | al;

    /* Tail jmp to FUN_101598a0. It is reached with ecx as the object pointer and no stack arguments. */
    return cow_thiscall_cdecl(g, COW_IMG(0x101598a0u), self, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10157640(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
