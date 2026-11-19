/* f_0x102afce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls a predicate on a local buffer initialized from ecx; if it succeeds, calls a second predicate with the buffer's value and the stack argument, returning 0xff only if both succeed.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102afce0(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t local = cow_frame(g, sp0, 4u);

    /* push ecx */
    wr32(local, g->ecx);

    /* lea eax, [esp] ; push eax ; call FUN_102afbc0 */
    g->eax = local;
    uint32_t r1 = cow_cdecl(g, COW_IMG(0x102afbc0u), 1u, local);

    /* test al, al ; je fail */
    if ((uint8_t)r1 == 0u)
    {
        /* xor al, al */
        return r1 & 0xFFFFFF00u;
    }

    /*
       mov ecx, [esp + 8]   ; stack argument
       mov edx, [esp]       ; value stored in the local buffer
       push ecx
       push edx
       call FUN_102afe00
    */
    const uint32_t local_value = rd32(local);

    g->eax = r1;
    g->ecx = param;
    g->edx = local_value;

    uint32_t r2 = cow_cdecl(g, COW_IMG(0x102afe00u), 2u, local_value, param);

    /* test al, al ; je fail */
    if ((uint8_t)r2 == 0u)
    {
        /* xor al, al */
        return r2 & 0xFFFFFF00u;
    }

    /* or al, 0xff */
    return (r2 & 0xFFFFFF00u) | 0xFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102afce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102afce0(g, sp0, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
