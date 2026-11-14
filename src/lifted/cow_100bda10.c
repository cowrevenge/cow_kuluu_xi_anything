/* f_0x100bda10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the global object pointer at 0x10578428 is null, return 0; otherwise tail-call 0x10161250 with the original stack argument and EAX set to that argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100bda10(Guest* g, uint32_t sp0)
{
    const uint32_t obj = rd32(COW_IMG(0x10578428u));

    if (obj == 0u)
    {
        return 0u;
    }

    /*
     * The original tail-jump preserves the stack exactly as it was on entry:
     *   [esp]     = this function's caller's return address
     *   [esp + 4] = the one stack argument
     *
     * It also sets EAX to that stack argument before jumping.  The callee may
     * use EAX and/or the stack argument, so reproduce both.
     */
    const uint32_t arg = rd32(sp0 + 4u);

    g->ecx = obj;
    g->eax = arg;

    wr32(sp0 + 4u, arg);

    /*
     * The original does not push a new return address; it tail-jumps.  The
     * helper call models the callee's use of its stack argument.  The early
     * path uses ret 4, and the tail callee is treated as popping its own
     * stack argument.
     */
    return cow_stdcall(g, COW_IMG(0x10161250u), 1u, arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bda10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100bda10(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
