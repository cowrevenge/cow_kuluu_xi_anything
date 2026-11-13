/* f_0x101002d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adds the byte at [esp+0xc] to the byte at [[esp+4]+0x2a].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002d0(Guest* g, uint32_t self, uint32_t param1, uint32_t param2, uint8_t param3)
{
    (void)self;
    (void)param2;
    /* eax = param1 ([esp+4]), cl = param3 ([esp+0xc]) */
    const uint32_t addr = param1 + 0x2au;
    const uint8_t old_val = rd8(addr);
    const uint8_t new_val = (uint8_t)(old_val + param3);
    wr8(addr, new_val);
    /* eax holds param1 from the first mov instruction */
    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101002d0(g, g->ecx, rd32(sp0 + 4u), rd32(sp0 + 8u), (uint8_t)rd8(sp0 + 0xCu));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
