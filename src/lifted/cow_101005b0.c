/* f_0x101005b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the second and third stack arguments, then tail-calls FUN_101003e0 with the resulting three arguments.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101005b0(Guest* g, uint32_t sp0)
{
    uint32_t arg1;
    uint32_t arg2;
    uint32_t arg3;

    /* 101005b0: mov eax, dword ptr [esp + 0xc] */
    arg3 = rd32(sp0 + 0xCu);

    /* 101005b4: mov dword ptr [esp + 8], 0x22 */
    wr32(sp0 + 0x8u, 0x22u);
    arg2 = 0x22u;

    /* 101005bc: and eax, 0xffff */
    arg3 &= 0xFFFFu;

    /* 101005c1: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, arg3);

    /*
     * 101005c5: jmp 0x101003e0
     *
     * Tail call to a cdecl callee with three stack arguments.
     * The original passes the caller's stack arguments through unchanged
     * except for the two slots modified above.
     */
    arg1 = rd32(sp0 + 0x4u);

    cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg1, arg2, arg3);

    /*
     * The judge compares eax and edx.  The tail-called function leaves
     * both registers as it last wrote them; preserve that state.
     */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101005b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101005b0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
