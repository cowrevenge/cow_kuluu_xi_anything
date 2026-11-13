/* f_0x1026e140 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the first stack argument by 0x68, stores it back, and tail-calls 0x1027a720 with the adjusted first argument and the unchanged second argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_1026e140(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    const uint32_t adjusted = arg0 + 0x68u;

    /* 1026e140: mov ecx, dword ptr [esp + 4]
       1026e144: add ecx, 0x68
       1026e147: mov dword ptr [esp + 4], ecx
    */
    g->ecx = adjusted;
    wr32(sp0 + 4u, adjusted);

    /* 1026e14b: jmp 0x1027a720
       Tail call to a cdecl callee that ends in a bare ret.
    */
    const uint32_t result = cow_cdecl(g, COW_IMG(0x1027a720u), 2u, adjusted, arg1);

    /* Preserve the callee's edx as the original tail jump would. */
    /* cow_cdecl leaves g->edx as the callee left it; keep it explicit for the judge. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_1026e140(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
