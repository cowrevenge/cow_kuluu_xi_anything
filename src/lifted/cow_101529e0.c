/* f_0x101529e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global address and tail-calls into 0x10257860, returning its result and leaving edx as it was on entry.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101529e0(Guest* g)
{
    const uint32_t ecx_val = COW_IMG(0x10578508u);
    /* Tail call to 0x10257860. The callee is __fastcall with one register arg (ecx). */
    /* We must preserve edx as it was on entry, since the original does not modify it before the jmp. */
    const uint32_t saved_edx = g->edx;

    /* Call the target function using fastcall convention: ecx=arg1, edx=arg2 (unused here but passed), rest stack args (none). */
    /* Note: cow_fastcall signature is (g, target, ecx, edx, nargs, ...). Since there are no stack args, nargs=0. */
    uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, saved_edx, 0);

    /* Restore edx to what it was on entry, as the original function never writes to edx. */
    g->edx = saved_edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101529e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101529e0(g);
    g->esp = sp0;
    /* The original has no ret N, it tail-jumps. The callee's ret determines the stack pop. 
       Since we are simulating a tail call by calling the function and returning its result, 
       and the contract says stack_args=0 (meaning this function itself takes no stack args to pop),
       rt_return should use 0 for the bytes popped by THIS function's perspective if it were a normal ret.
       However, in a tail call simulation via cow_fastcall, the callee handles its own stack cleanup.
       The adapter just needs to return the result and set esp back to sp0 (which is correct because 
       cow_fastcall will have adjusted esp internally or the callee did). 
       Actually, for a tail call, the caller's frame is gone. But here we are wrapping it.
       The instruction says: "give rt_return the bytes the TARGET pops". 
       Wait, the contract line says stack_args=0. This usually implies ret 0.
       Let's look at the example: ret 4 -> rt_return(..., 4).
       Here, there is no explicit ret in this function. It jumps.
       The callee 0x10257860 is __fastcall. Fastcall callees pop their own stack args.
       If the callee has no stack args, it does `ret`. 
       The contract says stack_args=0 for THIS function. This likely means this function doesn't take stack args.
       Since it's a tail call, the "return" from cow_fn_101529e0 effectively returns to the original caller.
       The callee 0x10257860 will execute its own ret. 
       If we use cow_fastcall, it calls the function and returns. The stack pointer is managed by the callee's ret.
       So rt_return should probably just return the value and not pop anything extra from THIS function's perspective?
       But wait, if I call cow_fastcall, it pushes args (none) and calls. The callee pops its own args.
       So esp is restored to sp0 by the callee's ret? No, the callee's ret pops ITS stack args.
       If the callee has 0 stack args, it does `ret`, which pops the return address pushed by cow_fastcall.
       So after cow_fastcall returns, esp should be back to sp0 (assuming no other changes).
       Then rt_return(g, result, 0) is correct because this function itself doesn't pop any caller-pushed args.
    */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
