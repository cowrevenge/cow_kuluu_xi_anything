/* f_0x10100370 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds a byte value to the byte at offset 0x35 of a structure pointed to by the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100370(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)param2;
    const uint32_t addr = param1 + 0x35u;
    const uint8_t old_val = rd8(addr);
    const uint8_t add_val = (uint8_t)(param3 & 0xFFu);
    const uint8_t new_val = (uint8_t)(old_val + add_val);
    wr8(addr, new_val);
    
    /* eax holds param1 from the first instruction */
    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10100370(g, rd32(sp0 + 4u), rd32(sp0 + 8u), rd32(sp0 + 0xCu));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
