/* f_0x10209290 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the second stack argument's low byte is nonzero, overwrite that argument slot with 0x1200 and tail-call FUN_100fd100; otherwise return after only updating AL.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10209290(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    (void)arg1;

    uint32_t eax = g->eax;
    const uint32_t addr = sp0 + 8u;
    const uint8_t b = rd8(addr);

    /* mov al, byte ptr [esp + 8] */
    eax = (eax & 0xFFFFFF00u) | (uint32_t)b;
    g->eax = eax;

    /* test al, al / je */
    if (b == 0u)
    {
        /* ret: bare ret, edx untouched */
        return eax;
    }

    /* mov dword ptr [esp + 8], 0x1200 */
    wr32(addr, 0x1200u);

    /*
     * jmp 0x100fd100: tail call.
     * The target sees the same stack arguments, with the second one now 0x1200.
     * It is cdecl (bare ret, caller pops), and returns uint32_t in eax.
     * edx is whatever the target leaves in g->edx.
     */
    const uint32_t result = cow_cdecl(g, COW_IMG(0x100fd100u), 2u, arg0, 0x1200u);

    /* Preserve the target's edx for the judge. */
    /* g->edx has already been updated by the callee. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10209290(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
