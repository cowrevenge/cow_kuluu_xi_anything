/* f_0x10100350 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low 16 bits of the third stack argument to the 16-bit field at offset 0x30 of the first stack argument, and returns the first argument in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100350(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    const uint32_t edx_entry = g->edx;
    const uint32_t addr = arg0 + 0x30u;
    const uint16_t old = rd16(addr);
    const uint16_t add = (uint16_t)arg2;

    wr16(addr, (uint16_t)(old + add));

    g->edx = edx_entry;
    return arg0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg2 = (uint32_t)rd16(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100350(g, arg0, 0u, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
