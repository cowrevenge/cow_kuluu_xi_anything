/* f_0x10327e10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Tail-calls 0x10266830 with ecx set to [ebp-0x10]+0xC, preserving all other registers including edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327e10(Guest* g, uint32_t ebp, uint32_t edx_in)
{
    const uint32_t ecx = rd32(ebp - 0x10u) + 0xCu;
    /* Pass both ecx and edx to the callee via fastcall convention */
    const uint32_t result = cow_fastcall(g, COW_IMG(0x10266830u), ecx, edx_in, 0u);
    /* Set edx on g so it's visible after return ? the callee may or may not have modified it;
       if it didn't touch edx, we need to restore/ensure the original value is present. */
    g->edx = edx_in;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327e10(g, g->ebp, g->edx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
