/* f_0x101b7220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   increments the dword at [ecx+8], clamps it to 1 when the signed result is at least 5, then calls FUN_101bb050 with ecx+4 as this and the value as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b7220(Guest* g, uint32_t self)
{
    uint32_t val = rd32(self + 8u) + 1u;

    /* cmp eax, 5 / jl: signed comparison */
    if ((int32_t)val >= 5)
    {
        val = 1u;
    }

    /* Original leaves eax = val at the call site. */
    g->eax = val;

    /* push eax; add ecx, 4; call 0x101bb050
       FUN_101bb050 is __thiscall with one stack argument and ret 4. */
    cow_thiscall(g, COW_IMG(0x101bb050u), self + 4u, 1u, val);

    /* eax and edx are compared; leave them as the callee left them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b7220(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
