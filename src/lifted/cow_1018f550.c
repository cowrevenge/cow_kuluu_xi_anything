/* f_0x1018f550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018f550(Guest* g)
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
    uint32_t loc_318;
    uint32_t loc_328;
    uint32_t loc_330;
    uint32_t loc_334;
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
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
    cow_frame(g, sp0, 872u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018f57du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x344u); in_esi = rd32(sp0 - 0x340u); in_ebp = rd32(sp0 - 0x33cu); in_ebx = rd32(sp0 - 0x338u); g->ebp = rd32(sp0 - 0x33cu); g->ebx = rd32(sp0 - 0x338u); g->edi = rd32(sp0 - 0x344u); g->esi = rd32(sp0 - 0x340u); goto E_1018f57d;
    case 0x1018f5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x344u); in_esi = rd32(sp0 - 0x340u); in_ebp = rd32(sp0 - 0x33cu); in_ebx = rd32(sp0 - 0x338u); g->ebp = rd32(sp0 - 0x33cu); g->ebx = rd32(sp0 - 0x338u); g->edi = rd32(sp0 - 0x344u); g->esi = rd32(sp0 - 0x340u); goto E_1018f5a8;
    case 0x1018f5b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x344u); in_esi = rd32(sp0 - 0x340u); in_ebp = rd32(sp0 - 0x33cu); in_ebx = rd32(sp0 - 0x338u); loc_318 = rd32(sp0 - 0x318u); g->ebp = rd32(sp0 - 0x33cu); g->ebx = rd32(sp0 - 0x338u); g->edi = rd32(sp0 - 0x344u); g->esi = rd32(sp0 - 0x340u); goto E_1018f5b3;
    case 0x1018f5dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); goto E_1018f5db;
    case 0x1018f5f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); goto E_1018f5f4;
    case 0x1018f606u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f606;
    case 0x1018f656u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_328 = rd32(sp0 - 0x328u); goto E_1018f656;
    case 0x1018f65du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_328 = rd32(sp0 - 0x328u); goto E_1018f65d;
    case 0x1018f674u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); goto E_1018f674;
    case 0x1018f67du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); loc_330 = rd32(sp0 - 0x330u); goto E_1018f67d;
    case 0x1018f681u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); loc_330 = rd32(sp0 - 0x330u); goto E_1018f681;
    case 0x1018f6b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f6b3;
    case 0x1018f6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f6cd;
    case 0x1018f6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f6d8;
    case 0x1018f6e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f6e2;
    case 0x1018f717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f717;
    case 0x1018f743u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f743;
    case 0x1018f74eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f74e;
    case 0x1018f758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f758;
    case 0x1018f763u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f763;
    case 0x1018f76du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f76d;
    case 0x1018f773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f773;
    case 0x1018f77au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1018f77a;
    case 0x1018f7acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_334 = rd32(sp0 - 0x334u); loc_330 = rd32(sp0 - 0x330u); goto E_1018f7ac;
    default: break;
    }
#endif

    COW_AT(1018f550)
    wr32(sp0 - 0x338u, in_ebx);
    wr32(sp0 - 0x33cu, in_ebp);
    wr32(sp0 - 0x340u, in_esi);
    wr32(sp0 - 0x344u, in_edi);
    wr32(sp0 - 0x31cu, self);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x324u, 0u);
    wr16(sp0 - 0x322u, 0u);
    wr16(sp0 - 0x320u, 0u);
    wr16(sp0 - 0x31eu, 0u);
    if (t1 == 0u)
    {
    COW_AT(1018f5a8)
        wr32(sp0 - 0x318u, 0x64u);
        esi = 0x64u;
        edi = 0x64u;
        loc_318 = 0x64u;
    }
    else
    {
        ecx = t1;
    COW_AT(1018f57d)
        wr32(sp0 - 0x348u, sp0 - 0x324u);
        g->edx = in_edx;
        g->esp = sp0 - 0x344u;
        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x324u, ecx, g->edx, 0, 1, sp0 - 0x324u);
        t2 = g->edx;
        t3 = (uint32_t)(int16_t)rd16(sp0 - 0x324u) + 4u;
        wr32(sp0 - 0x318u, t3);
        esi = t3;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x322u) + 2u;
        loc_318 = t3;
    }
    COW_AT(1018f5b3)
    t4 = (uint32_t)(int16_t)rd16(self + 0x2220u) - 8u;
    wr32(sp0 - 0x32cu, t4);
    g->eax = t4;
    g->edx = rd32(rd32(self + 0x14u));
    t5 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x344u;
    t6 = cow_thiscall(g, rd32(t5 + 0x1cu), rd32(self + 0x14u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101b4b70u), self + 0x18u, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x334u, t8);
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        ebp = t6;
        loc_334 = t8;
    COW_AT(1018f5f4)
        wr32(sp0 - 0x348u, COW_IMG(0x10377cb8u));
        wr32(sp0 - 0x34cu, sp0 - 0x310u);
        g->ebx = self;
        g->edx = sp0 - 0x310u;
        g->esp = sp0 - 0x338u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x310u, COW_IMG(0x10377cb8u), rd32(sp0 - 0x344u), rd32(sp0 - 0x340u), rd32(sp0 - 0x33cu));
        t12 = g->edx;
        edx = t12;
    }
    else
    {
        eax = t8;
        edx = t10;
        ebp = t6;
        loc_334 = t8;
    COW_AT(1018f5db)
        wr32(sp0 - 0x348u, eax);
        wr32(sp0 - 0x34cu, ebp + 1u);
        wr32(sp0 - 0x350u, COW_IMG(0x10357fbcu));
        wr32(sp0 - 0x354u, sp0 - 0x310u);
        g->ebx = self;
        g->edx = edx;
        g->esp = sp0 - 0x340u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x310u, COW_IMG(0x10357fbcu), ebp + 1u, eax, rd32(sp0 - 0x344u));
        t11 = g->edx;
        edx = t11;
    }
    COW_AT(1018f606)
    wr32(sp0 - 0x348u, 0x80808080u);
    wr32(sp0 - 0x34cu, sp0 - 0x310u);
    wr32(sp0 - 0x350u, edi);
    wr32(sp0 - 0x354u, esi + 0x23u);
    g->eax = sp0 - 0x310u;
    g->ecx = esi + 0x23u;
    g->edx = edx;
    g->esp = sp0 - 0x330u;
    t13 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, esi + 0x23u, edi, sp0 - 0x310u, 0x80808080u, rd32(sp0 - 0x344u), rd32(sp0 - 0x340u), rd32(sp0 - 0x33cu), rd32(sp0 - 0x338u), rd32(sp0 - 0x334u));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x358u, 0x80808080u);
    wr32(sp0 - 0x35cu, COW_IMG(0x1036fd74u));
    wr32(sp0 - 0x360u, edi);
    wr32(sp0 - 0x364u, esi + 5u);
    g->esp = sp0 - 0x340u;
    cow_cdecl(g, COW_IMG(0x101907e0u), 9, esi + 5u, edi, COW_IMG(0x1036fd74u), 0x80808080u, rd32(sp0 - 0x354u), rd32(sp0 - 0x350u), sp0 - 0x310u, 0x80808080u, rd32(sp0 - 0x344u));
    t16 = cow_divs(g, ebp, 7u);
    t17 = cow_mods(g, ebp, 7u);
    t18 = t16 * 8u - t16 + 6u;
    wr32(sp0 - 0x328u, t18);
    if ((int32_t)(t16 * 8u - t16 + 6u) < (int32_t)rd32(sp0 - 0x334u))
    {
        eax = t17 + 2u;
        edx = t17;
        ebp = t18;
        esi = t16 * 8u - t16;
        loc_328 = t18;
    }
    else
    {
        eax = t17 + 2u;
        ecx = rd32(sp0 - 0x334u);
        edx = t17;
        esi = t16 * 8u - t16;
    COW_AT(1018f656)
        wr32(sp0 - 0x328u, ecx - 1u);
        ebp = ecx - 1u;
        loc_328 = ecx - 1u;
    }
    COW_AT(1018f65d)
    wr32(sp0 - 0x348u, 0u);
    wr32(sp0 - 0x34cu, eax);
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x344u;
    t19 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, eax, 0u);
    t20 = g->edx;
    wr32(sp0 - 0x334u, esi);
    if ((int32_t)esi > (int32_t)ebp)
    {
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = t19;
        loc_334 = esi;
    COW_AT(1018f674)
        wr32(sp0 - 0x330u, edi + 0x10u);
        ebx = self;
        loc_330 = edi + 0x10u;
L_1018f681: ;
    COW_AT(1018f681)
        wr32(sp0 - 0x348u, loc_334);
        g->eax = eax;
        g->esp = sp0 - 0x344u;
        t21 = cow_fastcall(g, COW_IMG(0x101b4b80u), ebx + 0x18u, loc_334, 1, loc_334);
        t22 = g->edx;
        g->edx = t22;
        t23 = cow_thiscall(g, COW_IMG(0x101b46d0u), t21, 0);
        t24 = g->ecx;
        t25 = g->edx;
        edi = t23;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t26 = ~ecx - 1u;
        g->eax = eax;
        g->edx = t25;
        t27 = cow_thiscall(g, COW_IMG(0x101b46e0u), t21, 0);
        t28 = g->ecx;
        t29 = g->edx;
        if ((int32_t)(t26 + 1u) >= (int32_t)t27)
        {
            eax = t27;
            edx = t29;
            ebx = t21;
    COW_AT(1018f6cd)
            g->eax = eax;
            g->esp = sp0 - 0x344u;
            t31 = cow_thiscall(g, COW_IMG(0x101b46d0u), ebx, 0);
            t32 = g->ecx;
            eax = t31;
            ecx = t32;
            edx = sp0 - 0x2d0u;
L_1018f6d8: ;
    COW_AT(1018f6d8)
            t33 = rd8(eax);
            wr8(edx, (uint8_t)t33);
            if ((uint8_t)t33 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t33;
                edx = edx + 1u;
                goto L_1018f6d8;
            }
            eax = eax + 1u;
        }
        else
        {
            ecx = t28;
            edx = t29;
            ebx = t21;
            ebp = t23;
            esi = t26 + 1u;
    COW_AT(1018f6b3)
            wr32(sp0 - 0x348u, ebp + esi);
            wr32(sp0 - 0x34cu, 6u);
            wr32(sp0 - 0x350u, ebp);
            wr32(sp0 - 0x354u, COW_IMG(0x10377cb0u));
            wr32(sp0 - 0x358u, sp0 - 0x2d0u);
            g->ebx = ebx;
            g->eax = sp0 - 0x2d0u;
            g->esp = sp0 - 0x344u;
            t30 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x2d0u, COW_IMG(0x10377cb0u), ebp, 6u, ebp + esi);
            eax = t30;
        }
    COW_AT(1018f6e2)
        wr32(sp0 - 0x348u, sp0 - 0x2d0u);
        wr32(sp0 - 0x34cu, 0x168u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        g->esp = sp0 - 0x33cu;
        cow_call_regs(g, COW_IMG(0x1025c110u), g->eax, sp0 - 0x2d0u, sp0 - 0x168u, 1, 5, sp0 - 0x168u, 0x168u, sp0 - 0x2d0u, rd32(sp0 - 0x344u), rd32(sp0 - 0x340u));
        t34 = g->edx;
        t35 = rd32(sp0 - 0x31cu);
        wr32(sp0 - 0x348u, sp0 - 0x168u);
        g->edx = t34;
        g->esp = sp0 - 0x344u;
        t36 = cow_call_regs(g, COW_IMG(0x1018f8c0u), sp0 - 0x168u, g->ecx, g->edx, 0, 1, sp0 - 0x168u);
        t37 = g->edx;
        if ((int32_t)t36 <= (int32_t)rd32(sp0 - 0x32cu))
        {
            esi = t35;
    COW_AT(1018f773)
            eax = sp0 - 0x168u;
        }
        else
        {
            eax = t36;
            ecx = rd32(sp0 - 0x32cu);
            edx = t37;
            esi = t35;
    COW_AT(1018f717)
            wr32(sp0 - 0x348u, ecx - 0xfu);
            g->eax = eax;
            g->esp = sp0 - 0x348u;
            t38 = cow_thiscall(g, COW_IMG(0x101b46e0u), ebx, 0);
            wr32(sp0 - 0x34cu, t38);
            wr32(sp0 - 0x350u, sp0 - 0x168u);
            wr32(sp0 - 0x354u, 0x168u);
            wr32(sp0 - 0x358u, sp0 - 0x2d0u);
            g->edx = sp0 - 0x2d0u;
            g->esp = sp0 - 0x344u;
            t39 = cow_thiscall(g, COW_IMG(0x1018f920u), esi, 5, sp0 - 0x2d0u, 0x168u, sp0 - 0x168u, t38, rd32(sp0 - 0x348u));
            t40 = g->edx;
            if (t39 == 0u)
            {
                eax = t39;
            }
            else
            {
                eax = t39;
                edx = t40;
    COW_AT(1018f743)
                if (rd8(eax + sp0 - 0x2d1u) != 0x20u) goto L_1018f758;
L_1018f74e: ;
    COW_AT(1018f74e)
                if (rd8(eax + sp0 - 0x2d2u) == 0x20u)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + sp0 - 0x2d2u);
                    eax = eax - 1u;
                    goto L_1018f74e;
                }
                eax = eax - 1u;
            }
L_1018f758: ;
    COW_AT(1018f758)
            ecx = COW_IMG(0x1036c9a4u);
            edx = eax + sp0 - COW_IMG(0x1036c9a4u) - 0x2d0u;
            eax = eax - COW_IMG(0x1036c9a4u);
L_1018f763: ;
    COW_AT(1018f763)
            t41 = rd8(ecx);
            wr8(ecx + edx, (uint8_t)t41);
            if ((uint8_t)t41 != 0u)
            {
                eax = (eax & 0xffffff00u) | t41;
                ecx = ecx + 1u;
                goto L_1018f763;
            }
    COW_AT(1018f76d)
            eax = sp0 - 0x2d0u;
        }
    COW_AT(1018f77a)
        wr32(sp0 - 0x348u, eax);
        t42 = rd32(sp0 - 0x330u);
        wr32(sp0 - 0x34cu, t42);
        t43 = rd32(sp0 - 0x318u);
        wr32(sp0 - 0x350u, t43);
        g->esp = sp0 - 0x344u;
        cow_call_regs(g, COW_IMG(0x1018f300u), eax, esi, g->edx, 0, 3, t43, t42, eax);
        t44 = rd32(sp0 - 0x334u) + 1u;
        t45 = rd32(sp0 - 0x334u);
        wr32(sp0 - 0x334u, t44);
        t46 = rd32(sp0 - 0x330u) + 0x10u;
        wr32(sp0 - 0x330u, t46);
        if ((int32_t)(t45 + 1u) <= (int32_t)rd32(sp0 - 0x328u))
        {
            eax = t44;
            loc_334 = t44;
            loc_330 = t46;
            goto L_1018f67d;
        }
        eax = t44;
        edx = t46;
    }
    COW_AT(1018f7ac)
    g->ebx = rd32(sp0 - 0x338u);
    g->esi = rd32(sp0 - 0x340u);
    g->edi = rd32(sp0 - 0x344u);
    g->ebp = rd32(sp0 - 0x33cu);
    g->edx = edx;
    return eax;
L_1018f67d: ;
    COW_AT(1018f67d)
    ebx = rd32(sp0 - 0x31cu);
    goto L_1018f681;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018f550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018f57du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x344u);
        in_esi = rd32(sp0 - 0x340u);
        in_ebp = rd32(sp0 - 0x33cu);
        in_ebx = rd32(sp0 - 0x338u);
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x31cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1018f5a8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x344u);
        in_esi = rd32(sp0 - 0x340u);
        in_ebp = rd32(sp0 - 0x33cu);
        in_ebx = rd32(sp0 - 0x338u);
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x31cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1018f5b3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_318;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x344u);
        in_esi = rd32(sp0 - 0x340u);
        in_ebp = rd32(sp0 - 0x33cu);
        in_ebx = rd32(sp0 - 0x338u);
        loc_318 = rd32(sp0 - 0x318u);
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x31cu, self);
        (void)sp0;
        return 1;
    }
    case 0x1018f5dbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_334;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_334 = rd32(sp0 - 0x334u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f5f4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_334;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_334 = rd32(sp0 - 0x334u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f606u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
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
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f656u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_328;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_328 = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x34cu, sp0 - 0x310u);
        (void)sp0;
        return 1;
    }
    case 0x1018f65du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_328;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_328 = rd32(sp0 - 0x328u);
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x34cu, sp0 - 0x310u);
        (void)sp0;
        return 1;
    }
    case 0x1018f674u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_334;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_334 = rd32(sp0 - 0x334u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f67du:
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
        uint32_t loc_330;
        uint32_t loc_334;
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
        loc_334 = rd32(sp0 - 0x334u);
        loc_330 = rd32(sp0 - 0x330u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f681u:
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
        uint32_t loc_330;
        uint32_t loc_334;
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
        loc_334 = rd32(sp0 - 0x334u);
        loc_330 = rd32(sp0 - 0x330u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f6b3u:
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
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f6cdu:
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
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f6d8u:
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
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f6e2u:
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
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    case 0x1018f717u:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        wr32(sp0 - 0x348u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f743u:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x358u, sp0 - 0x2d0u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f74eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
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
        g->esp = sp0 - 0x344u;
        g->ecx = sp0 - 0x2d1u;
        wr32(sp0 - 0x358u, sp0 - 0x2d0u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f758u:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x358u, sp0 - 0x2d0u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f763u:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x358u, sp0 - 0x2d0u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f76du:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x358u, sp0 - 0x2d0u);
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f773u:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        wr32(sp0 - 0x348u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f77au:
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
        g->esp = sp0 - 0x344u;
        wr32(sp0 - 0x350u, sp0 - 0x168u);
        (void)sp0;
        return 1;
    }
    case 0x1018f7acu:
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
        uint32_t loc_330;
        uint32_t loc_334;
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
        loc_334 = rd32(sp0 - 0x334u);
        loc_330 = rd32(sp0 - 0x330u);
        g->esp = sp0 - 0x344u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018f550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
