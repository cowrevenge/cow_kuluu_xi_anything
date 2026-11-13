/* f_0x101ac560 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the signed minimum of the 32-bit fields at offsets 0xa58 and 0x888 of the object in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ac560(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t a = rd32(self + 0xa58u);
    const uint32_t b = rd32(self + 0x888u);

    /* jle is signed: keep a when a <= b, otherwise return b. */
    if ((int32_t)a <= (int32_t)b)
    {
        return a;
    }

    return b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ac560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101ac560(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
