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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ea9e0u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101ea9e0;
    case 0x101ea9eeu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ea9ee;
    case 0x101ea9f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ea9f5;
    case 0x101ea9feu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ea9fe;
    case 0x101eaa07u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa07;
    case 0x101eaa10u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa10;
    case 0x101eaa21u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa21;
    case 0x101eaa2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa2f;
    case 0x101eaa31u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa31;
    case 0x101eaa36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa36;
    case 0x101eaa48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa48;
    case 0x101eaa51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa51;
    case 0x101eaa5au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101eaa5a;
    case 0x101eaa80u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaa80;
    case 0x101eaa8bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaa8b;
    case 0x101eaa92u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaa92;
    case 0x101eaa9bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaa9b;
    case 0x101eaaa3u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaaa3;
    case 0x101eaaadu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaaad;
    case 0x101eaab5u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaab5;
    case 0x101eaabfu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaabf;
    case 0x101eaac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaac6;
    case 0x101eaaf0u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaaf0;
    case 0x101eaafbu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eaafb;
    case 0x101eab02u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab02;
    case 0x101eab0bu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab0b;
    case 0x101eab13u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab13;
    case 0x101eab1du: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab1d;
    case 0x101eab25u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab25;
    case 0x101eab2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab2c;
    case 0x101eab42u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab42;
    case 0x101eab49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eab49;
    case 0x101eac99u: eax = g->eax; self = g->ecx; in_esi = g->esi; goto E_101eac99;
    case 0x101eac9cu: eax = g->eax; self = g->ecx; in_esi = g->esi; goto E_101eac9c;
    case 0x101eac9fu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eac9f;
    case 0x101eacb4u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eacb4;
    case 0x101eacc9u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101eacc9;
    case 0x101eacdeu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; goto E_101eacde;
    default: break;
    }
#endif

    COW_AT(101eac90)
    if ((uint32_t)(int16_t)rd16(self + 0x14u) == 0u) goto L_101eacc9;
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    COW_AT(101eac99)
    if (eax == 1u) goto L_101eacb4;
    eax = eax - 1u;
    COW_AT(101eac9c)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101eacde;
    }
    COW_AT(101eac9f)
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t1);
    wr32(sp0 + 4u, t2);
    edx = t2;
    COW_AT(101eaaf0)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eab49;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(101eaafb)
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
    COW_AT(101ea9e0)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eaa5a;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(101ea9ee)
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
    COW_AT(101ea9f5)
    if ((int16_t)rd16(self + 0x1au) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
        goto L_101eaa5a;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
    COW_AT(101ea9fe)
    wr16(self + 0x1au, (uint16_t)(eax - 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax - 1u;
L_101eaa07: ;
    COW_AT(101eaa07)
    if (rd32(COW_IMG(0x10662f68u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662f68u));
        ecx = self;
    }
    else
    {
        eax = rd32(COW_IMG(0x10662f68u));
    COW_AT(101eaa10)
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
    COW_AT(101eaa2f)
            eax = 0u;
        }
        else
        {
            eax = t20;
            edx = t22;
    COW_AT(101eaa21)
            g->eax = eax;
            g->esp = sp0 - 4u;
            t23 = cow_thiscall(g, COW_IMG(0x101cc9c0u), eax, 1, COW_IMG(0x1037d7a0u));
            t24 = g->ecx;
            eax = t23;
            ecx = t24;
        }
    COW_AT(101eaa31)
        wr32(COW_IMG(0x10662f68u), eax);
    }
    COW_AT(101eaa36)
    if ((int16_t)rd16(self + 0x1au) >= (int32_t)(rd32(eax + 0x39cu) - 1u))
    {
        eax = rd32(eax + 0x39cu) - 1u;
        edx = (uint32_t)(int16_t)rd16(self + 0x1au);
        goto L_101eaa5a;
    }
    eax = rd32(eax + 0x39cu) - 1u;
    ecx = (ecx & 0xffff0000u) | rd16(self + 0x1au);
    edx = (uint32_t)(int16_t)rd16(self + 0x1au);
    COW_AT(101eaa48)
    wr16(self + 0x1au, (uint16_t)(ecx + 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101eaa51: ;
    COW_AT(101eaa51)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 1u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_101eaa5a: ;
    COW_AT(101eaa5a)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101eaa80: ;
    COW_AT(101eaa80)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        goto L_101eaac6;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(101eaa8b)
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
    COW_AT(101eaa92)
    if ((int16_t)rd16(self + 0x18u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
        goto L_101eaac6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
    COW_AT(101eaa9b)
    wr16(self + 0x18u, (uint16_t)(eax - 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax - 1u;
L_101eaaa3: ;
    COW_AT(101eaaa3)
    if ((int16_t)rd16(self + 0x1au) >= 5)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
        goto L_101eaac6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
    COW_AT(101eaaad)
    wr16(self + 0x1au, (uint16_t)(eax + 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax + 1u;
L_101eaab5: ;
    COW_AT(101eaab5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 2u);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return t13;
L_101eaabf: ;
    COW_AT(101eaabf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_101eaac6: ;
    COW_AT(101eaac6)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101eab02: ;
    COW_AT(101eab02)
    if ((int16_t)rd16(self + 0x16u) <= 0)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
        goto L_101eab49;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
    COW_AT(101eab0b)
    wr16(self + 0x16u, (uint16_t)(eax - 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax - 1u;
L_101eab13: ;
    COW_AT(101eab13)
    if ((int16_t)rd16(self + 0x16u) >= 5)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
        goto L_101eab49;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x16u);
    COW_AT(101eab1d)
    wr16(self + 0x16u, (uint16_t)(eax + 1u));
    g->esi = in_esi;
    g->edx = edx;
    return eax + 1u;
L_101eab25: ;
    COW_AT(101eab25)
    if (rd16(self + 0x16u) != 0u) goto L_101eab49;
    COW_AT(101eab2c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381f80u), 1u, 0u);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_101eab42: ;
    COW_AT(101eab42)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x101ea9b0u), self, 1, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101eab49: ;
    COW_AT(101eab49)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101eacb4: ;
    COW_AT(101eacb4)
    t8 = rd32(sp0 + 8u);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t8);
    wr32(sp0 + 4u, t9);
    edx = t9;
    goto L_101eaa80;
L_101eacc9: ;
    COW_AT(101eacc9)
    t15 = rd32(sp0 + 8u);
    t16 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t15);
    wr32(sp0 + 4u, t16);
    edx = t16;
    goto L_101ea9e0;
L_101eacde: ;
    COW_AT(101eacde)
    g->esi = in_esi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101eac90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ea9e0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101ea9eeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101ea9f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ea9feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa07u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101eaa10u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101eaa21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa31u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101eaa80u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaa8bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaa92u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaa9bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaaa3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaaadu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaab5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaabfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaac6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaaf0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eaafbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab02u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab0bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab13u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab1du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab25u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab42u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eab49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eac99u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eac9cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eac9fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eacb4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eacc9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101eacdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101eac90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101eac90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
