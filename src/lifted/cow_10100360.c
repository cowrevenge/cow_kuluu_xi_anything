/* f_0x10100360 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the low 16 bits of the third stack argument from the 16-bit word at [first stack argument + 0x30].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100360(Guest* g, uint32_t ptr, uint32_t unused, uint32_t value)
{
    (void)unused;

    const uint32_t edx = g->edx;

    /* mov eax, dword ptr [esp + 4] */
    g->eax = ptr;

    /* mov cx, word ptr [esp + 0xc] */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)value;

    /* sub word ptr [eax + 0x30], cx */
    const uint32_t addr = (uint32_t)(ptr + 0x30u);
    const uint16_t a = rd16(addr);
    const uint16_t b = (uint16_t)value;
    const uint16_t r = (uint16_t)(a - b);
    wr16(addr, r);

    /* edx is untouched by the original */
    g->edx = edx;

    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100360(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd16(sp0 + 0xcu);

    const uint32_t result = cow_fn_10100360(g, arg0, 0u, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
