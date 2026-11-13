/* f_0x10124390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns 1 if the byte argument is in the signed range [-96, -33] (unsigned 0xA0..0xDF), otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10124390(Guest* g, uint32_t param)
{
    (void)g;
    const uint8_t al = (uint8_t)param;
    if (al >= 0xA0u && al <= 0xDFu)
    {
        return 1u;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10124390(g, rd8(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
