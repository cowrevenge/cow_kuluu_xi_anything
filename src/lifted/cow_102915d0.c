/* f_0x102915d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   adjusts the first stack argument by 0x5c and tail-calls 0x10274670 with the updated stack.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102915d0(Guest* g, uint32_t sp0)
{
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t adj = arg0 + 0x5Cu;

    wr32(sp0 + 4u, adj);

    /*
     * The original tail-jumps to 0x10274670 with the same stack layout.
     * The target is documented as ending in a bare ret, so the caller pops
     * its stack arguments.  Pass the two stack arguments through explicitly.
     */
    cow_cdecl(g, COW_IMG(0x10274670u), 2u, adj, rd32(sp0 + 8u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102915d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_102915d0(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
