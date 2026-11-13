/* f_0x10154550 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns a pointer to a static string for a negative index, otherwise tail-calls a helper with the index and an adjusted this pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10154550(Guest* g, uint32_t self, uint32_t arg, uint32_t sp0)
{
    if ((int32_t)arg < 0)
    {
        /* edx is untouched on this path; leave g->edx as it was on entry. */
        return COW_IMG(0x103d3c84u);
    }

    /* Original: mov dword ptr [esp + 4], eax */
    wr32(sp0 + 4u, arg);

    /* Original: add ecx, 8; jmp 0x1022edf0 */
    uint32_t result = cow_thiscall(g, COW_IMG(0x1022edf0u), self + 8u, 1u, arg);

    /* The tail-called function leaves eax and edx; cow_thiscall updates g->edx. */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10154550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10154550(g, self, arg, sp0);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
