/* f_0x102e4099 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4099(Guest* g)
{
    unsigned cf;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e40afu: in_eax = g->eax; self = g->ecx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e40af;
    case 0x102e40b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); self = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e40b7;
    case 0x102e40bdu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e40bd;
    case 0x102e40f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); self = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e40f1;
    case 0x102e4103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); self = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e4103;
    case 0x102e4105u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e4105;
    case 0x102e41e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_102e41e3;
    default: break;
    }
#endif

    COW_AT(102e4099)
    t1 = rd32(self + 0x1048u);
    if (t1 != 0u)
    {
    COW_AT(102e40af)
        t2 = rd32(sp0 + 0xcu);
        g->eax = in_eax;
        g->esp = sp0 - 0x3cu;
        t3 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t2);
        eax = t3;
    COW_AT(102e40b7)
        wr32(sp0 + 0xcu, eax);
    }
    COW_AT(102e40bd)
    t4 = (arg1 & 3u) * 0x20u + (arg2 & 3u) * 4u + rd32(self + 0x2cu);
    g->edx = arg2 & 3u;
    t5 = rd32(self + 0x18u);
    t6 = rd32(self + 0x1050u);
    t7 = rd32(self + 0x1054u);
    g->esp = sp0 - 0x30u;
    cow_thiscall_cdecl(g, COW_IMG(0x102e2005u), rd32(self + 0x2cu), 3, in_edi, in_esi, in_ebx);
    t8 = g->edx;
    edx = t8;
    esi = t5 + t6 * arg1 + t7 * arg2;
    loc_14 = t4;
    COW_AT(102e40f1)
    t9 = rd32(self + 0x1058u);
    if (t9 != 0u)
    {
    COW_AT(102e4103)
        ecx = 0u;
        loc_c = 0u;
L_102e4105: ;
    COW_AT(102e4105)
        d10 = (double)(float)(double)rdf32(loc_14 + (loc_c & 3u) * 4u);
        d11 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu)) * (double)rdf32(COW_IMG(0x10329e90u))) + (double)rdf32(loc_14 + (loc_c & 3u) * 4u));
        d12 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 4u) * (double)rdf32(COW_IMG(0x10329e90u))) + d10);
        d13 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 8u) * (double)rdf32(COW_IMG(0x10329e90u))) + d10);
        d14 = (double)(float)fr(g, fr(g, (double)rdf32(ecx + rd32(sp0 + 0xcu) + 0xcu) * (double)rdf32(COW_IMG(0x10329e90u))) + d10);
        t15 = (uint32_t)fist32(g, d14);
        t16 = (uint32_t)fist32(g, d11);
        t17 = (uint32_t)fist32(g, d12);
        t18 = (uint32_t)fist32(g, d13);
        eax = t15;
        edx = (uint32_t)((int32_t)t15 >> 0x1fu);
        cf = 0u;
        pf = PARITY(loc_c & 3u);
        zf = (loc_c & 3u) == 0u;
        sf = (int32_t)(loc_c & 3u) < 0;
        of = 0u;
        { /* shld edx, eax, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = edx, b = eax, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
        t19 = eax;
        eax = edx | (uint32_t)((int32_t)t16 >> 0x1fu);
        ebx = t19 << 0x10u | t16;
        cf = 0u;
        pf = PARITY((uint8_t)(edx | (uint32_t)((int32_t)t16 >> 0x1fu)));
        zf = (edx | (uint32_t)((int32_t)t16 >> 0x1fu)) == 0u;
        sf = (int32_t)(edx | (uint32_t)((int32_t)t16 >> 0x1fu)) < 0;
        of = 0u;
        { /* shld eax, ebx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = ebx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        t20 = ebx;
        ebx = t20 << 0x10u | t17;
        edi = eax | (uint32_t)((int32_t)t17 >> 0x1fu);
        cf = 0u;
        pf = PARITY((uint8_t)(eax | (uint32_t)((int32_t)t17 >> 0x1fu)));
        zf = (eax | (uint32_t)((int32_t)t17 >> 0x1fu)) == 0u;
        sf = (int32_t)(eax | (uint32_t)((int32_t)t17 >> 0x1fu)) < 0;
        of = 0u;
        { /* shld edi, ebx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = edi, b = ebx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edi = (uint32_t)(r); } } }
        t21 = ebx << 0x10u | t18;
        wr32(esi, t21);
        t22 = edi | (uint32_t)((int32_t)t18 >> 0x1fu);
        wr32(esi + 4u, t22);
        if (loc_c + 1u < rd32(self + 0x1058u))
        {
            ecx = ecx + 0x10u;
            esi = esi + 8u;
            loc_c = loc_c + 1u;
            goto L_102e4105;
        }
        edx = loc_c + 1u;
    }
    COW_AT(102e41e3)
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a4cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return rd32(COW_IMG(0x109b1a4cu));
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e4099(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e40afu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102e40b7u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e40bdu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102e40f1u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e4103u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e4105u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e41e3u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4099(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e4099(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
