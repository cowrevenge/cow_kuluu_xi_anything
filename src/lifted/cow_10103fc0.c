/* f_0x10103fc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Zeroes the 16-bit field at offset 6 and the byte at offset 5 of the structure pointed to by the first argument, and stores the low 16 bits of the second argument at offset 2.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10103fc0(Guest* g, uint32_t dst, uint32_t val)
{
    (void)g;

    wr16(dst + 6u, (uint16_t)0);
    wr16(dst + 2u, (uint16_t)val);
    wr8(dst + 5u, (uint8_t)0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);
    const uint32_t val = rd16(sp0 + 8u);

    cow_fn_10103fc0(g, dst, val);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
