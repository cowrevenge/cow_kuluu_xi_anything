/* f_0x10100750 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low byte of the third stack argument to the bytes at offsets 0x2a and 0x2d of the object pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100750(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    const uint32_t eax = arg0;
    const uint8_t c = (uint8_t)arg2;

    const uint32_t edx0 = g->edx;
    const uint32_t ecx0 = g->ecx;

    g->ecx = (ecx0 & 0xFFFFFF00u) | (uint32_t)c;

    const uint8_t v1 = (uint8_t)rd8((uint32_t)(eax + 0x2Au));
    const uint8_t r1 = (uint8_t)(v1 + c);
    wr8((uint32_t)(eax + 0x2Au), r1);

    const uint8_t v2 = (uint8_t)rd8((uint32_t)(eax + 0x2Du));
    const uint8_t r2 = (uint8_t)(v2 + c);
    wr8((uint32_t)(eax + 0x2Du), r2);

    g->edx = (edx0 & 0xFFFFFF00u) | (uint32_t)r2;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100750(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = 0u;
    const uint32_t arg2 = rd32(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100750(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
