/* f_0x10100540 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low 16 bits of the third stack argument to the 16-bit word at offset 0x12 of the first stack argument, returning the first argument in eax and leaving edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100540(Guest* g, uint32_t param1, uint32_t param3, uint32_t edx_in)
{
    const uint32_t addr = param1 + 0x12u;
    const uint16_t old = rd16(addr);
    const uint16_t add = (uint16_t)param3;
    const uint16_t res = (uint16_t)(old + add);

    wr16(addr, res);

    /* mov cx, word ptr [esp + 0xc] preserves the high 16 bits of ecx. */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)add;

    /* The original never writes edx. */
    g->edx = edx_in;

    /* eax is left as the value loaded from [esp + 4]. */
    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param3 = rd16(sp0 + 0xcu);
    const uint32_t edx0 = g->edx;

    const uint32_t result = cow_fn_10100540(g, param1, param3, edx0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
