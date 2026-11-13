/* f_0x10100550 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the 16-bit value of the third stack argument from the 16-bit field at offset 0x12 of the pointer passed as the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100550(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)param2;

    const uint32_t eax = param1;
    const uint16_t cx = (uint16_t)param3;

    /* mov cx, word ptr [esp + 0xc] preserves the upper 16 bits of ecx. */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)cx;

    const uint32_t addr = eax + 0x12u;
    const uint16_t old = rd16(addr);
    const uint16_t result = (uint16_t)(old - cx);
    wr16(addr, result);

    /* edx is never written by the original; leave g->edx alone. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100550(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param3 = (uint32_t)rd16(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100550(g, param1, 0u, param3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
