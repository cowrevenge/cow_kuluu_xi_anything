/* f_0x10041160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10041160(Guest* g)
{
    double d10;
    double d14;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1004118au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1004118a;
    case 0x10041194u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_10041194;
    case 0x10041198u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_10041198;
    case 0x1004119au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1004119a;
    case 0x100411a3u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_100411a3;
    case 0x100411b0u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_100411b0;
    case 0x100411c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_100411c8;
    case 0x10041261u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10041261;
    case 0x1004126bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1004126b;
    case 0x10041274u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10041274;
    case 0x1004127eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1004127e;
    case 0x10041282u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10041282;
    case 0x10041284u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_10041284;
    case 0x1004129au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0x10u); goto E_1004129a;
    case 0x100412abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_100412ab;
    default: break;
    }
#endif

    COW_AT(10041160)
    wr32(sp0 - 0x10u, in_esi);
    t1 = (rd32(self + 0x10cu) & 0xfffeffffu) | 0x2000000u;
    wr32(self + 0x10cu, t1);
    if (rd8(self + 0x179u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x179u);
        edx = in_edx;
        goto L_100412ab;
    }
    COW_AT(1004118a)
    if (rd32(self + 0x104u) == 0u)
    {
    COW_AT(10041198)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x104u);
    COW_AT(10041194)
        eax = rd32(eax);
    }
    COW_AT(1004119a)
    if (rd8(eax + 0x34u) == 0u)
    {
    COW_AT(100411a3)
        wr8(self + 0x1bcu, 0u);
        wr8(self + 0x1bdu, 1u);
    }
    COW_AT(100411b0)
    t2 = rd32(self + 0x1acu);
    wr32(sp0 - 8u, t2);
    if (rd8(self + 0x198u) & 1u)
    {
        ecx = (self & 0xffffff00u) | 1u;
        edx = t2;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x198u);
        loc_8 = t2;
    COW_AT(100411c8)
        wr32(sp0 - 0xcu, rd8(COW_IMG(0x1047bc0eu)));
        wr32(sp0 - 0x14u, in_ebx);
        t3 = (uint8_t)rd32(sp0 - 6u);
        wr32(sp0 - 0xcu, t3);
        g->edx = t3;
        d4 = fr(g, fr(g, (double)(int32_t)rd8(COW_IMG(0x1047bc0eu)) * (double)(int32_t)t3) * (double)rdf32(COW_IMG(0x1032a778u)));
        fpush(g, d4);
        g->esp = sp0 - 0x14u;
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t6 = g->edx;
        t7 = rd32(COW_IMG(0x1047bc0cu));
        wr8(sp0 - 6u, (uint8_t)t5);
        t8 = (uint8_t)(t7 >> 8u);
        wr32(sp0 - 0xcu, t8);
        t9 = (uint8_t)rd32(sp0 - 7u);
        wr32(sp0 - 0xcu, t9);
        g->ecx = t9;
        d10 = fr(g, fr(g, (double)(int32_t)t8 * (double)(int32_t)t9) * (double)rdf32(COW_IMG(0x1032a778u)));
        fpush(g, d10);
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t12 = g->ecx;
        wr8(sp0 - 7u, (uint8_t)t11);
        wr32(sp0 - 0xcu, (uint8_t)t7);
        t13 = (uint8_t)rd32(sp0 - 8u);
        wr32(sp0 - 0xcu, t13);
        g->ecx = t12;
        d14 = fr(g, fr(g, (double)(int32_t)(uint8_t)t7 * (double)(int32_t)t13) * (double)rdf32(COW_IMG(0x1032a778u)));
        fpush(g, d14);
        t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
        t16 = g->ecx;
        wr8(sp0 - 8u, (uint8_t)t15);
        ecx = t16;
        edx = rd32(sp0 - 8u);
    }
    COW_AT(10041261)
    if (rd32(self + 0x1a8u) == 0u)
    {
        eax = rd32(self + 0x1a8u);
        goto L_1004129a;
    }
    eax = rd32(self + 0x1a8u);
    COW_AT(1004126b)
    if (rd32(rd32(eax) + 0x30u) == 0u)
    {
        ecx = rd32(rd32(eax) + 0x30u);
        eax = rd32(eax);
        goto L_1004129a;
    }
    COW_AT(10041274)
    if (rd32(self + 0x1a8u) == 0u)
    {
    COW_AT(10041282)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x1a8u);
    COW_AT(1004127e)
        eax = rd32(eax);
    }
    COW_AT(10041284)
    wr32(sp0 - 0x14u, edx);
    t17 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
    wr32(sp0 - 0x18u, t17);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, COW_IMG(0x100759c0u), eax + 0x30u, 2, t17, edx);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t19;
    return t18;
L_1004129a: ;
    COW_AT(1004129a)
    wr32(sp0 - 0x14u, edx);
    t20 = (uint32_t)(int8_t)rd8(self + 0x1bdu);
    wr32(sp0 - 0x18u, t20);
    g->eax = eax;
    g->edx = t20;
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x10044250u), 2, t20, edx);
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_100412ab: ;
    COW_AT(100412ab)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10041160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1004118au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10041194u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10041198u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1004119au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100411a3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ecx = (self & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100411b0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ecx = (self & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100411c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10041261u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1004126bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10041274u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1004127eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10041282u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10041284u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1004129au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100412abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10041160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10041160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
