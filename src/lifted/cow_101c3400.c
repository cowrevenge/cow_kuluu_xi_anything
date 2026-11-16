/* f_0x101c3400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c3400(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 608u);

    wr32(sp0 - 0x238u, in_ebx);
    wr32(sp0 - 0x23cu, in_ebp);
    wr32(sp0 - 0x240u, in_esi);
    wr32(sp0 - 0x244u, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x248u, COW_IMG(0x1037cca4u));
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x244u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, COW_IMG(0x1037cca4u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0xccu, t1);
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101c347c;
    }
    eax = t1;
    return 0xffffffffu;
L_101c347c: ;
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc98u));
    t4 = (eax + 1u & 0xffffff00u) | (eax + 1u & 0xfeu);
    wr32(sp0 - 0x24cu, t4);
    wr32(sp0 - 0x250u, self + 0xc4u);
    wr32(sp0 - 0x228u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xc4u, t4, COW_IMG(0x1037cc98u), in_edi);
    t5 = g->edx;
    wr32(sp0 - 0x248u, COW_IMG(0x1037cca4u));
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, COW_IMG(0x1037cca4u));
    t6 = rd32(self + 0xc4u);
    wr32(sp0 - 0x118u, t6);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t7 = rd32(self + 0xccu);
    wr32(sp0 - 0x114u, t7);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x224u);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        goto L_101c34fc;
    }
    eax = t8;
    edx = t9;
    t10 = rd32(self + 0xc4u);
    wr32(sp0 - 0x248u, t10);
    g->eax = eax;
    g->esp = sp0 - 0x244u;
    t11 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t10);
    wr32(self + 0xc4u, 0u);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
L_101c34fc: ;
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc8cu));
    t12 = (uint32_t)((int32_t)rd32(self + 0xccu) >> 1u);
    wr32(self + 0xc8u, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 0x244u;
    t13 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, COW_IMG(0x1037cc8cu));
    t14 = g->ecx;
    t15 = g->edx;
    wr32(self + 0xc0u, t13);
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc7cu));
    wr32(sp0 - 0x22cu, self + 0xbcu);
    if ((int32_t)t13 < 0)
    {
        ecx = t14;
        edx = t15;
        goto L_101c3599;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x24cu, eax);
    wr32(sp0 - 0x250u, self + 0xbcu);
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xbcu, eax, COW_IMG(0x1037cc7cu), rd32(sp0 - 0x244u));
    t16 = rd32(self + 0xc0u);
    t17 = rd32(self + 0xbcu);
    edi = t17;
    eax = 0u;
    ecx = t16 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t16 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc8cu));
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, COW_IMG(0x1037cc8cu));
    t18 = rd32(self + 0xbcu);
    wr32(sp0 - 0x118u, t18);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t19 = rd32(self + 0xc0u);
    wr32(sp0 - 0x114u, t19);
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x224u);
    t21 = g->edx;
    if ((int32_t)t20 >= 0)
    {
        edx = t21;
        goto L_101c35cb;
    }
L_101c35af: ;
    t23 = rd32(self + 0xc0u);
    t24 = rd32(self + 0xbcu);
    edi = t24;
    eax = 0x1010101u;
    ecx = t23 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t23 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = t23;
L_101c35cb: ;
    wr32(sp0 - 0x248u, COW_IMG(0x1037cc70u));
    t25 = (rd32(self + 0xccu) + 1u & 0xffffff00u) | (rd32(self + 0xccu) + 1u & 0xfeu);
    wr32(sp0 - 0x24cu, t25);
    wr32(sp0 - 0x250u, sp0 - 0x230u);
    g->ecx = sp0 - 0x230u;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x230u, t25, COW_IMG(0x1037cc70u), rd32(sp0 - 0x244u));
    t26 = g->ecx;
    wr32(sp0 - 0x254u, COW_IMG(0x1037cc5cu));
    t27 = rd32(self + 0xc0u);
    wr32(sp0 - 0x258u, t27);
    wr32(sp0 - 0x25cu, sp0 - 0x234u);
    g->edx = t27;
    g->esp = sp0 - 0x24cu;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x234u, t27, COW_IMG(0x1037cc5cu), sp0 - 0x230u);
    t28 = g->edx;
    wr32(self + 0x80u, 1u);
    edx = t28;
    ebp = self + 0xbcu;
    edi = 0xffffffffu;
L_101c3606: ;
    t29 = rd32(self + 0x80u) + 1u;
    wr32(self + 0x80u, t29);
    wr32(sp0 - 0x248u, edi + 3u);
    wr32(sp0 - 0x24cu, edi + 3u);
    wr32(sp0 - 0x250u, COW_IMG(0x1037cc48u));
    wr32(sp0 - 0x254u, sp0 - 0x100u);
    g->esp = sp0 - 0x240u;
    t30 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc48u), edi + 3u, edi + 3u, rd32(sp0 - 0x244u));
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    g->esp = sp0 - 0x244u;
    t31 = cow_thiscall(g, COW_IMG(0x101c3a00u), self, 1, sp0 - 0x100u);
    t32 = g->ecx;
    if ((int32_t)t31 < 0)
    {
        eax = t31;
        ecx = t32;
        goto L_101c37c0;
    }
    ebx = edi + 3u;
    if ((int32_t)ebx >= 9)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101c368f;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    if (edi - 3u > 5u)
    {
        cf = edi - 3u < 5u;
        pf = PARITY((uint8_t)(edi - 8u));
        zf = edi == 8u;
        sf = (int32_t)(edi - 8u) < 0;
        of = ((edi - 3u ^ 5u) & (edi - 3u ^ edi - 8u)) >> 0x1fu;
        goto L_101c368a;
    }
    t33 = rd32(COW_IMG(0x101c38c8u) + edi * 4u - 0xcu);
    switch (t33 - RD)
    {
    case 0x101c3660u: goto L_101c3660;
    case 0x101c367du: goto L_101c367d;
    default: rt_fatal(g, COW_IMG(0x101c3659u), "switch");
    }
    return 0;
L_101c3599: ;
    t22 = rd32(self + 0xc8u);
    wr32(sp0 - 0x24cu, t22);
    wr32(sp0 - 0x250u, self + 0xbcu);
    wr32(self + 0xc0u, t22);
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xbcu, t22, COW_IMG(0x1037cc7cu), rd32(sp0 - 0x244u));
    goto L_101c35af;
L_101c3660: ;
    edx = rd32(eax + 0x10u);
    pf = PARITY(rd32(eax + 0x10u) & 2u);
    zf = (rd32(eax + 0x10u) & 2u) == 0u;
    sf = (int8_t)(rd32(eax + 0x10u) & 2u) < 0;
L_101c3666: ;
    if (zf) goto L_101c36c7;
    ecx = edi + 2u;
L_101c366b: ;
    t35 = 1u << (ecx & 0x1fu) | edx;
    wr32(eax + 0x10u, t35);
    ebp = rd32(sp0 - 0x22cu);
L_101c36c7: ;
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 1u);
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    t36 = rd32(sp0 - 0x230u);
    wr32(sp0 - 0x118u, t36);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t37 = rd32(self + 0xccu);
    wr32(sp0 - 0x114u, t37);
    g->edx = t36;
    t38 = rd32(self + 0x1f0u);
    t39 = cow_thiscall(g, COW_IMG(0x1019f960u), t38, 1, sp0 - 0x224u);
    t40 = g->ecx;
    t41 = g->edx;
    if ((int32_t)t39 < 0)
    {
        ecx = t40;
        edx = t41;
        goto L_101c3839;
    }
    ecx = t40;
    wr32(sp0 - 0x248u, ebx);
    wr32(sp0 - 0x24cu, ebx);
    wr32(sp0 - 0x250u, COW_IMG(0x1037cc34u));
    wr32(sp0 - 0x254u, sp0 - 0x100u);
    wr32(sp0 - 0x220u, 1u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x240u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc34u), ebx, ebx, rd32(sp0 - 0x244u));
    t42 = g->edx;
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    wr32(sp0 - 0x24cu, 0x100u);
    wr32(sp0 - 0x250u, sp0 - 0x21cu);
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    t43 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x118u, t43);
    wr32(sp0 - 0x248u, sp0 - 0x224u);
    t44 = rd32(self + 0xc0u);
    wr32(sp0 - 0x114u, t44);
    g->edx = t43;
    t45 = cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x224u);
    t46 = g->edx;
    if (t45 != rd32(self + 0xc0u))
    {
        eax = t45;
        edx = t46;
        goto L_101c3880;
    }
    if ((int32_t)rd32(self + 0xc8u) <= 0)
    {
        eax = 0u;
        ecx = rd32(self + 0xc8u);
        goto L_101c37c0;
    }
    eax = 0u;
L_101c3790: ;
    if (rd8(eax + rd32(sp0 - 0x234u)) == ebx)
    {
        t47 = rd32(sp0 - 0x228u);
        wr8(eax + rd32(ebp), (uint8_t)ebx);
        wr16(eax * 2u + rd32(t47), rd16(eax * 2u + rd32(sp0 - 0x230u)));
    }
    if ((int32_t)(eax + 1u) < (int32_t)rd32(self + 0xc8u))
    {
        eax = eax + 1u;
        goto L_101c3790;
    }
    eax = eax + 1u;
    ecx = rd32(self + 0xc8u);
L_101c37c0: ;
    if ((int32_t)(edi + 4u) < 14)
    {
        edx = edi + 4u;
        edi = edi + 1u;
        goto L_101c3606;
    }
    t72 = rd32(sp0 - 0x230u);
    wr32(sp0 - 0x248u, t72);
    g->ecx = ecx;
    g->edx = t72;
    g->esp = sp0 - 0x244u;
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t72);
    t73 = g->ecx;
    t74 = g->edx;
    t75 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x24cu, t75);
    g->esp = sp0 - 0x248u;
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t75);
    if ((rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u) & 2u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 0x10u);
        ecx = rd32(COW_IMG(0x10456a28u));
        if ((eax & 0x10u) != 0u)
        {
            t76 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 1u) << 8u;
            wr32(ecx + 0x10u, t76);
            ecx = rd32(COW_IMG(0x10456a28u));
        }
    }
    if ((rd32(ecx + 0x10u) & 2u) != 0u)
    {
        eax = rd32(ecx + 0x10u);
        if ((eax & 0x10u) != 0u)
        {
            t77 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 2u) << 8u;
            wr32(ecx + 0x10u, t77);
            ecx = rd32(COW_IMG(0x10456a28u));
        }
    }
    if ((rd32(ecx + 0x10u) & 2u) != 0u)
    {
        eax = rd32(ecx + 0x10u);
        if ((eax & 0x10u) != 0u)
        {
            t78 = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u | 4u) << 8u;
            wr32(ecx + 0x10u, t78);
        }
    }
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 1u;
L_101c367d: ;
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    pf = PARITY(edx & 0x10u);
    zf = (edx & 0x10u) == 0u;
    sf = (int8_t)(edx & 0x10u) < 0;
    goto L_101c3666;
L_101c368a: ;
    ecx = edi + 2u;
L_101c36bd: ;
    wr32(eax + 0x10u, rd32(eax + 0x10u) | 1u << (ecx & 0x1fu));
    edx = 1u << (ecx & 0x1fu);
    goto L_101c36c7;
L_101c368f: ;
    if (edi > 5u)
    {
        cf = edi < 5u;
        pf = PARITY((uint8_t)(edi - 5u));
        zf = edi == 5u;
        sf = (int32_t)(edi - 5u) < 0;
        of = ((edi ^ 5u) & (edi ^ edi - 5u)) >> 0x1fu;
        goto L_101c36ba;
    }
    t34 = rd32(COW_IMG(0x101c38e0u) + edi * 4u);
    switch (t34 - RD)
    {
    case 0x101c369bu: goto L_101c369b;
    case 0x101c36a8u: goto L_101c36a8;
    default: rt_fatal(g, COW_IMG(0x101c3694u), "switch");
    }
    return 0;
L_101c369b: ;
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    pf = PARITY(rd32(eax + 0x10u) & 2u);
    zf = (rd32(eax + 0x10u) & 2u) == 0u;
    sf = (int8_t)(rd32(eax + 0x10u) & 2u) < 0;
    ecx = edi + 5u;
    goto L_101c366b;
L_101c36a8: ;
    if ((rd32(eax + 0x10u) & 2u) == 0u)
    {
        edx = rd32(eax + 0x10u);
        goto L_101c36c7;
    }
    edx = rd32(eax + 0x10u);
    if ((edx & 0x10u) == 0u) goto L_101c36c7;
    pf = PARITY(edx & 0x10u);
    zf = (edx & 0x10u) == 0u;
    sf = (int8_t)(edx & 0x10u) < 0;
    ecx = edi + 5u;
    goto L_101c366b;
L_101c36ba: ;
    ecx = edi + 5u;
    goto L_101c36bd;
L_101c3839: ;
    t60 = rd32(rd32(sp0 - 0x228u));
    wr32(sp0 - 0x248u, t60);
    g->eax = t60;
    g->edx = edx;
    t61 = rd32(sp0 - 0x228u);
    g->esp = sp0 - 0x244u;
    t62 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t60);
    t63 = g->edx;
    t64 = rd32(ebp);
    wr32(t61, 0u);
    wr32(sp0 - 0x24cu, t64);
    g->ecx = t64;
    g->esp = sp0 - 0x248u;
    t65 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t64);
    t66 = g->ecx;
    t67 = rd32(sp0 - 0x230u);
    wr32(ebp, 0u);
    wr32(sp0 - 0x250u, t67);
    g->ecx = t66;
    g->edx = t67;
    g->esp = sp0 - 0x24cu;
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t67);
    t68 = g->ecx;
    t69 = g->edx;
    t70 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x254u, t70);
    g->eax = t70;
    g->esp = sp0 - 0x250u;
    t71 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t70);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
L_101c3880: ;
    t48 = rd32(rd32(sp0 - 0x228u));
    wr32(sp0 - 0x248u, t48);
    g->eax = eax;
    g->ecx = t48;
    t49 = rd32(sp0 - 0x228u);
    g->esp = sp0 - 0x244u;
    t50 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t48);
    t51 = g->ecx;
    t52 = rd32(ebp);
    wr32(t49, 0u);
    wr32(sp0 - 0x24cu, t52);
    g->ecx = t51;
    g->edx = t52;
    g->esp = sp0 - 0x248u;
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t52);
    t53 = g->ecx;
    t54 = g->edx;
    t55 = rd32(sp0 - 0x230u);
    wr32(ebp, 0u);
    wr32(sp0 - 0x250u, t55);
    g->eax = t55;
    g->edx = t54;
    g->esp = sp0 - 0x24cu;
    t56 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t55);
    t57 = g->edx;
    t58 = rd32(sp0 - 0x234u);
    wr32(sp0 - 0x254u, t58);
    g->esp = sp0 - 0x250u;
    t59 = cow_cdecl(g, COW_IMG(0x101907d0u), 1, t58);
    g->ebx = rd32(sp0 - 0x238u);
    g->esi = rd32(sp0 - 0x240u);
    g->edi = rd32(sp0 - 0x244u);
    g->ebp = rd32(sp0 - 0x23cu);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
