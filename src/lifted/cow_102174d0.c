/* f_0x102174d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global at 0x10664530 is nonzero, tail-call 0x10216620 with ecx set to that global; otherwise return.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102174d0(Guest* g)
{
    const uint32_t ecx_val = rd32(COW_IMG(0x10664530u));

    g->ecx = ecx_val;

    if (ecx_val == 0u)
    {
        /* Original leaves eax and edx untouched on this path. */
        return g->eax;
    }

    /*
     * Tail call to 0x10216620.
     * The original has already loaded ecx with the global value before jumping,
     * so pass that as the this/self value. The callee has no stack arguments and
     * ends in a bare ret, so the caller pops 0 bytes.
     */
    cow_thiscall_cdecl(g, COW_IMG(0x10216620u), ecx_val, 0u);

    /*
     * The tail-called function's final eax and edx are what the original returns
     * to its caller. cow_thiscall_cdecl updates g->eax and g->edx accordingly.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102174d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_102174d0(g);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
