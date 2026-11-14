/* f_0x10160c60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads the global object pointer into ecx, calls 0x10124bc0, reloads ecx, then tail-calls 0x10124eb0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10160c60(Guest* g)
{
    const uint32_t self = rd32(COW_IMG(0x104E1D4Cu));

    g->ecx = self;
    cow_thiscall_cdecl(g, COW_IMG(0x10124BC0u), self, 0u);

    g->ecx = rd32(COW_IMG(0x104E1D4Cu));
    cow_thiscall_cdecl(g, COW_IMG(0x10124EB0u), g->ecx, 0u);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10160c60(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
