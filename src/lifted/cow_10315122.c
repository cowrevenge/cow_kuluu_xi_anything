/* f_0x10315122 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from [ebp-0x14], dereferences it twice, stores the result at [ebp-0x20], then calls FUN_1032069b with the loaded pointer and the double-dereferenced value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10315122(Guest* g, uint32_t ebp)
{
    uint32_t eax = rd32(ebp + 0xFFFFFFECu);   /* [ebp - 0x14] */
    uint32_t ecx = rd32(eax);                 /* [eax] */
    ecx = rd32(ecx);                          /* [[eax]] */

    wr32(ebp + 0xFFFFFFE0u, ecx);             /* [ebp - 0x20] = ecx */

    /* Match the register state seen by the callee at the call site. */
    g->eax = eax;
    g->ecx = ecx;

    /* Original pushes eax then ecx, so cdecl arguments are (ecx, eax). */
    uint32_t result = cow_cdecl(g, COW_IMG(0x1032069bu), 2u, ecx, eax);

    /* Preserve edx exactly as left by the call. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315122(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10315122(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
