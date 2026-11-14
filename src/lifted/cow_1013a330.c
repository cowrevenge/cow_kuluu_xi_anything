/* f_0x1013a330 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by 0x20 and calls FUN_102213e0, then loads ecx from a global and calls FUN_1013a010, finally returning with eax/edx left by the last call.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1013a330(Guest* g)
{
    const uint32_t ecx0 = g->ecx;

    /* 1013a330: add ecx, 0x20 */
    const uint32_t ecx1 = ecx0 + 0x20u;

    /* 1013a333: call 0x102213e0
       __fastcall with first argument in ecx; callee has bare ret, so caller pops.
       No stack arguments are passed. */
    cow_thiscall_cdecl(g, COW_IMG(0x102213e0u), ecx1, 0u);

    /* 1013a338: mov ecx, dword ptr [0x105781fc] */
    const uint32_t ecx2 = rd32(COW_IMG(0x105781fcu));

    /* 1013a33e: call 0x1013a010
       ecx is set from the global before the call; no stack arguments are passed. */
    cow_thiscall_cdecl(g, COW_IMG(0x1013a010u), ecx2, 0u);

    /* 1013a343: ret 4
       eax and edx are whatever the last call left in them. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1013a330(g);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
