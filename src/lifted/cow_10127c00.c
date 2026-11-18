/* f_0x10127c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10127c00(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_858;
    uint32_t loc_85c;
    uint32_t loc_860;
    uint32_t loc_868;
    uint32_t loc_86c;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 2200u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10127c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); g->ebp = rd32(sp0 - 0x84cu); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c27;
    case 0x10127c2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); g->ebp = rd32(sp0 - 0x84cu); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c2d;
    case 0x10127c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); in_ebx = rd32(sp0 - 0x848u); g->ebp = rd32(sp0 - 0x84cu); g->ebx = rd32(sp0 - 0x848u); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c31;
    case 0x10127c40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); g->ebp = rd32(sp0 - 0x84cu); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c40;
    case 0x10127c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); in_ebx = rd32(sp0 - 0x848u); g->ebp = rd32(sp0 - 0x84cu); g->ebx = rd32(sp0 - 0x848u); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c49;
    case 0x10127c58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); in_edi = rd32(sp0 - 0x854u); in_esi = rd32(sp0 - 0x850u); in_ebp = rd32(sp0 - 0x84cu); g->ebp = rd32(sp0 - 0x84cu); g->edi = rd32(sp0 - 0x854u); g->esi = rd32(sp0 - 0x850u); goto E_10127c58;
    case 0x10127e17u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e17;
    case 0x10127e22u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e22;
    case 0x10127e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e4e;
    case 0x10127e52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e52;
    case 0x10127e80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e80;
    case 0x10127e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_86c = rd32(sp0 - 0x86cu); loc_868 = rd32(sp0 - 0x868u); loc_860 = rd32(sp0 - 0x860u); loc_85c = rd32(sp0 - 0x85cu); loc_858 = rd32(sp0 - 0x858u); goto E_10127e82;
    default: break;
    }
#endif

    COW_AT(10127c00)
    wr32(sp0 - 0x848u, in_ebx);
    wr32(sp0 - 0x84cu, in_ebp);
    wr32(sp0 - 0x850u, in_esi);
    wr32(sp0 - 0x854u, in_edi);
    wr32(sp0 - 0x858u, 8u);
    wr32(sp0 - 0x85cu, 0u);
    wr32(sp0 - 0x840u, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x854u;
    t1 = cow_cdecl(g, COW_IMG(0x101d29c0u), 2, 0u, 8u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10127c40;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10127c27)
    if (rd8(arg2) < 0xc8u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg2);
        goto L_10127c40;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2);
    COW_AT(10127c2d)
    if ((uint8_t)eax > 0xc9u) goto L_10127c40;
    COW_AT(10127c31)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10127c40: ;
    COW_AT(10127c40)
    if (rd8(self + 0x64050u) != 1u) goto L_10127c58;
    COW_AT(10127c49)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10127c58: ;
    COW_AT(10127c58)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x854u;
    t4 = cow_stdcall(g, COW_IMG(0x1012a340u), 0);
    t5 = g->edx;
    if (arg1 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = in_ebx & 0xffffff00u;
        goto L_10127e82;
    }
    edx = t5;
    COW_AT(10127c6e)
    wr32(sp0 - 0x858u, arg2);
    wr32(sp0 - 0x85cu, sp0 - 0x83cu);
    wr32(sp0 - 0x860u, arg1);
    g->ebx = in_ebx & 0xffffff00u;
    g->edi = arg2;
    g->eax = sp0 - 0x83cu;
    g->edx = edx;
    g->esp = sp0 - 0x854u;
    t6 = cow_thiscall(g, COW_IMG(0x101273c0u), self, 3, arg1, sp0 - 0x83cu, arg2);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x858u, arg2);
    wr32(sp0 - 0x85cu, arg1);
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_cdecl(g, COW_IMG(0x10127990u), 2, arg1, arg2);
    t10 = g->ecx;
    t11 = g->edx;
    wr8(sp0 - 0x844u, 1u);
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = t9;
    COW_AT(10127c91)
        if ((edi & 0x800000u) == 0u)
        {
    COW_AT(10127cae)
            if ((edi & 0x400000u) != 0u)
            {
    COW_AT(10127cb6)
                wr8(sp0 - 0x844u, 0u);
                edi = edi - 0x400000u;
            }
        }
        else
        {
    COW_AT(10127c99)
            wr32(sp0 - 0x858u, arg1);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x7f4u;
            t12 = cow_bridge_indirect(g, COW_IMG(0x10127ab0u), 0u, 25u, (const uint32_t[]){arg1, rd32(sp0 - 0x854u), rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu), rd32(sp0 - 0x848u), rd32(sp0 - 0x844u), rd32(sp0 - 0x840u), rd32(sp0 - 0x83cu), rd32(sp0 - 0x838u), rd32(sp0 - 0x834u), rd32(sp0 - 0x830u), rd32(sp0 - 0x82cu), rd32(sp0 - 0x828u), rd32(sp0 - 0x824u), rd32(sp0 - 0x820u), rd32(sp0 - 0x81cu), rd32(sp0 - 0x818u), rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u), rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu), rd32(sp0 - 0x7f8u)}, ecx, g->edx, g->eax, 100u);
            t13 = g->edx;
            wr8(sp0 - 0x844u, (uint8_t)t12);
            eax = t12;
            edx = t13;
            edi = edi - 0x800000u;
        }
    COW_AT(10127cc1)
        t14 = rd32(sp0 - 0x844u);
        wr32(sp0 - 0x858u, t14);
        wr32(sp0 - 0x85cu, 0x3f800000u);
        wr32(sp0 - 0x860u, edi);
        g->eax = eax;
        g->ecx = t14;
        g->edx = edx;
        g->esp = sp0 - 0x854u;
        t15 = cow_cdecl(g, COW_IMG(0x100380f0u), 3, edi, 0x3f800000u, t14);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    COW_AT(10127cd4)
    if ((uint8_t)arg4 == 0u)
    {
    COW_AT(10127d08)
        wr32(sp0 - 0x858u, 0x800u);
        wr32(sp0 - 0x85cu, arg1);
        wr32(sp0 - 0x860u, sp0 - 0x800u);
        g->ecx = ecx;
        g->esp = sp0 - 0x854u;
        t22 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x800u, g->ecx, g->edx, 1, 3, sp0 - 0x800u, arg1, 0x800u);
        t23 = g->ecx;
        eax = t22;
        ecx = t23;
        loc_85c = arg1;
        loc_858 = 0x800u;
        loc_868 = rd32(sp0 - 0x868u);
        loc_86c = rd32(sp0 - 0x86cu);
        loc_860 = sp0 - 0x800u;
    }
    else
    {
    COW_AT(10127cdf)
        wr32(sp0 - 0x858u, 0u);
        edi = arg1;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x85cu, 1u);
        t18 = ~ecx - 1u;
        wr32(sp0 - 0x860u, t18);
        wr32(sp0 - 0x864u, arg1);
        wr32(sp0 - 0x868u, 0x800u);
        wr32(sp0 - 0x86cu, sp0 - 0x800u);
        g->eax = eax;
        t19 = rd32(COW_IMG(0x10662d40u));
        g->esp = sp0 - 0x854u;
        t20 = cow_thiscall(g, COW_IMG(0x101b7260u), t19, 6, sp0 - 0x800u, 0x800u, arg1, t18, 1u, 0u);
        t21 = g->ecx;
        eax = t20;
        ecx = t21;
        loc_85c = 1u;
        loc_858 = 0u;
        loc_868 = 0x800u;
        loc_86c = sp0 - 0x800u;
        loc_860 = rd32(sp0 - 0x860u);
    }
    COW_AT(10127d1b)
    if ((uint8_t)rd32(sp0 - 0x83cu) < 0x96u)
    {
        edx = rd32(sp0 - 0x83cu);
        goto L_10127d6d;
    }
    edx = rd32(sp0 - 0x83cu);
    COW_AT(10127d24)
    if ((uint8_t)edx > 0x97u) goto L_10127d6d;
    COW_AT(10127d29)
    wr32(sp0 - 0x858u, arg3);
    wr32(sp0 - 0x85cu, sp0 - 0x83cu);
    wr32(sp0 - 0x860u, sp0 - 0x800u);
    g->edx = sp0 - 0x800u;
    g->esp = sp0 - 0x854u;
    cow_thiscall(g, COW_IMG(0x101268f0u), rd32(COW_IMG(0x104e2150u)), 3, sp0 - 0x800u, sp0 - 0x83cu, arg3);
    t24 = g->edx;
    wr32(sp0 - 0x858u, arg3);
    wr32(sp0 - 0x85cu, sp0 - 0x83cu);
    wr32(sp0 - 0x860u, sp0 - 0x800u);
    g->eax = sp0 - 0x83cu;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101268f0u), rd32(COW_IMG(0x104e2154u)), 3, sp0 - 0x800u, sp0 - 0x83cu, arg3);
    t26 = g->edx;
    g->ebx = rd32(sp0 - 0x848u);
    g->esi = rd32(sp0 - 0x850u);
    g->edi = rd32(sp0 - 0x854u);
    g->ebp = rd32(sp0 - 0x84cu);
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_10127d6d: ;
    COW_AT(10127d6d)
    if ((edx >> 8u & 0x1fu) == 0u)
    {
    COW_AT(10127d72)
        wr32(sp0 - 0x858u, 0x800u);
        edi = sp0 - 0x800u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t27 = ~ecx - 1u;
        wr32(sp0 - 0x85cu, t27);
        wr32(sp0 - 0x860u, sp0 - 0x800u);
        g->ecx = t27;
        g->esp = sp0 - 0x854u;
        cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x800u, 1, 3, sp0 - 0x800u, t27, 0x800u);
        t28 = g->ecx;
        ecx = t28;
        edx = rd32(sp0 - 0x83cu);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = 0x800u;
        loc_868 = rd32(sp0 - 0x868u);
        loc_86c = rd32(sp0 - 0x86cu);
        loc_860 = sp0 - 0x800u;
    }
    COW_AT(10127d97)
    if (rd8(sp0 - 0x82au) == 2u)
    {
    COW_AT(10127d9e)
        t29 = rd32(COW_IMG(0x105781d4u));
        t30 = rd32(rd32(COW_IMG(0x105781d4u)));
        esi = sp0 - 0x83cu;
        edi = sp0 - 0x890u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x894u, sp0 - 0x800u);
        g->esp = sp0 - 0x854u;
        cow_thiscall(g, rd32(t30 + 0x48u), t29, 16, sp0 - 0x800u, rd32(sp0 - 0x890u), rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), loc_86c, loc_868, rd32(sp0 - 0x864u), loc_860, loc_85c, loc_858);
        t31 = rd32(COW_IMG(0x105781d8u));
        t32 = rd32(rd32(COW_IMG(0x105781d8u)));
        esi = sp0 - 0x83cu;
        edi = sp0 - 0x890u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x894u, sp0 - 0x800u);
        cow_thiscall(g, rd32(t32 + 0x48u), t31, 16, sp0 - 0x800u, rd32(sp0 - 0x890u), rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), rd32(sp0 - 0x86cu), rd32(sp0 - 0x868u), rd32(sp0 - 0x864u), rd32(sp0 - 0x860u), rd32(sp0 - 0x85cu), rd32(sp0 - 0x858u));
        t33 = g->ecx;
        ecx = t33;
        edx = rd32(sp0 - 0x83cu);
    }
    COW_AT(10127dea)
    if (arg5 == 0u)
    {
        edi = rd32(COW_IMG(0x1062193cu));
        goto L_10127e03;
    }
    edi = rd32(COW_IMG(0x1062193cu));
    COW_AT(10127dfb)
    if (edi == arg5) goto L_10127e03;
    COW_AT(10127dff)
    ecx = ecx & 0xffffff00u;
L_10127e05: ;
    COW_AT(10127e05)
    if (arg5 == 0u) goto L_10127e15;
    COW_AT(10127e09)
    if (rd32(COW_IMG(0x10621940u)) == arg5) goto L_10127e15;
    COW_AT(10127e11)
    ebx = in_ebx & 0xffffff00u;
L_10127e17: ;
    COW_AT(10127e17)
    if ((uint8_t)ecx == 0u)
    {
        eax = arg5;
    }
    else
    {
    COW_AT(10127e22)
        wr32(sp0 - 0x858u, edx);
        g->eax = arg5;
        g->esp = sp0 - 0x854u;
        t34 = cow_cdecl(g, COW_IMG(0x10127870u), 1, edx);
        wr32(sp0 - 0x858u, t34);
        wr32(sp0 - 0x85cu, arg3);
        wr32(sp0 - 0x860u, sp0 - 0x83cu);
        wr32(sp0 - 0x864u, sp0 - 0x800u);
        wr32(sp0 - 0x868u, edi);
        t35 = rd32(sp0 - 0x840u);
        cow_thiscall(g, COW_IMG(0x10128ce0u), t35, 5, edi, sp0 - 0x800u, sp0 - 0x83cu, arg3, t34);
        t36 = g->ecx;
        t37 = rd32(t35 + 0xcu) + 1u;
        t38 = rd32(sp0 - 0x83cu);
        wr32(t35 + 0xcu, t37);
        eax = t37;
        ecx = t36;
        edx = t38;
    }
    COW_AT(10127e4e)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(10127e52)
        wr32(sp0 - 0x858u, edx);
        g->eax = eax;
        g->esp = sp0 - 0x854u;
        t39 = cow_cdecl(g, COW_IMG(0x10127870u), 1, edx);
        wr32(sp0 - 0x858u, t39);
        wr32(sp0 - 0x85cu, arg3);
        wr32(sp0 - 0x860u, sp0 - 0x83cu);
        wr32(sp0 - 0x864u, sp0 - 0x800u);
        wr32(sp0 - 0x868u, rd32(COW_IMG(0x10621940u)));
        g->edx = sp0 - 0x800u;
        cow_thiscall(g, COW_IMG(0x10128ce0u), rd32(COW_IMG(0x1057815cu)), 5, rd32(COW_IMG(0x10621940u)), sp0 - 0x800u, sp0 - 0x83cu, arg3, t39);
        t40 = g->edx;
        t41 = rd32(COW_IMG(0x1057815cu));
        wr32(t41 + 0xcu, rd32(t41 + 0xcu) + 1u);
        eax = t41;
        edx = t40;
    }
    COW_AT(10127e80)
    ebx = (ebx & 0xffffff00u) | 1u;
L_10127e82: ;
    COW_AT(10127e82)
    g->ebx = rd32(sp0 - 0x848u);
    g->esi = rd32(sp0 - 0x850u);
    g->edi = rd32(sp0 - 0x854u);
    g->ebp = rd32(sp0 - 0x84cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_10127e03: ;
    COW_AT(10127e03)
    ecx = (ecx & 0xffffff00u) | 1u;
    goto L_10127e05;
L_10127e15: ;
    COW_AT(10127e15)
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_10127e17;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10127c00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10127c27u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        g->esp = sp0 - 0x854u;
        g->edi = arg2;
        wr32(sp0 - 0x848u, in_ebx);
        wr32(sp0 - 0x840u, self);
        (void)sp0;
        return 1;
    }
    case 0x10127c2du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        g->esp = sp0 - 0x854u;
        g->edi = arg2;
        wr32(sp0 - 0x848u, in_ebx);
        wr32(sp0 - 0x840u, self);
        (void)sp0;
        return 1;
    }
    case 0x10127c31u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
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
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        in_ebx = rd32(sp0 - 0x848u);
        g->esp = sp0 - 0x854u;
        (void)sp0;
        return 1;
    }
    case 0x10127c40u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        g->esp = sp0 - 0x854u;
        g->edi = arg2;
        wr32(sp0 - 0x848u, in_ebx);
        wr32(sp0 - 0x840u, self);
        (void)sp0;
        return 1;
    }
    case 0x10127c49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
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
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        in_ebx = rd32(sp0 - 0x848u);
        g->esp = sp0 - 0x854u;
        (void)sp0;
        return 1;
    }
    case 0x10127c58u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        in_edi = rd32(sp0 - 0x854u);
        in_esi = rd32(sp0 - 0x850u);
        in_ebp = rd32(sp0 - 0x84cu);
        g->esp = sp0 - 0x854u;
        g->edi = arg2;
        wr32(sp0 - 0x848u, in_ebx);
        wr32(sp0 - 0x840u, self);
        (void)sp0;
        return 1;
    }
    case 0x10127e17u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10127e22u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        g->eax = arg5;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10127e4eu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10127e52u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10127e80u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
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
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        (void)sp0;
        return 1;
    }
    case 0x10127e82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_858;
        uint32_t loc_85c;
        uint32_t loc_860;
        uint32_t loc_868;
        uint32_t loc_86c;
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
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_86c = rd32(sp0 - 0x86cu);
        loc_868 = rd32(sp0 - 0x868u);
        loc_860 = rd32(sp0 - 0x860u);
        loc_85c = rd32(sp0 - 0x85cu);
        loc_858 = rd32(sp0 - 0x858u);
        g->esp = sp0 - 0x854u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10127c6e: holds in_ebx, which no location here says
     10127c91: holds in_ebx, which no location here says
     10127c99: holds in_ebx, which no location here says
     10127cae: holds in_ebx, which no location here says
     10127cb6: holds in_ebx, which no location here says
     10127cc1: holds in_ebx, which no location here says
     10127cd4: holds in_ebx, which no location here says
     10127cdf: holds in_ebx, which no location here says
     10127d08: holds in_ebx, which no location here says
     10127d1b: holds in_ebx, which no location here says
     10127d24: holds in_ebx, which no location here says
     10127d29: holds in_ebx, which no location here says
     10127d6d: holds in_ebx, which no location here says
     10127d72: holds in_ebx, which no location here says
     10127d97: holds in_ebx, which no location here says
     10127d9e: holds in_ebx, which no location here says
     10127dea: holds in_ebx, which no location here says
     10127dfb: holds in_ebx, which no location here says
     10127dff: holds in_ebx, which no location here says
     10127e03: holds in_ebx, which no location here says
     10127e05: holds in_ebx, which no location here says
     10127e09: holds in_ebx, which no location here says
     10127e11: holds in_ebx, which no location here says
     10127e15: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10127c00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10127c00(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
