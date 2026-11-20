/* f_0x101dd650 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Appends three 0x29-byte source strings to a destination buffer, then copies three 0x29-byte records with strncpy.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */

static uint32_t cow_repne_scasb_zero(uint32_t edi, uint32_t *out_ecx)
{
    uint32_t ecx = 0xFFFFFFFFu;

    while (ecx != 0u)
    {
        uint32_t b = rd8(edi);
        ecx--;
        edi++;
        if (b == 0u)
        {
            break;
        }
    }

    *out_ecx = ecx;
    return edi;
}

static uint32_t cow_rep_movsd(uint32_t edi, uint32_t esi, uint32_t ecx)
{
    while (ecx != 0u)
    {
        wr32(edi, rd32(esi));
        edi += 4u;
        esi += 4u;
        ecx--;
    }
    return edi;
}

static uint32_t cow_rep_movsb(uint32_t edi, uint32_t esi, uint32_t ecx)
{
    while (ecx != 0u)
    {
        wr8(edi, rd8(esi));
        edi++;
        esi++;
        ecx--;
    }
    return edi;
}

void cow_fn_101dd650(Guest* g, uint32_t self, uint32_t dest, uint32_t idx, uint32_t other)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t ebp;
    uint32_t count;
    uint32_t len;
    uint32_t src;
    uint32_t dst;

    (void)g;

    eax = idx;
    edx = eax + eax * 4u;
    eax = eax + edx * 8u;

    wr8(dest, 0u);

    ecx = self + eax * 2u;
    eax = eax + ecx + 0x1au;

    edx = eax;

    for (count = 3u; count != 0u; count--)
    {
        if (rd8(edx) != 0u)
        {
            if (rd8(dest) != 0u)
            {
                edi = dest;
                ecx = 0xFFFFFFFFu;
                edi = cow_repne_scasb_zero(edi, &ecx);
                wr16(edi - 1u, rd16(COW_IMG(0x10350e4cu)));
            }

            edi = edx;
            ecx = 0xFFFFFFFFu;
            edi = cow_repne_scasb_zero(edi, &ecx);
            ecx = ~ecx;
            edi -= ecx;

            esi = edi;
            ebp = ecx;

            edi = dest;
            ecx = 0xFFFFFFFFu;
            edi = cow_repne_scasb_zero(edi, &ecx);

            len = ebp;
            dst = edi - 1u;
            src = esi;

            ecx = len >> 2;
            dst = cow_rep_movsd(dst, src, ecx);
            src += (len >> 2) * 4u;

            ecx = len & 3u;
            cow_rep_movsb(dst, src, ecx);
        }

        edx += 0x29u;
    }

    esi = self + idx * 0x7bu + 0x1au;

    eax = other;
    ecx = eax + eax * 4u;
    eax = eax + ecx * 8u;
    ecx = self + eax * 2u;
    edi = eax + ecx + 0x1au;

    for (count = 3u; count != 0u; count--)
    {
        cow_cdecl(g, COW_IMG(0x10312090u), 3u, edi, esi, 0x29u);
        esi += 0x29u;
        edi += 0x29u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd650(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t dest = rd32(sp0 + 4u);
    const uint32_t idx = rd32(sp0 + 8u);
    const uint32_t other = rd32(sp0 + 12u);

    const uint32_t saved_eax = g->eax;
    const uint32_t saved_ecx = g->ecx;
    const uint32_t saved_edx = g->edx;
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    cow_fn_101dd650(g, self, dest, idx, other);

    g->esp = sp0;
    g->eax = saved_eax;
    g->ecx = saved_ecx;
    g->edx = saved_edx;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
