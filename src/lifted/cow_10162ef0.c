/* f_0x10162ef0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the 32-bit product of the signed 16-bit fields at self+0x54 and self+0x4e into self+0x34.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10162ef0(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t a = (uint32_t)(int32_t)(int16_t)rd16((uint32_t)(self + 0x54u));
    const uint32_t b = (uint32_t)(int32_t)(int16_t)rd16((uint32_t)(self + 0x4eu));
    const uint32_t product = (uint32_t)(a * b);

    wr32((uint32_t)(self + 0x34u), product);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10162ef0(g, g->ecx);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
