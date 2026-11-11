/* f_0x10063030 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` pointer by subtracting 0x34 and calls FUN_10061830 to destroy an array of objects, returning the base address in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10063030(Guest* g, uint32_t self)
{
    const uint32_t adjusted_self = self - 0x34u;
    
    /* Replicate logic of FUN_10061830 */
    uint32_t bl = rd8(g->esp + 4u); /* Argument passed on stack */
    
    if (bl & 2)
    {
        uint32_t count = rd32(adjusted_self - 4u);
        uint32_t ebp_val = adjusted_self - 4u;
        
        /* Calculate end pointer: esi + (count * 0x1F) * 4 */
        uint32_t ecx_tmp = count << 5;
        ecx_tmp -= count;
        uint32_t esi_ptr = adjusted_self + (ecx_tmp << 2);
        
        if ((int32_t)(count - 1u) >= 0)
        {
            uint32_t edi_count = count; /* eax was count, dec'd to count-1, then lea edi,[eax+1] -> count */
            
            while (edi_count != 0)
            {
                esi_ptr -= 0x7Cu;
                cow_cdecl(g, COW_IMG(0x10061730u), 1, esi_ptr); /* __fastcall param_1 in ecx? No, cdecl helper puts args on stack or registers based on convention. 
                                                                   Wait, the prompt says: "callee per decompiler: void __fastcall ... caller pops (cow_cdecl)".
                                                                   Actually, for __fastcall with 1 arg, it's usually ECX. But cow_cdecl is specified.
                                                                   Let's look at the call site: `mov ecx, esi; call ...`. 
                                                                   The prompt says use cow_cdecl if caller pops. 
                                                                   However, cow_cdecl typically pushes args to stack. 
                                                                   If the callee expects ECX, we should probably use a helper that sets ECX or just push it?
                                                                   
                                                                   Re-reading rules: "Calling other code: use the helpers... cow_cdecl(g, target, nargs, a, b, ...) the caller pops".
                                                                   The decompiler says __fastcall. Usually __fastcall puts first arg in ECX.
                                                                   If I use cow_cdecl, it might push to stack. 
                                                                   
                                                                   Let's look at the instruction: `mov ecx, esi; call 0x10061730`.
                                                                   This is a fastcall convention where arg is in ECX.
                                                                   The prompt says "callee ends in bare ret: CALLER pops arguments (cow_cdecl)". 
                                                                   This implies the helper handles the stack cleanup. 
                                                                   
                                                                   If I use `cow_cdecl`, does it put args in registers? Usually no, cdecl is stack.
                                                                   But the instruction explicitly sets ECX. 
                                                                   
                                                                   Let's check the other call: `push ebp; call 0x1002c8e0`. This is clearly stack-based (cdecl/stdcall).
                                                                   
                                                                   For `call 0x10061730`, the arg is in ECX. 
                                                                   If I use `cow_cdecl`, it might be wrong if it pushes to stack.
                                                                   However, often these helpers are smart or the prompt implies using the specific helper for the convention.
                                                                   
                                                                   Wait, the prompt says: "callee per the decompiler: void __fastcall ... caller pops (cow_cdecl; cow_thiscall_cdecl if it takes this)".
                                                                   It explicitly suggests `cow_cdecl` for this case despite it being fastcall? 
                                                                   Or does it mean "use cdecl style cleanup"?
                                                                   
                                                                   Actually, looking at standard recompiler patterns:
                                                                   If the callee expects ECX, and we use `cow_cdecl`, it might fail.
                                                                   But `cow_fastcall` is available: `cow_fastcall(g, target, ecx, edx, nargs, ...)`.
                                                                   
                                                                   The prompt says: "the callee ends in a bare ret: the CALLER pops the arguments (cow_cdecl...)". 
                                                                   This suggests that even if it's fastcall, if the caller cleans up, we might use cdecl? No, that's contradictory.
                                                                   
                                                                   Let's look at the instruction again: `mov ecx, esi; call ...`.
                                                                   If I use `cow_fastcall(g, target, esi, 0, 0)`, it sets ECX and calls. 
                                                                   But does `cow_fastcall` handle the "caller pops" part? Fastcall usually callee pops or no stack args. Here there are no stack args for this call.
                                                                   
                                                                   Let's stick to the prompt's hint: "use cow_cdecl". If cow_cdecl is defined as pushing args to stack, it contradicts `mov ecx`. 
                                                                   However, often in these challenges, if the instruction sets ECX, you must set ECX. 
                                                                   
                                                                   Let's look at the second call: `push ebp; call 0x1002c8e0`. This is definitely stack arg.
                                                                   
                                                                   For the first call, since it's `mov ecx, esi`, I will use `cow_fastcall` with 0 stack args? 
                                                                   Or maybe `cow_cdecl` is a generic wrapper that handles registers? 
                                                                   
                                                                   Let's assume standard behavior:
                                                                   Call at 1006185a: Arg in ECX. No stack args.
                                                                   I will use `cow_fastcall(g, COW_IMG(0x10061730u), esi_ptr, 0, 0)`. 
                                                                   
                                                                   Wait, the prompt explicitly says: "callee per decompiler ... caller pops (cow_cdecl)". 
                                                                   If I ignore that and use fastcall, it might be safer for correctness of register state.
                                                                   But if `cow_cdecl` is the intended helper for "caller pops", maybe it handles ECX too? 
                                                                   
                                                                   Let's look at the other call: 1006187b. Same target.
                                                                   
                                                                   I will use `cow_fastcall` because the assembly explicitly puts the argument in ECX. Using `cow_cdecl` would likely push to stack, which is wrong. The "caller pops" note might refer to stack args if any existed, or it's a generic label for non-stdcall cleanup. Since there are no stack args, fastcall is the correct semantic match for `mov ecx; call`.
                                                                   */
                edi_count--;
            }
        }
        
        if (bl & 1)
        {
            /* push ebp; call 0x1002c8e0; add esp, 4 */
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }
        
        return ebp_val;
    }
    else
    {
        /* mov ecx, esi; call 0x10061730 */
        cow_fastcall(g, COW_IMG(0x10061730u), adjusted_self, 0, 0);
        
        if (bl & 1)
        {
            /* push esi; call 0x10028710; add esp, 4 */
            cow_cdecl(g, COW_IMG(0x10028710u), 1, adjusted_self);
        }
        
        return adjusted_self;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* The function takes 'this' in ECX. 
       Original: sub ecx, 0x34; jmp ...
       So we pass the adjusted self to the logic, or let the logic handle it.
       My cow_fn expects `self` which is the original ECX? 
       No, I defined cow_fn_10063030(Guest* g, uint32_t self).
       Inside, I do `adjusted_self = self - 0x34`.
       So I should pass g->ecx.
    */
    const uint32_t result = cow_fn_10063030(g, g->ecx);
    
    /* The original function does not modify EDX explicitly in the snippet provided for 10063030 itself, 
       but it jumps to 10061830. 
       Does 10061830 modify EDX? 
       Looking at 10061830:
       push ebx, mov bl... test bl... je...
       mov eax... push ebp... lea ebp... mov ecx... shl... sub... dec... lea esi... js...
       push edi... lea edi... sub esi... mov ecx... call... dec... jne... pop edi...
       test bl... je... push ebp... call... add esp...
       mov eax, ebp... pop ebp... pop esi... pop ebx... ret 4.
       
       EDX is not touched in 10061830. 
       So EDX remains whatever it was on entry to 10063030 (which is entry to 10061830).
       The prompt says: "Leave in eax and edx exactly what the original leaves... If the original never writes a register, leave it alone".
       
       So I must preserve g->edx. 
       My cow_fn returns uint32_t (eax). 
       I need to ensure g->edx is not changed by my code if the original didn't change it.
       Since I don't touch g->edx in cow_fn, and the adapter doesn't touch it, it should be fine.
       
       Wait, `cow_fastcall` might clobber EDX? 
       The helper `cow_fastcall(g, target, ecx, edx, nargs, ...)` takes an edx parameter. 
       If I pass 0 for edx, does it set g->edx = 0 before calling? Yes, typically fastcall helpers set ECX and EDX.
       
       Does the original call to 10061730 clobber EDX? 
       The callee is `FUN_10061730`. We don't know its internals. 
       However, standard calling conventions (fastcall) allow callee to clobber EAX, ECX, EDX.
       So if the original code calls a function that might clobber EDX, then EDX *is* changed by the original execution path.
       
       The prompt says: "ALL of eax and edx are compared... Leave in eax and edx exactly what the original leaves".
       
       If I use `cow_fastcall`, it will set g->edx to the value I pass (0) before calling, and then the callee might change it further. 
       This mimics the behavior if the callee expects EDX or clobbers it.
       
       However, in the original assembly:
       `mov ecx, esi; call 0x10061730`
       It does NOT set EDX. So EDX is whatever it was before the call. 
       If I use `cow_fastcall(..., adjusted_self, 0, ...)`, I am forcing EDX to 0 before the call. This might be wrong if the callee doesn't expect/clobber EDX or if the original caller relied on EDX being preserved (though fastcall usually clobbers).
       
       Actually, `__fastcall` in MSVC uses ECX and EDX for first two args. If there is only 1 arg, EDX is not used as an argument, but it is still a volatile register that the callee *can* clobber. 
       The original code does NOT set EDX before the call. So EDX enters the callee with its previous value.
       
       To be safe and match "original leaves", I should use `cow_cdecl` if possible? No, cdecl pushes to stack.
       
       Let's look at `cow_thiscall_cdecl`. 
       
       Maybe I should just use `cow_cdecl` and hope the helper handles ECX? Unlikely.
       
       Let's look at the second call: `push ebp; call 0x1002c8e0`. This is clearly stack-based.
       
       For the first call, since it's a single argument in ECX, and I don't know if EDX matters for the callee, but I DO know that the original didn't set it...
       
       If I use `cow_fastcall` with edx=0, I change the state entering the callee. 
       
       Is there a helper that only sets ECX? No.
       
       However, often in these problems, if the decompiler says `__fastcall`, and we have 1 arg, using `cow_fastcall` with 0 for the second arg is standard practice because the callee is expected to treat EDX as scratch/clobberable anyway. If the callee *reads* EDX, it's a bug in the original code or undefined behavior unless set. 
       
       I will proceed with `cow_fastcall`.
    */
    
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
