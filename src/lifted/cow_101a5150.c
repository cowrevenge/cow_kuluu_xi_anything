/* f_0x101a5150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a5150(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a5165u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); goto E_101a5165;
    case 0x101a5178u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); goto E_101a5178;
    case 0x101a517au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); goto E_101a517a;
    case 0x101a5190u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101a5190;
    case 0x101a51b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a51b1;
    case 0x101a51c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a51c3;
    case 0x101a51ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a51ce;
    case 0x101a51dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a51dc;
    case 0x101a5216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5216;
    case 0x101a521bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a521b;
    case 0x101a5260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5260;
    case 0x101a5265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5265;
    case 0x101a526au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a526a;
    case 0x101a5290u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5290;
    case 0x101a5295u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a5295;
    case 0x101a529au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a529a;
    case 0x101a52c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a52c0;
    case 0x101a52d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_20 = rd32(sp0 - 0x20u); goto E_101a52d1;
    case 0x101a52d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); goto E_101a52d4;
    default: break;
    }
#endif

    COW_AT(101a5150)
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x18u, self);
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_24 = in_ebp;
    }
    else
    {
    COW_AT(101a5165)
        if ((uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u) < 0xau)
        {
            eax = (uint32_t)((int32_t)(rd32(rd32(self + 0x20u) + 0x1db8u) - (uint32_t)((int32_t)rd32(rd32(self + 0x20u) + 0x1db8u) >> 0x1fu)) >> 1u);
        }
        else
        {
    COW_AT(101a5178)
            eax = 0u;
        }
    COW_AT(101a517a)
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, in_esi);
        wr32(sp0 - 0x30u, in_edi);
        t1 = rd32(COW_IMG(0x1037aa80u) + eax * 4u);
        wr32(sp0 - 0x1cu, t1);
        wr32(sp0 - 0x20u, 0u);
        ebp = self;
        loc_24 = in_ebp;
        loc_18 = self;
        loc_28 = in_ebx;
        loc_2c = in_esi;
        loc_30 = in_edi;
        loc_1c = t1;
        loc_20 = 0u;
L_101a5190: ;
    COW_AT(101a5190)
        wr32(sp0 - 0x14u, loc_20 + 1u);
        wr32(sp0 - 0x34u, loc_20 + 0xau);
        g->eax = loc_20 + 0xau;
        g->edx = loc_20;
        t2 = rd32(ebp + 0x20u);
        g->esp = sp0 - 0x30u;
        t3 = cow_thiscall(g, COW_IMG(0x101a1c30u), t2, 1, loc_20 + 0xau);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            edx = t5;
        }
        else
        {
            ecx = t4;
            edx = t5;
            ebx = t3;
    COW_AT(101a51b1)
            edi = ebx;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx != 1u)
            {
    COW_AT(101a51c3)
                if (rd32(ebp + 8u) != 0u)
                {
                    esi = rd32(ebp + 8u);
    COW_AT(101a51ce)
                    if ((int32_t)rd32(sp0 - 0x20u) <= (int16_t)rd16(esi + 0x58u))
                    {
    COW_AT(101a51dc)
                        wr32(sp0 - 0x34u, sp0 - 8u);
                        wr16(sp0 - 8u, 0u);
                        wr16(sp0 - 6u, 0u);
                        wr16(sp0 - 4u, 0u);
                        wr16(sp0 - 2u, 0u);
                        g->esp = sp0 - 0x30u;
                        cow_thiscall(g, COW_IMG(0x1011a710u), esi, 1, sp0 - 8u);
                        if ((int32_t)((uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u)) < 800)
                        {
                            edi = 2u;
                        }
                        else
                        {
    COW_AT(101a5216)
                            edi = 4u;
                        }
    COW_AT(101a521b)
                        wr32(sp0 - 0x34u, 1u);
                        wr32(sp0 - 0x38u, 1u);
                        t6 = rd32(sp0 - 0x14u);
                        wr32(sp0 - 0x3cu, t6);
                        wr32(sp0 - 0x40u, sp0 - 0x10u);
                        wr16(sp0 - 0x10u, 0u);
                        wr16(sp0 - 0xeu, 0u);
                        wr16(sp0 - 0xcu, 0u);
                        wr16(sp0 - 0xau, 0u);
                        g->ebx = ebx;
                        g->edi = edi;
                        g->edx = sp0 - 0x10u;
                        g->esp = sp0 - 0x30u;
                        cow_thiscall(g, COW_IMG(0x10118900u), esi, 4, sp0 - 0x10u, t6, 1u, 1u);
                        t7 = g->edx;
                        wr32(sp0 - 0x34u, ebx);
                        t8 = rd32(sp0 - 0xcu);
                        t9 = rd32(sp0 - 0x10u);
                        t10 = cow_call_regs(g, COW_IMG(0x101b9840u), t8 - t9, g->ecx, g->edx, 0, 1, ebx);
                        if ((uint8_t)t10 == 0u)
                        {
                            esi = (uint32_t)(int16_t)(t8 - t9);
    COW_AT(101a5290)
                            if ((int32_t)esi < 48)
                            {
    COW_AT(101a5295)
                                esi = 0x30u;
                            }
    COW_AT(101a529a)
                            wr32(sp0 - 0x34u, 1u);
                            wr32(sp0 - 0x38u, esi);
                            t16 = rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x3cu, t16);
                            wr32(sp0 - 0x40u, ebx);
                            t17 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 2u;
                            wr32(sp0 - 0x44u, t17);
                            t18 = edi + (uint32_t)(int16_t)rd16(sp0 - 0x10u);
                            wr32(sp0 - 0x48u, t18);
                            g->edx = t17;
                            g->esp = sp0 - 0x30u;
                            cow_thiscall_cdecl(g, COW_IMG(0x101906a0u), t16, 6, t18, t17, ebx, t16, esi, 1u);
                            t19 = g->edx;
                            edx = t19;
                            ebp = rd32(sp0 - 0x18u);
                        }
                        else
                        {
                            esi = (uint32_t)(int16_t)(t8 - t9);
    COW_AT(101a5260)
                            if ((int32_t)esi < 38)
                            {
    COW_AT(101a5265)
                                esi = 0x26u;
                            }
    COW_AT(101a526a)
                            wr32(sp0 - 0x34u, esi);
                            t11 = rd32(sp0 - 0x1cu);
                            wr32(sp0 - 0x38u, t11);
                            wr32(sp0 - 0x3cu, ebx);
                            t12 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 4u;
                            wr32(sp0 - 0x40u, t12);
                            t13 = edi + (uint32_t)(int16_t)rd16(sp0 - 0x10u);
                            wr32(sp0 - 0x44u, t13);
                            g->edx = t12;
                            t14 = rd32(sp0 - 0x18u);
                            g->esp = sp0 - 0x30u;
                            cow_thiscall(g, COW_IMG(0x101b9760u), rd32(t14 + 0x18u), 5, t13, t12, ebx, t11, esi);
                            t15 = g->edx;
                            edx = t15;
                            ebp = t14;
                        }
                    }
                }
            }
        }
    COW_AT(101a52c0)
        t20 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x20u, t20);
        if ((int32_t)rd32(sp0 - 0x14u) < 10)
        {
            loc_24 = rd32(sp0 - 0x24u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = t20;
            goto L_101a5190;
        }
        eax = t20;
    COW_AT(101a52d1)
        ebx = rd32(sp0 - 0x28u);
        esi = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(101a52d4)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_24;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a5150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a5165u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a5178u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a517au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x18u, self);
        (void)sp0;
        return 1;
    }
    case 0x101a5190u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a51b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a51c3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a51ceu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a51dcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a5216u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a521bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a5260u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a5265u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a526au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a5290u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a5295u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a529au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101a52c0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a52d1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101a52d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a5150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
