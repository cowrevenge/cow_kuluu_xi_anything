/* f_0x10116fc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1015dfd0 with a pointer to a stack slot containing (this + 0x30), using ecx = 0x10621838.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10116fc0(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;
    const uint32_t local = self + 0x30u;
    const uint32_t ptr = sp0 - 4u;

    /* Original stack before the call:
       [sp0 - 4] = self + 0x30
       [sp0 - 8] = ptr
       call pushes return address at [sp0 - 12]
       callee is stdcall ret 4, so after the call esp is sp0 - 4.
    */
    wr32(ptr, local);

    g->esp = sp0 - 4u;
    g->eax = ptr;
    g->ecx = COW_IMG(0x10621838u);

    cow_stdcall(g, COW_IMG(0x1015dfd0u), 1u, ptr);

    /* pop ecx: after the stdcall ret 4, esp is sp0 - 4, so this reads the local slot. */
    g->ecx = rd32(sp0 - 4u);

    /* ret leaves eax and edx exactly as the callee left them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10116fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10116fc0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
