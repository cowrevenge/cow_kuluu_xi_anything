/* f_0x10327f76 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Computes ecx = [ebp-0x10]+0x38 and tail-calls the thunk at 0x10269140, propagating eax and edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327f76(Guest* g)
{
    const uint32_t ecx = rd32(g->ebp - 0x10u) + 0x38u;
    uint32_t result = cow_fastcall(g, COW_IMG(0x10269140u), ecx, g->edx, 0u);
    /* The callee may modify edx; cow_fastcall returns eax but we need to preserve whatever the callee left in edx. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327f76(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* Save original edx so we can detect if callee changed it, but actually the callee writes directly to g->edx via REGS_STORE/LOAD in its own implementation. */
    /* The fastcall helper passes ecx and edx as register args. After the call, g->eax and g->edx reflect the callee's final state. */
    const uint32_t result = cow_fn_10327f76(g);
    g->esp = sp0;
    /* rt_return sets eax from result, but we also need edx to be whatever the callee left in g->edx. */
    /* Since cow_fastcall calls into guest code which does REGS_STORE at its ret/jmp, g->edx should already hold the correct value. */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
