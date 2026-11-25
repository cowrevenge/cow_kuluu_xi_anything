/* f_0x102f5410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f5410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f541au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_14 = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102f541a;
    case 0x102f542du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102f542d;
    case 0x102f5434u: self = g->ecx; in_edx = g->edx; in_edi = g->edi; goto E_102f5434;
    case 0x102f543cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f543c;
    case 0x102f5447u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f5447;
    case 0x102f544eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f544e;
    case 0x102f5455u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f5455;
    case 0x102f545au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102f545a;
    case 0x102f5462u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102f5462;
    case 0x102f5469u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102f5469;
    case 0x102f547bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f547b;
    case 0x102f5484u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f5484;
    case 0x102f548bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102f548b;
    case 0x102f5490u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f5490;
    case 0x102f5494u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; goto E_102f5494;
    case 0x102f549cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f549c;
    case 0x102f54a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f54a8;
    case 0x102f54adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f54ad;
    case 0x102f54b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f54b4;
    case 0x102f54d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f54d2;
    case 0x102f54ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102f54dd;
    case 0x102f54e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102f54e7;
    case 0x102f54e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); loc_8 = rd32(sp0 - 8u); goto E_102f54e8;
    default: break;
    }
#endif

    COW_AT(102f5410)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328599u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102f541au));
    COW_AT(102f541a)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(arg1, 0u);
    t1 = rd32(self + 0x10u);
    if (t1 != 0u)
    {
    COW_AT(102f5434)
        wr32(sp0 - 0x28u, in_edi);
        wr32(sp0 - 0x2cu, 0x10u);
        g->eax = arg1;
        g->esp = sp0 - 0x20u;
        t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x10u, in_edi, rd32(sp0 - 0x24u));
        t3 = g->edx;
        eax = t2;
        edx = t3;
    COW_AT(102f543c)
        wr32(sp0 - 0x1cu, eax);
        wr32(sp0 - 8u, 0u);
        if (eax == 0u)
        {
    COW_AT(102f5455)
            wr32(sp0 - 0x18u, 0u);
            edi = 0u;
            loc_18 = 0u;
            loc_8 = 0u;
        }
        else
        {
    COW_AT(102f5447)
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t4 = cow_thiscall(g, COW_IMG(0x102f57c8u), eax, 0);
            eax = t4;
    COW_AT(102f544e)
            wr32(sp0 - 0x18u, eax);
            edi = eax;
            loc_18 = eax;
            loc_8 = rd32(sp0 - 8u);
        }
    COW_AT(102f545a)
        wr32(sp0 - 8u, 0xffffffffu);
        if (edi != 0u)
        {
    COW_AT(102f5469)
            t5 = rd32(self + 0x10u) + rd32(self + 4u) + 1u;
            wr32(sp0 - 0x2cu, t5);
            g->eax = rd32(edi);
            g->edx = rd32(self + 0x10u);
            t6 = rd32(edi);
            t7 = rd32(self + 0x10u);
            g->esp = sp0 - 0x28u;
            t8 = cow_thiscall(g, rd32(t6 + 0x18u), edi, 1, t5);
            t9 = g->ecx;
            t10 = g->edx;
            eax = t8;
            ecx = t9;
            edx = t10;
    COW_AT(102f547b)
            wr32(sp0 - 0x14u, eax);
            if ((int32_t)eax >= 0)
            {
                eax = rd32(edi);
    COW_AT(102f5490)
                wr32(sp0 - 0x2cu, edi);
                g->eax = eax;
                g->esp = sp0 - 0x28u;
                t11 = cow_thiscall(g, rd32(eax + 0xcu), ecx, 1, edi);
                eax = t11;
    COW_AT(102f5494)
                t12 = rd32(self + 4u);
                wr32(sp0 - 0x14u, 0u);
                if (t12 == 0u) goto L_102f54dd;
                loc_14 = 0u;
L_102f549c: ;
    COW_AT(102f549c)
                if (rd32(loc_14 * 4u + rd32(self)) != 0u)
                {
                    edx = loc_14;
                    esi = rd32(loc_14 * 4u + rd32(self));
    COW_AT(102f54a8)
                    ecx = esi;
                    edi = esi + 1u;
L_102f54ad: ;
    COW_AT(102f54ad)
                    if (rd8(ecx) != 0u)
                    {
                        edx = (edx & 0xffffff00u) | rd8(ecx);
                        ecx = ecx + 1u;
                        goto L_102f54ad;
                    }
                    ecx = ecx + 1u;
    COW_AT(102f54b4)
                    wr32(sp0 - 0x1cu, ecx - edi);
                    t13 = ecx;
                    t14 = edi;
                    edi = eax;
                    ecx = (t13 - t14) >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = t13 - t14 & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    t15 = rd32(sp0 - 0x18u);
                    wr8(eax + t13 - t14, 0xau);
                    eax = eax + t13 - t14 + 1u;
                    edi = t15;
                    loc_14 = rd32(sp0 - 0x14u);
                }
    COW_AT(102f54d2)
                wr32(sp0 - 0x14u, loc_14 + 1u);
                if (loc_14 + 1u < rd32(self + 4u))
                {
                    loc_14 = loc_14 + 1u;
                    goto L_102f549c;
                }
L_102f54dd: ;
    COW_AT(102f54dd)
                t16 = rd8(eax);
                wr8(eax, 0u);
                wr32(arg1, edi);
                eax = 0u;
            }
            else
            {
                loc_14 = eax;
                eax = rd32(edi);
    COW_AT(102f5484)
                wr32(sp0 - 0x2cu, 1u);
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, rd32(eax + 0x14u), edi, 1, 1u);
    COW_AT(102f548b)
                eax = rd32(sp0 - 0x14u);
            }
        }
        else
        {
    COW_AT(102f5462)
            eax = 0x8007000eu;
        }
    COW_AT(102f54e7)
        edi = rd32(sp0 - 0x28u);
    }
    else
    {
    COW_AT(102f542d)
        eax = 0u;
        edi = in_edi;
    }
    COW_AT(102f54e8)
    t17 = rd32(sp0 - 0x10u);
    t18 = rd32(sp0 - 0x20u);
    t19 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t17);
    g->ebx = t18;
    g->esi = t19;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f5410(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f541au:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f542du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f5434u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->eax = arg1;
        g->ebx = self;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f543cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 0x2cu, 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102f5447u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102f544eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f5455u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102f545au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f5462u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f5469u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f547bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f5484u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f548bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f5490u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f5494u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102f549cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f54e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5410(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102f5410(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
