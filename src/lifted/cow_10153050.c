/* f_0x10153050 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the second argument into a global table indexed by the first argument when the second argument is nonzero, and returns whether it was nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10153050(Guest* g, uint32_t param1, uint32_t param2)
{
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_edx = g->edx;
    uint32_t result;

    if (param2 == 0u)
    {
        /* xor al, al; test ecx, ecx; je ret */
        result = entry_eax & 0xFFFFFF00u;
    }
    else
    {
        /* mov eax, [esp + 4]; mov [eax*4 + 0x10578548], ecx; mov al, 1 */
        wr32((uint32_t)(param1 * 4u + COW_IMG(0x10578548u)), param2);
        result = (param1 & 0xFFFFFF00u) | 1u;
    }

    g->ecx = param2;
    g->edx = entry_edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10153050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param2 = rd32(sp0 + 8u);
    uint32_t param1 = 0u;

    if (param2 != 0u)
    {
        param1 = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_10153050(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
