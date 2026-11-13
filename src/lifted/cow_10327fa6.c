/* f_0x10327fa6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Computes a pointer by adding 0x38 to the value at [ebp-0x10], sets ecx, and tail-calls to 0x10269140.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327fa6(Guest* g, uint32_t ebp)
{
    uint32_t ecx = rd32(ebp - 0x10u);
    ecx += 0x38u;
    g->ecx = ecx;

    /* Tail call to COW_IMG(0x10269140u). 
       The callee is __fastcall (param_1 in ecx, param_2 in edx).
       We pass the computed ecx. For edx, we preserve the input edx as it was on entry 
       unless the callee modifies it, but since this is a tail call and we don't know the 
       callee's behavior regarding edx preservation vs modification for the return value,
       we rely on cow_fastcall to handle the execution and return eax.
       
       However, the judge checks EDX after return. The original code does not modify EDX 
       before the jump. If the target function modifies EDX, that change is visible. 
       If it doesn't, the old EDX remains. 
       
       In the previous attempt, g->edx was left as 0 (or default) because cow_fastcall 
       might have cleared it or we didn't set it. We must ensure g->edx reflects the state
       after the tail call. Since we are calling cow_fastcall, it will execute the target.
       The target's execution will update g->eax and potentially g->edx.
       
       Wait, the previous attempt failed because EDX was 0x00000000 in the unit but 
       0x10c14ff8 (the input value) in the original. This implies the target function 
       did NOT modify EDX, or the helper cow_fastcall reset it? 
       
       Actually, if the target is a thunk that just jumps again or returns, and doesn't 
       touch EDX, then EDX should remain what it was on entry to 0x10327fa6.
       
       The issue in the previous attempt: `cow_fastcall` takes `ecx` and `edx` as arguments.
       It sets g->ecx = ecx and g->edx = edx (the second argument passed). 
       In the previous attempt, I passed `0` for edx in `cow_fastcall(g, ..., ecx, 0, 0)`.
       This explicitly set g->edx to 0 before calling the target. If the target doesn't 
       change EDX, it stays 0. The original code didn't change EDX, so it kept the input value.
       
       Fix: Pass `g->edx` (the current value of edx on entry) as the second argument to cow_fastcall.
    */
    
    uint32_t result = cow_fastcall(g, COW_IMG(0x10269140u), ecx, g->edx, 0);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327fa6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* Pass ebp to the function so it can read [ebp-0x10] */
    const uint32_t result = cow_fn_10327fa6(g, g->ebp);
    
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
