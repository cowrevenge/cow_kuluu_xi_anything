/* f_0x101007f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101003e0 after forcing its second stack argument to 0x62 and masking its third stack argument to 16 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101007f0(Guest* g, uint32_t sp0)
{
    uint32_t eax = rd32(sp0 + 0xCu);

    wr32(sp0 + 0x8u, 0x62u);

    eax &= 0xFFFFu;
    g->eax = eax;

    wr32(sp0 + 0xCu, eax);

    /*
     * The original tail-jumps to 0x101003e0 with the same stack arguments.
     * The target is cdecl with three stack arguments and a bare ret, so the
     * caller pops 12 bytes.  For this unit, rt_return is given the bytes the
     * target pops itself, which is 0.
     */
    uint32_t arg0 = rd32(sp0 + 0x4u);
    uint32_t arg1 = rd32(sp0 + 0x8u);
    uint32_t arg2 = rd32(sp0 + 0xCu);

    uint32_t result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg0, arg1, arg2);

    /* Preserve edx exactly as the target leaves it. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101007f0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_101007f0(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
