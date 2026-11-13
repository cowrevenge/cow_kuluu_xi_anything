/* f_0x10100330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the low 16 bits of the third stack argument to the 16-bit field at offset 0x2e of the first stack argument, returning that pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100330(Guest* g, uint32_t ptr, uint32_t value)
{
    const uint32_t saved_edx = g->edx;
    const uint16_t addend = (uint16_t)value;

    /* mov cx, word ptr [esp + 0xc] */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)addend;

    /* add word ptr [eax + 0x2e], cx */
    const uint32_t addr = ptr + 0x2Eu;
    const uint16_t old = rd16(addr);
    wr16(addr, (uint16_t)(old + addend));

    /* edx is never written by the original */
    g->edx = saved_edx;

    /* eax holds the pointer loaded from [esp + 4] */
    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100330(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t value = rd16(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100330(g, ptr, value);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
