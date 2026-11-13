/* f_0x101001f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds a byte argument to the two adjacent bytes at offsets 0x28 and 0x29 of the object pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101001f0(Guest* g, uint32_t self, uint32_t unused, uint32_t addend, uint32_t edx_in)
{
    (void)unused;

    const uint8_t cl = (uint8_t)addend;

    const uint8_t v28 = (uint8_t)rd8(self + 0x28u);
    const uint8_t r28 = (uint8_t)(v28 + cl);
    wr8(self + 0x28u, r28);

    const uint8_t v29 = (uint8_t)rd8(self + 0x29u);
    const uint8_t r29 = (uint8_t)(v29 + cl);
    wr8(self + 0x29u, r29);

    g->edx = (edx_in & 0xFFFFFF00u) | (uint32_t)r29;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101001f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t addend = rd8(sp0 + 0xcu);
    const uint32_t edx_in = g->edx;

    const uint32_t result = cow_fn_101001f0(g, self, 0u, addend, edx_in);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
