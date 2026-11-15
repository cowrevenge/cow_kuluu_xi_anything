/* f_0x101c4ab0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   tail-jumps to 0x101c19a0 with ecx replaced by [ecx+4], preserving the original caller's stack frame.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101c4ab0(Guest* g, uint32_t self, uint32_t arg1)
{
    const uint32_t new_self = rd32(self + 4u);
    const uint32_t old_esp = g->esp;

    /*
     * The original is a tail jmp, not a call:
     *   101c4ab0: mov ecx, dword ptr [ecx + 4]
     *   101c4ab3: jmp 0x101c19a0
     *
     * Therefore the callee 0x101c19a0 must see exactly the caller's stack:
     *   [esp]     = return address to the original caller
     *   [esp + 4] = arg1
     *
     * cow_thiscall normally emulates a call by pushing a new return address
     * and arguments.  To reproduce the tail jmp, shift g->esp up by the bytes
     * cow_thiscall will push (return address + one stack argument = 8), then
     * invoke the target.  The target will see esp equal to the original sp0.
     */
    g->esp = old_esp + 8u;

    const uint32_t result = cow_thiscall(g, COW_IMG(0x101c19a0u), new_self, 1u, arg1);

    g->esp = old_esp;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c4ab0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);   /* target ends in ret 4 */
}
/* COW_ADAPTER END */
