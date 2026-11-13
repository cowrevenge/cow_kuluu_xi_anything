/* f_0x102bc500 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces the signed byte at offset 4 of the argument structure with the table byte indexed by that signed byte.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102bc500(Guest* g, uint32_t p)
{
    (void)g;

    uint32_t ecx = (uint32_t)(int32_t)(int8_t)rd8(p + 4u);
    uint32_t src = ecx * 4u + COW_IMG(0x103c7b80u);
    uint8_t dl = rd8(src);

    wr8(p + 4u, dl);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bc500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    cow_fn_102bc500(g, arg0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
