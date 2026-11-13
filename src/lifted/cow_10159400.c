/* f_0x10159400 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the second argument into a 5-entry global table when the first argument is unsigned less than 5, returning 1; otherwise zeroes al and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10159400(Guest* g, uint32_t sp0, uint32_t index)
{
    if (index >= 5u)
    {
        /* xor al, al: preserve upper 24 bits of eax */
        return index & 0xFFFFFF00u;
    }

    const uint32_t value = rd32(sp0 + 8u);

    /* mov ecx, dword ptr [esp + 8] */
    g->ecx = value;

    /* mov dword ptr [eax*4 + 0x10578770], ecx */
    wr32(COW_IMG(0x10578770u) + index * 4u, value);

    /* mov al, 1: preserve upper 24 bits of eax */
    return (index & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t index = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10159400(g, sp0, index);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
