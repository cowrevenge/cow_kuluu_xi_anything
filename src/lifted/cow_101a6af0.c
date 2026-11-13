/* f_0x101a6af0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, calls FUN_101a2be0 with the first stack argument as its sole stack parameter and `this` taken from 0x10662794; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101a6af0(Guest* g, uint32_t flag_byte, uint32_t arg0)
{
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_edx = g->edx;

    if ((uint8_t)flag_byte == 0u)
    {
        g->edx = entry_edx;
        return entry_eax & 0xFFFFFF00u;
    }

    g->eax = arg0;
    const uint32_t self = rd32(COW_IMG(0x10662794u));
    const uint32_t callee_ret = cow_thiscall(g, COW_IMG(0x101a2be0u), self, 1u, arg0);

    /* edx is whatever the callee left there; if the callee did not write it, this preserves entry_edx. */
    g->edx = g->edx;
    return callee_ret;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6af0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t flag_byte = rd8(sp0 + 8u);
    uint32_t arg0 = 0u;

    if ((uint8_t)flag_byte != 0u)
    {
        arg0 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_101a6af0(g, flag_byte, arg0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
