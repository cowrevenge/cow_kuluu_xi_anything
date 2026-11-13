/* f_0x1003e640 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adds the low byte of the stack argument to the byte at self+1, stores the low byte result, and returns the modified eax/edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1003e640(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t eax_out = (g->eax & 0xFFFFFF00u) | (uint8_t)arg;
    const uint32_t edx_high = g->edx & 0xFFFFFF00u;

    const uint8_t old = (uint8_t)rd8(self + 1u);
    const uint8_t al = (uint8_t)arg;
    const uint8_t sum = (uint8_t)(old + al);

    g->eax = eax_out;
    g->edx = edx_high | (uint32_t)sum;

    wr8(self + 1u, sum);

    return eax_out;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_1003e640(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
