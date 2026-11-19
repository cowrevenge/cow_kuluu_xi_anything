/* f_0x10140bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10140bc0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q17;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10140bd1u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140bd1;
    case 0x10140be0u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140be0;
    case 0x10140beeu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140bee;
    case 0x10140bf9u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140bf9;
    case 0x10140c05u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c05;
    case 0x10140c13u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c13;
    case 0x10140c23u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c23;
    case 0x10140c2bu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c2b;
    case 0x10140c33u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c33;
    case 0x10140c4cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c4c;
    case 0x10140c5cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c5c;
    case 0x10140c69u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c69;
    case 0x10140c71u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c71;
    case 0x10140c7bu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c7b;
    case 0x10140c82u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c82;
    case 0x10140c99u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140c99;
    case 0x10140cb0u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140cb0;
    case 0x10140cbbu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140cbb;
    case 0x10140cc2u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140cc2;
    case 0x10140cd0u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140cd0;
    case 0x10140ce7u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140ce7;
    case 0x10140cfeu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140cfe;
    case 0x10140d15u: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140d15;
    case 0x10140d2cu: eax = g->eax; self = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140d2c;
    case 0x10140d33u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10140d33;
    default: break;
    }
#endif

    COW_AT(10140bc0)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0x1cu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10140d33;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(10140bd1)
    t1 = rd32(COW_IMG(0x10140d38u) + rd8(COW_IMG(0x10140d58u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10140be0u: goto L_10140be0;
    case 0x10140c05u: goto L_10140c05;
    case 0x10140c2bu: goto L_10140c2b;
    case 0x10140c4cu: goto L_10140c4c;
    case 0x10140c71u: edx = rd8(COW_IMG(0x10140d58u) + eax); goto L_10140c71;
    case 0x10140cb0u: edx = rd8(COW_IMG(0x10140d58u) + eax); goto L_10140cb0;
    case 0x10140d2cu: edx = rd8(COW_IMG(0x10140d58u) + eax); goto L_10140d2c;
    case 0x10140d33u: edx = rd8(COW_IMG(0x10140d58u) + eax); goto L_10140d33;
    default: rt_fatal(g, COW_IMG(0x10140bd9u), "switch");
    }
    return 0;
L_10140be0: ;
    COW_AT(10140be0)
    if ((int32_t)rd32(self + 0x28u) < (int32_t)rd32(self + 0x20u))
    {
        eax = rd32(self + 0x28u);
        edx = rd32(self + 0x20u);
        goto L_10140d33;
    }
    eax = rd32(self + 0x28u);
    edx = rd32(self + 0x20u);
    COW_AT(10140bee)
    wr32(self + 0x28u, eax - edx);
    if ((int32_t)(eax - edx) >= 0)
    {
        eax = eax - edx;
        goto L_10140d33;
    }
    eax = eax - edx;
L_10140bf9: ;
    COW_AT(10140bf9)
    wr32(self + 0x28u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10140c05: ;
    COW_AT(10140c05)
    if ((int32_t)rd32(self + 0x28u) >= (int32_t)rd32(self + 0x24u))
    {
        eax = rd32(self + 0x28u);
        edx = rd32(self + 0x24u);
        goto L_10140d33;
    }
    eax = rd32(self + 0x28u);
    edx = rd32(self + 0x24u);
    COW_AT(10140c13)
    t20 = eax + rd32(self + 0x20u);
    t21 = rd32(self + 0x20u);
    wr32(self + 0x28u, t20);
    if ((int32_t)(eax + t21) <= (int32_t)edx)
    {
        eax = t20;
        goto L_10140d33;
    }
    eax = t20;
    COW_AT(10140c23)
    wr32(self + 0x28u, edx);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10140c2b: ;
    COW_AT(10140c2b)
    if ((int32_t)rd32(self + 0x20u) <= 1)
    {
        edx = rd32(self + 0x20u);
        goto L_10140bf9;
    }
    edx = rd32(self + 0x20u);
    COW_AT(10140c33)
    q17 = (int64_t)cow_muls(0x66666667u, edx);
    t18 = (uint32_t)((int32_t)cow_qhi(q17) >> 2u);
    t19 = t18 + (t18 >> 0x1fu);
    wr32(self + 0x20u, t19);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t19;
    return t18 >> 0x1fu;
L_10140c4c: ;
    COW_AT(10140c4c)
    t14 = rd32(self + 0x24u);
    t15 = cow_divs(g, t14, rd32(self + 0x20u));
    t16 = cow_mods(g, t14, rd32(self + 0x20u));
    if ((int32_t)t15 < 10)
    {
        eax = t15;
        edx = t16;
        edi = t14;
        goto L_10140c69;
    }
    eax = t15;
    esi = rd32(self + 0x20u);
    COW_AT(10140c5c)
    wr32(self + 0x20u, esi * 0xau);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = esi * 0xau;
    return eax;
L_10140c69: ;
    COW_AT(10140c69)
    wr32(self + 0x28u, edi);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10140c71: ;
    COW_AT(10140c71)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
        goto L_10140c99;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
    COW_AT(10140c7b)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10140d33;
    }
    COW_AT(10140c82)
    t12 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, rd32(t12 + 0x18u), t12, self, edx);
L_10140c99: ;
    COW_AT(10140c99)
    t13 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t13;
    return cow_tailcall(g, rd32(t13 + 0x18u), eax, self, t13);
L_10140cb0: ;
    COW_AT(10140cb0)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_10140d33;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(10140cbb)
    t4 = rd32(COW_IMG(0x10140d78u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x10140cc2u: goto L_10140cc2;
    case 0x10140cd0u: goto L_10140cd0;
    case 0x10140ce7u: goto L_10140ce7;
    case 0x10140cfeu: goto L_10140cfe;
    case 0x10140d15u: goto L_10140d15;
    default: rt_fatal(g, COW_IMG(0x10140cbbu), "switch");
    }
    return 0;
L_10140cc2: ;
    COW_AT(10140cc2)
    t9 = rd32(self + 0x28u);
    g->eax = t9;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x10140df0u), self, edx, 1, t9);
    t11 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t11;
    return t10;
L_10140cd0: ;
    COW_AT(10140cd0)
    t8 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return cow_tailcall(g, rd32(t8 + 0x18u), eax, self, t8);
L_10140ce7: ;
    COW_AT(10140ce7)
    t7 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, rd32(t7 + 0x18u), t7, self, edx);
L_10140cfe: ;
    COW_AT(10140cfe)
    t6 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t6;
    return cow_tailcall(g, rd32(t6 + 0x18u), eax, self, t6);
L_10140d15: ;
    COW_AT(10140d15)
    t5 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 3u);
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, rd32(t5 + 0x18u), t5, self, edx);
L_10140d2c: ;
    COW_AT(10140d2c)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x10140df0u), self, edx, 1, 0xffffffffu);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10140d33: ;
    COW_AT(10140d33)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10140bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10140bd1u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140be0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140beeu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140bf9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c05u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c13u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c23u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c2bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c33u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c4cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c5cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c69u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c71u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c7bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c82u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140c99u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140cb0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140cbbu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140cc2u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140cd0u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140ce7u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140cfeu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140d15u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140d2cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10140d33u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10140bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10140bc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
