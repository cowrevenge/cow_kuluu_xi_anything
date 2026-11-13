/* f_0x10083320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the sign-extended 16-bit value at offset 0x11c of the pointer stored at [this+0x70], or 0 if that pointer is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10083320(Guest* g, uint32_t self)
{
    const uint32_t edx = g->edx;
    uint32_t eax = rd32(self + 0x70u);

    if (eax != 0u)
    {
        eax = (uint32_t)(int32_t)(int16_t)rd16(eax + 0x11Cu);
    }
    else
    {
        eax = 0u;
    }

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10083320(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
