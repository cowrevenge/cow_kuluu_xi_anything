/* f_0x10237bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10237bb0(Guest* g)
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
    uint32_t t15;
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

    if (rd32(self + 0x1cu) == 1u) goto L_10237cad;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10237c15;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10237cd4u) + eax * 4u);
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
    switch (t1 - RD)
    {
    case 0x10237bd8u: goto L_10237bd8;
    case 0x10237be5u: goto L_10237be5;
    case 0x10237c15u: goto L_10237c15;
    case 0x10237c52u: goto L_10237c52;
    case 0x10237c73u: goto L_10237c73;
    case 0x10237c9au: goto L_10237c9a;
    default: rt_fatal(g, COW_IMG(0x10237bd1u), "switch");
    }
    return 0;
L_10237bd8: ;
    if ((int16_t)edx < 3) goto L_10237be5;
    eax = (uint32_t)(int16_t)edx;
    if ((int32_t)eax <= 4) goto L_10237c15;
L_10237be5: ;
    if ((int16_t)edx < 3)
    {
        t8 = (uint32_t)(int16_t)edx - 1u;
        wr32(self + 0x14u, t8);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    }
    if (rd32(COW_IMG(0x10456aa4u)) != 0u) goto L_10237c19;
    eax = rd32(COW_IMG(0x10456aa4u));
    t9 = rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_fastcall(g, COW_IMG(0x102517a0u), rd32(COW_IMG(0x106693fcu)), t9, 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_10237c15: ;
    g->edx = edx;
    return eax;
L_10237c19: ;
    if ((int32_t)(rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        ecx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        ecx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
        eax = (eax - 1u | 0xfffffff8u) + 1u;
    }
    t12 = eax + ecx * 8u;
    t13 = rd32(COW_IMG(0x10668fd8u));
    wr32(t13 + 0x1cu, t12);
    g->edx = t13;
    return eax;
L_10237c52: ;
    if (rd16(sp0 + 8u) != 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237c7e;
    }
    t4 = rd32(self);
    wr32(sp0 + 8u, 3u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(t4 + 0x18u), t4, self, edx);
L_10237c73: ;
    if (rd16(sp0 + 8u) == 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237c8b;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
L_10237c7e: ;
    if ((uint16_t)eax != 4u)
    {
        t5 = (uint32_t)(int16_t)eax - 1u;
        wr32(self + 0x14u, t5);
        edx = t5;
    }
L_10237c8b: ;
    wr32(self + 0x18u, 1u);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10237c9a: ;
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10237cad: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10237c15;
    }
    eax = rd32(self + 8u);
    t14 = rd16(self + 0x14u);
    wr32(sp0 + 8u, 0u);
    t15 = (self & 0xffff0000u) | (uint16_t)(t14 + 1u);
    wr32(sp0 + 4u, t15);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, eax, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10237bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10237bb0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
