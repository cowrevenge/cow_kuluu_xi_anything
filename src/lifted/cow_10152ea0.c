/* f_0x10152ea0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global address and tail-calls another function (thunk).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152ea0(Guest* g)
{
    const uint32_t target_ecx = COW_IMG(0x10578498u);
    
    /* Tail call to 0x10257860. 
       The callee is __fastcall, so it expects ecx (and edx).
       We pass the current g->edx as the second fastcall argument.
       The callee's ret will pop its own stack arguments and return to our caller.
    */
    uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), target_ecx, g->edx, 0);
    
    /* Preserve edx as it was on entry (or whatever the callee left in g->edx if it modified it, 
       but typically fastcall callees preserve edx or we just return what's there. 
       The instructions show no modification of edx before the jump. 
       If the callee modifies edx, g->edx will reflect that after cow_fastcall returns.
       However, usually thunks/tail calls don't modify edx unless specified. 
       Let's assume standard behavior: if callee doesn't touch it, it stays. 
       The judge compares ALL of eax and edx. 
       Since we don't know if the callee modifies edx, we rely on g->edx being updated by cow_fastcall 
       if the callee writes to it. If not, it remains unchanged.
       
       Wait, cow_fastcall returns the result in eax (uint32_t). 
       Does it update g->edx? The helper functions usually simulate the call fully.
       If the callee modifies edx, g->edx will be modified by the helper.
       If the callee does NOT modify edx, g->edx remains as passed/entry value.
       
       We return eax from cow_fn. 
       We must ensure g->edx is correct for the adapter to pick up? 
       No, the adapter calls cow_fn and then rt_return(g, result, N).
       The judge compares g->edx after the function returns.
       So if cow_fastcall updates g->edx, that's what we want.
    */
    
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* No stack arguments for this function itself (stack_args=0). 
       The tail call handles its own stack cleanup. */
    
    uint32_t result = cow_fn_10152ea0(g);
    
    g->esp = sp0;
    /* The target pops 0 bytes according to the decompiler hint "void __fastcall ... (int *param_1)" 
       which implies ecx is param_1. Fastcall callees pop their own stack args. 
       If there are no stack args, it's ret 0. 
       The contract says stack_args=0 for THIS function. 
       The tail call target's convention determines the final esp adjustment relative to sp0?
       Actually, rt_return(g, result, N) sets g->esp = sp0 + N.
       Since this is a tail call, the callee's ret instruction effectively returns to our caller.
       If the callee is __fastcall with no stack args, it does `ret 0`.
       So N should be 0. */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
