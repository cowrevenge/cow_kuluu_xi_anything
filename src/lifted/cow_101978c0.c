/* f_0x101978c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears three byte fields in the object when the stack argument equals 8, preserving the upper bits of eax and leaving edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101978c0(Guest* g, uint32_t self, uint32_t value)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    if (value == 8u)
    {
        /* xor al, al: zero the low byte of eax, preserve the upper 24 bits. */
        eax &= 0xFFFFFF00u;

        wr8(self + 0x20u, 0u);
        wr8(self + 0x21u, 0u);
        wr8(self + 0x48u, 0u);
    }

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101978c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t value = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_101978c0(g, self, value);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
