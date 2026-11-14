/* f_0x1011c850 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 in al if the object's flag at +0x80 is 1, its pointer at +0x78 is non-null, and that pointer's field at +8 is non-null; otherwise returns al=0 while preserving eax's upper bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1011c850(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t ecx = self;
    const uint32_t edx = g->edx;

    if (rd8(self + 0x80u) == 1u)
    {
        eax = rd32(self + 0x78u);

        if (eax != 0u)
        {
            ecx = rd32(eax + 8u);

            if (ecx != 0u)
            {
                eax = (eax & 0xFFFFFF00u) | 1u;
                g->ecx = ecx;
                g->edx = edx;
                return eax;
            }
        }
    }

    eax &= 0xFFFFFF00u;
    g->ecx = ecx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1011c850(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
