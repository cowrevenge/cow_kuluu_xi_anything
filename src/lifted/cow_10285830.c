/* f_0x10285830 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls the function pointer stored at offset 0x14 of the first stack argument, or returns 0 if it is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10285830(Guest* g, uint32_t self, uint32_t arg0, uint32_t sp0)
{
    (void)self;

    const uint32_t ecx = rd32(sp0 + 4u);
    const uint32_t eax = rd32(ecx + 0x14u);

    if (eax == 0u)
    {
        return 0u;
    }

    const uint32_t edx = rd32(sp0 + 8u);

    wr32(sp0 + 4u, ecx);
    wr32(sp0 + 8u, edx);

    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;

    return cow_cdecl(g, eax, 2u, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10285830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10285830(g, g->ecx, arg0, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
