/* f_0x10155610 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   builds a character buffer by copying a prefix, a formatted string, a strncpy tail, and two null-terminated appends.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=9 */

static uint32_t cow_repne_scasb_find_zero(uint32_t start, uint32_t *pLen)
{
    uint32_t p = start;
    uint32_t ecx = 0xFFFFFFFFu;

    while (ecx != 0u)
    {
        uint32_t b = rd8(p);
        ++p;
        --ecx;
        if (b == 0u)
            break;
    }

    uint32_t n = ~ecx;
    if (pLen != 0)
        *pLen = n;
    return p;
}

static void cow_rep_movsd(uint32_t edi, uint32_t esi, uint32_t count)
{
    while (count != 0u)
    {
        wr32(edi, rd32(esi));
        edi += 4u;
        esi += 4u;
        --count;
    }
}

static void cow_rep_movsb(uint32_t edi, uint32_t esi, uint32_t count)
{
    while (count != 0u)
    {
        wr8(edi, rd8(esi));
        ++edi;
        ++esi;
        --count;
    }
}

static void cow_append_string(uint32_t dst_start, uint32_t src_start)
{
    uint32_t src_end;
    uint32_t src_len;
    uint32_t dst_end;
    uint32_t dst_scan;
    uint32_t src;
    uint32_t dst;
    uint32_t ecx;

    src_end = cow_repne_scasb_find_zero(src_start, &src_len);
    (void)src_end;

    dst_scan = cow_repne_scasb_find_zero(dst_start, 0);
    dst = dst_scan - 1u;

    src = src_start;
    ecx = src_len;
    dst = dst;

    cow_rep_movsd(dst, src, ecx >> 2u);
    cow_rep_movsb(dst + ((ecx >> 2u) * 4u), src + ((ecx >> 2u) * 4u), ecx & 3u);
}

void cow_fn_10155610(Guest* g, uint32_t a0, uint32_t a1, uint32_t a2,
                     uint32_t a3, uint32_t a4, uint32_t a5,
                     uint32_t a6, uint32_t a7, uint32_t a8)
{
    uint32_t ebx = a3;
    uint32_t ebp = a0;
    uint32_t edi = a1;
    uint32_t esi = 0u;
    uint32_t eax = 0u;
    uint32_t ecx;
    uint32_t src;
    uint32_t dst;
    uint32_t b;
    uint32_t dst_start;
    uint32_t src_start;

    (void)a4;

    if (edi != 0u)
    {
        /* strncpy(ebx, ebp, edi) */
        cow_cdecl(g, COW_IMG(0x10312090u), 3, ebx, ebp, edi);

        /* FUN_10258170(a5, a6, 0, a8, (a7 == 4)) */
        eax = cow_cdecl(g, COW_IMG(0x10258170u), 5,
                        a5, a6, 0u, a8,
                        (a7 == 4u) ? 1u : 0u);

        esi = edi + 1u;

        /* copy NUL-terminated string from eax to ebx + edi */
        src = eax;
        dst = ebx + edi;
        for (;;)
        {
            b = rd8(src);
            ++src;
            wr8(dst, b);
            ++dst;
            if (b == 0u)
                break;
        }

        eax = edi + 2u;
    }

    ecx = rd32(g->esp + 0x1cu + 4u * 4u); /* [esp + 0x1c] after the four saved registers: a2 */
    /* More directly, and less fragile, use the adapter parameter a2. */
    ecx = a2;

    ebx = ebx + eax;
    ecx = ecx - esi;
    esi = esi + ebp;

    /* strncpy(ebx, esi, ecx) */
    cow_cdecl(g, COW_IMG(0x10312090u), 3, ebx, esi, ecx);

    /* FUN_10258060(a6, 0, a7) */
    edi = cow_cdecl(g, COW_IMG(0x10258060u), 3, a6, 0u, a7);

    /* First append: copy string returned by FUN_10258060 to the end of ebx. */
    dst_start = ebx;
    src_start = edi;
    cow_append_string(dst_start, src_start);

    /* Second append: copy string at ebp + a2 + 1 to the end of ebx. */
    dst_start = ebx;
    src_start = ebp + a2 + 1u;
    cow_append_string(dst_start, src_start);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10155610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);
    const uint32_t a5 = rd32(sp0 + 24u);
    const uint32_t a6 = rd32(sp0 + 28u);
    const uint32_t a7 = rd32(sp0 + 32u);
    const uint32_t a8 = rd32(sp0 + 36u);

    cow_fn_10155610(g, a0, a1, a2, a3, a4, a5, a6, a7, a8);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
