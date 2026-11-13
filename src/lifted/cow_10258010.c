/* f_0x10258010 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the first byte at the pointer argument is in the signed range [2,15], otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10258010(Guest* g, uint32_t ptr)
{
    const uint32_t edx = g->edx;
    const uint32_t b = rd8(ptr) & 0xFFu;

    /* The original never writes edx. */
    g->edx = edx;

    /*
     * Original:
     *   cmp al, 2
     *   jl  zero
     *   cmp al, 0xf
     *   jg  zero
     *   mov eax, 1
     *
     * For an 8-bit signed value, this is true exactly for 2..15.
     */
    return (b >= 2u && b <= 15u) ? 1u : 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10258010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10258010(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
