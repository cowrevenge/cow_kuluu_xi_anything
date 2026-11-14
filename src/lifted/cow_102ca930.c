/* f_0x102ca930 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the stack argument is non-null, loads a base offset from it, writes the adjusted pointer back into the argument slot, and tail-jumps through a global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102ca930(Guest* g, uint32_t param)
{
    if (param == 0u)
    {
        /* Original: eax was loaded as 0, edx is untouched on this path. */
        return 0u;
    }

    const uint32_t base = rd32(param + 0xc70u);
    const uint32_t adj = param - base;

    /* Original writes [esp + 4] = ecx before the tail jump. */
    wr32(g->esp + 4u, adj);

    /* Original leaves eax = param, ecx = adj, edx = base before jumping. */
    g->eax = param;
    g->ecx = adj;
    g->edx = base;

    const uint32_t target = rd32(COW_IMG(0x1034b4e8u));

    /*
     * Tail jump to the deallocation helper.  It receives one stack argument
     * (the adjusted pointer) and returns to our caller.
     */
    cow_stdcall(g, target, 1u, adj);

    /* Preserve whatever eax/edx the tail callee left behind. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102ca930(g, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
