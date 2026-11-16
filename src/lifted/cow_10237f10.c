/* f_0x10237f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10237f10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if (rd32(self + 0x1cu) == 1u) goto L_10237fb6;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10237f57;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10237fd8u) + eax * 4u);
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
    switch (t1 - RD)
    {
    case 0x10237f38u: goto L_10237f38;
    case 0x10237f45u: goto L_10237f45;
    case 0x10237f57u: goto L_10237f57;
    case 0x10237f5bu: goto L_10237f5b;
    case 0x10237f7cu: goto L_10237f7c;
    case 0x10237fa3u: goto L_10237fa3;
    default: rt_fatal(g, COW_IMG(0x10237f31u), "switch");
    }
    return 0;
L_10237f38: ;
    if ((int16_t)edx < 7)
    {
        eax = (uint32_t)(int16_t)edx;
        goto L_10237f45;
    }
    eax = (uint32_t)(int16_t)edx;
    if ((int32_t)eax <= 8) goto L_10237f57;
L_10237f45: ;
    if ((int16_t)edx < 7)
    {
        t8 = (uint32_t)(int16_t)edx - 1u;
        wr32(self + 0x14u, t8);
        g->eax = t8;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_10237f57: ;
    g->edx = edx;
    return eax;
L_10237f5b: ;
    if (rd16(sp0 + 8u) != 7u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237f87;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    t4 = rd32(self);
    wr32(sp0 + 8u, 7u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, rd32(t4 + 0x18u), eax, self, t4);
L_10237f7c: ;
    if (rd16(sp0 + 8u) == 7u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237f94;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
L_10237f87: ;
    if ((uint16_t)eax != 8u)
    {
        t5 = (uint32_t)(int16_t)eax - 1u;
        wr32(self + 0x14u, t5);
        eax = t5;
    }
L_10237f94: ;
    wr32(self + 0x18u, 1u);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10237fa3: ;
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10237fb6: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10237f57;
    }
    eax = rd32(self + 8u);
    t11 = rd16(self + 0x14u);
    wr32(sp0 + 8u, 0u);
    t12 = (self & 0xffff0000u) | (uint16_t)(t11 + 1u);
    wr32(sp0 + 4u, t12);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, eax, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10237f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10237f10(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
