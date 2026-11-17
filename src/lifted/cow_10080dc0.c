/* f_0x10080dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10080dc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_404;
    uint32_t loc_408;
    uint32_t loc_40c;
    uint32_t loc_410;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1068u);

    wr32(sp0 - 0x408u, in_ebp);
    wr32(sp0 - 0x40cu, in_esi);
    wr32(sp0 - 0x410u, in_edi);
    wr32(sp0 - 0x414u, 0x200u);
    wr32(sp0 - 0x418u, sp0 - 0x200u);
    wr32(sp0 - 0x41cu, arg1);
    wr32(sp0 - 0x404u, 0u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662da4u));
    g->esp = sp0 - 0x410u;
    cow_thiscall(g, COW_IMG(0x101ad4b0u), t1, 3, arg1, sp0 - 0x200u, 0x200u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1047d3f0u));
    wr8(sp0 - 1u, 0u);
    wr32(COW_IMG(0x1047d3f8u), 0u);
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t2;
        edx = t3;
        goto L_10080e12;
    }
    return 0u;
L_10080e12: ;
    if (rd8(sp0 - 0x200u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
        goto L_10080e29;
    }
    return 0u;
L_10080e29: ;
    if ((uint8_t)arg2 == 1u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        goto L_10080e3f;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    wr8(COW_IMG(0x1047d3feu), 1u);
    if ((uint8_t)eax != 2u)
    {
        zf = (uint8_t)((uint8_t)eax - 2u) == 0u;
        goto L_10080e48;
    }
L_10080e3f: ;
    wr8(COW_IMG(0x1047d3feu), 0u);
    zf = (uint8_t)((uint8_t)eax - 2u) == 0u;
L_10080e48: ;
    t5 = rd32(COW_IMG(0x1057876cu));
    wr8(COW_IMG(0x1047d497u), zf);
    if (rd8(t5 + 0x59u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(t5 + 0x59u);
        edx = (edx & 0xffffff00u) | zf;
        goto L_10080e65;
    }
    eax = t5;
    ecx = (ecx & 0xffffff00u) | rd8(t5 + 0x59u);
    edx = (edx & 0xffffff00u) | zf;
    if (rd32(eax + 0xc4u) == 0u)
    {
        loc_408 = in_ebp;
        loc_40c = in_esi;
        loc_410 = in_edi;
        loc_404 = 0u;
        goto L_10080ebf;
    }
L_10080e65: ;
    wr32(sp0 - 0x414u, sp0 - 0x200u);
    wr32(sp0 - 0x418u, COW_IMG(0x10355408u));
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    t6 = cow_call_regs(g, COW_IMG(0x10077b40u), sp0 - 0x200u, g->ecx, g->edx, 1, 2, COW_IMG(0x10355408u), sp0 - 0x200u);
    t7 = g->edx;
    if ((uint8_t)arg2 == 1u)
    {
        eax = t6;
        edx = t7;
        goto L_10080e99;
    }
    edx = t7;
    if ((uint8_t)arg2 != 2u)
    {
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_410 = rd32(sp0 - 0x410u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_10080ebf;
    }
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080e99: ;
    if (eax == 0u) goto L_10080ea3;
    if ((rd8(eax + 0x16u) & 2u) != 0u)
    {
        loc_408 = rd32(sp0 - 0x408u);
        loc_40c = rd32(sp0 - 0x40cu);
        loc_410 = rd32(sp0 - 0x410u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_10080ebf;
    }
L_10080ea3: ;
    wr32(sp0 - 0x414u, 0xa4u);
    g->esp = sp0 - 0x410u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa4u);
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080ebf: ;
    wr32(sp0 - 0x414u, 0x200u);
    edi = COW_IMG(0x10354fe0u);
    eax = 0u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10354be0u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x10354de0u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047d400u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047d448u);
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x418u, COW_IMG(0x10354be0u));
    wr32(sp0 - 0x41cu, sp0 - 0x200u);
    wr32(COW_IMG(0x1047d3f4u), 1u);
    wr32(COW_IMG(0x1047d490u), 0u);
    wr32(COW_IMG(0x103551e0u), COW_IMG(0x1047d400u));
    wr32(COW_IMG(0x103551e4u), COW_IMG(0x1047d448u));
    g->ecx = sp0 - 0x200u;
    g->edx = edx;
    g->esp = sp0 - 0x3d8u;
    t8 = cow_bridge_indirect(g, COW_IMG(0x10076ab0u), 0u, 17u, (const uint32_t[]){sp0 - 0x200u, COW_IMG(0x10354be0u), 0x200u, loc_410, loc_40c, loc_408, loc_404, rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u), rd32(sp0 - 0x3f4u), rd32(sp0 - 0x3f0u), rd32(sp0 - 0x3ecu), rd32(sp0 - 0x3e8u), rd32(sp0 - 0x3e4u), rd32(sp0 - 0x3e0u), rd32(sp0 - 0x3dcu)}, g->ecx, g->edx, eax, 68u);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd8(COW_IMG(0x10354be0u)) != 0u)
    {
        eax = (t8 & 0xffffff00u) | rd8(COW_IMG(0x10354be0u));
        ecx = t9;
        edx = t10;
        goto L_10080f50;
    }
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_10080f50: ;
    if ((uint8_t)eax == 0x2fu)
    {
        esi = 0x96u;
        edi = COW_IMG(0x10354de0u);
    }
    else
    {
        if (rd32(COW_IMG(0x10662da4u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x10662da4u));
            esi = 0x96u;
            edi = COW_IMG(0x10354de0u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662da4u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x410u;
            t11 = cow_thiscall(g, COW_IMG(0x101ad820u), ecx, 0);
            t12 = g->ecx;
            t13 = g->edx;
            edi = t11;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if (~ecx - 1u >= 0x96u)
            {
                ecx = ~ecx - 1u;
                edx = t13;
            }
            else
            {
                ecx = ~ecx - 1u;
                esi = t11;
                eax = esi;
                edx = COW_IMG(0x10354de0u) - esi;
L_10080f8c: ;
                t14 = rd8(eax);
                wr8(eax + edx, (uint8_t)t14);
                if ((uint8_t)t14 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t14;
                    goto L_10080f8c;
                }
                ecx = (ecx & 0xffffff00u) | t14;
            }
            edi = COW_IMG(0x10354de0u);
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            esi = 0x96u - (~ecx - 1u);
            edi = COW_IMG(0x10354de0u) + ~ecx - 1u;
            ecx = ~ecx - 1u;
        }
    }
    if ((int32_t)esi <= 0) goto L_10080fd4;
    ebp = COW_IMG(0x10354be0u);
L_10080fbb: ;
    wr32(sp0 - 0x414u, esi);
    wr32(sp0 - 0x418u, ebp);
    wr32(sp0 - 0x41cu, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x400u;
    t15 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, edi, ebp, esi, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u));
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_10080fd4;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    if ((int32_t)(esi - eax) > 0)
    {
        ebp = eax + ebp;
        esi = esi - eax;
        edi = eax + edi;
        goto L_10080fbb;
    }
L_10080fd4: ;
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 0x11u);
    wr32(sp0 - 0x41cu, COW_IMG(0x1047d448u));
    wr32(sp0 - 0x420u, COW_IMG(0x1047d400u));
    wr32(sp0 - 0x424u, COW_IMG(0x10354fe0u));
    wr32(sp0 - 0x428u, COW_IMG(0x10354de0u));
    g->ecx = ecx;
    g->esp = sp0 - 0x3e0u;
    t18 = cow_bridge_indirect(g, COW_IMG(0x10076830u), 0u, 18u, (const uint32_t[]){COW_IMG(0x10354de0u), COW_IMG(0x10354fe0u), COW_IMG(0x1047d400u), COW_IMG(0x1047d448u), 0x11u, 0u, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu), rd32(sp0 - 0x3f8u), rd32(sp0 - 0x3f4u), rd32(sp0 - 0x3f0u), rd32(sp0 - 0x3ecu), rd32(sp0 - 0x3e8u), rd32(sp0 - 0x3e4u)}, g->ecx, edx, eax, 72u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(COW_IMG(0x1047d490u), t18);
    if (rd8(COW_IMG(0x10354de0u)) != 0x2fu)
    {
        ecx = t19;
        edx = t20;
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100811e8;
    }
    ecx = t19;
    t21 = rd32(COW_IMG(0x103551e0u));
    wr32(COW_IMG(0x1047d3f4u), 0u);
    wr32(sp0 - 0x414u, rd32(t21));
    wr32(sp0 - 0x418u, COW_IMG(0x10355408u));
    g->eax = rd32(t21);
    g->ecx = ecx;
    t22 = rd32(t21);
    g->esp = sp0 - 0x404u;
    t23 = cow_call_regs(g, COW_IMG(0x10077ad0u), g->eax, g->ecx, t21, 1, 5, COW_IMG(0x10355408u), t22, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u));
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    esi = t23;
    if ((uint32_t)(int16_t)rd16(esi + 0x14u) == 0u)
    {
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    edi = (uint32_t)(int16_t)rd16(esi + 0x14u);
    if ((rd8(esi + 0x17u) & 0x20u) != 0u)
    {
        wr32(sp0 - 0x414u, COW_IMG(0x10354de0u));
        wr32(sp0 - 0x418u, COW_IMG(0x1034f7e0u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x410u;
        t26 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1034f7e0u), COW_IMG(0x10354de0u));
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    wr32(sp0 - 0x414u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x3f8u;
    t29 = cow_call_regs(g, COW_IMG(0x10081230u), eax, ecx, g->edx, 1, 7, esi, rd32(sp0 - 0x410u), rd32(sp0 - 0x40cu), rd32(sp0 - 0x408u), rd32(sp0 - 0x404u), rd32(sp0 - 0x400u), rd32(sp0 - 0x3fcu));
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    edx = t31;
    if (rd32(COW_IMG(0x10356e30u)) == 0x1d4u)
    {
        eax = COW_IMG(0x10356e30u);
        ecx = rd32(COW_IMG(0x10356e30u));
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    eax = COW_IMG(0x10356e30u);
L_10081074: ;
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    if (edi == rd32(eax)) goto L_1008108f;
    if (rd32(eax + 0xcu) != 0x1d4u)
    {
        eax = eax + 0xcu;
        goto L_10081074;
    }
    ecx = rd32(eax + 0xcu);
    eax = eax + 0xcu;
    loc_404 = rd32(sp0 - 0x404u);
L_100810ca: ;
    if (rd8(COW_IMG(0x1047d498u)) != 0u) goto L_100811e8;
    if ((int32_t)loc_404 >= 0) goto L_100811e8;
    if ((uint8_t)arg2 - 3u > 4u) goto L_1008119b;
    t35 = rd32(COW_IMG(0x10081214u) + (uint8_t)arg2 * 4u - 0xcu);
    switch (t35 - RD)
    {
    case 0x10081102u: goto L_10081102;
    case 0x10081123u: goto L_10081123;
    case 0x10081141u: goto L_10081141;
    case 0x1008115fu: goto L_1008115f;
    case 0x1008117du: goto L_1008117d;
    default: rt_fatal(g, COW_IMG(0x100810fbu), "switch");
    }
    return 0;
L_1008108f: ;
    if (rd32(eax + 4u) == 0u)
    {
        ecx = rd32(eax + 4u);
        eax = (eax & 0xffffff00u) | rd8(eax + 8u);
        loc_404 = rd32(sp0 - 0x404u);
        goto L_100810ca;
    }
    ecx = rd32(eax + 4u);
    eax = (eax & 0xffffff00u) | rd8(eax + 8u);
    if (rd8(COW_IMG(0x1047d498u)) == 0u) goto L_100810b3;
    if ((uint8_t)eax != 0u) goto L_100810b3;
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return 0u;
L_100810b3: ;
    wr32(sp0 - 0x414u, edi);
    wr32(sp0 - 0x418u, COW_IMG(0x10354de0u));
    wr32(sp0 - 0x41cu, sp0 - 0x200u);
    g->eax = eax;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x410u;
    t32 = cow_thiscall_cdecl(g, ecx, ecx, 3, sp0 - 0x200u, COW_IMG(0x10354de0u), edi);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x404u, t32);
    eax = t32;
    ecx = t33;
    edx = t34;
    loc_404 = t32;
    goto L_100810ca;
L_10081102: ;
    wr32(sp0 - 0x414u, COW_IMG(0x10357f88u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t48 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f88u), rd32(sp0 - 0x410u));
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    loc_404 = rd32(sp0 - 0x404u);
L_100811bc: ;
    if (rd8(sp0 - 0x400u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x400u);
        wr32(sp0 - 0x414u, sp0 - 0x400u);
        wr32(sp0 - 0x418u, COW_IMG(0x10358164u));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 - 0x400u;
        g->esp = sp0 - 0x410u;
        t52 = cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x10358164u), sp0 - 0x400u);
        t53 = g->ecx;
        t54 = g->edx;
        eax = t52;
        ecx = t53;
        edx = t54;
        loc_404 = rd32(sp0 - 0x404u);
    }
L_100811d6: ;
    wr32(sp0 - 0x414u, 0x78u);
    wr32(sp0 - 0x418u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x410u;
    t55 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x78u);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 0x41cu, t55);
    g->ecx = t56;
    g->edx = t57;
    g->esp = sp0 - 0x414u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t55, 9u);
    t58 = g->ecx;
    t59 = g->edx;
    ecx = t58;
    edx = t59;
    loc_404 = rd32(sp0 - 0x404u);
L_100811e8: ;
    if (rd32(COW_IMG(0x1047d3f4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d3f4u));
        wr32(sp0 - 0x414u, COW_IMG(0x10354de0u));
        wr32(sp0 - 0x418u, COW_IMG(0x1034f7e0u));
        g->esp = sp0 - 0x410u;
        cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1034f7e0u), COW_IMG(0x10354de0u));
        loc_404 = rd32(sp0 - 0x404u);
    }
    g->esi = rd32(sp0 - 0x40cu);
    g->edi = rd32(sp0 - 0x410u);
    g->ebp = rd32(sp0 - 0x408u);
    return loc_404;
L_10081123: ;
    wr32(sp0 - 0x414u, COW_IMG(0x10357f80u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = sp0 - 0x400u;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t45 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f80u), rd32(sp0 - 0x410u));
    t46 = g->ecx;
    t47 = g->edx;
    eax = t45;
    ecx = t46;
    edx = t47;
    loc_404 = rd32(sp0 - 0x404u);
    goto L_100811bc;
L_10081141: ;
    wr32(sp0 - 0x414u, COW_IMG(0x10357f78u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = ecx;
    g->edx = sp0 - 0x400u;
    g->esp = sp0 - 0x40cu;
    t42 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f78u), rd32(sp0 - 0x410u));
    t43 = g->ecx;
    t44 = g->edx;
    eax = t42;
    ecx = t43;
    edx = t44;
    loc_404 = rd32(sp0 - 0x404u);
    goto L_100811bc;
L_1008115f: ;
    wr32(sp0 - 0x414u, COW_IMG(0x10357f70u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t39 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f70u), rd32(sp0 - 0x410u));
    t40 = g->ecx;
    t41 = g->edx;
    eax = t39;
    ecx = t40;
    edx = t41;
    loc_404 = rd32(sp0 - 0x404u);
    goto L_100811bc;
L_1008117d: ;
    wr32(sp0 - 0x414u, COW_IMG(0x10357f68u));
    wr32(sp0 - 0x418u, COW_IMG(0x103551e8u));
    wr32(sp0 - 0x41cu, COW_IMG(0x10350ff8u));
    wr32(sp0 - 0x420u, sp0 - 0x400u);
    g->eax = (uint8_t)arg2 - 3u;
    g->ecx = sp0 - 0x400u;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t36 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10350ff8u), COW_IMG(0x103551e8u), COW_IMG(0x10357f68u), rd32(sp0 - 0x410u));
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    loc_404 = rd32(sp0 - 0x404u);
    goto L_100811bc;
L_1008119b: ;
    if (rd8(COW_IMG(0x1047d3feu)) == 0u) goto L_100811ab;
    eax = ((uint8_t)arg2 - 3u & 0xffffff00u) | rd8(COW_IMG(0x1047d3feu));
    wr8(sp0 - 0x400u, 0u);
    goto L_100811d6;
L_100811ab: ;
    eax = 0u;
L_100811ad: ;
    t51 = rd8(COW_IMG(0x10354de0u) + eax);
    wr8(eax + sp0 - 0x400u, (uint8_t)t51);
    if ((uint8_t)t51 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t51;
        goto L_100811ad;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t51;
    goto L_100811bc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10080dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10080dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
