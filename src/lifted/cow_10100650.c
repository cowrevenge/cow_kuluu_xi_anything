/* f_0x10100650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Rewrites the second and third stack arguments, then tail-calls FUN_101003e0 with the modified arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10100650(Guest* g)
{
    const uint32_t sp0 = g->esp;

    /* 10100650: mov eax, dword ptr [esp + 0xc] */
    uint32_t eax = rd32(sp0 + 0xCu);

    /* 10100654: mov dword ptr [esp + 8], 0x27 */
    wr32(sp0 + 0x8u, 0x27u);

    /* 1010065c: and eax, 0xffff */
    eax &= 0xFFFFu;

    /* 10100661: neg eax */
    eax = (uint32_t)(0u - eax);

    /* 10100663: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, eax);

    /* 10100667: jmp 0x101003e0 */
    /* Tail call: pass the three stack arguments as they now stand. */
    const uint32_t arg0 = rd32(sp0 + 0x4u);
    const uint32_t arg1 = rd32(sp0 + 0x8u);
    const uint32_t arg2 = rd32(sp0 + 0xCu);

    const uint32_t result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg0, arg1, arg2);

    /* Preserve whatever edx the tail-called function leaves behind. */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100650(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_10100650(g);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
