/* f_0x10100690 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts a byte argument from the byte at offset 0x3e of the object pointed to by the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100690(Guest* g, uint32_t self, uint32_t arg2, uint8_t arg3)
{
    (void)arg2;
    const uint32_t addr = self + 0x3Eu;
    const uint8_t old_val = rd8(addr);
    const uint8_t new_val = (uint8_t)(old_val - arg3);
    wr8(addr, new_val);
    
    /* eax holds the value of the first stack argument (self) after the mov */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint8_t arg3 = (uint8_t)rd8(sp0 + 0xCu);
    
    const uint32_t result = cow_fn_10100690(g, arg1, arg2, arg3);
    
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
