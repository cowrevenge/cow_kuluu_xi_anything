/* f_0x10092900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10092900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x10092870u), self, in_edx, 0);
    t2 = g->edx;
    t3 = cow_fastcall(g, COW_IMG(0x10092800u), self, t2, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10092760u), self, 0);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x10092710u), self, t6, 0);
    t8 = g->edx;
    cow_fastcall(g, COW_IMG(0x100926c0u), self, t8, 0);
    t9 = g->edx;
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
        edx = t9;
    }
    else
    {
        eax = rd32(self + 0x120u);
        edx = t9;
        if ((rd8(self + 0x128u) & 4u) != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x100d44b0u), rd32(self + 0xa0u), 1, 3u);
            t10 = g->edx;
            edx = t10;
        }
        if (rd32(self + 0xa0u) != 0u)
        {
            ecx = rd32(self + 0xa0u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
            wr32(self + 0xa0u, 0u);
        }
        t11 = (rd32(self + 0x120u) & 0xffff00ffu) | (rd32(self + 0x120u) >> 8u & 0xfdu) << 8u;
        t12 = rd32(self + 0x128u);
        wr32(self + 0x120u, t11);
        t13 = rd8(self + 0x1bcu);
        wr32(self + 0x128u, t12 & 0xfffffffbu);
        if ((uint8_t)t13 == 1u)
        {
            eax = (t11 & 0xffffff00u) | t13;
            edx = t12 & 0xfffffffbu;
            goto L_1009298c;
        }
        eax = (t11 & 0xffffff00u) | t13;
        edx = t12 & 0xfffffffbu;
        if ((uint8_t)eax != 2u) goto L_10092993;
L_1009298c: ;
        wr8(self + 0x1bcu, 3u);
    }
L_10092993: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1008f1d0u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10092900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10092900(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
