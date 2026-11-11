/* f_0x1032861c - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Tail-calls the C++ exception destructor on the object pointer stored at [ebp-0x10].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1032861c(Guest* g, uint32_t ebp)
{
    const uint32_t self = rd32(ebp - 0x10u);

    cow_thiscall_cdecl(g, COW_IMG(0x10327511u), self, 0);

    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032861c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1032861c(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0);
}
/* COW_ADAPTER END */
