/* f_0x102eb7e8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102eb7e8(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102eb805u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; goto E_102eb805;
    case 0x102eb810u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; cf = g->cf; goto E_102eb810;
    case 0x102eb81eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb81e;
    case 0x102eb826u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb826;
    case 0x102eb82au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb82a;
    case 0x102eb834u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb834;
    case 0x102eb83cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb83c;
    case 0x102eb840u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb840;
    case 0x102eb845u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb845;
    case 0x102eb84du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb84d;
    case 0x102eb859u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb859;
    case 0x102eb860u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102eb860;
    case 0x102eb88au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb88a;
    case 0x102eb896u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb896;
    case 0x102eb8a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb8a2;
    case 0x102eb8aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102eb8aa;
    case 0x102eb8b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb8b6;
    case 0x102eb8c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102eb8c9;
    case 0x102eb8cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102eb8cd;
    case 0x102eb8f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_102eb8f2;
    case 0x102eb8f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102eb8f9;
    case 0x102eb907u: eax = g->eax; ecx = g->ecx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102eb907;
    case 0x102eb911u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102eb911;
    case 0x102eb91fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102eb91f;
    case 0x102eb92eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb92e;
    case 0x102eb93au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; edi = g->edi; cf = g->cf; goto E_102eb93a;
    case 0x102eb947u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; goto E_102eb947;
    case 0x102eb95au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102eb95a;
    case 0x102eb95cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102eb95c;
    default: break;
    }
#endif

    COW_AT(102eb7e8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    t1 = rd32(self + 0xb0u);
    t2 = rd32(self + 0x1d0u);
    wr32(self + 0x3dcu, t2);
    if (t1 != 0u)
    {
        eax = t2;
    COW_AT(102eb810)
        wr32(sp0 - 0x14u, in_esi);
        wr32(sp0 - 0x18u, in_edi);
        ecx = self;
        esi = self + 0x2d8u;
        edi = self + 0x1d4u;
L_102eb81e: ;
    COW_AT(102eb81e)
        if (rd8(esi) != rd8(edi))
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            ecx = (ecx & 0xffffff00u) | rd8(esi);
            cf = rd8(esi) < rd8(edi);
            goto L_102eb840;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
        ecx = (ecx & 0xffffff00u) | rd8(esi);
    COW_AT(102eb826)
        if ((uint8_t)eax == 0u) goto L_102eb83c;
    COW_AT(102eb82a)
        if (rd8(esi + 1u) != rd8(edi + 1u))
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 1u);
            ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
            cf = rd8(esi + 1u) < rd8(edi + 1u);
            goto L_102eb840;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(102eb834)
        if ((uint8_t)eax != 0u)
        {
            esi = esi + 2u;
            edi = edi + 2u;
            goto L_102eb81e;
        }
L_102eb83c: ;
    COW_AT(102eb83c)
        eax = 0u;
L_102eb845: ;
    COW_AT(102eb845)
        if (eax == 0u)
        {
            edx = in_edx;
            loc_14 = in_esi;
            loc_18 = in_edi;
        }
        else
        {
    COW_AT(102eb84d)
            wr32(sp0 - 8u, self + 0x1d4u);
            eax = self + 0x1d4u;
L_102eb859: ;
    COW_AT(102eb859)
            if (rd8(eax) != 0u)
            {
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                eax = eax + 1u;
                goto L_102eb859;
            }
            eax = eax + 1u;
    COW_AT(102eb860)
            t3 = (((eax - (self + 0x1d5u) + 4u) << 0xeu & 0xffff0000u) + 0x10000u & 0x7fff0000u) | 0xfffeu;
            wr32(sp0 - 0x1cu, t3);
            g->eax = t3;
            g->edx = in_edx;
            g->esp = sp0 - 0x18u;
            t4 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t3);
            t5 = g->edx;
            edx = t5;
            edi = eax - (self + 0x1d5u) + 1u;
            eax = t4;
    COW_AT(102eb88a)
            wr32(sp0 - 0x1cu, 0x454c4946u);
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, 0x454c4946u);
            t6 = g->ecx;
            t7 = g->edx;
            ecx = t6;
            edx = t7;
    COW_AT(102eb896)
            t8 = rd32(self + 0xa0u);
            wr32(self + 0xa0u, t8 + 8u);
            if (edi < 4u)
            {
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
    COW_AT(102eb8a2)
                wr32(sp0 - 0xcu, edi >> 2u);
                loc_c = edi >> 2u;
                loc_8 = rd32(sp0 - 8u);
L_102eb8aa: ;
    COW_AT(102eb8aa)
                wr32(sp0 - 0x1cu, rd32(loc_8));
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, rd32(loc_8));
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
    COW_AT(102eb8b6)
                t11 = rd32(self + 0xa0u);
                wr32(self + 0xa0u, t11 + 4u);
                t12 = rd32(sp0 - 8u);
                wr32(sp0 - 8u, t12 + 4u);
                t13 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0xcu, t13 - 1u);
                if (t13 != 1u)
                {
                    edi = edi - 4u;
                    loc_c = t13 - 1u;
                    loc_8 = t12 + 4u;
                    goto L_102eb8aa;
                }
                edi = edi - 4u;
                loc_8 = t12 + 4u;
                loc_c = t13 - 1u;
            }
    COW_AT(102eb8c9)
            if (edi != 0u)
            {
    COW_AT(102eb8cd)
                wr32(sp0 - 0xcu, 0u);
                t14 = edi;
                esi = loc_8;
                edi = sp0 - 0xcu;
                ecx = t14 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t14 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                t15 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x1cu, t15);
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t15);
                t16 = g->ecx;
                ecx = t16;
    COW_AT(102eb8f2)
                t17 = rd32(self + 0xa0u);
                wr32(self + 0xa0u, t17 + 4u);
            }
    COW_AT(102eb8f9)
            eax = self + 0x1d4u;
L_102eb907: ;
    COW_AT(102eb907)
            t18 = rd8(eax);
            wr8(eax + 0x104u, (uint8_t)t18);
            if ((uint8_t)t18 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t18;
                goto L_102eb907;
            }
            edx = 0x104u;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    COW_AT(102eb911)
        if (rd32(self + 0x2d4u) != rd32(self + 0x1d0u))
        {
            eax = rd32(self + 0x2d4u);
    COW_AT(102eb91f)
            wr32(sp0 - 0x1cu, 0x2fffeu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t19 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, 0x2fffeu);
            t20 = g->edx;
            eax = t19;
            edx = t20;
    COW_AT(102eb92e)
            wr32(sp0 - 0x1cu, 0x454e494cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t21 = cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, 0x454e494cu);
            t22 = g->edx;
            eax = t21;
            edx = t22;
    COW_AT(102eb93a)
            t23 = rd32(self + 0x1d0u);
            wr32(sp0 - 0x1cu, t23);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x102f5233u), self + 0x74u, 1, t23);
    COW_AT(102eb947)
            t24 = rd32(self + 0xa0u);
            t25 = rd32(self + 0x1d0u);
            wr32(self + 0xa0u, t24 + 0xcu);
            wr32(self + 0x2d4u, t25);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    COW_AT(102eb95a)
        esi = loc_14;
        edi = loc_18;
    }
    else
    {
        eax = t2;
    COW_AT(102eb805)
        wr32(self + 0x2d4u, eax);
        esi = in_esi;
        edi = in_edi;
    }
    COW_AT(102eb95c)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return;
L_102eb840: ;
    COW_AT(102eb840)
    eax = -cf + 1u - cf;
    goto L_102eb845;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102eb7e8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102eb805u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb810u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x10u;
        g->ebx = self;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb81eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb826u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb82au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb834u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb83cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb840u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb845u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb84du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb859u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x1d5u;
        wr32(sp0 - 8u, self + 0x1d4u);
        (void)sp0;
        return 1;
    }
    case 0x102eb860u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x1d5u;
        wr32(sp0 - 8u, self + 0x1d4u);
        (void)sp0;
        return 1;
    }
    case 0x102eb88au:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb896u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8a2u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8aau:
    {
        uint32_t cf;
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
        self = g->ebx;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8b6u:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8c9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8cdu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8f2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb8f9u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb907u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->edx = 0x104u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb911u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb91fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb92eu:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb93au:
    {
        uint32_t cf;
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
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = self + 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x102eb947u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb95au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102eb95cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102eb7e8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102eb7e8(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
