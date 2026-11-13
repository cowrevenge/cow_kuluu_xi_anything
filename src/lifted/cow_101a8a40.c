/* f_0x101a8a40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the low byte of the argument is at least 200, return 0; otherwise tail-call FUN_101a8470 with this = [self+4] and the same argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a8a40(Guest* g, uint32_t self, uint32_t arg)
{
    if ((uint8_t)arg >= 0xC8u)
    {
        return 0u;
    }

    const uint32_t new_self = rd32(self + 4u);

    /*
     * Original tail call:
     *   ecx = [ecx + 4]
     *   [esp + 4] = eax   (eax is the same argument value)
     *   jmp 0x101a8470
     *
     * The target is a thiscall function ending in ret 4, so it receives
     * ecx = new_self and one stack argument = arg.
     */
    return cow_thiscall(g, COW_IMG(0x101a8470u), new_self, 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101a8a40(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
