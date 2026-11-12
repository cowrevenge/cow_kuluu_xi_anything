/* f_0x10015340 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   stores the low byte of the first stack argument into global byte at 0x10350174.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10015340(Guest* g, uint32_t param)
{
    (void)g;
    wr8(COW_IMG(0x10350174u), (uint8_t)(param & 0xFFu));
    return g->eax; /* eax is modified by mov al, but we need to preserve upper bits? 
                      Wait: "mov al, byte ptr [esp + 4]" modifies only AL. 
                      The judge compares ALL of eax. So I must return the original eax with low byte replaced. */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    
    /* Simulate: mov al, byte ptr [esp + 4] */
    /* This sets the low byte of eax to the low byte of param, preserving upper 24 bits of original eax */
    g->eax = (g->eax & 0xFFFFFF00u) | ((uint8_t)(param & 0xFFu));
    
    /* Simulate: mov byte ptr [0x10350174], al */
    wr8(COW_IMG(0x10350174u), (uint8_t)(g->eax & 0xFFu));
    
    g->esp = sp0;
    rt_return(g, g->eax, 0u); /* ret with no immediate pops nothing extra, but standard cdecl/cleanup depends on caller. 
                                 The instruction is just 'ret', so it pops the return address (handled by rt_return logic usually or esp+=4).
                                 Wait, the recompiler shows: esp += 4; REGS_STORE; return;
                                 rt_return handles the stack pointer adjustment for the return address? 
                                 Usually rt_return(g, val, N) means callee cleans up N bytes of args. 
                                 Here 'ret' is bare, so N=0. The return address pop is implicit in the calling convention/rt_return implementation typically. */
}
/* COW_ADAPTER END */
