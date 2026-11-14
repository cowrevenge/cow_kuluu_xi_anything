/* f_0x101508f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10118f70 twice on this+0x4c and this+0x54, using [this+8] as the callee's this pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101508f0(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* 101508f3: mov ecx, dword ptr [esi + 8] */
    /* 101508f6: lea eax, [esi + 0x4c] */
    /* 101508f9: push eax */
    /* 101508fa: call 0x10118f70 */
    cow_thiscall(g, COW_IMG(0x10118f70u), rd32(self + 0x8u), 1u,
                 (uint32_t)(self + 0x4Cu));

    /* 101508ff: lea ecx, [esi + 0x54] */
    /* 10150902: push ecx */
    /* 10150903: mov ecx, dword ptr [esi + 8] */
    /* 10150906: call 0x10118f70 */
    cow_thiscall(g, COW_IMG(0x10118f70u), rd32(self + 0x8u), 1u,
                 (uint32_t)(self + 0x54u));

    /* 1015090b: pop esi */
    g->esi = saved_esi;

    /* 1015090c: ret */
    /* eax and edx are whatever the second call left behind. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101508f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_101508f0(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
