/* f_0x10100700 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101003e0 with the caller's first argument unchanged, the second argument forced to 0x33, and the third argument masked to its low 16 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10100700(Guest* g, uint32_t sp0)
{
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    /* 10100704: mov dword ptr [esp + 8], 0x33 */
    wr32(sp0 + 8u, 0x33u);

    /* 1010070c: and eax, 0xffff */
    const uint32_t masked_arg3 = arg3 & 0xffffu;

    /* 10100711: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xcu, masked_arg3);

    /* 10100715: jmp 0x101003e0 */
    const uint32_t result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u,
                                      arg1,
                                      0x33u,
                                      masked_arg3);

    g->edx = g->edx;
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10100700(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
