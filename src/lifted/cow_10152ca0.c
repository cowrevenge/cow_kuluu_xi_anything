/* f_0x10152ca0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global address and tail-calls another function (thunk) with that value in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152ca0(Guest* g, uint32_t self)
{
    /* The original sets ecx to 0x10578628 and jumps to 0x10257860.
       This is effectively a tail call to the function at 0x10257860 with 'this' = 0x10578628. */
    const uint32_t target_self = COW_IMG(0x10578628u);
    
    /* Call the target as a thiscall (since ecx is set before jump, typical for VC++ member functions/thunks).
       The callee pops its own arguments. Since we don't know the exact arg count of the target from here,
       but it's a thunk/jump target, we assume standard behavior where the caller doesn't pop stack args 
       if they are passed in registers or if the callee cleans up. However, 'ret strict' implies 0 bytes popped by us.
       
       Wait, looking at the contract: ret=strict stack_args=0. This usually means the function itself takes no stack arguments 
       that it pops. The tail call target might take arguments from the stack (passed through).
       
       Since it's a jmp, the stack pointer is unchanged when entering the target. The target will handle its own args.
       We use cow_thiscall to invoke the target with the new 'this' pointer. 
       The number of stack arguments popped by the TARGET determines what rt_return reports? 
       No, rt_return reports what THIS function pops. Since it's a tail call (jmp), this function pops 0.
       
       However, we must ensure the target is called correctly. If the target expects stack args, they are already on the stack.
       cow_thiscall handles ecx and calls the target. The target will return to our caller.
       
       Let's assume the target cleans up its own stack (stdcall/thiscall) or we just let it run.
       Since we don't know the target's signature fully, but it's a thunk, often these are simple wrappers.
       
       Actually, looking at the recompiler code: `f_10257860(g)` is called directly. 
       In our model, we should call the guest function at 0x10257860.
    */
    
    uint32_t result = cow_thiscall(g, COW_IMG(0x10257860u), target_self, 0);
    
    /* The judge compares eax and edx. 
       The original ends with a jmp to the target. The target returns to the caller of THIS function.
       So eax and edx will be whatever the TARGET leaves in them.
       cow_thiscall returns the value in eax from the callee.
       We need to capture edx as well if possible, but cow_thiscall doesn't return it directly.
       
       Let's look at the helper signature: `cow_thiscall(g, target, self, nargs, ...)`. 
       It likely updates g->eax and g->edx upon return from the callee.
       
       Since this is a tail call, we just return what the callee returned in eax.
       The adapter will set g->edx? No, the instructions say: "assign g->edx = <value> in cow_fn before returning".
       
       If we use cow_thiscall, it executes the guest code. After it returns, g->eax and g->edx hold the callee's results.
       We should return g->eax and ensure g->edx is preserved/updated correctly by the call mechanism or manually if needed.
       
       However, `cow_thiscall` is a helper that calls into the guest. It will update `g` registers.
       So after `cow_thiscall`, `g->eax` has the result and `g->edx` has the second return value (if any).
       
       We return `g->eax`. The adapter sets `rt_return(g, result, 0)`. 
       Does rt_return use g->edx? The prompt says: "assign g->edx = <value> in cow_fn before returning".
       
       So we should do:
       uint32_t res = cow_thiscall(...);
       // g->edx is already updated by the call.
       return res;
    */
    
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* No stack arguments for this function itself (stack_args=0). 
       The 'self' parameter in cow_fn is unused in the logic above because we hardcode the target self.
       But the signature requires it. */
    const uint32_t result = cow_fn_10152ca0(g, g->ecx);
    
    /* g->edx should have been updated by the cow_thiscall inside cow_fn if the callee wrote to it. 
       If the callee didn't write to edx, it retains its value from entry? 
       The prompt says: "If the original never writes a register, leave it alone".
       Since we delegate to the target, the target's behavior dictates edx.
       
       We pass result (eax) to rt_return. 
       N=0 because this function is a tail call (jmp), so it pops 0 bytes itself. The target handles its own stack cleanup. */
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
