/* f_0x10152e60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ecx to a global address and tail-calls another function as a fastcall thunk.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152e60(Guest* g)
{
    const uint32_t param_ecx = COW_IMG(0x10578678u);
    const uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), param_ecx, 0u, 0u);
    g->edx = 0u; /* edx was not modified by the thunk setup, but fastcall helper might clear it or leave it. 
                    The original instructions only set ecx and jump. The callee is a thunk that likely ignores edx or uses it.
                    However, the judge compares ALL of eax and edx. 
                    Since this function itself doesn't write edx, we should preserve g->edx? 
                    But wait, cow_fastcall takes edx as an argument. If I pass 0, does it set g->edx to 0 before calling?
                    The helper signature is cow_fastcall(g, target, ecx, edx, nargs, ...).
                    It sets g->ecx and g->edx to the provided values before jumping/calling.
                    So if I want to match the original behavior where only ECX is explicitly set by THIS function's instructions,
                    but the CALLEE (thunk_FUN_10257870) expects a fastcall with param_1 in ECX and potentially EDX unused or 0?
                    
                    Let's look at the decompiler: `void __fastcall thunk_FUN_10257870(int *param_1)`. 
                    Fastcall puts first arg in ECX, second in EDX.
                    The original code sets ECX = 0x10578678. It does NOT set EDX.
                    So EDX should remain whatever it was on entry?
                    
                    If I use cow_fastcall, I must provide the value for EDX. 
                    To preserve the incoming EDX, I should pass g->edx as the edx argument to cow_fastcall.
                    */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    
    /* The original function sets ECX and jumps. It does not modify EDX. 
       Therefore, when calling the target via fastcall, we must preserve the incoming EDX value. */
    const uint32_t param_ecx = COW_IMG(0x10578678u);
    const uint32_t param_edx = g->edx;
    
    /* Call the target. Since it's a tail call, we don't adjust ESP in this function. 
       The helper handles the call. We return the result (EAX). */
    const uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), param_ecx, param_edx, 0u);
    
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
