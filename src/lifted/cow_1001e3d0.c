/* f_0x1001e3d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a byte from self+0x30 indexed by a signed byte argument, clamping only the >3 positive case to index 3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1001e3d0(Guest* g, uint32_t self, uint32_t arg, uint32_t eax_in)
{
    const uint8_t al = (uint8_t)arg;

    if ((int32_t)(int8_t)al <= 3)
    {
        const uint32_t edx = (uint32_t)(int32_t)(int8_t)al;
        g->edx = edx;

        const uint32_t addr = edx + self + 0x30u;
        const uint32_t loaded = (uint32_t)rd8(addr);

        return (eax_in & 0xFFFFFF00u) | loaded;
    }
    else
    {
        const uint32_t addr = self + 0x33u;
        const uint32_t loaded = (uint32_t)rd8(addr);

        return loaded;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e3d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = (uint32_t)rd8(sp0 + 4u);
    const uint32_t eax_in = g->eax;

    const uint32_t result = cow_fn_1001e3d0(g, self, arg, eax_in);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
