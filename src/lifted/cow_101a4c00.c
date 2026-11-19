/* f_0x101a4c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a4c00(Guest* g)
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
    case 0x101a4c1fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_101a4c1f;
    case 0x101a4c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c4c;
    case 0x101a4c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c65;
    case 0x101a4c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c73;
    case 0x101a4c7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c7f;
    case 0x101a4c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c8d;
    case 0x101a4c9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4c9a;
    case 0x101a4ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4ca7;
    case 0x101a4cb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4cb5;
    case 0x101a4cc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4cc3;
    case 0x101a4ccau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4cca;
    case 0x101a4ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4ccd;
    case 0x101a4cd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4cd0;
    case 0x101a4cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4cdc;
    case 0x101a4ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4ce7;
    case 0x101a4cf3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_101a4cf3;
    case 0x101a4cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4cf9;
    case 0x101a4d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4d05;
    case 0x101a4d0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4d0b;
    case 0x101a4d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4d17;
    case 0x101a4d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4d23;
    case 0x101a4d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_101a4d2e;
    case 0x101a4d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101a4d32;
    default: break;
    }
#endif

    COW_AT(101a4c00)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(self + 8u);
    t2 = rd8(rd32(self + 8u) + 0x4cu);
    wr8(sp0 - 0xcu, (uint8_t)(t2 - 1u));
    if ((uint8_t)arg1 == 0u)
    {
        eax = t1;
    COW_AT(101a4cf3)
        wr8(eax + 0x63u, 0u);
        edx = in_edx;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = t1;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)(t2 - 1u);
    COW_AT(101a4c1f)
        wr8(eax + 0x63u, 1u);
        wr32(sp0 - 0x18u, 2u);
        wr32(sp0 - 0x1cu, (uint32_t)(int8_t)ebx);
        g->eax = (uint32_t)(int8_t)ebx;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x20u), 1, (uint32_t)(int8_t)ebx);
        t4 = g->edx;
        wr32(sp0 - 0x1cu, t3);
        g->edx = t4;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10150cd0u), rd32(COW_IMG(0x1057847cu)), 2, t3, 2u);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_call_regs(g, COW_IMG(0x101262e0u), t5, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
        t8 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            edx = t8;
            loc_10 = in_ebx;
            loc_14 = in_esi;
        }
        else
        {
            edx = t8;
    COW_AT(101a4c4c)
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
    COW_AT(101a4c65)
                t9 = rd32(eax + 4u);
                wr32(sp0 - 8u, t9);
                t10 = rd32(eax + 8u);
                wr32(sp0 - 4u, t10);
                edx = t10;
            }
    COW_AT(101a4c73)
            if (rd32(rd32(COW_IMG(0x106627b0u)) + 8u) == 0u)
            {
                eax = rd32(COW_IMG(0x106627b0u));
            }
            else
            {
                eax = rd32(COW_IMG(0x106627b0u));
                ecx = rd32(rd32(COW_IMG(0x106627b0u)) + 8u);
    COW_AT(101a4c7f)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t11 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t12 = g->edx;
                if ((uint8_t)t11 == 0u)
                {
                    eax = t11;
                    edx = t12;
                }
                else
                {
                    edx = t12;
    COW_AT(101a4c8d)
                    t13 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x18u, t13);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t14 = cow_call_regs(g, COW_IMG(0x101a4540u), t13, rd32(self + 0x24u), g->edx, 0, 1, t13);
                    t15 = g->edx;
                    eax = t14;
                    edx = t15;
                }
            }
    COW_AT(101a4c9a)
            if (rd32(rd32(COW_IMG(0x106627b8u)) + 8u) == 0u)
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                ecx = rd32(rd32(COW_IMG(0x106627b8u)) + 8u);
    COW_AT(101a4ca7)
                wr32(sp0 - 0x18u, sp0 - 8u);
                g->eax = eax;
                g->edx = sp0 - 8u;
                g->esp = sp0 - 0x14u;
                t16 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
                t17 = g->ecx;
                t18 = g->edx;
                if ((uint8_t)t16 == 0u)
                {
                    edx = t18;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    ecx = t17;
                    edx = t18;
    COW_AT(101a4cb5)
                    t19 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
                    wr32(sp0 - 0x18u, t19);
                    wr32(sp0 - 0x1cu, 8u);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(self) + 0x18u), self, 2, 8u, t19);
                    t20 = g->edx;
                    edx = t20;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
            }
        }
    }
    COW_AT(101a4cc3)
    if ((uint32_t)(int8_t)rd8(self + 0x48u) == 1u)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
        goto L_101a4d17;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x48u) - 1u;
    COW_AT(101a4cca)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101a4cf9;
    }
    eax = eax - 1u;
    COW_AT(101a4ccd)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101a4d32;
    }
    eax = eax - 1u;
    COW_AT(101a4cd0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t22 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        edx = t22;
    }
    else
    {
        eax = t21;
        edx = t22;
    COW_AT(101a4cdc)
        wr8(eax + 0x44u, 3u);
        wr32(eax + 0x48u, 0x14u);
    }
    COW_AT(101a4ce7)
    wr8(self + 0x48u, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a4cf9: ;
    COW_AT(101a4cf9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        edx = t24;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_101a4d32;
    }
    eax = t23;
    edx = t24;
    COW_AT(101a4d05)
    if (rd8(eax + 0x44u) != 1u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_101a4d32;
    }
    COW_AT(101a4d0b)
    wr8(self + 0x48u, 3u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101a4d17: ;
    COW_AT(101a4d17)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t25 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t26 = g->edx;
    if (t25 == 0u)
    {
        eax = t25;
        edx = t26;
    }
    else
    {
        eax = t25;
        edx = t26;
    COW_AT(101a4d23)
        wr8(eax + 0x44u, 2u);
        wr32(eax + 0x48u, 0x14u);
    }
    COW_AT(101a4d2e)
    wr8(self + 0x48u, 2u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_101a4d32: ;
    COW_AT(101a4d32)
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a4c00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a4c1fu:
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
    case 0x101a4c4cu:
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
    case 0x101a4c65u:
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
    case 0x101a4c73u:
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
    case 0x101a4c7fu:
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
    case 0x101a4c8du:
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
    case 0x101a4c9au:
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
    case 0x101a4ca7u:
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
    case 0x101a4cb5u:
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
    case 0x101a4cc3u:
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
    case 0x101a4ccau:
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
    case 0x101a4ccdu:
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
    case 0x101a4cd0u:
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
    case 0x101a4cdcu:
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
    case 0x101a4ce7u:
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
    case 0x101a4cf3u:
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
    case 0x101a4cf9u:
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
    case 0x101a4d05u:
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
    case 0x101a4d0bu:
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
    case 0x101a4d17u:
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
    case 0x101a4d23u:
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
    case 0x101a4d2eu:
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
    case 0x101a4d32u:
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
void cow_adapter_101a4c00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a4c00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
