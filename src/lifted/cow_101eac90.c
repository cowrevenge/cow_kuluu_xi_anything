/* f_0x101eac90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101eac90(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd16(self + 0x14u) == 0u) goto L_101eacc9;
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    if (eax == 1u) goto L_101eacb4;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101eacde;
    }
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    edx = t2;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eab49;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t3 = rd32(COW_IMG(0x101eab4cu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x101eab02u: goto L_101eab02;
    case 0x101eab13u: goto L_101eab13;
    case 0x101eab25u: goto L_101eab25;
    case 0x101eab42u: goto L_101eab42;
    default: rt_fatal(g, COW_IMG(0x101eaafbu), "switch");
    }
    return 0;
L_101ea9e0: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eaa5a;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t17 = rd32(COW_IMG(0x101eaa60u) + eax * 4u);
    switch (t17 - RD)
    {
    case 0x101ea9f5u: goto L_101ea9f5;
    case 0x101eaa07u: goto L_101eaa07;
    case 0x101eaa51u: goto L_101eaa51;
    default: rt_fatal(g, COW_IMG(0x101ea9eeu), "switch");
    }
    return 0;
L_101ea9f5: ;
    if ((int16_t)rd16(self + 0x1au) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
        goto L_101eaa5a;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
    wr16(self + 0x1au, (uint16_t)(eax - 1u));
    g->edx = edx;
    return eax - 1u;
L_101eaa07: ;
    if (rd32(COW_IMG(0x10662f68u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662f68u));
        ecx = self;
    }
    else
    {
        eax = rd32(COW_IMG(0x10662f68u));
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t20 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x3f4u);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            eax = 0u;
        }
        else
        {
            eax = t20;
            edx = t22;
            g->esp = sp0 - 4u;
            t23 = cow_thiscall(g, COW_IMG(0x101cc9c0u), eax, 1, COW_IMG(0x1037d7a0u));
            t24 = g->ecx;
            eax = t23;
            ecx = t24;
        }
        wr32(COW_IMG(0x10662f68u), eax);
    }
    if ((int16_t)rd16(self + 0x1au) >= (int32_t)(rd32(eax + 0x39cu) - 1u))
    {
        eax = rd32(eax + 0x39cu) - 1u;
        edx = (uint32_t)(int16_t)rd16(self + 0x1au);
        goto L_101eaa5a;
    }
    eax = rd32(eax + 0x39cu) - 1u;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x1au);
    edx = (uint32_t)(int16_t)rd16(self + 0x1au);
    wr16(self + 0x1au, (uint16_t)(ecx + 1u));
    g->edx = edx;
    return eax;
L_101eaa51: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 1u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_101eaa5a: ;
    g->edx = edx;
    return eax;
L_101eaa80: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eaac6;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t10 = rd32(COW_IMG(0x101eaaccu) + eax * 4u);
    switch (t10 - RD)
    {
    case 0x101eaa92u: goto L_101eaa92;
    case 0x101eaaa3u: goto L_101eaaa3;
    case 0x101eaab5u: goto L_101eaab5;
    case 0x101eaabfu: goto L_101eaabf;
    default: rt_fatal(g, COW_IMG(0x101eaa8bu), "switch");
    }
    return 0;
L_101eaa92: ;
    if ((int16_t)rd16(self + 0x18u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
        goto L_101eaac6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
    wr16(self + 0x18u, (uint16_t)(eax - 1u));
    g->edx = edx;
    return eax - 1u;
L_101eaaa3: ;
    if ((int16_t)rd16(self + 0x1au) >= 5)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
        goto L_101eaac6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
    wr16(self + 0x1au, (uint16_t)(eax + 1u));
    g->edx = edx;
    return eax + 1u;
L_101eaab5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 2u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101eaabf: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101eaac6: ;
    g->edx = edx;
    return eax;
L_101eab02: ;
    if ((int16_t)rd16(self + 0x16u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
        goto L_101eab49;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
    wr16(self + 0x16u, (uint16_t)(eax - 1u));
    g->edx = edx;
    return eax - 1u;
L_101eab13: ;
    if ((int16_t)rd16(self + 0x16u) >= 5)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
        goto L_101eab49;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
    wr16(self + 0x16u, (uint16_t)(eax + 1u));
    g->edx = edx;
    return eax + 1u;
L_101eab25: ;
    if (rd16(self + 0x16u) != 0u) goto L_101eab49;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f80u), 1u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101eab42: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101eab49: ;
    g->edx = edx;
    return eax;
L_101eacb4: ;
    t8 = rd32(sp0 + 8u);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t8);
    wr32(sp0 + 4u, t9);
    edx = t9;
    goto L_101eaa80;
L_101eacc9: ;
    t15 = rd32(sp0 + 8u);
    t16 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t15);
    wr32(sp0 + 4u, t16);
    edx = t16;
    goto L_101ea9e0;
L_101eacde: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eac90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eac90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
