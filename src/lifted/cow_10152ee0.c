/* f_0x10152ee0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a global address and tail-calls a fastcall function at that address.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152ee0(Guest* g)
{
    const uint32_t target_ecx = COW_IMG(0x10578608u);
    
    /* 
     * The original does: mov ecx, 0x10578608; jmp 0x10257860
     * This is a tail call to a __fastcall function.
     * __fastcall passes first arg in ECX, second in EDX.
     * The callee at 0x10257860 expects ecx = target_ecx.
     * Since it's a jmp, the stack pointer (esp) is unchanged from entry to this function.
     * We use cow_fastcall which handles the register arguments and returns the result.
     * Note: The callee pops its own stack frame/arguments if any, but since it's a tail call 
     * via jmp, the "ret" of the callee effectively returns to our caller.
     * In the recompiler model, cow_fastcall simulates the call. We must ensure g->esp is handled correctly.
     * However, for a tail call, we just invoke the target and return its result.
     */
    
    /* Call the target function with ECX = 0x10578608. 
     * The signature of cow_fastcall is: uint32_t cow_fastcall(Guest* g, uint32_t target, uint32_t ecx, uint32_t edx, uint32_t nargs, ...)
     * We pass 0 for edx as it's not explicitly set in the snippet before the jmp (though __fastcall uses it, 
     * if the callee doesn't use it or it's undefined, we pass current g->edx or 0? 
     * The decompiler says `void __fastcall thunk_FUN_10257870(int *param_1)`. This implies only ECX is used as an arg.
     * Usually, if EDX isn't set by the caller, it's whatever was in EDX on entry to this function.
     * But wait, the original instructions are just `mov ecx...; jmp...`. They don't touch edx.
     * So we should pass g->edx as the second argument to cow_fastcall? 
     * Actually, looking at the helper definition: `cow_fastcall(g, target, ecx, edx, nargs, ...)`
     * If the callee is __fastcall with 1 arg, it uses ECX. EDX might be used for a 2nd arg.
     * The decompiler hint says `int *param_1` (ECX). It doesn't mention a second param.
     * Let's pass g->edx to preserve the state if the callee expects it in EDX, or just 0? 
     * Standard behavior for tail call: registers other than those explicitly set are preserved from entry.
     */
     
    uint32_t ret_eax = cow_fastcall(g, COW_IMG(0x10257860u), target_ecx, g->edx, 0);
    
    /* The judge compares ALL of eax and edx. 
     * cow_fastcall returns EAX. It also updates g->edx (and other regs) inside the guest state.
     * We need to return EAX from this function.
     * And we must ensure g->edx holds the value left by the callee.
     */
     
    /* The recompiler code for the callee f_10257860 will update g->eax and g->edx. 
     * cow_fastcall returns the final EAX. 
     * We need to make sure g->edx is correct when we return from cow_fn.
     * Since cow_fastcall modifies g, g->edx should already be correct if the callee wrote it.
     */
     
    return ret_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    
    /* Call the function. It takes no stack args. 
     * The original function modifies ECX and jumps. 
     * Our cow_fn handles the logic.
     */
    uint32_t result = cow_fn_10152ee0(g);
    
    g->esp = sp0;
    
    /* Tail call: The callee's ret determines the stack pop. 
     * The callee is __fastcall with 1 arg (ECX). Fastcall callees typically don't pop args from stack 
     * if they are passed in registers, unless there are stack args. 
     * The hint says `ret=strict stack_args=0`. 
     * Usually __fastcall with only register args has `ret 0` or just `ret`.
     * So we pass 0 for the bytes to pop.
     */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
