/* f_0x1015bedd - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   stores ESI at [EDI+0x14CC], then pops EDI, ESI, EBP, EBX, and ECX from the stack and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1015bedd(Guest* g)
{
    wr32(g->edi + 0x14ccu, g->esi);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015bedd(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_1015bedd(g);

    g->edi = rd32(sp0 + 0u);
    g->esi = rd32(sp0 + 4u);
    g->ebp = rd32(sp0 + 8u);
    g->ebx = rd32(sp0 + 12u);
    g->ecx = rd32(sp0 + 16u);

    g->esp = sp0 + 20u;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
