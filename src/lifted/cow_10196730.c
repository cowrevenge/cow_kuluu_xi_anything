/* f_0x10196730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Searches a 16-byte-stride table for a matching key and, if found, stores the supplied value at index*16+8.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10196730(Guest* g, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    const uint32_t count = rd32(sp0 + 8u);

    /* Original pushes before loading the table/key arguments. */
    wr32(sp0 - 4u, saved_esi);          /* push esi */
    wr32(sp0 - 8u, saved_edi);          /* push edi */

    if ((int32_t)count <= 0)
    {
        g->eax = 0u;
        g->edi = rd32(sp0 - 8u);        /* pop edi */
        g->esi = rd32(sp0 - 4u);        /* pop esi */
        return;
    }

    uint32_t base = rd32(sp0 + 4u);     /* [esp+0xc] after two pushes == [sp0+4] */
    uint32_t key  = rd32(sp0 + 12u);    /* [esp+0x14] after two pushes == [sp0+12] */

    uint32_t eax = 0u;
    uint32_t ecx = base + 0xCu;

    for (;;)
    {
        if (rd32(ecx) == key)
        {
            const uint32_t value = rd32(sp0 + 16u); /* [esp+0x18] after two pushes == [sp0+16] */
            const uint32_t off = (uint32_t)(eax << 4);
            wr32(base + off + 8u, value);

            g->eax = off;
            g->edi = rd32(sp0 - 8u);                /* pop edi */
            g->esi = rd32(sp0 - 4u);                /* pop esi */
            return;
        }

        eax = (uint32_t)(eax + 1u);
        ecx = (uint32_t)(ecx + 0x10u);

        if (!((int32_t)eax < (int32_t)count))
        {
            g->eax = eax;
            g->edi = rd32(sp0 - 8u);                /* pop edi */
            g->esi = rd32(sp0 - 4u);                /* pop esi */
            return;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196730(Guest* g)
{
    const uint32_t sp0 = g->esp;

    cow_fn_10196730(g, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
