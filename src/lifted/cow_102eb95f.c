/* f_0x102eb95f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102eb95f(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_118;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 300u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(self + 0x3d8u, 0u);
    wr32(sp0 - 0x120u, in_edi);
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_118 = in_ebx;
    loc_11c = in_esi;
    loc_120 = in_edi;
L_102ebc2d: ;
    if (rd32(self + 0xc0u) < rd32(self + 0xc4u)) goto L_102eb979;
    eax = rd32(self + 0xc0u);
    if (eax != rd32(self + 0xc4u))
    {
        eax = 0xffffffffu;
    }
    else
    {
        wr32(self + 0xc0u, eax + 1u);
        wr32(self + 0x3d8u, 1u);
        eax = 0x10cu;
    }
L_102ebe72: ;
    g->ebx = loc_118;
    g->esi = loc_11c;
    g->edi = loc_120;
    g->ebp = loc_4;
    return eax;
L_102eb979: ;
    t1 = rd32(self + 0xc0u);
    t2 = rd8(rd32(self + 0xc0u));
    wr8(sp0 - 0xdu, (uint8_t)t2);
    if ((uint8_t)t2 != 0xau)
    {
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_102eb9a1;
    }
    eax = t1;
    ecx = (ecx & 0xffffff00u) | t2;
    wr32(self + 0x1d0u, rd32(self + 0x1d0u) + 1u);
    wr32(self + 0xc0u, eax + 1u);
    wr32(self + 0xbcu, eax + 1u);
    goto L_102ebc2d;
L_102eb9a1: ;
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)ecx);
    g->eax = (uint32_t)(int8_t)ecx;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)ecx);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        ecx = rd32(sp0 - 0x124u);
        edx = t4;
        goto L_102eb9ba;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t4;
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102eb9ba: ;
    if (rd8(sp0 - 0xdu) != 0x23u)
    {
        edx = (edx & 0xffffff00u) | rd8(sp0 - 0xdu);
        goto L_102ebb64;
    }
    edx = (edx & 0xffffff00u) | rd8(sp0 - 0xdu);
    if (rd32(self + 0xc0u) != rd32(self + 0xbcu))
    {
        eax = rd32(self + 0xc0u);
        goto L_102ebc66;
    }
    eax = rd32(self + 0xc0u);
    wr32(sp0 - 8u, eax);
    t5 = rd32(self + 0xc4u);
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u >= t5)
    {
        loc_8 = eax;
        eax = eax + 1u;
        goto L_102eba00;
    }
    loc_8 = eax;
    eax = eax + 1u;
L_102eb9ea: ;
    if (rd8(eax) == 0xau) goto L_102eba00;
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u))
    {
        eax = eax + 1u;
        goto L_102eb9ea;
    }
    eax = eax + 1u;
L_102eba00: ;
    if ((int32_t)(eax - loc_8) <= 5)
    {
        ecx = eax - loc_8;
        goto L_102ebb5a;
    }
    wr32(sp0 - 0x124u, 5u);
    esi = loc_8;
    edi = COW_IMG(0x103468ccu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_102ebb5a;
    }
    if (loc_8 >= eax)
    {
        edx = 0u;
        goto L_102eba5d;
    }
    edx = 0u;
L_102eba28: ;
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t6 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t6);
    t8 = g->edx;
    if (t7 != 0u)
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t8;
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba5d;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t8;
    t9 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t9);
    if (t9 < rd32(self + 0xc0u))
    {
        loc_8 = t9;
        goto L_102eba28;
    }
    loc_8 = t9;
L_102eba5d: ;
    if (loc_8 < rd32(self + 0xc0u)) goto L_102eba49;
L_102eba68: ;
    eax = loc_8;
    esi = loc_8;
L_102eba86: ;
    if (eax < rd32(self + 0xc0u)) goto L_102eba6f;
L_102eba8e: ;
    if (loc_8 >= rd32(self + 0xc0u))
    {
        eax = loc_8;
        ecx = loc_8;
        edx = rd32(self + 0xc0u);
        goto L_102ebaab;
    }
    eax = loc_8;
    ecx = loc_8;
    edx = rd32(self + 0xc0u);
L_102eba9d: ;
    if (rd8(eax) == 0x22u) goto L_102ebaab;
    if (eax + 1u < rd32(self + 0xc0u))
    {
        eax = eax + 1u;
        goto L_102eba9d;
    }
    eax = eax + 1u;
L_102ebaab: ;
    wr32(sp0 - 0x14u, eax);
    if (eax >= edx)
    {
        loc_14 = eax;
    }
    else
    {
        loc_14 = eax;
        if (eax + 1u >= edx)
        {
            eax = eax + 1u;
            goto L_102ebac5;
        }
        eax = eax + 1u;
L_102ebab7: ;
        if (rd8(eax) == 0x22u) goto L_102ebac5;
        if (eax + 1u < rd32(self + 0xc0u))
        {
            eax = eax + 1u;
            goto L_102ebab7;
        }
        eax = eax + 1u;
    }
L_102ebac5: ;
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 8u, eax - loc_14);
    if (ecx - esi < 0x100u)
    {
        edx = ecx - esi;
        ecx = ecx - esi;
        loc_8 = eax - loc_14;
        loc_c = eax;
    }
    else
    {
        ecx = ecx - esi;
        loc_8 = eax - loc_14;
        loc_c = eax;
        edx = 0xffu;
    }
    if (loc_8 >= 0x100u)
    {
        wr32(sp0 - 8u, 0xffu);
        loc_8 = 0xffu;
    }
    if (edx != 0u)
    {
        edi = sp0 - 0x114u;
        ecx = edx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = edx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(edx + sp0 - 0x114u, 0u);
        wr32(sp0 - 0x124u, sp0 - 0x114u);
        g->eax = sp0 - 0x114u;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, sp0 - 0x114u);
        t19 = g->edx;
        wr32(self + 0x1d0u, t18 - 1u);
        ecx = sp0 - 0x114u;
        edx = t19;
        loc_8 = rd32(sp0 - 8u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
    }
    if (loc_8 <= 1u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    else
    {
        eax = self + 0x1d4u;
        esi = loc_14 + 1u;
L_102ebb4d: ;
        if (esi < loc_c) goto L_102ebb38;
        wr8(eax, 0u);
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
    }
    goto L_102ebc2d;
L_102eba49: ;
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t10 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t10);
    t12 = g->edx;
    if (t11 == 0u)
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t12;
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba68;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t12;
    t13 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t13);
    loc_8 = t13;
    goto L_102eba5d;
L_102eba6f: ;
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(loc_8));
    g->eax = (uint32_t)(int8_t)rd8(loc_8);
    g->edx = edx;
    t14 = rd8(loc_8);
    g->esp = sp0 - 0x120u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x103147f1u), ecx, 1, (uint32_t)(int8_t)t14);
    t16 = g->edx;
    if (t15 != 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_102eba8e;
    }
    ecx = rd32(sp0 - 0x124u);
    edx = t16;
    t17 = rd32(sp0 - 8u) + 1u;
    wr32(sp0 - 8u, t17);
    eax = t17;
    loc_8 = t17;
    goto L_102eba86;
L_102ebb38: ;
    t20 = rd8(esi);
    wr8(eax, (uint8_t)t20);
    if ((uint8_t)t20 != 0x5cu)
    {
        ecx = (ecx & 0xffffff00u) | t20;
        esi = esi + 1u;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t20;
        esi = esi + 1u;
        if (esi < loc_c)
        {
            if (rd8(esi) == (uint8_t)ecx)
            {
                esi = esi + 1u;
            }
        }
    }
    eax = eax + 1u;
    goto L_102ebb4d;
L_102ebb5a: ;
    wr32(sp0 - 0x124u, COW_IMG(0x103468a0u));
    loc_124 = COW_IMG(0x103468a0u);
L_102ebbf0: ;
    wr32(sp0 - 0x128u, self);
    g->ebx = self;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    cow_cdecl(g, COW_IMG(0x102ea931u), 5, self, loc_124, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
    t21 = g->edx;
    ecx = rd32(sp0 - 0x124u);
    edx = t21;
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebb64: ;
    if ((uint8_t)edx == 0x3bu) goto L_102ebc03;
    if ((uint8_t)edx != 0x2fu) goto L_102ebc66;
    if (rd32(self + 0xc0u) + 1u >= rd32(self + 0xc4u))
    {
        eax = rd32(self + 0xc0u);
        ecx = rd32(self + 0xc0u) + 1u;
        goto L_102ebc66;
    }
    eax = rd32(self + 0xc0u);
    ecx = rd32(self + 0xc0u) + 1u;
    esi = rd32(self + 0xc4u);
    if (rd8(ecx) == (uint8_t)edx) goto L_102ebc03;
    if (ecx >= esi) goto L_102ebc66;
    if (rd8(ecx) != 0x2au) goto L_102ebc66;
    wr32(self + 0xc0u, eax + 2u);
    if (eax + 2u >= esi)
    {
        eax = eax + 2u;
        goto L_102ebbeb;
    }
L_102ebbaf: ;
    if (rd8(rd32(self + 0xc0u)) != 0x2au)
    {
        eax = rd32(self + 0xc0u);
        edx = (edx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
        goto L_102ebbc8;
    }
    eax = rd32(self + 0xc0u);
    edx = (edx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
    if (eax + 1u >= esi)
    {
        ecx = eax + 1u;
        goto L_102ebbc8;
    }
    ecx = eax + 1u;
    if (rd8(ecx) == 0x2fu) goto L_102ebbfa;
L_102ebbc8: ;
    if ((uint8_t)edx == 0xau)
    {
        wr32(self + 0x1d0u, rd32(self + 0x1d0u) + 1u);
        wr32(self + 0xbcu, eax + 1u);
        ecx = eax + 1u;
    }
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u)) goto L_102ebbaf;
    eax = eax + 1u;
L_102ebbeb: ;
    wr32(sp0 - 0x124u, COW_IMG(0x1034687cu));
    loc_124 = COW_IMG(0x1034687cu);
    goto L_102ebbf0;
L_102ebbfa: ;
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 2u);
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebc03: ;
    wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
    if (rd32(self + 0xc0u) >= rd32(self + 0xc4u))
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        goto L_102ebc2d;
    }
    eax = rd32(self + 0xc0u);
L_102ebc17: ;
    if (rd8(eax) == 0xau)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_118 = rd32(sp0 - 0x118u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_120 = rd32(sp0 - 0x120u);
        goto L_102ebc2d;
    }
    wr32(self + 0xc0u, eax + 1u);
    if (eax + 1u < rd32(self + 0xc4u))
    {
        ecx = eax + 1u;
        eax = eax + 1u;
        goto L_102ebc17;
    }
    ecx = eax + 1u;
    loc_4 = rd32(sp0 - 4u);
    loc_118 = rd32(sp0 - 0x118u);
    loc_11c = rd32(sp0 - 0x11cu);
    loc_120 = rd32(sp0 - 0x120u);
    goto L_102ebc2d;
L_102ebc66: ;
    wr32(sp0 - 0x124u, (uint32_t)(int8_t)edx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x1031471eu), ecx, 1, (uint32_t)(int8_t)edx);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = rd32(sp0 - 0x124u);
        esi = (uint32_t)(int8_t)edx;
        edx = t23;
        wr32(sp0 - 0x124u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t32 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, esi);
        t33 = g->edx;
        if (t32 == 0u)
        {
            eax = rd32(self + 0xc0u);
            if (rd8(eax) == 0x2bu)
            {
                wr32(self + 0x3d8u, 1u);
            }
            wr32(self + 0xc0u, eax + 1u);
            eax = esi;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
        else
        {
            eax = rd32(self + 0xc0u);
            ecx = rd32(sp0 - 0x124u);
            edx = t33;
            wr32(sp0 - 0xcu, 0x10au);
            t34 = rd32(self + 0xc4u);
            wr32(self + 0xc0u, eax + 1u);
            if (eax + 1u >= t34)
            {
                esi = eax;
                loc_c = 0x10au;
                goto L_102ebdf4;
            }
            esi = eax;
            eax = eax + 1u;
            loc_c = 0x10au;
L_102ebd99: ;
            wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(eax));
            g->eax = (uint32_t)(int8_t)rd8(eax);
            g->edx = edx;
            t35 = rd8(eax);
            g->esp = sp0 - 0x120u;
            t36 = cow_thiscall_cdecl(g, COW_IMG(0x1031479cu), ecx, 1, (uint32_t)(int8_t)t35);
            t37 = g->edx;
            if (t36 != 0u)
            {
                edx = t37;
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdde;
            }
            eax = t36;
            ecx = rd32(sp0 - 0x124u);
            edx = t37;
            if (rd32(self + 0xb4u) == eax) goto L_102ebdbf;
            if (rd8(rd32(self + 0xc0u)) == 0x2eu) goto L_102ebdd7;
            eax = (rd32(self + 0xc0u) & 0xffffff00u) | rd8(rd32(self + 0xc0u));
            if ((uint8_t)eax == 0x65u) goto L_102ebdd7;
L_102ebdbf: ;
            if (rd8(rd32(self + 0xc0u)) == 0x2bu)
            {
                eax = rd32(self + 0xc0u);
                goto L_102ebdd1;
            }
            eax = rd32(self + 0xc0u);
            ecx = (ecx & 0xffffff00u) | rd8(rd32(self + 0xc0u));
            if ((uint8_t)ecx != 0x2du)
            {
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdf4;
            }
L_102ebdd1: ;
            if (rd8(eax - 1u) != 0x65u)
            {
                loc_c = rd32(sp0 - 0xcu);
                goto L_102ebdf4;
            }
L_102ebdd7: ;
            wr32(sp0 - 0xcu, 0x10bu);
            loc_c = 0x10bu;
L_102ebdde: ;
            wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
            t38 = rd32(self + 0xc0u);
            if (t38 < rd32(self + 0xc4u))
            {
                eax = t38;
                ecx = t38;
                goto L_102ebd99;
            }
L_102ebdf4: ;
            if (rd32(self + 0xc0u) - esi < 0x100u)
            {
                eax = rd32(self + 0xc0u) - esi;
            }
            else
            {
                eax = 0xffu;
            }
            edi = self + 0xc8u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + self + 0xc8u, 0u);
            if (rd32(self + 0xb4u) != 0u)
            {
                if (rd32(self + 0xc0u) < rd32(self + 0xc4u))
                {
                    eax = rd32(self + 0xc0u);
                    if (rd8(eax) == 0x66u)
                    {
                        wr32(sp0 - 0xcu, 0x10bu);
                        wr32(self + 0xc0u, eax + 1u);
                        loc_c = 0x10bu;
                    }
                }
            }
            eax = loc_c;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
    }
    else
    {
        ecx = rd32(sp0 - 0x124u);
        edx = t23;
        t24 = rd32(self + 0xc0u) + 1u;
        t25 = rd32(self + 0xc0u);
        t26 = rd32(self + 0xc4u);
        wr32(self + 0xc0u, t24);
        if (t25 + 1u >= t26)
        {
            esi = t25;
            goto L_102ebcbe;
        }
        eax = t24;
        esi = t25;
L_102ebc8f: ;
        wr32(sp0 - 0x124u, (uint32_t)(int8_t)rd8(eax));
        g->eax = (uint32_t)(int8_t)rd8(eax);
        g->edx = edx;
        t27 = rd8(eax);
        g->esp = sp0 - 0x120u;
        t28 = cow_thiscall_cdecl(g, COW_IMG(0x10314841u), ecx, 1, (uint32_t)(int8_t)t27);
        t29 = g->edx;
        if (t28 != 0u)
        {
            edx = t29;
            goto L_102ebca8;
        }
        edx = t29;
        if (rd8(rd32(self + 0xc0u)) != 0x5fu) goto L_102ebcbe;
L_102ebca8: ;
        wr32(self + 0xc0u, rd32(self + 0xc0u) + 1u);
        t30 = rd32(self + 0xc0u);
        if (t30 < rd32(self + 0xc4u))
        {
            eax = t30;
            ecx = t30;
            goto L_102ebc8f;
        }
L_102ebcbe: ;
        if (rd32(self + 0xc0u) - esi < 0x100u)
        {
            eax = rd32(self + 0xc0u) - esi;
        }
        else
        {
            eax = 0xffu;
        }
        edi = self + 0xc8u;
        ecx = eax >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = eax & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr8(eax + self + 0xc8u, 0u);
        wr32(sp0 - 0x124u, 3u);
        wr32(self + 0x3d8u, 1u);
        esi = self + 0xc8u;
        edi = COW_IMG(0x10346878u);
        ecx = 3u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            wr32(sp0 - 0x124u, 3u);
            esi = self + 0xc8u;
            edi = COW_IMG(0x10346874u);
            ecx = 3u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                wr32(sp0 - 0x124u, 4u);
                esi = self + 0xc8u;
                edi = COW_IMG(0x103465a4u);
                ecx = 4u;
                cf = 0u;
                pf = PARITY(0u);
                af = 0u;
                zf = 1u;
                sf = 0u;
                of = 0u;
                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                if (!zf)
                {
                    g->eax = 0u;
                    g->esp = sp0 - 0x120u;
                    t31 = cow_thiscall(g, COW_IMG(0x102eaa67u), self, 0);
                    if (t31 != 0x109u)
                    {
                        eax = t31;
                        loc_4 = rd32(sp0 - 4u);
                        loc_118 = rd32(sp0 - 0x118u);
                        loc_11c = rd32(sp0 - 0x11cu);
                        loc_120 = rd32(sp0 - 0x120u);
                    }
                    else
                    {
                        eax = t31;
                        wr32(self + 0x3d8u, 0u);
                        loc_4 = rd32(sp0 - 4u);
                        loc_118 = rd32(sp0 - 0x118u);
                        loc_11c = rd32(sp0 - 0x11cu);
                        loc_120 = rd32(sp0 - 0x120u);
                    }
                }
                else
                {
                    eax = 0x103u;
                    loc_4 = rd32(sp0 - 4u);
                    loc_118 = rd32(sp0 - 0x118u);
                    loc_11c = rd32(sp0 - 0x11cu);
                    loc_120 = rd32(sp0 - 0x120u);
                }
            }
            else
            {
                eax = 0x102u;
                loc_4 = rd32(sp0 - 4u);
                loc_118 = rd32(sp0 - 0x118u);
                loc_11c = rd32(sp0 - 0x11cu);
                loc_120 = rd32(sp0 - 0x120u);
            }
        }
        else
        {
            eax = 0x101u;
            loc_4 = rd32(sp0 - 4u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_11c = rd32(sp0 - 0x11cu);
            loc_120 = rd32(sp0 - 0x120u);
        }
    }
    goto L_102ebe72;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eb95f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eb95f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
