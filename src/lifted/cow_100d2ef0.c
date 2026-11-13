/* f_0x100d2ef0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns ((max(signed byte at self+0x87c, 0) + 0x30) << 24) | 0x74756f.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100d2ef0(Guest* g, uint32_t self)
{
    (void)g;

    int32_t eax = (int32_t)(int8_t)rd8(self + 0x87Cu);

    if (eax < 0)
    {
        eax = 0;
    }

    eax += 0x30;

    return ((uint32_t)eax << 24) | 0x74756Fu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100d2ef0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
