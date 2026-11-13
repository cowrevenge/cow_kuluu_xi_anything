/* f_0x10193ac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x106626cc is null, return -1; otherwise tail-call 0x10196390 with ecx set to that pointer plus 0xc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10193ac0(Guest* g)
{
    const uint32_t p = rd32(COW_IMG(0x106626CCu));

    if (p == 0u)
    {
        /* Original never writes edx on this path, so leave g->edx untouched. */
        return 0xFFFFFFFFu;
    }

    const uint32_t self = (uint32_t)(p + 0xCu);

    /* Tail call: target ends with bare ret, so it pops no stack arguments.
       ecx is set to self by the original lea before the jmp. */
    const uint32_t result = cow_thiscall_cdecl(g, COW_IMG(0x10196390u), self, 0u);

    /* The target call updates g->edx; preserve exactly what it left. */
    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10193ac0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
