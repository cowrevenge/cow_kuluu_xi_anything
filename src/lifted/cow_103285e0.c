/* f_0x103285e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads a pointer from [ebp-0x10] into ecx and tail-calls exception::~exception (thiscall).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103285e0(Guest* g, uint32_t ebp)
{
    const uint32_t self = rd32(ebp - 0x10u);
    /* Tail call to COW_IMG(0x10327511u) which is exception::~exception(void).
       It is a thiscall function taking 'this' in ecx.
       The callee ends in a bare ret, so the caller pops arguments (cow_thiscall_cdecl). */
    cow_thiscall_cdecl(g, COW_IMG(0x10327511u), self, 0);
    
    /* Return eax and edx as left by the callee. 
       Since we don't have direct access to g->eax/g->edx after the call in a pure function style 
       without side effects on g being visible, but cow_thiscall_cdecl updates g->eax and g->edx.
       We must return what is in g->eax and ensure g->edx is set. */
    uint32_t res_eax = g->eax;
    uint32_t res_edx = g->edx;
    
    /* The judge compares ALL of eax and edx. 
       cow_fn returns eax, and we assign edx in the adapter or here? 
       Instructions say: "return eax's value from cow_fn ... and assign g->edx = <value> in cow_fn before returning." */
    g->edx = res_edx;
    return res_eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103285e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* This function uses ebp. We must pass the current ebp to cow_fn. */
    const uint32_t result = cow_fn_103285e0(g, g->ebp);
    
    /* The original is a tail call to a function that does `ret` (bare). 
       A bare ret pops 4 bytes (the return address) and returns to the caller.
       Since this was a tail call, the stack pointer adjustment is handled by the callee's ret.
       However, rt_return simulates the return of THIS function.
       The contract says stack_args=0. 
       The original code does not have its own `ret N`. It jumps to another function which has `ret`.
       Effectively, this function returns with the same stack discipline as the callee's bare ret.
       A bare ret pops 4 bytes (return address). But wait, rt_return handles the return to the caller of THIS function.
       The "N" in rt_return is the number of argument bytes THIS function pops itself.
       Since it's a tail call to a thiscall with no extra stack args, and the callee does bare ret, 
       this function effectively behaves like a `ret 0` (bare ret) regarding its own frame cleanup?
       
       Let's look at the contract: `stack_args=0`. This implies no stack arguments are passed to THIS function.
       The original instructions show no `ret` in this block, just a `jmp`.
       The callee `exception::~exception` is a thiscall with 1 register arg (ecx) and 0 stack args.
       It ends in bare `ret`.
       
       When we emulate the tail call:
       We call the target. The target executes its logic and does `ret`.
       In the guest model, `cow_thiscall_cdecl` will execute the target function.
       The target's `ret` will pop the return address pushed by `cow_thiscall_cdecl`? 
       No, `cow_thiscall_cdecl` is a helper that calls the function. It manages the call/return transition for the guest code being executed.
       
       Actually, the instruction says: "give rt_return the bytes the TARGET pops".
       The target does a bare `ret`, which pops 0 argument bytes (it only pops the return address).
       So N should be 0.
    */
    
    g->esp = sp0; /* Dead stack below returned esp is not compared, but we must set it correctly for rt_return? 
                     Usually rt_return handles the final ESP adjustment based on N. 
                     If N=0, it assumes bare ret behavior relative to the call site. */
                     
    rt_return(g, result, 0);
}
/* COW_ADAPTER END */
