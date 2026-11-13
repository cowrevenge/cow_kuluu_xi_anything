/* f_0x10201b10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument is nonzero, clears the byte at self + 0x30; returns eax with its low byte replaced by that argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10201b10(Guest* g, uint32_t self, uint32_t arg_byte)
{
    const uint32_t eax_in = g->eax;
    const uint32_t edx_in = g->edx;

    uint32_t eax = (eax_in & 0xFFFFFF00u) | (arg_byte & 0xFFu);

    if ((arg_byte & 0xFFu) != 0u)
    {
        wr8(self + 0x30u, 0u);
    }

    g->edx = edx_in;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10201b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg_byte = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_10201b10(g, self, arg_byte);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
