/* f_0x10328445 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the stack argument at [ebp+8] and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10328445(Guest* g, uint32_t ebp)
{
    const uint32_t param = rd32(ebp + 8u);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    /* The original does not modify eax or edx in this function body. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10328445(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebp_val = g->ebp;
    
    /* Save registers that might be clobbered by the callee if we were mimicking 
       the exact push/pop sequence, but since we are writing high-level logic:
       The original pushes [ebp+8], calls, pops ecx. 
       The call to FUN_10311bf0 is cdecl, so it cleans its own stack? No, "the caller pops".
       Wait, the instructions show:
       push arg
       call target
       pop ecx  <- This restores esp by popping the argument pushed above.
       
       So the callee does NOT pop the argument. The caller (this function) pops it via `pop ecx`.
       Therefore, this is a cdecl call where the caller cleans up.
    */
    
    const uint32_t result = cow_fn_10328445(g, ebp_val);
    
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
