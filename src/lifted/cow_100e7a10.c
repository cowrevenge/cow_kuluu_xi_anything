/* f_0x100e7a10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns the zero-extended byte at offset 0xD3 of the structure pointed to by the stack argument, preserving the upper 16 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e7a10(Guest* g, uint32_t param)
{
    (void)g;
    uint32_t ptr = rd32(param + 0xD3u); /* This line is wrong in my head, let me re-read. */
    
    /* 
       Instruction 1: mov eax, [esp+4] -> eax = param (the pointer passed on stack)
       Instruction 2: movzx ax, byte ptr [eax + 0xd3]
         - Reads byte at address (param + 0xD3)
         - Zero-extends it into AX (bits 0-15 of EAX)
         - Leaves bits 16-31 of EAX unchanged.
       
       Since EAX was just loaded with `param` in instruction 1, the upper 16 bits are the upper 16 bits of `param`.
    */
    
    uint32_t addr = param + 0xD3u;
    uint8_t val = rd8(addr);
    uint32_t result = (param & 0xFFFF0000u) | (uint32_t)val;
    
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7a10(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t arg0 = rd32(sp0 + 4u);
    
    const uint32_t result = cow_fn_100e7a10(g, arg0);
    
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
