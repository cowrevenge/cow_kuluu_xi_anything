/* f_0x101003b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts the 16-bit third stack argument from the 16-bit field at offset 0x32 of the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101003b0(Guest* g, uint32_t target, uint32_t unused, uint32_t cx32)
{
    const uint16_t cx = (uint16_t)cx32;
    const uint32_t addr = target + 0x32u;

    (void)unused;

    /* Original order: mov eax, [esp+4]; mov cx, [esp+0xc]; sub word [eax+0x32], cx.
       The first instruction's effect on eax is returned by cow_fn and set by rt_return.
       The second instruction's effect on ecx is reproduced here before the memory operation. */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)cx;

    const uint16_t old = rd16(addr);
    const uint16_t result = (uint16_t)(old - cx);
    wr16(addr, result);

    return target;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101003b0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = 0u; /* not read by the original */
    const uint32_t arg2 = (uint32_t)rd16(sp0 + 0xcu);

    const uint32_t result = cow_fn_101003b0(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
