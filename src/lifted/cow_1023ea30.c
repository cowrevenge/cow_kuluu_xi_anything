/* f_0x1023ea30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023ea30(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 356u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023ea4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x114u); in_esi = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 0x10cu); g->ebp = rd32(sp0 - 0x10cu); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x110u); goto E_1023ea4a;
    case 0x1023ea6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023ea6f;
    case 0x1023ea78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023ea78;
    case 0x1023ea7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023ea7c;
    case 0x1023ea85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023ea85;
    case 0x1023ea8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023ea8a;
    case 0x1023ea8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023ea8f;
    case 0x1023eac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023eac6;
    case 0x1023ead4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x118u); goto E_1023ead4;
    case 0x1023eaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eaf2;
    case 0x1023eb11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eb11;
    case 0x1023eb25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eb25;
    case 0x1023eb47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eb47;
    case 0x1023eb65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eb65;
    case 0x1023eb69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1023eb69;
    default: break;
    }
#endif

    COW_AT(1023ea30)
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1023ea4a)
    wr32(sp0 - 0x118u, sp0 - 0x108u);
    t3 = rd32(self + 8u);
    wr16(sp0 - 0x108u, 0u);
    wr16(sp0 - 0x106u, 0u);
    wr16(sp0 - 0x104u, 0u);
    wr16(sp0 - 0x102u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x108u, t3, g->edx, 0, 1, sp0 - 0x108u);
    t5 = g->edx;
    edx = t5;
    ebp = eax;
    eax = t4;
    COW_AT(1023ea6f)
    if (rd32(self + 0x4cu) == 0u)
    {
        ebx = in_ebx;
    }
    else
    {
    COW_AT(1023ea78)
        wr32(sp0 - 0x118u, in_ebx);
        ebx = self + 0x30u;
        esi = 0u;
L_1023ea7c: ;
    COW_AT(1023ea7c)
        if (rd16(ebx) != 0u)
        {
            eax = rd16(ebx);
    COW_AT(1023ea85)
            if (eax > 8u)
            {
    COW_AT(1023ea8a)
                eax = 8u;
            }
    COW_AT(1023ea8f)
            wr32(sp0 - 0x11cu, 0u);
            wr32(sp0 - 0x120u, 0u);
            wr32(sp0 - 0x124u, 1u);
            wr32(sp0 - 0x128u, 0x80808080u);
            wr32(sp0 - 0x12cu, 0x3f800000u);
            wr32(sp0 - 0x130u, 0x3f800000u);
            t6 = (uint32_t)(int16_t)rd16(sp0 - 0x106u) + 0x23u;
            wr32(sp0 - 0x134u, t6);
            t7 = esi + (uint32_t)(int16_t)rd16(sp0 - 0x108u) + 0x2bu;
            wr32(sp0 - 0x138u, t7);
            g->esp = sp0 - 0x118u;
            cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(eax * 4u + rd32(ebp) + 0x154u), 8, t7, t6, 0x3f800000u, 0x3f800000u, 0x80808080u, 1u, 0u, 0u);
        }
    COW_AT(1023eac6)
        if ((int32_t)(esi + 0x22u) < 272)
        {
            ebx = ebx + 2u;
            esi = esi + 0x22u;
            goto L_1023ea7c;
        }
        ebx = ebx + 2u;
        cf = esi + 0x22u < 0x110u;
        pf = PARITY((uint8_t)(esi - 0xeeu));
        zf = esi == 0xeeu;
        sf = (int32_t)(esi - 0xeeu) < 0;
        of = ((esi + 0x22u ^ 0x110u) & (esi + 0x22u ^ esi - 0xeeu)) >> 0x1fu;
    COW_AT(1023ead4)
        t8 = rd32(self + 0x18u);
        t9 = rd32(self + 0x1cu);
        eax = t8;
        ecx = t9;
        { /* shrd eax, ecx, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = eax, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        t10 = ecx >> 1u & 0xfffu;
        wr32(sp0 - 0x11cu, t10);
        wr32(sp0 - 0x120u, eax);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        g->esp = sp0 - 0x118u;
        cow_cdecl(g, COW_IMG(0x10310981u), 3, sp0 - 0x100u, eax, t10);
    COW_AT(1023eaf2)
        wr32(sp0 - 0x128u, 0x80808080u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        t11 = rd32(sp0 - 0x106u) + 5u;
        wr32(sp0 - 0x130u, t11);
        t12 = rd32(sp0 - 0x108u) + 0x54u;
        wr32(sp0 - 0x134u, t12);
        g->edx = t12;
        g->esp = sp0 - 0x110u;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t12, t11, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
        t13 = g->edx;
        edx = t13;
    COW_AT(1023eb11)
        t14 = rd32(self + 0x48u) + 1u;
        wr32(sp0 - 0x138u, t14);
        wr32(sp0 - 0x13cu, COW_IMG(0x103884acu));
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        g->ebx = ebx;
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103884acu), t14, rd32(sp0 - 0x134u), rd32(sp0 - 0x130u));
    COW_AT(1023eb25)
        wr32(sp0 - 0x144u, 0x80808080u);
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        t15 = rd32(sp0 - 0x106u) + 5u;
        wr32(sp0 - 0x14cu, t15);
        t16 = rd32(sp0 - 0x108u) + 0x112u;
        wr32(sp0 - 0x150u, t16);
        g->ecx = t16;
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t16, t15, sp0 - 0x100u, 0x80808080u, sp0 - 0x100u, COW_IMG(0x103884acu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u));
        t17 = g->ecx;
        ecx = t17;
    COW_AT(1023eb47)
        wr32(sp0 - 0x154u, 0x80808080u);
        wr32(sp0 - 0x158u, self + 0x20u);
        t18 = rd32(sp0 - 0x106u) + 0x13u;
        wr32(sp0 - 0x15cu, t18);
        t19 = rd32(sp0 - 0x108u) + 0x54u;
        wr32(sp0 - 0x160u, t19);
        g->eax = t19;
        g->edx = t18;
        g->esp = sp0 - 0x13cu;
        t20 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t19, t18, self + 0x20u, 0x80808080u, rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), sp0 - 0x100u, 0x80808080u, sp0 - 0x100u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    COW_AT(1023eb65)
        ebx = rd32(sp0 - 0x118u);
    }
    COW_AT(1023eb69)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x110u);
    g->edi = rd32(sp0 - 0x114u);
    g->ebp = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023ea30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023ea4au:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x114u);
        in_esi = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 0x10cu);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x1023ea6fu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x114u;
        g->esi = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023ea78u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x114u;
        g->esi = 0u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x1023ea7cu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023ea85u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023ea8au:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023ea8fu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023eac6u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023ead4u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x1023eaf2u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x124u;
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023eb11u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023eb25u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x140u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x13cu, COW_IMG(0x103884acu));
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023eb47u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x150u;
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        wr32(sp0 - 0x144u, 0x80808080u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023eb65u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x160u;
        wr32(sp0 - 0x148u, sp0 - 0x100u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023eb69u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ea30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023ea30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
