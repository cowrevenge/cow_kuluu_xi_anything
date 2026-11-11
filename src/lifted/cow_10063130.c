/* f_0x10063130 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by subtracting 0x34 and returns a pointer to a global structure at 0x1032b7bc in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063130(Guest* g, uint32_t self)
{
    /* sub ecx, 0x34 modifies ecx and flags, but since we return via rt_return which restores context or 
       the judge only checks eax/edx/memory/esp/ebx/esi/edi/ebp, and ecx is a scratch register here 
       (unless it's 'this' pointer passed in ecx for thiscall), we must be careful.
       
       The contract says stack_args=0. This implies it's likely a thiscall or fastcall where ecx holds the object.
       However, the function itself just does `sub ecx, 0x34` and then jumps to a routine that sets eax.
       
       Wait, looking at the instructions:
       10063130: sub ecx, 0x34
       10063133: jmp 0x10056940
       
       10056940: mov eax, 0x1032b7bc
       10056945: ret
       
       The `sub ecx, 0x34` modifies the guest's ECX register. Does the judge compare ECX? 
       The prompt says: "The return value (when the function has one), every byte of memory the original leaves different, the stack pointer after return, ebx/esi/edi/ebp, and every call to an imported function... must equal the original's."
       It does NOT explicitly list ecx as being compared for preservation. Usually, caller-saved registers like eax, ecx, edx are not required to be preserved unless specified. 
       
       However, the prompt also says: "ALL of eax and edx are compared for this function... Leave in eax and edx exactly what the original leaves".
       
       The instruction `sub ecx, 0x34` changes ECX. If the caller expects ECX to be unchanged (unlikely for a scratch reg) or if it's part of the 'this' pointer adjustment that matters for subsequent calls? No, this function returns immediately after setting EAX.
       
       Let's look at the adapter requirements. 
       "ONLY the adapter reads arguments out of g and the guest stack."
       "Your function takes ordinary C parameters."
       
       If this is a `thiscall`, ECX holds `this`. The function modifies ECX. Since ECX is not listed in the "compared" registers (only eax, edx, memory, esp, ebx, esi, edi, ebp), we might not need to restore it or worry about its final value *unless* the judge checks all registers. But standard convention says scratch regs are free.
       
       BUT, there is a subtlety. The prompt says "Leave in eax and edx exactly what the original leaves". It doesn't mention ecx. 
       
       Let's re-read carefully: "The return value (when the function has one), every byte of memory the original leaves different, the stack pointer after return, ebx/esi/edi/ebp, and every call to an imported function... must equal the original's."
       
       ECX is not in that list. So we don't need to preserve it or set it specifically, except that the logic `sub ecx, 0x34` happens. Does it have side effects? No memory writes. Just register update. 
       
       However, if I simply return the constant, do I need to simulate the `sub`? 
       If the judge doesn't check ECX, then no. 
       But wait, if this function is called via a vtable or something where ECX is used later? No, it returns.
       
       Let's assume we just need to return the correct EAX.
       The value 0x1032b7bc is an address inside the program image. We must use COW_IMG.
       
       What about EDX? The original instructions do not touch EDX. So EDX should remain as it was on entry. 
       The prompt says: "If the original never writes a register, leave it alone (eax: return g->eax as it was on entry)." -> This applies to EAX if it wasn't written. Here EAX IS written.
       For EDX: "Leave in eax and edx exactly what the original leaves". Since original doesn't write EDX, we must preserve it. 
       
       How do we preserve EDX? The function signature returns uint32_t (for EAX). We need to set g->edx if it changed. It didn't change. So we don't touch g->edx in the adapter or function? 
       Actually, `cow_fn` takes `Guest* g`. If we don't modify `g->edx`, it stays as is.
       
       Let's look at the adapter.
       The contract is `ret=strict stack_args=0`.
       This implies a thiscall (ecx = self) or fastcall? 
       Usually `stack_args=0` with no explicit calling convention hint in the prompt text other than the instructions suggests we should look at how it's called. But we are given the contract line.
       
       If it's a thiscall, ECX is the first argument.
       
       Let's write the function.
       It returns `COW_IMG(0x1032b7bc)`.
       It does not modify memory.
       It does not call other functions (the jmp is internal).
       
       Do we need to update ECX in `g`? 
       The prompt says "You do NOT reproduce the original's stack frame, its pushes and pops, or what it leaves in scratch registers." 
       ECX is a scratch register. So we can ignore the `sub ecx, 0x34`.
       
       Wait, if I ignore it, is that safe? Yes, because ECX is not compared.
       
       So the function just returns the constant.
    */
    (void)g;
    (void)self;
    
    /* The original sets EAX to 0x1032b7bc */
    return COW_IMG(0x1032b7bcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    
    /* stack_args=0 implies no stack arguments. 
       If this is a thiscall, ECX holds the 'this' pointer. 
       The function doesn't use it for logic that affects output (except modifying ECX which is scratch).
       So we pass g->ecx as self, though cow_fn ignores it. */
       
    uint32_t result = cow_fn_10063130(g, g->ecx);
    
    /* EDX is not modified by the original instructions, so we leave g->edx alone. 
       The prompt says "assign g->edx = <value> in cow_fn before returning" IF it writes it. 
       It doesn't write it. So we don't touch it. */
       
    g->esp = sp0;
    rt_return(g, result, 0u); /* ret with no immediate operand -> pop 0 bytes (bare ret) */
}
/* COW_ADAPTER END */
