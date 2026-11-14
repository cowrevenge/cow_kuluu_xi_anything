/* f_0x10044ac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dereferences the pointer at [this + 0xfc]; if the resulting pointer is non-null, tail-calls FUN_100539e0 with it as this, otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10044ac0(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t p = rd32(self + 0xFCu);
    if (p != 0u)
    {
        p = rd32(p);
    }
    else
    {
        p = 0u;
    }

    if (p == 0u)
    {
        /* xor al, al: clears the low byte, preserving the upper bits.
           Here eax is already zero on this path, but keep the exact effect. */
        g->edx = g->edx;
        return p & 0xFFFFFF00u;
    }

    /* mov ecx, eax; jmp 0x100539e0 */
    g->esp = sp0;
    uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x100539e0u), p, 0);
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10044ac0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
