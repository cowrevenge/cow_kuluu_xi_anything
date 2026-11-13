/* f_0x1012e0a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, sets a byte at DAT_10578194 + 0x24 to 1; otherwise does nothing.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1012e0a0(Guest* g, uint32_t unused_arg0, uint32_t arg1)
{
    (void)unused_arg0;

    uint32_t eax = g->eax;
    uint8_t flag = (uint8_t)arg1;

    if (flag == 0u)
    {
        g->edx = g->edx;
        return eax & 0xFFFFFF00u;
    }

    uint32_t ptr = rd32(COW_IMG(0x10578194u));
    wr8(ptr + 0x24u, 1u);

    g->edx = g->edx;
    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd8(sp0 + 8u);
    const uint32_t result = cow_fn_1012e0a0(g, 0u, arg1);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
