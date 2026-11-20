/* f_0x10237350 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies a random string from a table into the caller's buffer, then appends one of several random two-byte suffixes depending on random remainders.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */

static uint32_t cow_scasb_zero(uint32_t addr)
{
    uint32_t edi = addr;
    uint32_t ecx = 0xFFFFFFFFu;

    while (ecx != 0u) {
        uint8_t b = rd8(edi);
        ++edi;
        --ecx;
        if (b == 0u) break;
    }

    return edi;
}

static uint32_t cow_scasb_len(uint32_t addr, uint32_t *end_out)
{
    uint32_t edi = addr;
    uint32_t ecx = 0xFFFFFFFFu;

    while (ecx != 0u) {
        uint8_t b = rd8(edi);
        ++edi;
        --ecx;
        if (b == 0u) break;
    }

    *end_out = edi;
    return ~ecx;
}

void cow_fn_10237350(Guest* g, uint32_t param)
{
    uint32_t esi;
    uint32_t r;
    int32_t div5;
    int32_t rem2;
    uint32_t table_idx;
    uint32_t src;
    uint32_t dst;
    uint32_t rem100;
    uint32_t src_len;
    uint32_t src_end;
    uint32_t edi;
    uint32_t ecx;
    uint32_t edx;

    r = cow_cdecl(g, COW_IMG(0x103149e0u), 0);
    esi = r & 0x8000001fu;
    if ((int32_t)esi < 0) {
        esi = (esi - 1u) | 0xffffffe0u;
        esi = esi + 1u;
    }

    r = cow_cdecl(g, COW_IMG(0x103149e0u), 0);
    div5 = (int32_t)r;
    rem2 = div5 % 5;

    table_idx = (uint32_t)(rem2 + 5 * (int32_t)esi);
    src = rd32(COW_IMG(0x10387498u) + table_idx * 4u);

    dst = param;
    for (;;) {
        uint8_t b = rd8(src);
        ++src;
        wr8(dst, b);
        ++dst;
        if (b == 0u) break;
    }

    r = cow_cdecl(g, COW_IMG(0x103149e0u), 0);
    rem100 = (uint32_t)((int32_t)r % 100);

    if ((int32_t)rem100 < 8) {
        edi = cow_scasb_zero(param);
        wr16(edi - 1u, rd16(COW_IMG(0x10353b6cu)));
    } else if ((int32_t)rem100 < 16) {
        src = rd32(COW_IMG(0x10387498u) + (uint32_t)rem2 * 4u);

        src_len = cow_scasb_len(src, &src_end);
        edi = src_end - src_len;

        edi = cow_scasb_zero(param);
        --edi;

        ecx = src_len >> 2;
        while (ecx != 0u) {
            wr32(edi, rd32(edi));
            wr32(edi, rd32(src));
            edi += 4u;
            src += 4u;
            --ecx;
        }

        ecx = src_len & 3u;
        while (ecx != 0u) {
            wr8(edi, rd8(src));
            ++edi;
            ++src;
            --ecx;
        }
    }

    r = cow_cdecl(g, COW_IMG(0x103149e0u), 0);
    rem100 = (uint32_t)((int32_t)r % 100);

    if ((int32_t)rem100 < 9) {
        edi = cow_scasb_zero(param);
        wr16(edi - 1u, rd16(COW_IMG(0x1034f7b4u)));
    } else if (rem100 == 0xBu) {
        edi = cow_scasb_zero(param);
        wr16(edi - 1u, rd16(COW_IMG(0x10357c8cu)));
    } else if (rem100 == 0xCu) {
        edi = cow_scasb_zero(param);
        wr16(edi - 1u, rd16(COW_IMG(0x10387fc4u)));
    } else if (rem100 == 0xDu) {
        edi = cow_scasb_zero(param);
        wr16(edi - 1u, rd16(COW_IMG(0x10357c98u)));
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10237350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebx = g->ebx;
    const uint32_t esi = g->esi;
    const uint32_t edi = g->edi;
    const uint32_t ebp = g->ebp;

    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10237350(g, param);

    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
