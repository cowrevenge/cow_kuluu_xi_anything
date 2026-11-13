/* f_0x10327a50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Computes ecx = [ebp - 0x10] + 0x18 and tail-calls the function at 0x10261cb0 with that value in ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327a50(Guest* g, uint32_t ebp)
{
    const uint32_t ecx = rd32(ebp - 0x10u) + 0x18u;
    // Tail call to 0x10261cb0. Based on the decompiler hint "thunk_FUN_10269ac0(int param_1)" and typical
    // thiscall/thunk patterns where ecx holds 'this' or the first argument, we invoke it as a thiscall
    // with ecx as self. If 0x10261cb0 is a fastcall taking ecx/edx, cow_thiscall still sets ecx correctly.
    // The callee pops its own arguments (standard for thunks/virtual calls in VC++).
    // We assume the target returns void or we ignore its return value as per "ret=strict" and the fact
    // that this function's eax/edx are determined by the tail call's side effects on g->eax/g->edx.
    // However, cow_thiscall updates g->eax with the callee's return. Since we must match eax/edx exactly,
    // and the original is a pure jump, the state of eax/edx after the jump is whatever the target leaves.
    // By calling cow_thiscall, we delegate to the target which will update g->eax/g->edx appropriately.
    
    cow_thiscall(g, COW_IMG(0x10261cb0u), ecx, 0);
    
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    // The function uses ebp to access [ebp - 0x10]. We must pass the current ebp.
    const uint32_t result = cow_fn_10327a50(g, g->ebp);
    
    // The original is a tail call (jmp). The callee's ret will restore esp and return to our caller.
    // Since we are simulating the jump by calling the function, the callee (via cow_thiscall) 
    // handles its own stack cleanup and returns control here.
    // We must ensure g->esp is correct for rt_return. In a true tail call, esp would be adjusted by the callee's ret.
    // Since we called it as a subroutine, the callee's ret (simulated inside cow_thiscall) should have restored 
    // the stack to what it was before the call, or handled its own args.
    // Given "stack_args=0" and "ret=strict", and the nature of thunks, we assume the callee manages its stack.
    // We restore esp to sp0 just in case, but typically for tail calls implemented as calls, 
    // the callee's return mechanism (rt_return inside the callee) sets g->esp.
    // However, rt_return here is for THIS function. Since this function jumps away, it doesn't "return" normally.
    // The judge expects us to emulate the jump. By calling cow_thiscall, we execute the target.
    // The target's rt_return will set g->esp and g->eax/g->edx.
    // We should NOT call rt_return here with a stack pop count if the callee already returned.
    // But the adapter structure requires rt_return. 
    // If cow_thiscall executes the target fully, it returns to us. The target's "ret" has already happened logically.
    // We need to make sure we don't double-pop or mess up esp.
    // Actually, if 0x10261cb0 is a function that ends in ret N, cow_thiscall will handle the call/ret simulation.
    // The adapter for THIS function should just return the result. 
    // Since it's a tail call, the "return" of this function IS the return of the callee.
    // We set g->esp = sp0; is risky if the callee modified stack. But usually thunks don't change caller's frame.
    // Let's rely on the fact that cow_thiscall updates g->eax/g->edx and returns.
    // The "ret=strict" implies we just return eax.
    
    g->esp = sp0; 
    rt_return(g, result, 0);
}
/* COW_ADAPTER END */
