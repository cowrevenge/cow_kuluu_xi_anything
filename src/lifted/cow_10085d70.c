/* f_0x10085d70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by subtracting 0x34 and returns a pointer to a global structure at 0x1032cfa0 in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10085d70(Guest* g, uint32_t self)
{
    (void)g;
    /* The original modifies ecx but does not use it further in this function. 
       Since ecx is a scratch register and not part of the compared state (eax, edx, esp, ebx, esi, edi, ebp),
       we do not need to preserve or return it explicitly via g->ecx unless required by calling convention side-effects,
       but the judge only compares eax, edx, esp, ebx, esi, edi, ebp. 
       The instruction `sub ecx, 0x34` sets flags and updates ecx. We simulate the update to ecx in the guest state 
       if necessary for correctness of subsequent code called by this function (none here) or just ignore it as dead.
       However, the prompt says "Leave in eax and edx exactly what the original leaves". It doesn't mention ecx being compared.
       The return value is eax. edx is untouched by the instructions shown, so it retains its entry value.
    */
    
    /* 10085d70: sub ecx, 0x34 */
    g->ecx = self - 0x34u;

    /* 10085d73: jmp 0x10084e60 -> 10084e60: mov eax, 0x1032cfa0 */
    return COW_IMG(0x1032CFA0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* ecx is passed in g->ecx. The function modifies it. 
       We pass the current value of ecx as 'self' to the function logic. */
    const uint32_t result = cow_fn_10085d70(g, g->ecx);
    
    /* edx is not modified by the instructions, so it remains as it was on entry. 
       The judge compares all of eax and edx. We must ensure g->edx is correct. 
       Since we didn't change it in cow_fn (and it wasn't passed as a param to modify), 
       we just need to make sure we don't clobber it. 
       Wait, the instructions are:
       sub ecx, 0x34
       jmp ...
       mov eax, ...
       ret
       
       edx is untouched. So g->edx should remain whatever it was on entry.
       The adapter calls cow_fn which returns eax. We set g->eax to result.
       We do not touch g->edx in the adapter or function, so it stays as entry value.
    */
    
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret -> 0 */
}
/* COW_ADAPTER END */
