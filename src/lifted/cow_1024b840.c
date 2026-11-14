/* f_0x1024b840 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces the first stack argument with the dword it points to, then tail-calls 0x1024afa0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1024b840(Guest* g, uint32_t sp0)
{
    const uint32_t arg_addr = sp0 + 4u;
    const uint32_t p = rd32(arg_addr);
    const uint32_t v = rd32(p);

    wr32(arg_addr, v);

    /*
     * Original tail jump:
     *   jmp 0x1024afa0
     *
     * The target is cdecl and takes one stack argument.  The argument has already
     * been rewritten in place at [esp+4], so invoke the target with that value.
     * The target's bare ret leaves the argument for the original caller to pop,
     * hence this thunk returns with rt_return(..., 0).
     */
    cow_cdecl(g, COW_IMG(0x1024afa0u), 1u, v);

    /* Preserve the target's eax and edx exactly. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1024b840(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
