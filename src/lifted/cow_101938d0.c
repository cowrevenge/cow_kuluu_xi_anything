/* f_0x101938d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a 32-bit value whose low byte is 1 if the first stack argument has the bit selected by the low 5 bits of the second stack argument set, with the upper bytes left as the shifted 1 used for the 

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101938d0(Guest* g, uint32_t value, uint32_t shift)
{
    const uint32_t edx_in = g->edx;

    uint32_t eax = 1u << (shift & 31u);
    uint32_t al = ((value & eax) != 0u) ? 1u : 0u;

    eax = (eax & 0xFFFFFF00u) | al;

    g->edx = edx_in;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101938d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t shift = rd32(sp0 + 8u);
    const uint32_t value = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101938d0(g, value, shift);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
