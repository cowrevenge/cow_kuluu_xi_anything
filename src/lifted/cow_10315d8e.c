/* f_0x10315d8e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from [ebp-0x14], dereferences it twice, stores the result at [ebp-0x20], then calls FUN_1032069b with the original pointer and the double-dereferenced value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10315d8e(Guest* g, uint32_t ebp)
{
    const uint32_t eax = rd32(ebp + 0xFFFFFFECu);   /* [ebp - 0x14] */
    const uint32_t ecx = rd32(rd32(eax));           /* [[eax]] */

    wr32(ebp + 0xFFFFFFE0u, ecx);                   /* [ebp - 0x20] = ecx */

    /*
     * Original stack order before the call:
     *   push eax
     *   push ecx
     *   call 0x1032069b
     *
     * cow_cdecl arguments are listed in source order, i.e. the last pushed
     * argument first.
     */
    cow_cdecl(g, COW_IMG(0x1032069bu), 2u, ecx, eax);

    /*
     * The two pops after the call restore ecx but do not affect eax or edx.
     * eax and edx are whatever the callee left in them.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315d8e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10315d8e(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
