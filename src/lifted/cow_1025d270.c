/* f_0x1025d270 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper on the object, clears its byte at +0x40, and increments its dword at +0x4c.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1025d270(Guest* g, uint32_t self)
{
    const uint32_t esp0 = g->esp;
    const uint32_t saved_esi = g->esi;

    /* Emulate: push esi; mov esi, ecx */
    g->esp = esp0 - 4u;
    wr32(g->esp, saved_esi);

    /* Original call occurs with ecx = self and esp = esp0 - 4. */
    cow_thiscall_cdecl(g, COW_IMG(0x1025c8b0u), self, 0u);

    /* Emulate: pop esi */
    g->esi = saved_esi;
    g->esp = esp0;

    /* mov eax, dword ptr [esi + 0x4c] */
    uint32_t eax = rd32(self + 0x4cu);

    /* mov byte ptr [esi + 0x40], 0 */
    wr8(self + 0x40u, 0u);

    /* inc eax */
    eax = eax + 1u;

    /* mov dword ptr [esi + 0x4c], eax */
    wr32(self + 0x4cu, eax);

    /*
     * edx is not written by this function after the call.
     * The call helper has already updated g->edx to whatever the callee left.
     */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025d270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_1025d270(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
