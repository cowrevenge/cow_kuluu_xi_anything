/* f_0x1030fe00 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   XORs the low byte of edx with the byte at [eax], then tail-calls RegSetValueExA with the original stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=6 */
uint32_t cow_fn_1030fe00(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3, uint32_t param4, uint32_t param5, uint32_t param6)
{
    /* xor dl, byte ptr [eax] */
    uint8_t a = (uint8_t)(g->edx);
    uint8_t b = rd8(g->eax);
    uint8_t r = (uint8_t)(a ^ b);
    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)r;

    /* jmp dword ptr [0x10329018] -> tail call to RegSetValueExA */
    uint32_t target = rd32(COW_IMG(0x10329018u));
    return cow_stdcall(g, target, 6, param1, param2, param3, param4, param5, param6);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030fe00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p2 = rd32(sp0 + 8u);
    const uint32_t p3 = rd32(sp0 + 12u);
    const uint32_t p4 = rd32(sp0 + 16u);
    const uint32_t p5 = rd32(sp0 + 20u);
    const uint32_t p6 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_1030fe00(g, p1, p2, p3, p4, p5, p6);

    g->esp = sp0;
    rt_return(g, result, 24u); /* RegSetValueExA is stdcall with 6 args -> pops 24 bytes */
}
/* COW_ADAPTER END */
