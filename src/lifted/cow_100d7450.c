/* f_0x100d7450 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   appends count bytes from src into a 64-entry circular byte buffer at self+0x18, updating head/count fields and calling FUN_100d75a0 for full blocks.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
static void cow_copy_100d7450(uint32_t dst, uint32_t src, uint32_t n)
{
    uint32_t q = n >> 2;
    while (q != 0u)
    {
        wr32(dst, rd32(src));
        dst += 4u;
        src += 4u;
        --q;
    }

    uint32_t r = n & 3u;
    while (r != 0u)
    {
        wr8(dst, rd8(src));
        dst += 1u;
        src += 1u;
        --r;
    }
}

void cow_fn_100d7450(Guest* g, uint32_t self, uint32_t src, uint32_t count)
{
    const uint32_t count8 = count * 8u;

    uint32_t edx = rd32(self + 0x10u);
    uint32_t eax = edx >> 3;
    edx = edx + count8;
    eax &= 0x3fu;

    wr32(self + 0x10u, edx);

    if (edx < count8)
    {
        wr32(self + 0x14u, rd32(self + 0x14u) + 1u);
    }

    uint32_t edi = rd32(self + 0x14u);
    uint32_t ebp = 0x40u;

    edi += (count >> 29);
    ebp -= eax;

    wr32(self + 0x14u, edi);

    if (count < ebp)
    {
        cow_copy_100d7450(self + 0x18u + eax, src, count);
        return;
    }

    cow_copy_100d7450(self + 0x18u + eax, src, ebp);

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;
    const uint32_t saved_esp = g->esp;

    cow_cdecl(g, COW_IMG(0x100d75a0u), 2u, self, self + 0x18u);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    g->esp = saved_esp;

    edi = ebp;
    uint32_t esi = ebp + 0x3fu;
    ebp = count;

    while (esi < ebp)
    {
        const uint32_t call_src = src + esi - 0x3fu;

        cow_cdecl(g, COW_IMG(0x100d75a0u), 2u, self, call_src);

        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        g->esp = saved_esp;

        esi += 0x40u;
        edi += 0x40u;
    }

    cow_copy_100d7450(self + 0x18u, src + edi, count - edi);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d7450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t src = rd32(sp0 + 8u);
    const uint32_t count = rd32(sp0 + 0xcu);

    cow_fn_100d7450(g, self, src, count);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
