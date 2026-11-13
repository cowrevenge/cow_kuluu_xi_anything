/* f_0x10084b00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the byte at offset 0x1bd of the object referenced by [this+0x70], preserving the upper 24 bits of eax; returns 0 if that reference is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10084b00(Guest* g, uint32_t self)
{
    (void)g;

    const uint32_t ptr = rd32(self + 0x70u);

    if (ptr == 0u)
    {
        /* eax was loaded as 0, then xor al, al leaves eax == 0 */
        return 0u;
    }

    /* mov al, byte ptr [eax + 0x1bd] preserves eax[31:8] */
    return (ptr & 0xFFFFFF00u) | (uint32_t)rd8(ptr + 0x1BDu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10084b00(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
