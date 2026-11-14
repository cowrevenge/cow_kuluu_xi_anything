/* f_0x10100240 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the third stack byte from the bytes at offsets 0x28 and 0x29 of the object pointer passed as the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100240(Guest* g, uint32_t self, uint32_t obj, uint32_t sub)
{
    (void)self;

    const uint32_t ecx0 = g->ecx;
    const uint32_t edx0 = g->edx;

    const uint8_t cl = (uint8_t)sub;

    uint8_t dl = (uint8_t)rd8(obj + 0x28u);
    dl = (uint8_t)(dl - cl);
    wr8(obj + 0x28u, dl);

    dl = (uint8_t)rd8(obj + 0x29u);
    dl = (uint8_t)(dl - cl);
    wr8(obj + 0x29u, dl);

    g->ecx = (ecx0 & 0xFFFFFF00u) | (uint32_t)cl;
    g->edx = (edx0 & 0xFFFFFF00u) | (uint32_t)dl;

    return obj;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100240(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t obj = rd32(sp0 + 4u);
    const uint32_t sub = (uint32_t)rd8(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100240(g, self, obj, sub);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
