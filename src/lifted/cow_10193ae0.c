/* f_0x10193ae0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x106626cc is null, return -1; otherwise tail-call 0x10196410 with ecx set to that pointer plus 0xc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10193ae0(Guest* g)
{
    const uint32_t p = rd32(COW_IMG(0x106626CCu));

    if (p == 0u)
    {
        /* Original: or eax, 0xffffffff with eax == 0, so eax becomes 0xffffffff.
           edx is left exactly as it was on entry. */
        return 0xFFFFFFFFu;
    }

    /* Original: lea ecx, [eax + 0xc]; jmp 0x10196410.
       The target is tail-called and returns to this function's caller.
       It is treated as taking `this` in ecx and has no stack arguments. */
    const uint32_t self = p + 0xCu;
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x10196410u), self, 0u);

    /* The tail-called target's final eax and edx are what the original leaves.
       cow_thiscall_cdecl updates g->edx through the guest call; return its eax. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10193ae0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
