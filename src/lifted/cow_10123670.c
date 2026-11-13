/* f_0x10123670 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 3*sign-extended(short argument) with its low byte replaced by the byte at 0x1036d6b0 + 2*(3*sign-extended(short argument)).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10123670(Guest* g, uint32_t arg)
{
    (void)g;

    uint32_t eax = (uint32_t)(int32_t)(int16_t)arg;   /* movsx eax, word ptr [esp + 4] */
    eax = (uint32_t)(eax + eax * 2u);                 /* lea eax, [eax + eax*2] */

    const uint32_t addr = (uint32_t)(eax * 2u + COW_IMG(0x1036d6b0u));
    return (eax & 0xFFFFFF00u) | (uint32_t)rd8(addr); /* mov al, byte ptr [eax*2 + 0x1036d6b0] */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd16(sp0 + 4u);              /* original reads only the low 16 bits */
    const uint32_t result = cow_fn_10123670(g, arg);

    g->esp = sp0;
    rt_return(g, result, 0u);                         /* bare ret */
}
/* COW_ADAPTER END */
