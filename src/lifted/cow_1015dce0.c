/* f_0x1015dce0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns true if the byte at offset 0x48 of the global object is nonzero, otherwise returns whether FUN_10160700 returns nonzero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015dce0(Guest* g)
{
    const uint32_t obj = rd32(COW_IMG(0x105781CCu));
    const uint8_t flag = rd8(obj + 0x48u);

    if (flag != 0u)
    {
        /* mov al, 1 leaves the upper 24 bits of eax as loaded from the global. */
        return (obj & 0xFFFFFF00u) | 1u;
    }

    /* At the call site, eax still holds the global pointer and dl has been set to 0. */
    g->eax = obj;
    g->edx = (g->edx & 0xFFFFFF00u);

    /*
     * The callee is described as __fastcall with one register parameter.
     * The original does not set ecx before the call, so pass the caller's ecx through.
     * It ends in a bare ret, so the caller pops any stack arguments (none here).
     */
    const uint32_t callee_result = cow_thiscall_cdecl(g, COW_IMG(0x10160700u), g->ecx, 0u);

    /*
     * test al, al / setne al:
     * al becomes 1 if the low byte of the callee result is nonzero, otherwise 0.
     * The upper 24 bits of eax are left exactly as the callee returned them.
     */
    return (callee_result & 0xFFFFFF00u) | ((callee_result & 0xFFu) != 0u ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015dce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1015dce0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
