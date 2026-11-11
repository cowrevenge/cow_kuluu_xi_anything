/* f_0x101c49c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   This function loads the pointer at [this + 4] into ecx and tail-calls 0x101c0e30 with the original four stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_101c49c0(Guest* g, uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    /*
     * Original:
     *   mov ecx, dword ptr [ecx + 4]
     *   jmp 0x101c0e30
     *
     * This is a tail call.  The callee is reached with ecx = [this + 4].
     * It ends in "ret 16", so it cleans up its four stack arguments itself.
     */
    const uint32_t new_this = rd32(self + 0x4u);

    /*
     * 0x101c0e30 is called with ecx as the this-pointer and the same four
     * stack arguments that were passed to this thunk.
     */
    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x101c0e30u),
        new_this,
        4u,
        a1,
        a2,
        a3,
        a4
    );

    /*
     * The callee executed as guest code and updates g->edx as appropriate.
     * The judge compares all of edx on return, so leave it exactly as the
     * tail-called function left it.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c49c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101c49c0(
        g,
        g->ecx,
        rd32(sp0 + 4u),
        rd32(sp0 + 8u),
        rd32(sp0 + 12u),
        rd32(sp0 + 16u)
    );

    g->esp = sp0;
    rt_return(g, result, 16u);   /* target ret 16 */
}
/* COW_ADAPTER END */
