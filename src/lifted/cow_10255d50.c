/* f_0x10255d50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   copies dword-aligned data from [src, end) to dst, stopping before dst becomes null, and models the original's push/pop of esi because the loop may read from the saved slot.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10255d50(Guest* g, uint32_t src, uint32_t end, uint32_t dst)
{
    if (src == end)
    {
        return;
    }

    const uint32_t saved_esi = g->esi;
    const uint32_t slot = g->esp - 4u;

    /* push esi */
    g->esp = slot;
    wr32(slot, saved_esi);

    do
    {
        if (dst != 0u)
        {
            wr32(dst, rd32(src));
        }

        src = (uint32_t)(src + 4u);
        dst = (uint32_t)(dst + 4u);
    } while (src != end);

    /* pop esi */
    g->esi = rd32(slot);
    g->esp = slot + 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10255d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 4u);
    const uint32_t end = rd32(sp0 + 8u);
    const uint32_t dst = rd32(sp0 + 0xcu);

    cow_fn_10255d50(g, src, end, dst);

    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
