/* f_0x101d6850 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Releases/clears the two optional pointers stored at offsets 0x5c and 0x60 of the object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101d6850(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_esp = g->esp;
    uint32_t v;
    uint32_t result;

    /* Original: push esi */
    g->esp = saved_esp - 4u;
    wr32(g->esp, saved_esi);

    /* mov eax, [esi + 0x5c] / test eax, eax / je */
    v = rd32(self + 0x5cu);
    if (v != 0u)
    {
        /* push eax / call 0x10311bf0 / add esp, 4 */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, v);

        /* mov dword ptr [esi + 0x5c], 0 */
        wr32(self + 0x5cu, 0u);
    }

    /* mov eax, [esi + 0x60] / test eax, eax / je */
    v = rd32(self + 0x60u);
    if (v != 0u)
    {
        /* push eax / call 0x10311bf0 / add esp, 4 */
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, v);

        /* mov dword ptr [esi + 0x60], 0 */
        wr32(self + 0x60u, 0u);

        /* eax is whatever the second call left in eax */
        result = g->eax;
    }
    else
    {
        /* eax is the loaded zero */
        result = v;
    }

    /* Original: pop esi */
    g->esi = rd32(g->esp);
    g->esp += 4u;

    /* Restore caller-saved esi exactly as the original push/pop does. */
    g->esi = saved_esi;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101d6850(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
