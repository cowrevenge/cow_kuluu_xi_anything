/* f_0x101002e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds 0x20 to the low byte of the third stack argument and adds that byte to the byte at offset 0x2a of the pointer passed as the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002e0(Guest* g, uint32_t ptr, uint32_t third)
{
    const uint8_t cl = (uint8_t)(third + 0x20u);

    /* mov cl, ... and add cl, 0x20 modify only the low byte of ecx. */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)cl;

    const uint32_t addr = ptr + 0x2au;
    const uint8_t old = rd8(addr);
    const uint8_t sum = (uint8_t)(old + cl);
    wr8(addr, sum);

    /* eax was loaded from [esp + 4] and is not modified afterwards. */
    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002e0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t third = rd8(sp0 + 0xcu);

    const uint32_t result = cow_fn_101002e0(g, ptr, third);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
