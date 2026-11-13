/* f_0x10177730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global pointer at 0x10631f24 is null, zero only al and return; otherwise tail-call 0x101815d0 with that pointer in ecx and return its eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10177730(Guest* g)
{
    const uint32_t obj = rd32(COW_IMG(0x10631f24u));

    if (obj == 0u)
    {
        /* xor al, al leaves the upper 24 bits of eax unchanged. */
        return g->eax & 0xFFFFFF00u;
    }

    /* Tail call: the original jumps with ecx = obj.  The callee uses a bare ret. */
    return cow_thiscall_cdecl(g, COW_IMG(0x101815d0u), obj, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10177730(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
