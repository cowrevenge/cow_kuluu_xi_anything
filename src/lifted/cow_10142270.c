/* f_0x10142270 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   loads a global pointer into ecx and tail-calls FUN_101ec2d0 with the incoming registers/stack.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10142270(Guest* g)
{
    const uint32_t ecx_val = rd32(COW_IMG(0x106636a0u));

    /*
     * Original:
     *   mov ecx, [0x106636a0]
     *   jmp 0x101ec2d0
     *
     * The target is entered with ecx set as above and all other registers
     * (including eax and edx) as they were on entry to this function.
     * It has no stack arguments and ends in a bare ret, so no argument bytes
     * are popped by the callee.
     */
    const uint32_t result = cow_fastcall(g, COW_IMG(0x101ec2d0u), ecx_val, g->edx, 0u);

    /* Preserve the target's final edx for the judge. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142270(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10142270(g);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
