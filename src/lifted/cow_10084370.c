/* f_0x10084370 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's field at +0x70 is null, returns eax with its low byte cleared; otherwise tail-calls 0x100956a0 with that field as `this`.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10084370(Guest* g, uint32_t self, uint32_t eax_in, uint32_t sp0)
{
    const uint32_t target_self = rd32(self + 0x70u);

    if (target_self == 0u)
    {
        /* xor al, al: only the low byte of eax is cleared. */
        return eax_in & 0xFFFFFF00u;
    }

    /*
     * Tail jmp to 0x100956a0.
     * At the jump, ecx has been overwritten with [self + 0x70].
     * The original stack still contains the caller's return address at sp0
     * and one argument word at sp0 + 4, which the target's `ret 4` pops.
     */
    return cow_thiscall(g, COW_IMG(0x100956a0u), target_self, 1u, rd32(sp0 + 4u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t eax_in = g->eax;

    const uint32_t result = cow_fn_10084370(g, self, eax_in, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
