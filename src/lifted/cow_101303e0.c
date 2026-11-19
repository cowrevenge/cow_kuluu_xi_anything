/* f_0x101303e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global table pointer is non-null, collect up to 16 records from the linked list, * then merge each record into the corresponding 12-byte entry of the global table.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101303e0(Guest* g, uint32_t sp0)
{
    const uint32_t global_ptr = rd32(COW_IMG(0x105781acu));

    if (global_ptr == 0u)
    {
        /* Original leaves eax and edx untouched on this path. */
        return g->eax;
    }

    const uint32_t buf = cow_frame(g, sp0, 0xc0u);

    /* rep stosd dword ptr es:[edi], eax with ecx=0x30, eax=0 */
    for (uint32_t i = 0u; i < 0x30u; ++i)
    {
        wr32(buf + i * 4u, 0u);
    }

    uint32_t node = cow_cdecl(g, COW_IMG(0x100e5290u), 0u);
    uint32_t count = 0u;

    for (;;)
    {
        if (node == 0u)
        {
            break;
        }

        uint32_t idx = rd32(node);
        uint32_t edx = 0u;
        edx |= (uint32_t)rd8(node + 5u);

        uint32_t al = (uint32_t)rd8(node + 4u);

        uint32_t off = idx * 3u;
        off = off * 4u;

        /* [esp + ecx + 0x10] with esp = sp0 - 0xcc and buf = sp0 - 0xc0
         * => buf + 4 + ecx
         * [esp + ecx + 0x14] => buf + 8 + ecx
         */
        wr32(buf + 4u + off, edx);
        wr8(buf + 8u + off, (uint8_t)al);

        node = cow_cdecl(g, COW_IMG(0x100e52c0u), 0u);

        ++count;
        if (count >= 0x10u)
        {
            break;
        }
    }

    /* lea ecx, [esp + 0x14] with esp = sp0 - 0xcc => buf + 8 */
    uint32_t ecx = buf + 8u;

    /* lea eax, [ebp + 0xc] */
    uint32_t eax = global_ptr + 0xcu;

    uint32_t edi = 0x10u;

    uint32_t final_esi = g->esi;
    uint32_t final_edx = g->edx;

    for (;;)
    {
        /* mov esi, dword ptr [ecx - 4] */
        uint32_t esi = rd32(ecx - 4u);

        /* mov edx, dword ptr [eax - 4] */
        uint32_t edx = rd32(eax - 4u);

        if (edx == esi)
        {
            /* mov dl, byte ptr [eax] */
            uint32_t dl = (uint32_t)rd8(eax);

            /* cmp dl, byte ptr [ecx] */
            if (dl == (uint32_t)rd8(ecx))
            {
                goto next_entry;
            }
        }

        /* mov dl, byte ptr [ecx] */
        uint32_t dl = (uint32_t)rd8(ecx);

        if (dl == 0u)
        {
            /* lea esi, [eax - 8] */
            uint32_t esi_clear = eax - 8u;

            /* xor edx, edx */
            edx = 0u;

            wr32(esi_clear, 0u);
            wr32(esi_clear + 4u, 0u);
            wr32(esi_clear + 8u, 0u);
        }
        else
        {
            /* mov byte ptr [eax], dl */
            wr8(eax, (uint8_t)dl);

            /* mov dl, byte ptr [eax - 8] */
            dl = (uint32_t)rd8(eax - 8u);

            /* or dl, 1 */
            dl |= 1u;

            /* mov dword ptr [eax - 4], esi */
            wr32(eax - 4u, esi);

            /* mov word ptr [eax + 2], 0 */
            wr16(eax + 2u, 0u);

            /* mov byte ptr [eax + 1], 0 */
            wr8(eax + 1u, 0u);

            /* mov byte ptr [eax - 8], dl */
            wr8(eax - 8u, (uint8_t)dl);
        }

    next_entry:
        ecx += 0xcu;
        eax += 0xcu;

        final_esi = esi;
        final_edx = edx;

        --edi;
        if (edi != 0u)
        {
            continue;
        }

        break;
    }

    /* At the original ret:
     *   eax = ebp + 0xc + 16*0xc = global_ptr + 0xcc
     *   edx is whatever the last compare-loop iteration left in edx.
     */
    g->edx = final_edx;
    (void)final_esi; /* esi is restored by the original pop sequence; not needed here. */

    return global_ptr + 0xccu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101303e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101303e0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
