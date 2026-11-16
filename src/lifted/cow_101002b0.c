/* f_0x101002b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Subtracts the low byte of the third stack argument from the bytes at offsets 0x2b and 0x2c of the structure pointed to by the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101002b0(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)param2;

    const uint32_t p = param1;
    const uint8_t c = (uint8_t)param3;
    const uint32_t entry_edx = g->edx;

    /* mov cl, byte ptr [esp + 0xc] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (uint32_t)c;

    /* mov dl, byte ptr [eax + 0x2b]; sub dl, cl; mov byte ptr [eax + 0x2b], dl */
    uint8_t r1 = (uint8_t)((uint8_t)rd8(p + 0x2Bu) - c);
    wr8(p + 0x2Bu, r1);
    g->edx = (entry_edx & 0xFFFFFF00u) | (uint32_t)r1;

    /* mov dl, byte ptr [eax + 0x2c]; sub dl, cl; mov byte ptr [eax + 0x2c], dl */
    uint8_t r2 = (uint8_t)((uint8_t)rd8(p + 0x2Cu) - c);
    wr8(p + 0x2Cu, r2);
    g->edx = (entry_edx & 0xFFFFFF00u) | (uint32_t)r2;

    return p;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101002b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 0xCu);

    const uint32_t result = cow_fn_101002b0(g, param1, param2, param3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
