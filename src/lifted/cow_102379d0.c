/* f_0x102379d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102379d0(Guest* g)
{
    double d4;
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
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x1cu) == 1u) goto L_10237acd;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10237a35;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10237af4u) + eax * 4u);
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 8u);
    switch (t1 - RD)
    {
    case 0x102379f8u: goto L_102379f8;
    case 0x10237a05u: goto L_10237a05;
    case 0x10237a35u: goto L_10237a35;
    case 0x10237a72u: goto L_10237a72;
    case 0x10237a93u: goto L_10237a93;
    case 0x10237abau: goto L_10237aba;
    default: rt_fatal(g, COW_IMG(0x102379f1u), "switch");
    }
    return 0;
L_102379f8: ;
    if ((int16_t)edx < 9) goto L_10237a05;
    eax = (uint32_t)(int16_t)edx;
    if ((int32_t)eax <= 10) goto L_10237a35;
L_10237a05: ;
    if ((int16_t)edx < 9)
    {
        t9 = (uint32_t)(int16_t)edx - 1u;
        wr32(self + 0x14u, t9);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    }
    if (rd32(COW_IMG(0x10456aa4u)) != 0u) goto L_10237a39;
    eax = rd32(COW_IMG(0x10456aa4u));
    t10 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_fastcall(g, COW_IMG(0x10251710u), rd32(COW_IMG(0x106693fcu)), t10, 1, t10);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_10237a35: ;
    g->edx = edx;
    return eax;
L_10237a39: ;
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
    t13 = eax + ecx * 8u;
    t14 = rd32(COW_IMG(0x10668fd8u));
    wr32(t14 + 0x1cu, t13);
    g->edx = t14;
    return eax;
L_10237a72: ;
    if (rd16(sp0 + 8u) != 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237a9e;
    }
    t5 = rd32(self);
    wr32(sp0 + 8u, 9u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(t5 + 0x18u), t5, self, edx);
L_10237a93: ;
    if (rd16(sp0 + 8u) == 9u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_10237aab;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
L_10237a9e: ;
    if ((uint16_t)eax != 0xau)
    {
        t6 = (uint32_t)(int16_t)eax - 1u;
        wr32(self + 0x14u, t6);
        edx = t6;
    }
L_10237aab: ;
    wr32(self + 0x18u, 1u);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10237aba: ;
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->edx = t3;
    fpush(g, d4);
    return t2;
L_10237acd: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10237a35;
    }
    eax = rd32(self + 8u);
    t15 = rd16(self + 0x14u);
    wr32(sp0 + 8u, 0u);
    t16 = (self & 0xffff0000u) | (uint16_t)(t15 + 1u);
    wr32(sp0 + 4u, t16);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10118db0u), eax, eax, in_edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102379d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102379d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
