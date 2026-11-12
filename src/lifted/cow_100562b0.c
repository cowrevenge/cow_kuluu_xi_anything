/* f_0x100562b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds (self + 0x30) to the four dwords at offsets 0x40, 0x44, 0x48, and 0x4C of the object pointed to by ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100562b0(Guest* g, uint32_t self)
{
    const uint32_t ecx = self + 0x30u;
    
    /* Process offset 0x10 relative to adjusted ecx (which is 0x40 relative to original self) */
    uint32_t eax = rd32(ecx + 0x10u);
    eax += ecx;
    wr32(ecx + 0x10u, eax);

    /* Process offset 0x14 relative to adjusted ecx (which is 0x44 relative to original self) */
    eax = rd32(ecx + 0x14u);
    eax += ecx;
    wr32(ecx + 0x14u, eax);

    /* Process offset 0x18 relative to adjusted ecx (which is 0x48 relative to original self) */
    eax = rd32(ecx + 0x18u);
    eax += ecx;
    wr32(ecx + 0x18u, eax);

    /* Process offset 0x1c relative to adjusted ecx (which is 0x4C relative to original self) */
    eax = rd32(ecx + 0x1cu);
    eax += ecx;
    wr32(ecx + 0x1cu, eax);

    /* edx is not modified by this function sequence, so we leave g->edx alone in the adapter. 
       The judge compares all of eax and edx. Since edx isn't touched here, it retains its entry value.
       We return eax which holds the result of the last addition. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100562b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    /* ecx is the 'this' pointer / first argument in fastcall/thiscall convention */
    const uint32_t result = cow_fn_100562b0(g, g->ecx);
    
    /* edx is not modified by the original instructions, so we do not assign to it. 
       It remains as it was on entry. */
       
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret with no immediate */
}
/* COW_ADAPTER END */
