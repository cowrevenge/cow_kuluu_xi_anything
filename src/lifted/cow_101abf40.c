/* f_0x101abf40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101abf40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_550;
    uint32_t loc_558;
    uint32_t loc_55c;
    uint32_t loc_560;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1416u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101abf57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x560u); g->ebp = rd32(sp0 - 0x560u); goto E_101abf57;
    case 0x101abf63u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x560u); g->ebp = rd32(sp0 - 0x560u); goto E_101abf63;
    case 0x101abf9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x56cu); in_esi = rd32(sp0 - 0x568u); in_ebx = rd32(sp0 - 0x564u); in_ebp = rd32(sp0 - 0x560u); loc_558 = rd32(sp0 - 0x558u); g->ebp = rd32(sp0 - 0x560u); g->ebx = rd32(sp0 - 0x564u); g->edi = rd32(sp0 - 0x56cu); g->esi = rd32(sp0 - 0x568u); goto E_101abf9b;
    case 0x101abfbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x56cu); in_esi = rd32(sp0 - 0x568u); in_ebx = rd32(sp0 - 0x564u); in_ebp = rd32(sp0 - 0x560u); loc_558 = rd32(sp0 - 0x558u); g->ebp = rd32(sp0 - 0x560u); g->ebx = rd32(sp0 - 0x564u); g->edi = rd32(sp0 - 0x56cu); g->esi = rd32(sp0 - 0x568u); goto E_101abfbc;
    case 0x101abfd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101abfd9;
    case 0x101abff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101abff1;
    case 0x101ac026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac026;
    case 0x101ac03fu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac03f;
    case 0x101ac043u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac043;
    case 0x101ac05fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac05f;
    case 0x101ac063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac063;
    case 0x101ac067u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac067;
    case 0x101ac07du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac07d;
    case 0x101ac07fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac07f;
    case 0x101ac083u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac083;
    case 0x101ac0a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac0a9;
    case 0x101ac0adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac0ad;
    case 0x101ac0e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101ac0e3;
    case 0x101ac0f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac0f6;
    case 0x101ac0fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac0fa;
    case 0x101ac11bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac11b;
    case 0x101ac13cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_55c = rd32(sp0 - 0x55cu); loc_550 = rd32(sp0 - 0x550u); goto E_101ac13c;
    case 0x101ac197u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_560 = rd32(sp0 - 0x560u); goto E_101ac197;
    default: break;
    }
#endif

    COW_AT(101abf40)
    wr32(sp0 - 0x560u, in_ebp);
    if ((int32_t)rd32(self + 0xa58u) < 0)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_560 = in_ebp;
    }
    else
    {
        eax = rd32(self + 0xa58u);
    COW_AT(101abf57)
        if ((int32_t)eax > (int32_t)rd32(self + 0x888u))
        {
            ebx = in_ebx;
            esi = in_esi;
            edi = in_edi;
            loc_560 = in_ebp;
        }
        else
        {
    COW_AT(101abf63)
            wr32(sp0 - 0x564u, in_ebx);
            wr32(sp0 - 0x568u, in_esi);
            wr32(sp0 - 0x56cu, in_edi);
            t1 = rd32(self + 0x888u);
            esi = self + 0x6c4u;
            edi = sp0 - 0x1c4u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x558u, eax);
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + sp0 - 0x1c4u, 0u);
            if (t1 == eax)
            {
                edx = eax;
                ebx = t1 - eax;
                loc_558 = eax;
            }
            else
            {
                edx = eax;
                ebx = t1 - eax;
                loc_558 = eax;
    COW_AT(101abf9b)
                t2 = rd32(self + 0x888u) - eax;
                esi = eax + self + 0x6c4u;
                edi = sp0 - 0x54cu;
                ecx = t2 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t2 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                eax = t2;
            }
    COW_AT(101abfbc)
            wr8(ebx + sp0 - 0x54cu, 0u);
            wr32(sp0 - 0x570u, 0u);
            t3 = rd32(sp0 - 0x54cu);
            wr32(sp0 - 0x574u, t3);
            g->eax = eax;
            g->ecx = t3;
            g->edx = edx;
            g->esp = sp0 - 0x56cu;
            t4 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t3, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            if (t4 != 4u)
            {
                eax = t4;
                edx = t6;
                goto L_101ac0e3;
            }
            eax = t4;
            ecx = t5;
    COW_AT(101abfd9)
            wr32(sp0 - 0x570u, 0u);
            t7 = rd32(sp0 - 0x547u);
            wr32(sp0 - 0x574u, t7);
            g->eax = eax;
            g->edx = t7;
            g->esp = sp0 - 0x56cu;
            t8 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t7, 0u);
            t9 = g->edx;
            if (t8 != 4u)
            {
                eax = t8;
                edx = t9;
                goto L_101ac0e3;
            }
    COW_AT(101abff1)
            wr32(sp0 - 0x570u, sp0 - 0x554u);
            wr32(sp0 - 0x574u, 0x1c3u);
            wr32(sp0 - 0x578u, sp0 - 0x388u);
            wr32(sp0 - 0x57cu, ebx);
            wr32(sp0 - 0x580u, sp0 - 0x54cu);
            g->edx = sp0 - 0x54cu;
            g->esp = sp0 - 0x56cu;
            t10 = cow_call_regs(g, COW_IMG(0x101acac0u), sp0 - 0x554u, self, g->edx, 0, 5, sp0 - 0x54cu, ebx, sp0 - 0x388u, 0x1c3u, sp0 - 0x554u);
            t11 = g->edx;
            wr32(sp0 - 0x55cu, 0u);
            wr32(sp0 - 0x550u, t10);
            if ((int32_t)t10 < 0)
            {
                loc_55c = 0u;
                goto L_101ac0f6;
            }
            edx = t11;
            esi = t10;
            loc_550 = t10;
    COW_AT(101ac026)
            wr32(sp0 - 0x55cu, 1u);
            if ((int32_t)rd32(sp0 - 0x554u) < 2)
            {
                eax = rd32(sp0 - 0x554u);
                ecx = 1u;
                ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
                loc_55c = 1u;
                goto L_101ac05f;
            }
            eax = rd32(sp0 - 0x554u);
            ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(101ac03f)
            if ((uint8_t)ebx == 0u) goto L_101ac067;
    COW_AT(101ac043)
            wr32(sp0 - 0x570u, eax);
            wr32(sp0 - 0x574u, esi);
            wr32(sp0 - 0x578u, sp0 - 0x388u);
            g->eax = sp0 - 0x388u;
            g->esp = sp0 - 0x55cu;
            t12 = cow_cdecl(g, COW_IMG(0x1018fb00u), 7, sp0 - 0x388u, esi, eax, rd32(sp0 - 0x56cu), rd32(sp0 - 0x568u), rd32(sp0 - 0x564u), rd32(sp0 - 0x560u));
            wr32(sp0 - 0x55cu, t12);
            eax = rd32(sp0 - 0x554u);
            ecx = t12;
            loc_55c = t12;
            loc_550 = rd32(sp0 - 0x550u);
L_101ac05f: ;
    COW_AT(101ac05f)
            if ((uint8_t)ebx == 0u) goto L_101ac07d;
    COW_AT(101ac063)
            eax = eax - ecx;
    COW_AT(101ac0a9)
            if ((int32_t)eax <= 0) goto L_101ac07f;
    COW_AT(101ac0ad)
            t15 = rd32(sp0 - 0x558u);
            esi = sp0 - 0x388u;
            edi = sp0 + t15 - 0x1c4u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t16 = rd32(sp0 - 0x558u);
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + sp0 + t16 - 0x1c4u, 0u);
            edx = eax + t16;
            esi = loc_550;
L_101ac083: ;
    COW_AT(101ac083)
            esi = eax + sp0 - 0x388u;
            edi = sp0 - 0x54cu;
            ecx = (esi - eax) >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = esi - eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(esi + sp0 - eax - 0x54cu, 0u);
            ebx = esi - eax;
L_101ac0fa: ;
    COW_AT(101ac0fa)
            esi = sp0 - 0x1c4u;
            edi = self + 0x6c4u;
            ecx = edx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = edx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (ebx != 0u)
            {
    COW_AT(101ac11b)
                esi = loc_55c + sp0 - 0x54cu;
                edi = edx + self + 0x6c4u;
                ecx = (ebx - loc_55c) >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = ebx - loc_55c & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
    COW_AT(101ac13c)
            wr32(sp0 - 0x570u, 0u);
            wr32(sp0 - 0x574u, 0u);
            t19 = ebx + edx - loc_55c;
            wr32(self + 0x888u, t19);
            wr8(self + t19 + 0x6c4u, 0u);
            t20 = rd32(self + 0x888u);
            wr32(self + 0xa58u, edx);
            wr32(sp0 - 0x578u, t20);
            wr32(sp0 - 0x57cu, self + 0x6c4u);
            t21 = rd32(self + 0xa54u) + 1u;
            wr32(sp0 - 0x580u, t21);
            wr32(sp0 - 0x584u, self + 0x88cu);
            g->esp = sp0 - 0x56cu;
            t22 = cow_call_regs(g, COW_IMG(0x101ac990u), self + 0x88cu, self, g->edx, 0, 6, self + 0x88cu, t21, self + 0x6c4u, t20, 0u, 0u);
            t23 = rd32(sp0 - 0x568u);
            t24 = rd32(sp0 - 0x56cu);
            wr32(self + 0xa50u, t22);
            wr8(self + 0xc24u, 1u);
            wr8(self + 0xc78u, 1u);
            ebx = rd32(sp0 - 0x564u);
            esi = t23;
            edi = t24;
            loc_560 = rd32(sp0 - 0x560u);
        }
    }
    COW_AT(101ac197)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_560;
    return;
L_101ac067: ;
    COW_AT(101ac067)
    wr32(sp0 - 0x570u, 0u);
    t13 = rd32(sp0 - 0x388u);
    wr32(sp0 - 0x574u, t13);
    g->eax = eax;
    g->esp = sp0 - 0x56cu;
    t14 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t13, 0u);
    wr32(sp0 - 0x55cu, t14);
    loc_55c = t14;
L_101ac07d: ;
    COW_AT(101ac07d)
    eax = 0u;
L_101ac07f: ;
    COW_AT(101ac07f)
    edx = rd32(sp0 - 0x558u);
    goto L_101ac083;
L_101ac0e3: ;
    COW_AT(101ac0e3)
    wr32(sp0 - 0x570u, 0u);
    t17 = rd32(sp0 - 0x54cu);
    wr32(sp0 - 0x574u, t17);
    g->eax = eax;
    g->esp = sp0 - 0x56cu;
    t18 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t17, 0u);
    wr32(sp0 - 0x55cu, t18);
    loc_55c = t18;
L_101ac0f6: ;
    COW_AT(101ac0f6)
    edx = rd32(sp0 - 0x558u);
    goto L_101ac0fa;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101abf40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101abf57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x560u);
        g->esp = sp0 - 0x560u;
        (void)sp0;
        return 1;
    }
    case 0x101abf63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x560u);
        g->esp = sp0 - 0x560u;
        (void)sp0;
        return 1;
    }
    case 0x101abf9bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_558;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x56cu);
        in_esi = rd32(sp0 - 0x568u);
        in_ebx = rd32(sp0 - 0x564u);
        in_ebp = rd32(sp0 - 0x560u);
        loc_558 = rd32(sp0 - 0x558u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101abfbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_558;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x56cu);
        in_esi = rd32(sp0 - 0x568u);
        in_ebx = rd32(sp0 - 0x564u);
        in_ebp = rd32(sp0 - 0x560u);
        loc_558 = rd32(sp0 - 0x558u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101abfd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101abff1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac026u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        wr32(sp0 - 0x570u, sp0 - 0x554u);
        (void)sp0;
        return 1;
    }
    case 0x101ac03fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        g->ecx = 1u;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        wr32(sp0 - 0x570u, sp0 - 0x554u);
        (void)sp0;
        return 1;
    }
    case 0x101ac043u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        g->ecx = 1u;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        wr32(sp0 - 0x570u, sp0 - 0x554u);
        (void)sp0;
        return 1;
    }
    case 0x101ac05fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac063u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac067u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        wr32(sp0 - 0x570u, sp0 - 0x554u);
        (void)sp0;
        return 1;
    }
    case 0x101ac07du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac07fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac083u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac0a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac0adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        wr32(sp0 - 0x580u, sp0 - 0x54cu);
        wr32(sp0 - 0x578u, sp0 - 0x388u);
        (void)sp0;
        return 1;
    }
    case 0x101ac0e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac0f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac0fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac11bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac13cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_550;
        uint32_t loc_55c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_55c = rd32(sp0 - 0x55cu);
        loc_550 = rd32(sp0 - 0x550u);
        g->esp = sp0 - 0x56cu;
        (void)sp0;
        return 1;
    }
    case 0x101ac197u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_560;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_560 = rd32(sp0 - 0x560u);
        g->esp = sp0 - 0x560u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101abf40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101abf40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
