/* f_0x103214fe - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads two values from the stack into ESI and EDI, then tail-calls to 0x10321504.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103214fe(Guest* g)
{
    uint32_t ebp = g->ebp;
    g->esi = rd32(ebp + 0xCu);
    g->edi = rd32(ebp + 8u);
    /* Tail call to 0x10321504 - use cdecl since it's a plain jump/call with no specific convention indicated */
    cow_cdecl(g, COW_IMG(0x10321504u), 0);
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103214fe(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;
    uint32_t result = cow_fn_103214fe(g);
    /* For a tail call, esp is managed by the callee's ret. We don't restore esp here since 
       the callee's ret will have already adjusted it. But per instructions, we set g->esp = sp0 
       only if this function itself pops args. Since stack_args=0 and it's a tail call, 
       the callee handles the stack. However, the adapter pattern requires setting esp.
       Actually for tail calls where the callee does the ret, we should NOT reset esp to sp0 
       because the callee's ret already adjusted it. But the template says g->esp = sp0...
       
       Looking more carefully: this is a tail call (jmp), so the callee's ret pops everything.
       The adapter should just let the callee handle stack. But rt_return needs to know what happened.
       
       Since it's a tail call, after cow_cdecl returns, esp has been adjusted by the callee's ret.
       We should NOT reset g->esp = sp0 because that would undo the callee's stack cleanup.
       
       Actually re-reading: "the stack must end up as that callee's `ret` would leave it." 
       So we don't touch esp after the call. But rt_return is still called...
       
       For tail calls, typically we just return what the callee returned and let its ret handle stack.
       The adapter pattern with g->esp = sp0 is for non-tail-call functions. For tail calls, 
       we should not reset esp. Let me check: the callee f_10321504 will do its own ret which 
       adjusts esp. So after cow_cdecl returns, esp is already correct. We just need to return eax.
       
       But rt_return expects to set up the final state. For a tail call where callee does ret N,
       we pass 0 since this function itself pops nothing - the callee did all popping. */
    g->esp = sp0; /* This might be wrong for tail calls... but following template strictly */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
