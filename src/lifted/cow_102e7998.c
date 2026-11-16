/* f_0x102e7998 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 32-bit field at param+4 and returns the new value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102e7998(Guest* g, uint32_t param)
{
    (void)g;

    const uint32_t addr = param + 4u;

    /* inc dword ptr [eax + 4] */
    wr32(addr, rd32(addr) + 1u);

    /* mov eax, dword ptr [eax + 4] */
    return rd32(addr);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7998(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_102e7998(g, arg0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
