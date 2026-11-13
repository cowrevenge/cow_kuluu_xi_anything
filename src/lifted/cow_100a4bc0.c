/* f_0x100a4bc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the 16-bit table entry at self + 0xa12 + index*2, where index is the sign-extended byte argument, preserving the high 16 bits of eax from the sign extension.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100a4bc0(Guest* g, uint32_t self, uint32_t param)
{
    uint32_t eax = (uint32_t)(int32_t)(int8_t)param;
    uint32_t addr = self + eax * 2u + 0xa12u;
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(addr);
    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a4bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_100a4bc0(g, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
