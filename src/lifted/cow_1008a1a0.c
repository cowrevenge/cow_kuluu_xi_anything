/* f_0x1008a1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008a1a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    if (rd8(self + 0xeeu) == 8u)
    {
        edx = in_edx;
        goto L_1008a1ca;
    }
    if (rd32(self + 0xa0u) == 0u)
    {
        edx = in_edx;
        goto L_1008a1d4;
    }
    ecx = rd32(self + 0xa0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10085490u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1008a1d4;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1009aaf0u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        edx = t4;
        goto L_1008a1d4;
    }
    edx = t4;
L_1008a1ca: ;
    wr32(self + 0x190u, 0x20696863u);
L_1008a1d4: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10087dc0u), self, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 2u)
    {
        edx = t7;
        goto L_1008a2b1;
    }
    ecx = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        if (rd32(self + 0x170u) != 0x2fu)
        {
            eax = rd32(self + 0x190u);
        }
        else
        {
            eax = rd32(self + 0x194u);
        }
    }
    else
    {
        eax = t8;
        edx = t9;
        g->esp = sp0 - 4u;
        t10 = cow_call_regs(g, COW_IMG(0x1008e130u), eax, self, g->edx, 1, 0);
        if ((uint8_t)t10 != 0u) goto L_1008a213;
        t11 = rd32(self + 0x12cu);
        if (t11 >> 0x1eu & 1u) goto L_1008a213;
        eax = t11;
        if (eax >> 0x1fu == 0u) goto L_1008a21b;
L_1008a213: ;
        eax = rd32(self + 0x194u);
    }
L_1008a23a: ;
    t12 = rd32(self + 0x198u);
    wr32(self + 0x1a8u, eax);
    wr32(self + 0x1a4u, eax);
    wr32(self + 0x1acu, eax);
    t13 = rd32(self + 0x19cu);
    wr32(self + 0x1b0u, t12);
    wr32(self + 0x1b4u, t13);
    if (rd8(self + 0xeeu) == 2u)
    {
        eax = (t13 & 0xffffff00u) | rd8(self + 0xeeu);
        edx = t12;
        goto L_1008a272;
    }
    eax = (t13 & 0xffffff00u) | rd8(self + 0xeeu);
    edx = t12;
    if ((uint8_t)eax != 7u) goto L_1008a2e0;
L_1008a272: ;
    if (rd16(self + 0xfcu) < 0x3c0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0xfcu);
        goto L_1008a285;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0xfcu);
    if ((uint16_t)eax <= 0x3c9u) goto L_1008a29d;
L_1008a285: ;
    if ((uint16_t)eax < 0x979u) goto L_1008a291;
    if ((uint16_t)eax <= 0x97du) goto L_1008a29d;
L_1008a291: ;
    if ((uint16_t)eax < 0x9bfu) goto L_1008a2e0;
    if ((uint16_t)eax > 0x9c3u) goto L_1008a2e0;
L_1008a29d: ;
    t14 = rd32(self + 0x190u);
    wr32(self + 0x1acu, t14);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1008a2f0u), eax, self, edx);
L_1008a21b: ;
    eax = rd32(self + 0x1a0u);
    goto L_1008a23a;
L_1008a2b1: ;
    wr32(self + 0x1acu, 0x20316664u);
    wr32(self + 0x1a8u, 0x20746664u);
    wr32(self + 0x1a4u, 0x20746664u);
    wr32(self + 0x1b0u, 0x206b7261u);
    wr32(self + 0x1b4u, 0x20727368u);
    eax = 0x20746664u;
L_1008a2e0: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1008a2f0u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008a1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008a1a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
