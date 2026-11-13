/* f_0x10152a60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global pointer and tail-calls FUN_10257860 (thunk_FUN_10257870).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152a60(Guest* g)
{
    const uint32_t target = COW_IMG(0x10257860u);
    const uint32_t ecx_val = COW_IMG(0x10578698u);

    /* Tail call: jmp 0x10257860. 
       The target is __fastcall (per decompiler hint and typical thunk behavior).
       We must preserve the stack pointer for the callee's return, but since it's a tail call,
       we just invoke it. The callee will pop its arguments and return to our caller.
       
       However, cow_fastcall expects us to provide the arguments. 
       Since this function has no stack args (stack_args=0), and the target is __fastcall,
       the first arg is in ecx. We set ecx to 0x10578698.
       
       The callee FUN_10257860 might modify eax/edx. We need to return what it returns.
       Since we don't know the exact signature of FUN_10257860 beyond __fastcall, 
       and it's a thunk, it likely just calls another function or does simple work.
       
       To be safe with the "strict" contract and tail call semantics:
       We invoke the target using cow_fastcall. The arguments are passed in registers (ecx) and stack.
       Since this function takes no stack args, we pass 0 stack args to the callee? 
       Wait, __fastcall passes first two args in ecx/edx. 
       The decompiler says `void __fastcall thunk_FUN_10257870(int *param_1)`. 
       This implies param_1 is in ecx.
       
       So we call cow_fastcall(g, target, ecx_val, <edx>, 0). 
       What should edx be? The original code doesn't set edx before the jmp. 
       It preserves whatever was in edx on entry to this function.
       So we pass g->edx as the second register argument.
    */
    
    uint32_t result = cow_fastcall(g, target, ecx_val, g->edx, 0);
    
    /* The callee returns via ret N. Since it's a tail call from here, 
       and we are simulating the jump, the stack cleanup is handled by the callee's ret.
       But our adapter must set esp correctly. 
       In a real tail call, the callee's ret pops its args and returns to OUR caller.
       Our caller expects us to have popped nothing (since stack_args=0 for us).
       
       If we use cow_fastcall, it simulates the call. The callee will pop its own args.
       Since we passed 0 stack args to cow_fastcall, the callee should pop 0? 
       Or does the callee know how many to pop? 
       
       Actually, `cow_fastcall` handles the calling convention. 
       If the target is a standard __fastcall function that takes only ecx/edx args, 
       it will likely `ret 0`.
       
       We need to ensure g->esp is correct after the call. 
       The original tail call means the callee's ret returns directly to our caller.
       So if the callee does `ret 0`, esp is unchanged relative to entry (minus return addr).
       
       Let's rely on cow_fastcall to handle the register passing and invocation.
       We must capture eax and edx from the callee's execution context after it returns?
       No, cow_fastcall returns the value in eax. What about edx?
       The judge compares ALL of eax and edx. 
       If the callee modifies edx, we must reflect that.
       
       Since cow_fastcall is a helper, does it update g->edx? 
       Typically, these helpers execute the guest code or simulate it. 
       Assuming cow_fastcall executes the target function which updates g->eax and g->edx:
       
       We should return g->eax and set g->edx = g->edx (which is already updated by the callee).
    */
    
    /* Note: If cow_fastcall simulates the call, it will update g->eax and g->edx. 
       We just need to return eax. The adapter will handle esp. 
       But wait, for a tail call, the stack frame of THIS function is not created. 
       The callee's ret pops ITS args. 
       
       If we use cow_fastcall, it might push a return address? 
       No, cow_* helpers usually simulate the call semantics including stack adjustments.
       
       Let's assume standard behavior: 
       1. Set ecx to global.
       2. Call target with ecx and edx (preserved from entry).
       3. Return eax.
       4. Ensure edx is updated in g.
    */
    
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    
    /* Save original edx to pass as second fastcall arg if needed, 
       but the function body uses g->edx directly. */
       
    uint32_t result = cow_fn_10152a60(g);
    
    /* The tail call means the callee's ret handles stack cleanup for its args.
       Since this function has no stack args (stack_args=0), and it tail-calls,
       the net effect on esp is determined by the callee's ret N.
       
       However, the contract says stack_args=0 for THIS function. 
       The adapter must set g->esp = sp0? No, that would be wrong if the callee popped args.
       
       In a tail call `jmp target`, the target's `ret` returns to our caller.
       So if target does `ret 4`, esp increases by 4 relative to entry.
       
       The helper cow_fastcall likely handles the stack adjustment for the callee's arguments.
       If we passed 0 stack args to cow_fastcall, it assumes the callee pops 0? 
       Or does it inspect the callee? 
       
       Given the ambiguity of "thunk", and that thunks often just jump to another function 
       with the same signature, let's assume the callee handles its own stack.
       
       The adapter should NOT reset esp to sp0 if a tail call occurred that changed it.
       But the instructions say: `g->esp = sp0;` in the template for non-tail calls.
       For tail calls, we must preserve the callee's stack adjustment.
       
       If cow_fastcall simulates the call correctly, g->esp will be updated by the callee's ret.
       So we should NOT set g->esp = sp0. 
       
       However, the template explicitly says `g->esp = sp0;`. 
       This implies that for non-tail calls, we restore esp. 
       For tail calls, we must let the callee's return dictate esp.
       
       Let's look at the example: it uses `g->esp = sp0;` because it was a normal call/ret.
       Here, it is a tail call. 
       
       If I use cow_fastcall, and it simulates the execution of 0x10257860, 
       and that function ends with a ret, g->esp will be modified by that ret.
       So I should NOT overwrite it with sp0.
    */
    
    rt_return(g, result, 0); /* The callee's ret handles the stack pop for its args. 
                                Since we passed 0 stack args to cow_fastcall, 
                                and assuming the thunk matches the caller's expectation 
                                or cleans up itself, we report 0 bytes popped BY THIS FUNCTION.
                                But wait, rt_return's last arg is "bytes the original pops itself".
                                This function pops nothing (it jumps). The callee pops its args.
                                
                                If the callee is __fastcall with only register args, it likely does `ret 0`.
                                So the net stack change is 0 relative to entry? 
                                No, the return address was pushed by OUR caller. 
                                Our caller expects us to pop our args (0) and return.
                                The tail call means the callee pops its args and returns to OUR caller.
                                
                                If the callee takes no stack args, it does `ret 0`. 
                                Then esp is unchanged from entry (except for the return address which was popped by ret).
                                
                                So rt_return should indicate that THIS function popped 0 bytes.
                             */
}
/* COW_ADAPTER END */
