/* f_0x102c4582 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Loads the first two bytes of the buffer pointed to by the stack argument into the low halves of eax and ecx, shifts eax left by 8, and adds ecx to eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102c4582(Guest* g, uint32_t ecx)
{
    /* movzx ax, byte ptr [ecx] */
    uint32_t eax = (g->eax & 0xFFFF0000u) | (uint32_t)rd8(ecx);

    /* movzx cx, byte ptr [ecx + 1] */
    ecx = (ecx & 0xFFFF0000u) | (uint32_t)rd8(ecx + 1u);

    /* shl eax, 8 */
    eax = (uint32_t)(eax << 8);

    /* add eax, ecx */
    eax = (uint32_t)(eax + ecx);

    /* edx is never written by the original. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4582(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ecx = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102c4582(g, ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
