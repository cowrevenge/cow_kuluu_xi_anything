/* f_0x10084350 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object field at +0x70 is null, returns zero-extended al=0 while preserving the upper bits of eax; otherwise tail-calls 0x10095680 with ecx set to that field and returns its eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10084350(Guest* g, uint32_t self, uint32_t eax_in)
{
    const uint32_t ecx = rd32(self + 0x70u);

    if (ecx == 0u)
    {
        /* xor al, al: only the low byte of eax is cleared. */
        return eax_in & 0xFFFFFF00u;
    }

    /*
     * Tail call to 0x10095680.
     *
     * The original jumps there with ecx = [self + 0x70] and the original
     * stack frame still in place.  The target ends in ret 4, so it pops one
     * stack word itself.  Forward the one stack word that the original
     * caller placed above the return address, even though this wrapper does
     * not use it directly.
     */
    const uint32_t sp0 = g->esp;
    const uint32_t stack_arg = rd32(sp0 + 4u);

    return cow_thiscall(g, COW_IMG(0x10095680u), ecx, 1u, stack_arg);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10084350(g, g->ecx, g->eax);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
