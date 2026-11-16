/* f_0x1025c8c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025c8c0(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    if (rd32(self + 0x18u) != 0u)
    {
        wr32(sp0 - 0xcu, 0x2000u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        t1 = rd32(self + 4u);
        wr32(sp0 - 0x1cu, t1);
        g->eax = t1;
        g->edx = sp0 - 4u;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0x2cu), rd32(rd32(self + 4u)), 5, t1, 0u, 0u, sp0 - 4u, 0x2000u);
        t3 = g->edx;
        if ((int32_t)t2 >= 0)
        {
            edx = t3;
            wr32(sp0 - 0xcu, in_esi);
            t4 = rd32(self + 0x14u) * rd32(self + 0x18u);
            wr32(sp0 - 0x10u, in_edi);
            t5 = rd32(self + 0x20u);
            t6 = rd32(sp0 - 4u);
            esi = t5;
            edi = t6;
            ecx = t4 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t4 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t7 = rd32(self + 4u);
            wr32(sp0 - 0x14u, t7);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(t7) + 0x30u), rd32(t7), 1, t7);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c8c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025c8c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
