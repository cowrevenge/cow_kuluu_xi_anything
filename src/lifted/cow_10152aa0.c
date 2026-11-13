/* f_0x10152aa0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   tail-calls FUN_10257860 with ecx set to a fixed global address, returning its result and leaving edx as-is.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152aa0(Guest* g)
{
    uint32_t ecx_val = (uint32_t)(COW_IMG(0x105784F8u));
    /* Tail call to 0x10257860. The callee is __fastcall with one register arg (ecx).
       Since it's a tail jump, the stack pointer remains unchanged from entry.
       We use cow_fastcall which handles ecx and edx. edx is not modified by this function,
       so we pass g->edx to preserve it if the callee expects it or just to be safe with convention.
       However, fastcall only uses ecx and edx for args. The decompiler says param_1 is int*, likely in ecx.
       We must ensure g->edx is preserved as per judge rules ("If the original never writes a register, leave it alone").
       cow_fastcall will set g->ecx and g->edx before calling. We pass current g->edx to keep it unchanged.
    */
    uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, g->edx, 0);
    
    /* The judge compares ALL of eax and edx. 
       The original instruction sequence:
       mov ecx, ...
       jmp target
       
       The target function will execute and return. Its ret will pop arguments if stdcall/fastcall callee-pops?
       Fastcall callee pops stack args. This call has 0 stack args. So esp is unchanged by the call itself relative to entry.
       
       We need to ensure g->edx is exactly what it was on entry, unless the target modifies it and we are supposed to reflect that?
       "Leave in eax and edx exactly what the original leaves". The original jumps to the target. The target runs. 
       If the target modifies edx, then the state after the jump includes the target's modification.
       cow_fastcall updates g->eax and g->edx based on the callee's execution.
       
       So we just return g->eax (which is updated by cow_fastcall) and ensure g->edx is updated by cow_fastcall.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* No stack arguments. ecx is set inside cow_fn or passed? 
       The original sets ecx explicitly. 
       We call cow_fn which performs the tail call.
    */
    uint32_t result = cow_fn_10152aa0(g);
    
    g->esp = sp0; /* Tail call preserves stack pointer relative to entry (callee pops its own args, but here 0 stack args) */
    
    /* rt_return needs the number of bytes popped by the TARGET's ret.
       The target is __fastcall with 1 register arg and 0 stack args? 
       Decompiler: void __fastcall thunk_FUN_10257870(int *param_1). 
       Fastcall passes first two args in ecx/edx, rest on stack. 
       If param_1 is the only arg, it's in ecx. Stack args = 0.
       So target pops 0 bytes.
    */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
