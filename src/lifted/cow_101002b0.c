/* f_0x101002b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts the low byte of the third stack argument from the bytes at offsets 0x2b and 0x2c of the structure pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002b0(Guest* g, uint32_t obj, uint32_t sub)
{
    const uint8_t c = (uint8_t)sub;
    const uint32_t ecx_entry = g->ecx;
    const uint32_t edx_entry = g->edx;

    const uint32_t addr1 = (uint32_t)(obj + 0x2Bu);
    const uint8_t d1 = (uint8_t)rd8(addr1);
    const uint8_t r1 = (uint8_t)(d1 - c);
    wr8(addr1, r1);

    const uint32_t addr2 = (uint32_t)(obj + 0x2Cu);
    const uint8_t d2 = (uint8_t)rd8(addr2);
    const uint8_t r2 = (uint8_t)(d2 - c);
    wr8(addr2, r2);

    g->ecx = (ecx_entry & 0xFFFFFF00u) | (uint32_t)c;
    g->edx = (edx_entry & 0xFFFFFF00u) | (uint32_t)r2;

    return obj;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t obj = rd32(sp0 + 4u);
    const uint32_t sub = rd8(sp0 + 0xCu);

    const uint32_t result = cow_fn_101002b0(g, obj, sub);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
