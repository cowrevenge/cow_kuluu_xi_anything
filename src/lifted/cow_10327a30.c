/* f_0x10327a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calculates a pointer from ebp-0x10 plus offset 0x18, sets ecx to it, and tail-calls 0x10261cb0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10327a30(Guest* g, uint32_t ebp)
{
    const uint32_t ecx_val = rd32(ebp - 0x10u) + 0x18u;
    g->ecx = ecx_val;
    
    /* Tail call to 0x10261cb0. 
       The callee is __fastcall, so it expects its first argument in ECX.
       Since this is a tail jump, we preserve the current ESP (which points to the return address of our caller).
       We assume the target pops 0 bytes as per typical thunk/fastcall behavior unless specified otherwise.
    */
    cow_fastcall(g, COW_IMG(0x10261cb0u), ecx_val, g->edx, 0);
    
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10327a30(g, g->ebp);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
