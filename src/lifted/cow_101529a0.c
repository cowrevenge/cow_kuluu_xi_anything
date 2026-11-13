/* f_0x101529a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets ecx to a global address and tail-calls another function with that value as its fastcall argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101529a0(Guest* g)
{
    uint32_t ecx_val = COW_IMG(0x105784A8u);
    // Tail call to 0x10257860 with __fastcall convention (ecx is the first argument).
    // The callee pops its own stack arguments. Since we don't know how many, and it's a thunk,
    // we assume standard fastcall behavior where the callee cleans up if there are stack args,
    // but typically thunks like this might just be simple wrappers. 
    // However, the contract says ret=strict stack_args=0 for THIS function.
    // The target is called via cow_fastcall. We need to know how many bytes the TARGET pops.
    // The prompt says: "give rt_return the bytes the TARGET pops".
    // The decompiler shows `thunk_FUN_10257870(int *param_1)`. This suggests 1 argument in ecx, and potentially stack args?
    // But looking at the instruction sequence: it just sets ECX and jumps. It doesn't push anything.
    // If the target expects stack arguments, they must be on the stack already from the caller of THIS function.
    // Since this function has stack_args=0, the caller didn't pass any stack args to us.
    // So the target likely takes only ecx (or maybe edx too? fastcall uses ecx and edx).
    // The decompiler says `int *param_1`, which maps to ecx in fastcall.
    // If the target has no stack arguments, it pops 0 bytes.
    
    uint32_t result = cow_fastcall(g, COW_IMG(0x10257860u), ecx_val, g->edx, 0);
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101529a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101529a0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* Target pops 0 bytes as it's a fastcall with only register args */
}
/* COW_ADAPTER END */
