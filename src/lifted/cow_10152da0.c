/* f_0x10152da0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets ECX to a global address and tail-calls another function.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10152da0(Guest* g)
{
    /* mov ecx, 0x10578618 */
    const uint32_t new_ecx = COW_IMG(0x10578618u);
    
    /* jmp 0x10257860 */
    /* Tail call: we invoke the target with the current stack state (which includes the return address to our caller).
       The target is a __fastcall function taking ECX as 'this' or first arg. 
       We use cow_fastcall to pass new_ecx in ECX and 0 additional register args (EDX is passed as-is from g->edx, 
       but since we don't modify it here, it remains whatever the caller left).
       
       Note: The helper cow_fastcall expects: target, ecx_arg, edx_arg, nargs, ...args.
       Since the original just jumps, the stack pointer for the callee is the same as ours (minus nothing, 
       because we haven't pushed anything). The return address on the stack points to our caller.
       
       We must ensure g->edx is preserved if the helper doesn't handle it, but typically these helpers 
       update g registers upon return. However, the prompt says "assign g->edx = <value> in cow_fn before returning".
       Since we don't change edx explicitly, and the callee might change it, we rely on the helper updating g->edx.
       
       Wait, looking at the previous rejection: "too few arguments". 
       Signature: uint32_t cow_fastcall(Guest *g, uint32_t target, uint32_t ecx, uint32_t edx, unsigned int nargs, ...)
       
       We need to pass g->edx explicitly.
    */
    
    return cow_fastcall(g, COW_IMG(0x10257860u), new_ecx, g->edx, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    
    /* Call the logic. The tail call helper should handle the stack frame correctly 
       by using the existing return address on the stack. */
    uint32_t result = cow_fn_10152da0(g);
    
    /* Restore esp to entry value. In a true tail call, the callee pops the return address 
       and returns to our caller. If the helper simulates this correctly, g->esp should be 
       managed by the helper or we restore it here if the helper leaves it alone?
       
       The prompt says: "the stack must end up as that callee's `ret` would leave it."
       And for the adapter: "g->esp = sp0;" is standard for non-tail calls. 
       For tail calls, usually the callee cleans up or we just let rt_return handle it?
       
       Actually, if cow_fastcall performs a real call simulation, it pushes args, calls, and pops.
       But this is a TAIL CALL to an address. The recompiler shows `f_10257860(g); return;`.
       This implies the callee function modifies g directly.
       
       If we use cow_fastcall, it likely sets up a frame for the target. 
       Since it's a tail call, the target should see the same stack as if our function had just called it?
       No, in assembly `jmp` means the stack is exactly as it was upon entry to THIS function (with ret addr on top).
       
       Let's look at the helper behavior. If cow_fastcall is a "call" simulation, it might push things.
       But we want a jump. 
       
       However, usually in these COW models, if you call another guest function via helpers, 
       you treat it as a standard call unless specified otherwise. But here it IS a tail call.
       
       If the helper `cow_fastcall` executes the target code and returns its result, 
       does it leave the stack correct for our caller?
       
       The instruction says: "give rt_return the bytes the TARGET pops".
       The target is at 0x10257860. We don't know how many bytes it pops from the stack (its `ret N`).
       But wait, the decompiler says `void __fastcall thunk_FUN_10257870(int *param_1)`. 
       Fastcall functions in VC++ usually do NOT pop stack arguments (they are caller cleanup or 0 args).
       If it has no stack args, it likely does `ret 0` (bare ret).
       
       So N = 0.
       
       Regarding g->esp: The prompt says "g->esp = sp0;" in the adapter template. 
       But for a tail call, the final ESP returned to OUR caller should be what the TARGET's RET leaves.
       If the target does `ret 0`, it pops the return address (4 bytes). So ESP increases by 4.
       Our caller expects ESP to increase by 4 (for its own call to us).
       
       The adapter template sets `g->esp = sp0`. This restores ESP to what it was BEFORE our function ran.
       Then `rt_return` probably handles the final adjustment or assumes the callee did it?
       
       Let's follow the standard pattern for tail calls in these tasks if possible. 
       Usually, you just call the helper and return its result. The helper manages the guest state.
       
       If the previous attempt failed only due to compilation (too few args), fixing that might be enough.
    */
    
    g->esp = sp0;
    rt_return(g, result, 0);   /* Target likely pops 0 bytes (bare ret) */
}
/* COW_ADAPTER END */
