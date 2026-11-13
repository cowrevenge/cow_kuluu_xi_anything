/* f_0x10193a80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns -1 if the global pointer at 0x106626cc is null; otherwise tail-calls FUN_10196310 with ecx set to that pointer plus 0xc.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10193a80(Guest* g)
{
    const uint32_t p = rd32(COW_IMG(0x106626ccu));

    if (p == 0u)
    {
        /* or eax, 0xffffffff when eax == 0 */
        return 0xFFFFFFFFu;
    }

    /* lea ecx, [eax + 0xc]; jmp 0x10196310 */
    cow_thiscall_cdecl(g, COW_IMG(0x10196310u), p + 0xCu, 0u);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10193a80(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
