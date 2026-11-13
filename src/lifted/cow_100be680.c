/* f_0x100be680 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Writes 0x1E and the low byte of the second stack argument into the two bytes at the first stack argument, and returns the first argument advanced by two.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_100be680(Guest* g, uint32_t dst, uint32_t value)
{
    const uint8_t c = (uint8_t)value;

    /* mov cl, byte ptr [esp + 8] preserves the upper 24 bits of ecx. */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)c;

    /* Keep eax as the original would if a later write faults. */
    g->eax = dst;
    wr8(dst, 0x1Eu);

    g->eax = dst + 1u;
    wr8(dst + 1u, c);

    return dst + 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100be680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dst = rd32(sp0 + 4u);

    /* Original has already loaded eax before reading the second argument. */
    g->eax = dst;
    const uint32_t value = rd8(sp0 + 8u);

    const uint32_t result = cow_fn_100be680(g, dst, value);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
