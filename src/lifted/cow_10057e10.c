/* f_0x10057e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10057e10(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d16;
    double d21;
    double d22;
    double d23;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10057e20u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10057e20;
    case 0x10057e27u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10057e27;
    case 0x10057e2eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10057e2e;
    case 0x10057e41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057e41;
    case 0x10057e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057e53;
    case 0x10057e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057e6d;
    case 0x10057e87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); goto E_10057e87;
    case 0x10057e9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10057e9d;
    case 0x10057eb0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_10057eb0;
    case 0x10057ec6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057ec6;
    case 0x10057edeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057ede;
    case 0x10057ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057ee7;
    case 0x10057ef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057ef2;
    case 0x10057ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10057ef9;
    case 0x10057f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f00;
    case 0x10057f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f09;
    case 0x10057f0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f0d;
    case 0x10057f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f39;
    case 0x10057f3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f3c;
    case 0x10057f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f48;
    case 0x10057f53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f53;
    case 0x10057f55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f55;
    case 0x10057f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f70;
    case 0x10057f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f7a;
    case 0x10057f7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f7c;
    case 0x10057f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10057f8c;
    case 0x10057fa3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10057fa3;
    default: break;
    }
#endif

    COW_AT(10057e10)
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(self + 0x145u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x145u);
        goto L_10057e2e;
    }
    COW_AT(10057e20)
    wr32(sp0 - 0x10u, 1u);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), self, 1, 1u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10057e27: ;
    COW_AT(10057e27)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10057e2e: ;
    COW_AT(10057e2e)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x80u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10057ef9;
    }
    eax = t4;
    edx = t5;
    COW_AT(10057e41)
    wr32(sp0 - 8u, 0u);
    if (rd8(self + 0x140u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x140u);
    COW_AT(10057e6d)
        d7 = fr(g, (double)rdf32(self + 0x98u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
        d8 = (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u);
        wrf32(self + 0x98u, (float)d7);
        x0 = d8;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x140u);
    COW_AT(10057e53)
        d6 = fr(g, (double)rdf32(self + 0x98u) - (double)(int32_t)rd32(COW_IMG(0x1065cb0cu)));
        wrf32(self + 0x98u, (float)d6);
        x0 = (double)(int32_t)rd32(COW_IMG(0x1065cb0cu));
    }
    COW_AT(10057e87)
    d9 = fr(g, x0 + (double)rdf32(self + 0x94u));
    wrf32(self + 0x94u, (float)d9);
    wr32(COW_IMG(0x1047bef8u), 0u);
    loc_8 = 0u;
L_10057e9d: ;
    COW_AT(10057e9d)
    d10 = (double)rdf32(self + 0x98u);
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10057eb0)
        d11 = (double)(float)-(double)rdf32(self + 0x98u);
        wrf32(sp0 - 8u, (float)d11);
        wr32(self + 0x98u, 0u);
    }
    COW_AT(10057ec6)
    d12 = (double)rdf32(self + 0x98u);
    if (rd32(self + 0x88u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = rd32(self + 0x88u);
        goto L_10057f00;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10057ede)
    if (PARITY(eax >> 8u & 0x44u)) goto L_10057f8c;
    COW_AT(10057ee7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x10057c20u), self, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
    COW_AT(10057ef2)
        wr8(self + 0x145u, 1u);
    }
L_10057ef9: ;
    COW_AT(10057ef9)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10057f00: ;
    COW_AT(10057f00)
    if (PARITY(eax >> 8u & 0x44u)) goto L_10057f8c;
    COW_AT(10057f09)
    if (ecx == 0u) goto L_10057f8c;
L_10057f0d: ;
    COW_AT(10057f0d)
    t15 = (uint32_t)(int16_t)rd16(ecx + 4u);
    wr32(sp0 - 4u, t15);
    d16 = fr(g, fr(g, (double)(int32_t)t15 * (double)rdf32(self + 0x9cu)) + (double)rdf32(self + 0x98u));
    wrf32(self + 0x98u, (float)d16);
    g->eax = eax;
    g->edx = t15;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x10057fb0u), self, 0);
    t18 = g->edx;
    if (t17 == 1u)
    {
        eax = t17 - 1u;
        edx = t18;
        goto L_10057e27;
    }
    eax = t17 - 1u;
    edx = t18;
    COW_AT(10057f39)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10057ef9;
    }
    COW_AT(10057f3c)
    if ((uint8_t)rd32(rd32(self + 0x88u)) == 0u)
    {
    COW_AT(10057f53)
        eax = 0u;
    }
    else
    {
        eax = rd32(rd32(self + 0x88u));
        ecx = rd32(self + 0x88u);
    COW_AT(10057f48)
        eax = ecx + (eax >> 8u & 0x1fu) * 4u;
    }
    COW_AT(10057f55)
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x10062de0u), self, 1, eax);
    t20 = g->edx;
    d21 = (double)rdf32(self + 0x98u);
    if (d21 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t20;
        goto L_10057f7c;
    }
    eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t20;
    COW_AT(10057f70)
    if (rd32(self + 0x88u) != 0u)
    {
        ecx = rd32(self + 0x88u);
        goto L_10057f0d;
    }
    COW_AT(10057f7a)
L_10057f8c: ;
    COW_AT(10057f8c)
    d23 = (double)rdf32(self + 0x98u);
    if (d23 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_8 = rd32(sp0 - 8u);
        goto L_10057e9d;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(10057fa3)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_10057f7c: ;
    COW_AT(10057f7c)
    d22 = fr(g, (double)rdf32(self + 0x98u) - (double)rdf32(sp0 - 8u));
    wrf32(self + 0x98u, (float)d22);
    goto L_10057f8c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10057e10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10057e20u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10057e27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057e2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057e41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10057e6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10057e87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10057e9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057eb0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057ec6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057edeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057ee7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057ef2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057ef9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057f8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057fa3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10057e10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10057e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
