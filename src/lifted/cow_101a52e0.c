/* f_0x101a52e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a52e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a52ffu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_101a52ff;
    case 0x101a532fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a532f;
    case 0x101a5348u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5348;
    case 0x101a5356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5356;
    case 0x101a5362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5362;
    case 0x101a5370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5370;
    case 0x101a537du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a537d;
    case 0x101a538au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a538a;
    case 0x101a5398u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5398;
    case 0x101a53a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53a6;
    case 0x101a53adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53ad;
    case 0x101a53b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53b0;
    case 0x101a53b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53b3;
    case 0x101a53bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a53bf;
    case 0x101a53cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a53ca;
    case 0x101a53d6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_101a53d6;
    case 0x101a53dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53dc;
    case 0x101a53e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a53e8;
    case 0x101a53eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a53ee;
    case 0x101a53fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a53fa;
    case 0x101a5406u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5406;
    case 0x101a5411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a5411;
    case 0x101a5415u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a5415;
    default: break;
    }
#endif

    COW_AT(101a52e0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(self + 8u);
    t2 = rd8(rd32(self + 8u) + 0x4cu);
    wr8(sp0 - 0xcu, (uint8_t)(t2 - 1u));
    if ((uint8_t)arg1 == 0u)
    {
        eax = t1;
    COW_AT(101a53d6)
        wr8(eax + 0x63u, 0u);
        edx = in_edx;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = t1;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t2 - 1u);
    COW_AT(101a52ff)
        wr8(eax + 0x63u, 1u);
        wr32(sp0 - 0x18u, 2u);
        t3 = (uint32_t)(int8_t)ebx + 0xau;
        wr32(sp0 - 0x1cu, t3);
        g->eax = t3;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, t3);
        t5 = g->edx;
        wr32(sp0 - 0x1cu, t4);
        g->edx = t5;
        g->esp = sp0 - 0x14u;
        t6 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t4, 2u);
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_call_regs(g, COW_IMG(0x101262e0u), t6, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t9 = g->edx;
        if ((uint8_t)t8 == 0u)
        {
            edx = t9;
            loc_10 = in_ebx;
            loc_14 = in_esi;
        }
        else
        {
            edx = t9;
    COW_AT(101a532f)
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101a5348)
                t10 = rd32(eax + 4u);
                wr32(sp0 - 8u, t10);
                t11 = rd32(eax + 8u);
                wr32(sp0 - 4u, t11);
                edx = t11;
            }
    COW_AT(101a5356)
            if (rd32(rd32(COW_IMG(0x106627acu)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x106627acu));
            }
            else
            {
                eax = rd32(COW_IMG(0x106627acu));
                ecx = rd32(rd32(COW_IMG(0x106627acu)) + 8u);
    COW_AT(101a5362)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t12 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t13 = g->edx;
                if ((uint8_t)t12 == 0u)
                {
                    eax = t12;
                    edx = t13;
                }
                else
                {
                    edx = t13;
    COW_AT(101a5370)
                    t14 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x18u, t14);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t15 = cow_call_regs(g, COW_IMG(0x101a4540u), t14, rd32(self + 0x24u), g->edx, 0, 1, t14);
                    t16 = g->edx;
                    eax = t15;
                    edx = t16;
                }
            }
    COW_AT(101a537d)
            if (rd32(rd32(COW_IMG(0x106627b8u)) + 8u) == 0u)
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                ecx = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
    COW_AT(101a538a)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t17 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t18 = g->ecx;
                t19 = g->edx;
                if ((uint8_t)t17 == 0u)
                {
                    edx = t19;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    ecx = t18;
                    edx = t19;
    COW_AT(101a5398)
                    t20 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
                    wr32(sp0 - 0x18u, t20);
                    wr32(sp0 - 0x1cu, 8u);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 8u, t20);
                    t21 = g->edx;
                    edx = t21;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
            }
        }
    }
    COW_AT(101a53a6)
    if ((uint32_t)(int8_t)rd8(self + 0x48u) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
        goto L_101a53fa;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
    COW_AT(101a53ad)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101a53dc;
    }
    eax = eax - 1u;
    COW_AT(101a53b0)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101a5415;
    }
    eax = eax - 1u;
    COW_AT(101a53b3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
    COW_AT(101a53bf)
        wr8(eax + 0x44u, 3u);
        wr32(eax + 0x48u, 0x14u);
    }
    COW_AT(101a53ca)
    wr8(self + 0x48u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a53dc: ;
    COW_AT(101a53dc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t25 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        edx = t25;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_101a5415;
    }
    eax = t24;
    edx = t25;
    COW_AT(101a53e8)
    if (rd8(eax + 0x44u) != 1u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_101a5415;
    }
    COW_AT(101a53ee)
    wr8(self + 0x48u, 3u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a53fa: ;
    COW_AT(101a53fa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t26 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t27 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        eax = t26;
        edx = t27;
    COW_AT(101a5406)
        wr8(eax + 0x44u, 2u);
        wr32(eax + 0x48u, 0x14u);
    }
    COW_AT(101a5411)
    wr8(self + 0x48u, 2u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_101a5415: ;
    COW_AT(101a5415)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a52e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a52ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a532fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5348u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5356u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5362u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5370u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a537du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a538au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5398u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101a53a6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53d6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a53fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5406u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5411u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a5415u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
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
void cow_adapter_101a52e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a52e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
