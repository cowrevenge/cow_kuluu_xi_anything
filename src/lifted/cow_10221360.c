/* f_0x10221360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 if the stack argument shares any bit with the dword at self+0x64, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10221360(Guest* g, uint32_t self, uint32_t arg)
{
    (void)g;

    uint32_t eax = rd32(self + 0x64u) & arg;

    /* neg eax: CF = (eax != 0), eax = -eax */
    uint32_t cf = (eax != 0u);
    eax = 0u - eax;

    /* sbb eax, eax: eax = eax - eax - CF = -CF */
    uint32_t a = eax;
    eax = a - a - cf;

    /* neg eax: 0 -> 0, 0xFFFFFFFF -> 1 */
    eax = 0u - eax;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10221360(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
