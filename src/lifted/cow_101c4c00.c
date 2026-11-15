/* f_0x101c4c00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-calls 0x101c2520 with this = [this + 4], preserving the original stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101c4c00(Guest* g, uint32_t self, uint32_t arg0, uint32_t arg1)
{
    const uint32_t new_self = rd32(self + 4u);

    /*
     * The original does:
     *     mov ecx, [ecx + 4]
     *     jmp 0x101c2520
     *
     * Therefore the callee must see:
     *     ecx = [self + 4]
     *     esp = the caller's original sp0
     *     [esp + 4] = arg0
     *     [esp + 8] = arg1
     *
     * cow_thiscall() normally pushes a new return address and stack arguments.
     * To make the callee's entry esp equal to sp0, place the current esp above
     * the frame that cow_thiscall() is about to push.
     *
     * cow_thiscall() with two stack arguments pushes:
     *     arg1
     *     arg0
     *     return address
     * so it consumes 12 bytes.  Starting at sp0 + 12 makes the callee see esp = sp0.
     */
    const uint32_t saved_esp = g->esp;
    g->esp = saved_esp + 12u;

    const uint32_t eax = cow_thiscall(g, COW_IMG(0x101c2520u), new_self, 2u, arg0, arg1);

    g->esp = saved_esp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c4c00(g, g->ecx, rd32(sp0 + 4u), rd32(sp0 + 8u));
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
