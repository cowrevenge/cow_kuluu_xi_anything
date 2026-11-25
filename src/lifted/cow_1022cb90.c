/* f_0x1022cb90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1022cb90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_8;
    uint32_t loc_c;
    int64_t q5;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022cba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1022cba2;
    case 0x1022cbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1022cbaf;
    case 0x1022cbbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cbbb;
    case 0x1022cbefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cbef;
    case 0x1022cbf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cbf7;
    case 0x1022cbfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cbfe;
    case 0x1022cc01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc01;
    case 0x1022cc04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc04;
    case 0x1022cc08u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022cc08;
    case 0x1022cc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc0f;
    case 0x1022cc1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc1e;
    case 0x1022cc27u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc27;
    case 0x1022cc2du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc2d;
    case 0x1022cc33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc33;
    case 0x1022cc3au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc3a;
    case 0x1022cc48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc48;
    case 0x1022cc52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc52;
    case 0x1022cc57u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc57;
    case 0x1022cc62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc62;
    case 0x1022cc66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc66;
    case 0x1022cc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1022cc77;
    case 0x1022cc85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1022cc85;
    case 0x1022cc98u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc98;
    case 0x1022cc9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cc9c;
    case 0x1022cca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022cca6;
    case 0x1022ccb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022ccb7;
    case 0x1022ccbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022ccbc;
    case 0x1022ccc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022ccc1;
    case 0x1022ccc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022ccc6;
    case 0x1022cccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022cccb;
    case 0x1022ccd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_1022ccd2;
    case 0x1022ccf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022ccf0;
    case 0x1022cd04u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1022cd04;
    case 0x1022cd27u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1022cd27;
    default: break;
    }
#endif

    COW_AT(1022cb90)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1021eb10u), rd32(COW_IMG(0x10667a80u)), 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(1022cba2)
    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edi = in_edi;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
    COW_AT(1022cbaf)
        wr32(sp0 - 0x18u, in_edi);
        t2 = rd32(self + 0x30u);
        wr32(sp0 - 0x1cu, t2);
        g->eax = t2;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall(g, COW_IMG(0x1022c730u), self, 1, t2);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    COW_AT(1022cbbb)
        q5 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)rd16(COW_IMG(0x106671e0u) + eax * 2u) + 0x3bu);
        t6 = (uint32_t)((int32_t)(cow_qhi(q5) + (uint32_t)(int16_t)rd16(COW_IMG(0x106671e0u) + eax * 2u) + 0x3bu) >> 5u);
        t7 = t6 + (t6 >> 0x1fu);
        t8 = rd32(COW_IMG(0x10578474u));
        wr32(t8 + 0x24u, t7);
        if ((uint8_t)arg1 != 1u)
        {
            edx = t7;
        }
        else
        {
            ecx = t6 >> 0x1fu;
            edx = t7;
            edi = eax;
    COW_AT(1022cbef)
            t9 = rd8(self + 0xbcu);
            if ((uint8_t)t9 == 0u)
            {
    COW_AT(1022cbf7)
                if (rd32(self + 0x6cu) == 0u)
                {
                    eax = rd32(self + 0x6cu);
    COW_AT(1022cc2d)
                    wr32(sp0 - 0x1cu, edi);
                    g->esp = sp0 - 0x18u;
                    t13 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 1, edi);
                    t14 = g->edx;
                    eax = t13;
                    edx = t14;
    COW_AT(1022cc33)
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t15 = cow_thiscall(g, COW_IMG(0x1022bf80u), eax, 1, rd32(sp0 - 0x1cu));
                    t16 = g->edx;
                    eax = t15;
                    edx = t16;
    COW_AT(1022cc3a)
                    wr32(sp0 - 0x1cu, 2u);
                    wr32(sp0 - 0x20u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, 2u);
                    t17 = g->edx;
                    edx = t17;
                }
                else
                {
                    eax = rd32(self + 0x6cu);
    COW_AT(1022cbfe)
                    if (eax == 1u)
                    {
                        eax = eax - 1u;
                        goto L_1022cc27;
                    }
                    eax = eax - 1u;
    COW_AT(1022cc01)
                    if (eax != 1u) goto L_1022cc48;
                    eax = eax - 1u;
    COW_AT(1022cc04)
                    wr32(sp0 - 0x1cu, 2u);
                    wr32(sp0 - 0x20u, 9u);
                    loc_20 = 9u;
L_1022cc08: ;
    COW_AT(1022cc08)
                    wr32(sp0 - 0x24u, 0xeu);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_20);
                    t11 = g->edx;
                    eax = t10;
                    edx = t11;
    COW_AT(1022cc0f)
                    wr32(sp0 - 0x20u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, eax, rd32(sp0 - 0x1cu));
                    t12 = g->edx;
                    edx = t12;
    COW_AT(1022cc1e)
                    wr8(self + 0xbcu, 1u);
                }
            }
L_1022cc48: ;
    COW_AT(1022cc48)
            if (rd32(self + 0xc0u) != 0u)
            {
                eax = rd32(self + 0xc0u);
    COW_AT(1022cc52)
                t18 = rd32(eax + 8u);
                if (t18 != 0u)
                {
    COW_AT(1022cc57)
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    t19 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
                    t20 = g->edx;
                    eax = t19;
                    edx = t20;
    COW_AT(1022cc62)
                    if ((uint8_t)eax != 0u)
                    {
    COW_AT(1022cc66)
                        wr32(sp0 - 0xcu, 0u);
                        wr32(sp0 - 8u, 0u);
                        if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
                        {
                            loc_c = 0u;
                            loc_8 = 0u;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(1022cc77)
                            t21 = rd32(eax + 4u);
                            wr32(sp0 - 0xcu, t21);
                            t22 = rd32(eax + 8u);
                            wr32(sp0 - 8u, t22);
                            edx = t22;
                            loc_c = t21;
                            loc_8 = t22;
                        }
    COW_AT(1022cc85)
                        wr32(sp0 - 0x1cu, sp0 - 0xcu);
                        g->eax = sp0 - 0xcu;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t23 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(self + 0xc0u) + 8u), 1, sp0 - 0xcu);
                        t24 = g->edx;
                        eax = t23;
                        edx = t24;
    COW_AT(1022cc98)
                        if ((uint8_t)eax != 0u)
                        {
    COW_AT(1022cc9c)
                            wr32(sp0 - 0x1cu, 0u);
                            wr32(sp0 - 0x20u, 8u);
                            g->edx = rd32(self);
                            t25 = rd32(self);
                            g->esp = sp0 - 0x18u;
                            cow_thiscall(g, rd32(t25 + 0x18u), self, 2, 8u, 0u);
                            t26 = g->edx;
                            edx = t26;
                        }
                    }
                }
            }
        }
    COW_AT(1022cca6)
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            edi = rd32(sp0 - 0x18u);
            goto L_1022ccc1;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        edi = rd32(sp0 - 0x18u);
    COW_AT(1022ccb7)
        if (eax == 2u)
        {
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            goto L_1022cd27;
        }
    COW_AT(1022ccbc)
        if (eax == 3u)
        {
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            goto L_1022cd27;
        }
L_1022ccc1: ;
    COW_AT(1022ccc1)
        if ((int32_t)eax < 2)
        {
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
    COW_AT(1022ccc6)
            if ((int32_t)eax > 3)
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
    COW_AT(1022cccb)
                if (rd32(self + 8u) == 0u)
                {
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    ecx = rd32(self + 8u);
    COW_AT(1022ccd2)
                    wr16(sp0 - 0xcu, 0u);
                    wr32(sp0 - 0x18u, sp0 - 0xcu);
                    wr16(sp0 - 0xau, 0u);
                    wr16(sp0 - 8u, 0u);
                    wr16(sp0 - 6u, 0u);
                    g->esp = sp0 - 0x14u;
                    t27 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, ecx, g->edx, 0, 1, sp0 - 0xcu);
                    eax = t27;
    COW_AT(1022ccf0)
                    if ((uint32_t)(int16_t)rd16(sp0 - 8u) - (uint32_t)(int16_t)rd16(sp0 - 0xcu) == 0xc6u)
                    {
                        edx = (uint32_t)(int16_t)rd16(sp0 - 8u) - (uint32_t)(int16_t)rd16(sp0 - 0xcu);
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_14 = rd32(sp0 - 0x14u);
                    }
                    else
                    {
    COW_AT(1022cd04)
                        wr32(sp0 - 0x18u, 0u);
                        wr32(sp0 - 0x1cu, 1u);
                        wr32(sp0 - 0x20u, 1u);
                        t28 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
                        wr32(sp0 - 0x24u, t28);
                        wr32(sp0 - 0x28u, 0xc6u);
                        t29 = rd32(sp0 - 0xau);
                        wr32(sp0 - 0x2cu, t29);
                        t30 = rd32(sp0 - 0xcu);
                        wr32(sp0 - 0x30u, t30);
                        g->eax = t29;
                        g->edx = t30;
                        g->esp = sp0 - 0x14u;
                        t31 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t30, t29, 0xc6u, t28, 1u, 1u, 0u);
                        t32 = g->edx;
                        eax = t31;
                        edx = t32;
                        loc_10 = rd32(sp0 - 0x10u);
                        loc_14 = rd32(sp0 - 0x14u);
                    }
                }
            }
        }
    }
L_1022cd27: ;
    COW_AT(1022cd27)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = edi;
    g->edx = edx;
    return eax;
L_1022cc27: ;
    COW_AT(1022cc27)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 8u);
    loc_20 = 8u;
    goto L_1022cc08;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022cb90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022cba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1022cbafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cbbbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cbefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cbf7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cbfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        wr32(sp0 - 0x1cu, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1022cc0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cc98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1022cc9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1022cca6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022cccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccd2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022ccf0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1022cd04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1022cd27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022cb90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022cb90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
