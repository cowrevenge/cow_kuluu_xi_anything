/* f_0x101002b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the byte argument from the bytes at offsets 0x2b and 0x2c of the pointer argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002b0(Guest* g, uint32_t p1, uint32_t p3)
{
    uint32_t eax = p1;
    uint8_t cl = (uint8_t)p3;
    uint32_t edx = g->edx;

    uint8_t d = (uint8_t)rd8(eax + 0x2Bu);
    d = (uint8_t)(d - cl);
    wr8(eax + 0x2Bu, d);

    d = (uint8_t)rd8(eax + 0x2Cu);
    d = (uint8_t)(d - cl);
    wr8(eax + 0x2Cu, d);

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)cl;
    g->edx = (edx & 0xFFFFFF00u) | (uint32_t)d;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p3 = (uint32_t)rd8(sp0 + 0xCu);

    const uint32_t result = cow_fn_101002b0(g, p1, p3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
