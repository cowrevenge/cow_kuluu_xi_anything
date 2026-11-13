/* f_0x103138f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets edx to a constant and tail-calls __ctrandisp2 with the four stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_103138f0(Guest* g, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    g->edx = COW_IMG(0x103CFFE0u);
    return cow_cdecl(g, COW_IMG(0x1031ddebu), 4, p1, p2, p3, p4);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103138f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103138f0(g, rd32(sp0 + 4u), rd32(sp0 + 8u), rd32(sp0 + 12u), rd32(sp0 + 16u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in bare ret */
}
/* COW_ADAPTER END */
