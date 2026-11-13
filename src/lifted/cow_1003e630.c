/* f_0x1003e630 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adds the low byte of the stack argument to the byte at self+2 and stores the result, leaving eax with the argument byte and edx with the stored byte in its low half.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1003e630(Guest* g, uint32_t self, uint32_t arg, uint32_t eax_in, uint32_t edx_in)
{
    const uint32_t addr = self + 2u;
    const uint8_t old = (uint8_t)rd8(addr);
    const uint8_t sum = (uint8_t)(old + (uint8_t)arg);

    wr8(addr, sum);

    g->edx = (edx_in & 0xFFFFFF00u) | (uint32_t)sum;
    return (eax_in & 0xFFFFFF00u) | (uint32_t)(uint8_t)arg;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003e630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t eax_in = g->eax;
    const uint32_t edx_in = g->edx;

    const uint32_t result = cow_fn_1003e630(g, self, arg, eax_in, edx_in);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
