/* f_0x10100530 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   subtracts the low 16 bits of the third stack argument from the 16-bit word at [first_arg + 10].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10100530(Guest* g, uint32_t ptr, uint32_t unused, uint32_t val)
{
    (void)unused;

    /* mov cx, word ptr [esp + 0xc] */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)(uint16_t)val;

    /* sub word ptr [eax + 0xa], cx */
    const uint32_t addr = ptr + 0xAu;
    const uint16_t old = rd16(addr);
    const uint16_t sub = (uint16_t)val;
    const uint16_t res = (uint16_t)(old - sub);
    wr16(addr, res);

    /* eax holds the loaded pointer; edx is unchanged from entry. */
    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100530(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t val = rd16(sp0 + 0xCu);

    const uint32_t result = cow_fn_10100530(g, ptr, 0u, val);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
