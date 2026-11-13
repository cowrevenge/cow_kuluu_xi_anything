/* f_0x10327f6b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts ecx to point past a 0x20-byte header, then tail-jumps to thunk_FUN_10269ac0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327f6b(Guest* g)
{
    uint32_t ecx = rd32(g->ebp - 0x10u);
    ecx += 0x20u;
    g->ecx = ecx;
    /* Tail call: preserve eax and edx exactly as they were on entry. Use cdecl with 0 args so no register is clobbered by the helper. */
    cow_cdecl(g, COW_IMG(0x10269140u), 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327f6b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327f6b(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
