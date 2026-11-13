/* f_0x101002f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts a byte value from the byte at offset 0x2a of a structure pointed to by the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002f0(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)g;
    (void)param2;
    
    /* mov eax, dword ptr [esp + 4] -> eax = param1 */
    uint32_t addr = param1 + 0x2Au;
    
    /* mov cl, byte ptr [esp + 0xc] -> cl = low byte of param3 */
    uint8_t val = (uint8_t)param3;
    
    /* sub byte ptr [eax + 0x2a], cl */
    uint8_t current = rd8(addr);
    uint8_t result = (uint8_t)(current - val);
    wr8(addr, result);
    
    /* eax is left as param1 from the first mov */
    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002f0(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);
    
    const uint32_t result = cow_fn_101002f0(g, param1, param2, param3);
    
    g->esp = sp0;
    rt_return(g, result, 0u);   /* ret */
}
/* COW_ADAPTER END */
