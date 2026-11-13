/* f_0x10019520 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls the imported timeGetTime-like function and stores its DWORD result at self + 0x18.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10019520(Guest* g, uint32_t self)
{
    const uint32_t target = rd32(COW_IMG(0x10329400u));

    cow_stdcall(g, target, 0u);

    const uint32_t eax = g->eax;
    const uint32_t edx = g->edx;

    g->edx = edx;
    wr32(self + 0x18u, eax);

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10019520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10019520(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
