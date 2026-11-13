/* f_0x10071220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the stack argument is non-null, copies its dword at +0x14 into the object's dword at +0xc and returns that dword; otherwise returns zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10071220(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;

    if (arg == 0u)
    {
        return 0u;
    }

    const uint32_t value = rd32(arg + 0x14u);
    wr32(self + 0xcu, value);
    return value;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10071220(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
