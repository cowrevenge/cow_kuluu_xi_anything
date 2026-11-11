/* f_0x10327350 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   XORs the low byte of edx with the byte at [eax], then tail-calls GetEnvironmentVariableA with three stack arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10327350(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    /* xor dl, byte ptr [eax] */
    uint8_t a = (uint8_t)(g->edx);
    uint8_t b = rd8(g->eax);
    uint8_t r = (uint8_t)(a ^ b);
    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)r;

    /* jmp dword ptr [0x103290c0] -> GetEnvironmentVariableA (stdcall, callee pops 12 bytes) */
    uint32_t target = rd32(COW_IMG(0x103290C0u));
    return cow_stdcall(g, target, 3, param1, param2, param3);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10327350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);
    const uint32_t result = cow_fn_10327350(g, param1, param2, param3);
    g->esp = sp0;
    rt_return(g, result, 12u);   /* GetEnvironmentVariableA is stdcall and pops 12 bytes */
}
/* COW_ADAPTER END */
