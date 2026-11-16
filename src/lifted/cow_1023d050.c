/* f_0x1023d050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023d050(Guest* g)
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

    if (rd32(self + 0x30u) == 1u)
    {
        eax = rd32(self + 0x30u);
        edx = 1u;
        goto L_1023d090;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = 1u;
        goto L_1023d090;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x1023d174u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1023d070u: goto L_1023d070;
    case 0x1023d090u: edx = 1u; goto L_1023d090;
    case 0x1023d0b5u: goto L_1023d0b5;
    case 0x1023d0fbu: goto L_1023d0fb;
    case 0x1023d105u: goto L_1023d105;
    case 0x1023d14cu: goto L_1023d14c;
    default: rt_fatal(g, COW_IMG(0x1023d069u), "switch");
    }
    return 0;
L_1023d070: ;
    if ((uint32_t)(int8_t)rd8(self + 0xa5e0u) == 2u) goto L_1023d095;
    eax = (uint32_t)(int8_t)rd8(self + 0xa5e0u) - 2u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = 1u;
        goto L_1023d090;
    }
    if (rd32(self + 0xa5d8u) == 0u) goto L_1023d09f;
    eax = rd32(self + 0xa5d8u);
L_1023d089: ;
    wr32(self + 0xa5d8u, eax - 1u);
    eax = eax - 1u;
    edx = 1u;
L_1023d090: ;
    g->edx = edx;
    return eax;
L_1023d095: ;
    if (rd32(self + 0xa5d8u) != 0u)
    {
        eax = rd32(self + 0xa5d8u);
        goto L_1023d089;
    }
L_1023d09f: ;
    if ((int32_t)rd32(self + 0xa5d4u) <= 0)
    {
        eax = rd32(self + 0xa5d4u);
        edx = 1u;
        goto L_1023d090;
    }
    eax = rd32(self + 0xa5d4u);
    wr32(self + 0xa5d4u, eax - 1u);
    g->edx = 1u;
    return eax - 1u;
L_1023d0b5: ;
    if ((uint32_t)(int8_t)rd8(self + 0xa5e0u) == 2u) goto L_1023d0c4;
    eax = (uint32_t)(int8_t)rd8(self + 0xa5e0u) - 2u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = 1u;
        goto L_1023d090;
    }
L_1023d0c4: ;
    if (rd32(self + 0xa5d4u) + rd32(self + 0xa5d8u) == rd32(self + 0xa5dcu) - 1u)
    {
        eax = rd32(self + 0xa5d8u);
        edx = rd32(self + 0xa5d4u);
        goto L_1023d090;
    }
    eax = rd32(self + 0xa5d8u);
    edx = rd32(self + 0xa5d4u);
    if (eax != 8u) goto L_1023d0ef;
    wr32(self + 0xa5d4u, edx + 1u);
    g->edx = edx + 1u;
    return eax;
L_1023d0ef: ;
    wr32(self + 0xa5d8u, eax + 1u);
    g->edx = edx;
    return eax + 1u;
L_1023d0fb: ;
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_1023d105: ;
    t3 = rd32(self + 8u);
    wr32(self + 0x30u, 1u);
    wr8(t3 + 0x5du, 1u);
    t4 = rd16(sp0 + 8u);
    wr32(self + 0xa640u, 0xffffffffu);
    t5 = (uint32_t)(int16_t)t4 - 1u;
    wr32(self + 0x14u, t5);
    wr32(self + 0xa644u, 0xffffffffu);
    eax = COW_IMG(0x10376470u);
    ecx = self;
L_1023d133: ;
    t6 = rd8(eax);
    wr8(eax + self - COW_IMG(0x10376470u) + 0xa754u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_1023d133;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = self + 0xa754u - COW_IMG(0x10376470u);
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x1031091eu), 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10037b90u), t8, 0);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1023d14c: ;
    if (rd8(self + 0xa5e1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xa5e1u);
        edx = 1u;
        goto L_1023d090;
    }
    t2 = rd32(self);
    wr32(sp0 + 8u, 2u);
    wr32(sp0 + 4u, 5u);
    g->esp = sp0;
    g->edx = 1u;
    return cow_tailcall(g, rd32(t2 + 0x18u), t2, self, 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d050(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
