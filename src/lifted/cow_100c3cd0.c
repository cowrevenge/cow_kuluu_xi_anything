/* f_0x100c3cd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Reads a byte from the stack argument at offset +6, masks it to 8 bits, and subtracts 0x30 (ASCII '0').

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100c3cd0(Guest* g, uint32_t sp0)
{
    (void)g;
    /* mov eax, dword ptr [esp + 6] */
    uint32_t val = rd32(sp0 + 6u);
    
    /* and eax, 0xff */
    val &= 0xFFu;
    
    /* sub eax, 0x30 */
    val -= 0x30u;
    
    return val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100c3cd0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
