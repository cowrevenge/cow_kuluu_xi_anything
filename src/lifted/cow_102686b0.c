/* f_0x102686b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the first two stack arguments and tail-calls 0x10266cd0 with six stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_102686b0(Guest* g,
                         uint32_t arg0,
                         uint32_t arg1,
                         uint32_t arg2,
                         uint32_t arg3,
                         uint32_t arg4,
                         uint32_t arg5)
{
    const uint32_t adj0 = arg0 + 0x10u;
    const uint32_t adj1 = COW_IMG(0x1033EEA8u);

    /* The original leaves ecx = [esp+4] + 0x10 before jumping to the target. */
    g->ecx = adj0;

    /*
     * Tail call to 0x10266cd0.
     * The target ends with ret 24, i.e. it pops six stack words.
     * Pass the modified first two arguments and the remaining original arguments.
     */
    cow_stdcall(g,
                COW_IMG(0x10266CD0u),
                6u,
                adj0,
                adj1,
                arg2,
                arg3,
                arg4,
                arg5);

    /*
     * The tail-called target's final eax and edx are what the caller observes.
     * cow_stdcall updates g->eax and g->edx from the callee.
     */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102686b0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t a0 = rd32(sp0 +  4u);
    const uint32_t a1 = rd32(sp0 +  8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);
    const uint32_t a5 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_102686b0(g, a0, a1, a2, a3, a4, a5);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
