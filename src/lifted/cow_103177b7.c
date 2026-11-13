/* f_0x103177b7 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the dword at [ebp - 0x1c] is zero, tail-forwards four ebp-relative stack values to FUN_103177cf; otherwise returns immediately.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103177b7(Guest* g)
{
    const uint32_t ebp = g->ebp;

    if (rd32(ebp - 0x1cu) != 0u)
    {
        return g->eax;
    }

    const uint32_t a1 = rd32(ebp + 0x8u);
    const uint32_t a2 = rd32(ebp + 0xcu);
    const uint32_t a3 = rd32(ebp + 0x10u);
    const uint32_t a4 = rd32(ebp + 0x14u);

    cow_stdcall(g, COW_IMG(0x103177cfu), 4u, a1, a2, a3, a4);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103177b7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103177b7(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
