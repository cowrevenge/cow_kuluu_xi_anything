/* f_0x100f0570 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x104DF770 is non-null, copies the first byte of the argument to offset 0x15115 and returns that pointer with its low byte forced to 1; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f0570(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t p = rd32(COW_IMG(0x104DF770u));
    if (p == 0u)
    {
        return 0u;
    }

    wr8(p + 0x15115u, rd8(param));
    return (p & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100f0570(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
