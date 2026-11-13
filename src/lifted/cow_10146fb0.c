/* f_0x10146fb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte at [this+0x10] is nonzero, calls FUN_10118f70 with this=[this+8] and a pointer to [this+0x14].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10146fb0(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t ecx = self;
    uint32_t edx = g->edx;

    const uint8_t b = rd8(ecx + 0x10u);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b;

    if (b != 0)
    {
        const uint32_t arg = ecx + 0x14u;
        const uint32_t callee_self = rd32(ecx + 8u);

        g->eax = arg;
        g->ecx = callee_self;
        g->edx = edx;

        cow_thiscall(g, COW_IMG(0x10118f70u), callee_self, 1u, arg);

        eax = g->eax;
        edx = g->edx;
    }

    g->eax = eax;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10146fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10146fb0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
