/* f_0x101b5c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_101b6e90 and returns 1 if its AL result is 1, otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b5c40(Guest* g)
{
    uint32_t eax = g->eax;
    uint8_t al;

    /* call 0x101b6e90 (cdecl, caller pops) */
    cow_cdecl(g, COW_IMG(0x101b6e90u), 0);
    eax = g->eax;

    /* dec al */
    al = (uint8_t)(al - 1u);
    eax = (eax & 0xFFFFFF00u) | al;

    /* neg al */
    al = (uint8_t)(0u - al);
    eax = (eax & 0xFFFFFF00u) | al;

    /* sbb eax, eax */
    /* CF from neg: cf = (original_al_before_neg != 0). 
       original_al_before_neg was the value of AL after dec.
       Let's track it properly. */
    
    /* Re-evaluating flags logic based on instructions:
       1. dec al: sets CF? No, DEC does not affect CF. It affects OF, SF, ZF, AF, PF.
          So CF remains whatever it was before the call or from previous ops. 
          Wait, the callee FUN_101b6e90 might have set flags. But we don't know them.
          However, `sbb eax, eax` computes `eax - eax - CF`.
          If CF=0, result is 0. If CF=1, result is 0xFFFFFFFF.
          
          Let's look at the sequence again:
          call -> al has some value V.
          dec al -> al becomes V-1. Flags updated (CF unchanged).
          neg al -> al becomes -(V-1) = 1-V. 
             CF for NEG is set if operand != 0. So CF = ((V-1) != 0).
          sbb eax, eax -> eax = eax - eax - CF = -CF.
             If CF=0, eax=0. If CF=1, eax=-1 (0xFFFFFFFF).
          inc eax -> 
             If eax=0, eax becomes 1.
             If eax=-1, eax becomes 0.
             
          So the result is 1 if CF was 0 after NEG, and 0 if CF was 1 after NEG.
          CF after NEG is 1 if (V-1) != 0, i.e., V != 1.
          CF after NEG is 0 if (V-1) == 0, i.e., V == 1.
          
          So:
          If V == 1: CF=0 -> sbb gives 0 -> inc gives 1. Result 1.
          If V != 1: CF=1 -> sbb gives -1 -> inc gives 0. Result 0.
          
          This matches the decompiler's `return cVar1 == '\x01'`.
          
          We need to simulate this exactly using the registers and flags as they would be in the guest model if we were executing instructions, OR just compute the result logically. 
          The prompt says "Leave in eax and edx exactly what the original leaves".
          The original modifies EAX through these arithmetic ops. It does NOT modify EDX.
          
          Let's trace EAX bits 8-31. They are untouched by dec/neg al.
          sbb eax, eax overwrites ALL of EAX.
          inc eax overwrites ALL of EAX.
          
          So the upper bits of EAX coming from the call are destroyed.
          
          We need to know CF after `neg al`.
          `neg al` sets CF = 1 if AL (before neg) != 0.
          AL before neg is (AL_after_call - 1).
          So CF = ((AL_after_call - 1) != 0).
          
          Then `sbb eax, eax`:
          EAX_new = 0 - 0 - CF = -CF.
          If CF=0, EAX=0. If CF=1, EAX=0xFFFFFFFF.
          
          Then `inc eax`:
          If EAX=0, EAX becomes 1.
          If EAX=0xFFFFFFFF, EAX becomes 0.
          
          So final EAX is 1 if CF was 0, else 0.
          CF was 0 iff (AL_after_call - 1) == 0, i.e., AL_after_call == 1.
          
          So result is 1 if (g->eax & 0xFF) == 1, else 0.
          
          What about EDX? The original instructions do not touch EDX. 
          The callee might have touched it. We must preserve whatever the callee left in EDX.
          Since we call `cow_cdecl`, the helper updates `g->edx` if the callee modified it (or rather, the callee's execution context is handled). 
          Wait, `cow_cdecl` returns void? No, usually these helpers update the guest state `g`.
          The prompt says: "Leave in eax and edx exactly what the original leaves... assign g->edx = <value> in cow_fn before returning."
          
          If I just return the calculated value for EAX, and leave EDX alone (as it was updated by the call), that should be correct.
          However, `cow_cdecl` might not automatically update `g->eax` and `g->edx` in a way that persists if I overwrite them locally? 
          The example shows reading `g->ecx` and returning a value. It doesn't show calling another function.
          
          Let's look at the recompiler code provided:
          `REGS_STORE; f_101b6e90(g); REGS_LOAD;`
          This implies that after the call, `eax` and `edx` (and others) are loaded from `g`.
          So I should read `g->eax` after the call to get AL.
          And `g->edx` is already in `g`. I don't need to change it unless my logic does. My logic doesn't touch EDX.
          
          So:
          1. Call callee.
          2. Read `g->eax` to get the return value's AL.
          3. Compute result based on AL == 1.
          4. Return result.
          5. Ensure `g->edx` is whatever it was after the call (which it is, since we don't touch it).
    */

    /* After cow_cdecl, g->eax holds the return value of FUN_101b6e90 */
    uint8_t al_val = (uint8_t)(g->eax & 0xFFu);
    
    /* Determine result: 1 if al_val == 1, else 0 */
    uint32_t result = (al_val == 1u) ? 1u : 0u;
    
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0; /* No stack args */
    
    uint32_t result = cow_fn_101b5c40(g);
    
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret 0 */
}
/* COW_ADAPTER END */
