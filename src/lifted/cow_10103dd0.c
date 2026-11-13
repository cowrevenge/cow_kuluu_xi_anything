/* f_0x10103dd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns the second stack argument transformed by ((x*5+5)*5)*2, with its low byte set to 1 if that value is unsigned greater than 0x40 and to 0 otherwise.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10103dd0(Guest* g, uint32_t unused_arg0, uint32_t value)
{
    (void)g;
    (void)unused_arg0;

    uint32_t x = value;

    /* lea eax, [eax + eax*4 + 5] */
    x = (uint32_t)(x + x * 4u + 5u);

    /* lea eax, [eax + eax*4] */
    x = (uint32_t)(x + x * 4u);

    /* add eax, eax */
    x = (uint32_t)(x + x);

    /* cmp eax, 0x40 / seta al: preserve upper 31 bits, set low byte by unsigned > */
    return (x & 0xFFFFFF00u) | (x > 0x40u ? 1u : 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* Original reads only [esp + 8], the second stack argument. */
    const uint32_t value = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10103dd0(g, 0u, value);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
