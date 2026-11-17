/* f_0x102597e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the third argument is -1 it returns 0; otherwise it calls FUN_10258fc0 with the three stack arguments, then calls FUN_10259410 with that result and returns its eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102597e0(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    if (arg2 == 0xFFFFFFFFu)
    {
        return 0u;
    }

    uint32_t r = cow_thiscall_cdecl(g, COW_IMG(0x10258fc0u), arg0, 3u, arg0, arg1, arg2);
    r = cow_thiscall(g, COW_IMG(0x10259410u), self, 1u, r);
    return r;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102597e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(sp0 + 0xCu);

    uint32_t result;
    if (arg2 == 0xFFFFFFFFu)
    {
        result = cow_fn_102597e0(g, g->ecx, 0u, 0u, arg2);
    }
    else
    {
        const uint32_t arg0 = rd32(sp0 + 4u);
        const uint32_t arg1 = rd32(sp0 + 8u);
        result = cow_fn_102597e0(g, g->ecx, arg0, arg1, arg2);
    }

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
