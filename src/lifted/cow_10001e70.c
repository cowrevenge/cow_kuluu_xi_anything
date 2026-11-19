/* f_0x10001e70 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Replaces the global string at [0x103d3c88] with a newly allocated concatenation of that string, a 16-bit separator from [0x1034f2b8], and the supplied parameter string; returns 1 on success or 0 if al

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */

static uint32_t cow_scasb_zero(uint32_t start, uint32_t *edi_after)
{
    uint32_t ecx = 0xFFFFFFFFu;
    uint32_t edi = start;

    while (ecx != 0u)
    {
        ecx--;
        uint8_t b = rd8(edi);
        edi++;
        if (b == 0u)
            break;
    }

    if (edi_after)
        *edi_after = edi;

    return (~ecx) - 1u;
}

static void cow_movsd(uint32_t dst, uint32_t src, uint32_t count)
{
    while (count != 0u)
    {
        wr32(dst, rd32(src));
        dst += 4u;
        src += 4u;
        count--;
    }
}

static void cow_movsb(uint32_t dst, uint32_t src, uint32_t count)
{
    while (count != 0u)
    {
        wr8(dst, rd8(src));
        dst++;
        src++;
        count--;
    }
}

uint32_t cow_fn_10001e70(Guest* g, uint32_t param, uint32_t eax_in)
{
    const uint32_t global_addr = COW_IMG(0x103d3c88u);
    const uint32_t sep_addr    = COW_IMG(0x1034f2b8u);

    if (param == 0u)
        return (eax_in & 0xFFFFFF00u) | 1u;

    uint32_t global = rd32(global_addr);

    uint32_t edi;
    uint32_t len_global = cow_scasb_zero(global, &edi);
    uint32_t len_param  = cow_scasb_zero(param, &edi);

    uint32_t size = len_global + len_param + 2u;

    uint32_t newbuf = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size);

    if (newbuf == 0u)
        return 0u;

    global = rd32(global_addr);

    uint32_t src = global;
    uint32_t dst = newbuf;
    for (;;)
    {
        uint8_t b = rd8(src);
        wr8(dst, b);
        src++;
        dst++;
        if (b == 0u)
            break;
    }

    uint32_t end_after_null;
    (void)cow_scasb_zero(newbuf, &end_after_null);
    wr16(end_after_null - 1u, rd16(sep_addr));

    uint32_t param_end_after_null;
    uint32_t len_param_plus_one = cow_scasb_zero(param, &param_end_after_null) + 1u;
    uint32_t param_start = param_end_after_null - len_param_plus_one;

    uint32_t new_end_after_null;
    (void)cow_scasb_zero(newbuf, &new_end_after_null);

    uint32_t copy_count = len_param_plus_one;
    uint32_t copy_dst = new_end_after_null - 1u;
    uint32_t copy_src = param_start;

    cow_movsd(copy_dst, copy_src, copy_count >> 2);
    cow_movsb(copy_dst + ((copy_count >> 2) << 2),
              copy_src + ((copy_count >> 2) << 2),
              copy_count & 3u);

    uint32_t old = rd32(global_addr);
    if (old != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, old);
    }

    wr32(global_addr, newbuf);

    return (g->eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t eax_in = g->eax;

    const uint32_t result = cow_fn_10001e70(g, param, eax_in);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
