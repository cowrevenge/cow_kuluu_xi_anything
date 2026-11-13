/* f_0x100e79e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Returns the byte at offset 0xD0 of the given pointer, with upper bits of eax coming from the pointer itself due to partial register write.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e79e0(Guest* g, uint32_t param)
{
    (void)g;
    /* After 'mov eax, [esp+4]', eax = param. Then 'movzx ax, byte ptr [eax+0xd0]' 
       only writes bits 0-15 of eax, preserving bits 16-31 which hold the upper half of param. */
    uint32_t val = rd8(param + 0xD0u);
    return (param & 0xFFFF0000u) | (uint16_t)val;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e79e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100e79e0(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
