/* f_0x10133a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10133a80(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d11;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_a0;
    uint32_t loc_a4;
    uint32_t loc_a8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    wr32(sp0 - 0xa0u, 0u);
    g->ecx = self;
    g->esp = sp0 - 0x9cu;
    t1 = cow_call_regs(g, COW_IMG(0x100e5720u), g->eax, g->ecx, in_edx, 1, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10133abe;
    }
    eax = t1;
    edx = t3;
L_10133a9a: ;
    wr32(sp0 - 0xa0u, eax);
    wr16(self + rd32(eax) * 2u + 0x78u, rd16(eax + 4u));
    t4 = rd32(eax);
    wr32(self + t4 * 4u + 0x98u, eax + 8u);
    g->eax = eax;
    g->ecx = eax + 8u;
    g->esp = sp0 - 0x9cu;
    t5 = cow_call_regs(g, COW_IMG(0x100e5720u), g->eax, g->ecx, t4, 1, 1, eax);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t7;
        goto L_10133a9a;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
L_10133abe: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    g->edx = t10;
    fpush(g, d11);
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t13 = g->edx;
    wr16(COW_IMG(0x105781c2u), (uint16_t)(rd16(COW_IMG(0x105781c2u)) - (uint16_t)t12));
    if (rd8(COW_IMG(0x105781c0u)) == 0u)
    {
        eax = (t12 & 0xffffff00u) | rd8(COW_IMG(0x105781c0u));
        edx = t13;
        goto L_10133b11;
    }
    eax = (t12 & 0xffffff00u) | rd8(COW_IMG(0x105781c0u));
    edx = t13;
    if (rd8(COW_IMG(0x105781c1u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x105781c1u));
        goto L_10133aeb;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x105781c1u));
    if ((int16_t)rd16(COW_IMG(0x105781c2u)) >= 0) goto L_10133b11;
L_10133aeb: ;
    wr32(sp0 - 0xa0u, 0x11u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t14 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 0x11u);
    t15 = g->edx;
    if (t14 != 5u)
    {
        eax = t14;
        edx = t15;
    }
    else
    {
        eax = t14;
        edx = t15;
        wr32(sp0 - 0xa0u, 0x11u);
        wr32(sp0 - 0xa4u, 0xbu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        t16 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0x11u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    wr16(COW_IMG(0x105781c2u), 0xffffu);
L_10133b2c: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t22 = cow_stdcall(g, COW_IMG(0x101339f0u), 0);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    else
    {
        eax = t22;
        edx = t24;
        wr32(sp0 - 0xa0u, 0x11u);
        wr32(sp0 - 0xa4u, 5u);
        g->eax = eax;
        g->edx = edx;
        t25 = rd32(self + 8u);
        g->esp = sp0 - 0x9cu;
        t26 = cow_thiscall(g, COW_IMG(0x10118b60u), t25, 2, 5u, 0x11u);
        t27 = g->ecx;
        t28 = g->edx;
        eax = t26;
        ecx = t27;
        edx = t28;
    }
    if ((uint8_t)arg1 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        t29 = cow_stdcall(g, COW_IMG(0x100e56e0u), 0);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp0 - 0x84u, t29);
        if (rd8(self + 0xd8u) != 0u)
        {
            eax = t29;
            ecx = (t30 & 0xffffff00u) | rd8(self + 0xd8u);
            edx = t31;
        }
        else
        {
            eax = t29;
            ecx = (t30 & 0xffffff00u) | rd8(self + 0xd8u);
            edx = t31;
            loc_84 = t29;
            if (eax != 0u)
            {
                ebx = COW_IMG(0x10481af0u);
L_10133b82: ;
                if (rd32(ebx) != 0u)
                {
                    esi = rd32(ebx);
                    wr32(sp0 - 0xa0u, eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t32 = cow_thiscall(g, COW_IMG(0x1008b380u), esi, 1, eax);
                    t33 = g->ecx;
                    t34 = g->edx;
                    if (t32 == 0u)
                    {
                        eax = t32;
                        ecx = t33;
                        edx = t34;
                    }
                    else
                    {
                        ecx = t33;
                        edx = t34;
                        if (rd16(esi + 0x210u) != 0u)
                        {
                            eax = esi + 0x214u;
                        }
                        else
                        {
                            eax = esi + 0x7cu;
                        }
                        wr32(sp0 - 0xa0u, 0x18u);
                        wr32(sp0 - 0xa4u, eax);
                        wr32(sp0 - 0xa8u, self + 0xd8u);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x9cu;
                        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, self + 0xd8u, eax, 0x18u);
                        t35 = g->ecx;
                        t36 = g->edx;
                        wr8(self + 0xefu, 0u);
                        if (rd32(COW_IMG(0x1057847cu)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x1057847cu));
                            ecx = t35;
                            edx = t36;
                        }
                        else
                        {
                            eax = rd32(COW_IMG(0x1057847cu));
                            edx = t36;
                            if (rd32(eax + 8u) == 0u)
                            {
                                ecx = rd32(eax + 8u);
                            }
                            else
                            {
                                wr16(sp0 - 0x8cu, 0u);
                                wr16(sp0 - 0x8au, 0u);
                                wr16(sp0 - 0x88u, 0u);
                                wr16(sp0 - 0x86u, 0u);
                                wr32(sp0 - 0xa0u, sp0 - 0x8cu);
                                t37 = rd32(eax + 8u);
                                g->esp = sp0 - 0x9cu;
                                t38 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, t37, g->edx, 0, 1, sp0 - 0x8cu);
                                t39 = g->ecx;
                                t40 = rd32(sp0 - 0x88u) - rd32(sp0 - 0x8cu) - 9u;
                                wr32(sp0 - 0xa0u, t40);
                                wr32(sp0 - 0xa4u, self + 0xd8u);
                                g->edx = t40;
                                g->esp = sp0 - 0x98u;
                                t41 = cow_cdecl(g, COW_IMG(0x101312c0u), 3, self + 0xd8u, t40, rd32(sp0 - 0x9cu));
                                t42 = g->edx;
                                wr32(sp0 - 0xa0u, 2u);
                                wr32(sp0 - 0xa4u, self + 0xd8u);
                                g->ecx = rd32(COW_IMG(0x1057847cu));
                                g->edx = t42;
                                t43 = rd32(COW_IMG(0x1057847cu));
                                g->esp = sp0 - 0x9cu;
                                t44 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, self + 0xd8u, 2u);
                                t45 = g->ecx;
                                t46 = g->edx;
                                eax = t44;
                                ecx = t45;
                                edx = t46;
                            }
                        }
                    }
                }
                if ((int32_t)(ebx + 4u) < (int32_t)COW_IMG(0x10482ef0u))
                {
                    ebx = ebx + 4u;
                    goto L_10133b7e;
                }
            }
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        t47 = cow_thiscall(g, COW_IMG(0x100e5790u), ecx, 0);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 != 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            esi = t47;
            if (rd16(esi + 0x1au) != 0u)
            {
                if (rd8(self + 0x120u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x120u);
                }
                else
                {
                    wr32(sp0 - 0xa0u, esi + 8u);
                    g->eax = esi + 8u;
                    g->esp = sp0 - 0x9cu;
                    t50 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ecx, 1, esi + 8u);
                    t51 = g->ecx;
                    eax = t50;
                    ecx = t51;
                    edx = self + 0x120u;
L_10133c59: ;
                    t52 = rd8(eax);
                    wr8(edx, (uint8_t)t52);
                    if ((uint8_t)t52 != 0u)
                    {
                        eax = eax + 1u;
                        ecx = (ecx & 0xffffff00u) | t52;
                        edx = edx + 1u;
                        goto L_10133c59;
                    }
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t52;
                    edx = edx + 1u;
                }
            }
            if (rd8(self + 0xf0u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xf0u);
                if (rd8(esi) == 0u)
                {
                    eax = COW_IMG(0x1036f87cu);
L_10133d3f: ;
                    t73 = rd8(eax);
                    wr8(eax + self - COW_IMG(0x1036f87cu) + 0xf0u, (uint8_t)t73);
                    if ((uint8_t)t73 != 0u)
                    {
                        eax = eax + 1u;
                        ecx = (ecx & 0xffffff00u) | t73;
                        goto L_10133d3f;
                    }
                    eax = eax + 1u;
                    edx = self + 0xf0u - COW_IMG(0x1036f87cu);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi);
                    wr32(sp0 - 0xa0u, (uint8_t)eax);
                    wr32(sp0 - 0xa4u, 0x12u);
                    g->eax = (uint8_t)eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x9cu;
                    t53 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, (uint8_t)eax);
                    t54 = g->ecx;
                    t55 = g->edx;
                    if (!(rd8(esi + 6u) & 1u))
                    {
                        eax = t53;
                        ecx = (t54 & 0xffffff00u) | rd8(esi + 6u);
                        if (eax == 0u)
                        {
                            eax = COW_IMG(0x103d3c84u);
                        }
                        wr32(sp0 - 0xa0u, eax);
                        t57 = rd8(esi + 2u);
                        wr32(sp0 - 0xa4u, t57);
                        wr32(sp0 - 0xa8u, 0x58u);
                        edx = t57;
                        loc_a4 = t57;
                        loc_a0 = eax;
                        loc_a8 = 0x58u;
                    }
                    else
                    {
                        eax = t53;
                        edx = t55;
                        if (eax == 0u)
                        {
                            eax = COW_IMG(0x103d3c84u);
                        }
                        wr32(sp0 - 0xa0u, eax);
                        t56 = rd8(esi + 5u);
                        wr32(sp0 - 0xa4u, t56);
                        wr32(sp0 - 0xa8u, 0x79u);
                        ecx = t56;
                        loc_a4 = t56;
                        loc_a0 = eax;
                        loc_a8 = 0x79u;
                    }
                    wr32(sp0 - 0xacu, 0xau);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xa4u;
                    t58 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, loc_a8);
                    t59 = g->ecx;
                    t60 = g->edx;
                    wr32(sp0 - 0xa8u, t58);
                    wr32(sp0 - 0xacu, self + 0xf0u);
                    g->ecx = t59;
                    g->edx = t60;
                    g->esp = sp0 - 0x98u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0xf0u, t58, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
                    t61 = g->ecx;
                    t62 = g->edx;
                    edi = self + 0xf0u;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = sp0 - 0x9cu < sp0 - 0xacu;
                    pf = PARITY((uint8_t)(sp0 - 0x9cu));
                    af = (sp0 - 0xacu ^ 0x10u ^ sp0 - 0x9cu) >> 4u & 1u;
                    zf = sp0 == 0x9cu;
                    sf = (int32_t)(sp0 - 0x9cu) < 0;
                    of = ((sp0 - 0xacu ^ sp0 - 0x9cu) & (sp0 - 0x9cu ^ 0x10u)) >> 0x1fu;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    if (rd8(esi + 1u) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                        edx = t62;
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
                        edx = t62;
                        ebp = self + ~ecx + 0xefu;
                        ecx = ~ecx - 1u;
                        wr32(sp0 - 0xa0u, (uint8_t)eax);
                        wr32(sp0 - 0xa4u, 0x12u);
                        g->eax = (uint8_t)eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x9cu;
                        t63 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, (uint8_t)eax);
                        t64 = g->ecx;
                        t65 = g->edx;
                        if (t63 != 0u)
                        {
                            eax = t63;
                            ecx = t64;
                            edx = t65;
                        }
                        else
                        {
                            ecx = t64;
                            edx = t65;
                            eax = COW_IMG(0x103d3c84u);
                        }
                        wr32(sp0 - 0xa0u, eax);
                        t66 = rd8(esi + 3u);
                        wr32(sp0 - 0xa4u, t66);
                        wr32(sp0 - 0xa8u, 0x58u);
                        wr32(sp0 - 0xacu, 0xau);
                        g->eax = t66;
                        g->edx = edx;
                        g->esp = sp0 - 0xa4u;
                        t67 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x58u);
                        t68 = g->edx;
                        wr32(sp0 - 0xa8u, t67);
                        wr32(sp0 - 0xacu, sp0 - 0x80u);
                        g->ecx = sp0 - 0x80u;
                        g->esp = sp0 - 0x98u;
                        t69 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t67, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
                        t70 = g->ecx;
                        wr32(sp0 - 0xb0u, sp0 - 0x80u);
                        wr32(sp0 - 0xb4u, COW_IMG(0x1036f888u));
                        wr32(sp0 - 0xb8u, ebp);
                        g->edx = sp0 - 0x80u;
                        g->esp = sp0 - 0xa4u;
                        t71 = cow_cdecl(g, COW_IMG(0x10312031u), 5, ebp, COW_IMG(0x1036f888u), sp0 - 0x80u, sp0 - 0x80u, rd32(sp0 - 0xa8u));
                        t72 = g->edx;
                        eax = t71;
                        edx = t72;
                    }
                }
                if (rd32(COW_IMG(0x105781f8u)) != 0u)
                {
                    ecx = rd32(COW_IMG(0x105781f8u));
                    wr32(sp0 - 0xa0u, 2u);
                    wr32(sp0 - 0xa4u, self + 0xf0u);
                    g->esp = sp0 - 0x9cu;
                    cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, self + 0xf0u, 2u);
                }
            }
        }
    }
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    return;
L_10133b11: ;
    wr32(sp0 - 0xa0u, 0x11u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t18 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 0x11u);
    t19 = g->edx;
    if (t18 == 5u)
    {
        eax = t18;
        edx = t19;
    }
    else
    {
        eax = t18;
        edx = t19;
        wr32(sp0 - 0xa0u, 0x11u);
        wr32(sp0 - 0xa4u, 5u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x9cu;
        t20 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0x11u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    goto L_10133b2c;
L_10133b7e: ;
    eax = loc_84;
    goto L_10133b82;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10133a80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
