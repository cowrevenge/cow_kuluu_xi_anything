/* f_0x10157810 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the stack argument with its low byte replaced by a byte from the object when the signed argument is less than 2, otherwise with its low byte cleared.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10157810(Guest* g, uint32_t self, uint32_t arg)
{
    g->edx = g->edx; /* original never writes edx */

    if ((int32_t)arg < 2)
    {
        const uint32_t addr = (uint32_t)(self + (uint32_t)(arg * 4u) + 0x6Eu);
        return (arg & 0xFFFFFF00u) | (uint32_t)rd8(addr);
    }

    return arg & 0xFFFFFF00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10157810(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
