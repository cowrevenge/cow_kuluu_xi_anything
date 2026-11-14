/* f_0x101e15c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100dc130, then returns (eax - this->0x74) <= 0x16 in al while preserving the upper 24 bits of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e15c0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    /* push esi */
    g->esp = sp0 - 4u;
    wr32(g->esp, saved_esi);

    /* mov esi, ecx */
    g->esi = self;
    g->ecx = self;

    /* call 0x100dc130 */
    cow_thiscall(g, COW_IMG(0x100dc130u), self, 0u);

    /* mov edx, dword ptr [esi + 0x74] */
    const uint32_t edx = rd32(g->esi + 0x74u);

    /* pop esi */
    g->esi = rd32(g->esp);
    g->esp += 4u;

    /* sub eax, edx */
    const uint32_t eax = g->eax - edx;

    /* cmp eax, 0x16 / setbe al */
    const uint32_t low = (eax <= 0x16u) ? 1u : 0u;
    return (eax & 0xFFFFFF00u) | low;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e15c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101e15c0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
