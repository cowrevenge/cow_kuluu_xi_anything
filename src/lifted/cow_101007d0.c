/* f_0x101007d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds a byte computed from two stack arguments to the byte at offset 0x37 of the object pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101007d0(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    uint8_t cl = (uint8_t)param2;
    uint8_t dl = (uint8_t)param3;

    cl = (uint8_t)(cl - 2u);
    cl = (uint8_t)(cl << 5);
    cl = (uint8_t)(cl + dl);

    uint8_t old = rd8(param1 + 0x37u);
    dl = (uint8_t)(old + cl);

    wr8(param1 + 0x37u, dl);

    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)cl;
    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)dl;

    return param1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101007d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg2 = rd8(sp0 + 8u);
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg3 = rd8(sp0 + 0xcu);

    const uint32_t result = cow_fn_101007d0(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
