/* f_0x10098f30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the low bit of the byte at param3+4 is set, calls FUN_10087ae0 with param3+8, then returns 1 in al while preserving the upper bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10098f30(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg1;
    (void)arg2;

    uint32_t eax = arg3;

    if ((rd8(eax + 4u) & 1u) != 0u)
    {
        eax += 8u;

        /* Original state at the call: eax = param3 + 8, esp = sp0, other regs unchanged. */
        g->eax = eax;
        cow_cdecl(g, COW_IMG(0x10087ae0u), 1u, eax);

        eax = g->eax;
    }

    /* mov al, 1: write only the low byte of eax. */
    eax = (eax & 0xFFFFFF00u) | 1u;

    g->eax = eax;
    /* g->edx is already whatever the original leaves: entry edx if no call, callee edx if called. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_10098f30(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
