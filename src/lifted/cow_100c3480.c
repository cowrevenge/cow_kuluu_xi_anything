/* f_0x100c3480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c3480(Guest* g)
{
    double d27;
    double d28;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 1604u);

    wr32(sp0 - 0x624u, in_ebx);
    wr32(sp0 - 0x628u, in_esi);
    t1 = rd32(COW_IMG(0x104807fcu)) + 1u;
    wr32(COW_IMG(0x104807fcu), t1);
    wr32(sp0 - 0x62cu, in_edi);
    if (rd32(self + 0x54u) != 0u)
    {
        eax = rd32(self + 0x54u);
        edx = t1;
        goto L_100c354f;
    }
    edx = t1;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t2 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 1u)
    {
        eax = t2;
        edx = t4;
        goto L_100c3508;
    }
    ecx = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t5 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 9u)
    {
        eax = t5;
        edx = t7;
        goto L_100c3508;
    }
    ecx = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t8 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0xbu)
    {
        eax = t8;
        edx = t10;
        goto L_100c3508;
    }
    ecx = t9;
    edx = t10;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t11 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0x32u)
    {
        eax = t11;
        edx = t13;
        goto L_100c3508;
    }
    ecx = t12;
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t14 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0x2cfu)
    {
        eax = t14;
        edx = t16;
        goto L_100c3508;
    }
    ecx = t15;
    edx = t16;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t17 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0x32bu)
    {
        eax = t17;
        edx = t19;
        goto L_100c3508;
    }
    ecx = t18;
    edx = t19;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t20 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t21 = g->edx;
    if (t20 == 0x32du)
    {
        eax = t20;
        edx = t21;
        goto L_100c3508;
    }
    wr16(self + 0x58u, 0u);
    wr32(self + 0x54u, 2u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    return 0u;
L_100c3508: ;
    g->esp = sp0 - 0x62cu;
    t22 = cow_call_regs(g, COW_IMG(0x100c3140u), eax, self, g->edx, 1, 0);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t22 * 4u) != 0u) goto L_100c3536;
    wr16(self + 0x58u, 0x3cu);
    wr32(self + 0x54u, 2u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    return 0u;
L_100c3536: ;
    wr16(self + 0x58u, 0x258u);
    wr32(self + 0x54u, 1u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    return 0u;
L_100c354f: ;
    if (eax != 1u) goto L_100c35d9;
    t23 = (uint32_t)(int16_t)rd16(self + 0x58u);
    wr32(sp0 - 0x620u, t23);
    wrf32(sp0 - 0x620u, (float)(double)(float)(double)(int32_t)t23);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t24 = cow_call_regs(g, COW_IMG(0x10014cf0u), t23, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    d28 = fr(g, (double)rdf32(sp0 - 0x620u) - d27);
    fpush(g, d28);
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
    wr16(self + 0x58u, (uint16_t)t29);
    if ((int16_t)t29 > 0)
    {
        eax = t29;
    }
    else
    {
        eax = t29;
        wr16(self + 0x58u, 0u);
        wr32(self + 0x54u, 2u);
    }
    g->edx = 2u;
    g->esp = sp0 - 0x62cu;
    t30 = cow_call_regs(g, COW_IMG(0x100c3140u), eax, self, g->edx, 1, 0);
    t31 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u);
        edx = t31;
        goto L_100c35b5;
    }
    edx = t31;
    wr16(self + 0x58u, 0u);
    wr32(self + 0x54u, edx);
L_100c35a9: ;
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    return 0u;
L_100c35b5: ;
    if (rd32(eax + 0x170u) == edx) goto L_100c35c4;
    eax = rd32(eax + 0x170u);
    if (eax != 3u) goto L_100c35a9;
L_100c35c4: ;
    wr16(self + 0x58u, 0x3cu);
    wr32(self + 0x54u, edx);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    return 0u;
L_100c35d9: ;
    t32 = (uint32_t)(int16_t)rd16(self + 0x58u);
    wr32(sp0 - 0x620u, t32);
    wrf32(sp0 - 0x620u, (float)(double)(float)(double)(int32_t)t32);
    g->ecx = t32;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t33 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    d36 = cow_take_float(g);
    g->edx = t35;
    d37 = fr(g, (double)rdf32(sp0 - 0x620u) - d36);
    fpush(g, d37);
    t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
    t39 = g->edx;
    wr16(self + 0x58u, (uint16_t)t38);
    if ((int16_t)t38 > 0) goto L_100c35a9;
    edx = t39;
    t40 = rd32(self + 0x40u);
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t41 = cow_thiscall(g, COW_IMG(0x100c2fb0u), t40, 0);
    t42 = g->edx;
    if (t41 != 2u) goto L_100c35a9;
    edx = t42;
    edi = t40;
    g->esp = sp0 - 0x62cu;
    t43 = cow_thiscall(g, COW_IMG(0x100c30f0u), self, 0);
    t44 = g->ecx;
    wr32(sp0 - 0x630u, t43);
    wr32(sp0 - 0x634u, sp0 - 0x61cu);
    t45 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, sp0 - 0x61cu, 1, 2, sp0 - 0x61cu, t43);
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x100c2fe0u), edi, 0);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x630u, t46);
    wr32(sp0 - 0x634u, t48);
    cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, t48, 1, 2, t48, t46);
    t49 = g->edx;
    wr32(sp0 - 0x620u, 0xffffffffu);
    g->edx = 0xffffffffu;
    t50 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 == 9u)
    {
        eax = t50;
        edx = t52;
        goto L_100c3690;
    }
    ecx = t51;
    edx = t52;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t53 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 == 0xbu)
    {
        eax = t53;
        edx = t55;
        goto L_100c3690;
    }
    ecx = t54;
    edx = t55;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t56 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t57 = g->ecx;
    t58 = g->edx;
    if (t56 == 0x32u)
    {
        eax = t56;
        edx = t58;
        goto L_100c3690;
    }
    ecx = t57;
    edx = t58;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t59 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t60 = g->ecx;
    t61 = g->edx;
    if (t59 == 0x2cfu)
    {
        eax = t59;
        edx = t61;
        goto L_100c3690;
    }
    ecx = t60;
    edx = t61;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t62 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t63 = g->ecx;
    t64 = g->edx;
    if (t62 == 0x2du)
    {
        eax = t62;
        edx = t64;
        goto L_100c3690;
    }
    ecx = t63;
    edx = t64;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t65 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t66 = g->ecx;
    t67 = g->edx;
    if (t65 == 0x32bu)
    {
        eax = t65;
        edx = t67;
        goto L_100c3690;
    }
    ecx = t66;
    edx = t67;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t68 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t69 = g->edx;
    if (t68 != 0x32du)
    {
        eax = t68;
        edx = t69;
        ebp = in_ebp;
        goto L_100c37de;
    }
    eax = t68;
    edx = t69;
L_100c3690: ;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t70 = cow_call_regs(g, COW_IMG(0x100c3150u), eax, self, g->edx, 1, 0);
    t71 = g->ecx;
    t72 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t70 * 4u) == 0u)
    {
        ecx = t71;
        edx = t72;
        edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)t70 * 4u);
        ebx = 0u;
    }
    else
    {
        ecx = t71;
        edx = t72;
        edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)t70 * 4u);
        ebx = rd16(edi + 0x210u) != 0u;
    }
    wr32(sp0 - 0x630u, in_ebp);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ebp = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    }
    else
    {
        ebp = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        if (ebp == 2u) goto L_100c36cf;
        if (ebp != 3u) goto L_100c36d4;
L_100c36cf: ;
        ebp = 1u;
    }
L_100c36d4: ;
    g->edx = edx;
    g->esp = sp0 - 0x630u;
    t73 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t74 = g->edx;
    if (t73 > 0x32u)
    {
        eax = t73;
        edx = t74;
        goto L_100c374c;
    }
    eax = t73;
    edx = t74;
    zf = t73 == 0x32u;
    if (zf) goto L_100c373a;
    if (eax == 9u) goto L_100c3724;
    eax = eax - 9u;
    if (eax == 2u) goto L_100c3712;
    eax = eax - 2u;
    if (eax != 0x22u)
    {
        eax = eax - 0x22u;
        goto L_100c3793;
    }
    eax = eax - 0x22u;
    if ((uint8_t)ebx == 0u) goto L_100c3793;
    eax = ebp + 0x14u;
    edx = 5u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x50u);
L_100c3797: ;
    if (edi == 0u)
    {
        ebp = rd32(sp0 - 0x630u);
        goto L_100c37dc;
    }
    ebp = rd32(sp0 - 0x630u);
    if (!(rd32(edi + 0x120u) >> 9u & 1u)) goto L_100c37dc;
    if (edx != 0xffffffffu)
    {
        g->edx = rd32(edi + 0xa0u);
        t76 = rd32(edi + 0xa0u);
        t77 = rd32(rd32(edi + 0xa0u));
        g->esp = sp0 - 0x62cu;
        t78 = cow_thiscall(g, COW_IMG(0x100c3100u), self, 0);
        t79 = g->edx;
        wr32(sp0 - 0x630u, t78);
        wr32(sp0 - 0x634u, sp0 - 0x61cu);
        wr32(sp0 - 0x638u, 0x6e69616du);
        wr32(sp0 - 0x63cu, t79);
        wr32(sp0 - 0x640u, ebx);
        g->eax = sp0 - 0x61cu;
        g->edx = t79;
        t80 = cow_thiscall(g, rd32(t77 + 0x2c4u), t79, 5, ebx, t79, 0x6e69616du, sp0 - 0x61cu, t78);
        t81 = g->edx;
        eax = t80;
        edx = t81;
    }
    if (ebx != 0xffffffffu) goto L_100c3860;
L_100c37dc: ;
L_100c37de: ;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t83 = cow_call_regs(g, COW_IMG(0x100c3120u), eax, self, g->edx, 1, 0);
    t84 = g->ecx;
    t85 = g->edx;
    if ((uint8_t)t83 != 0u)
    {
        eax = t83;
        ecx = t84;
        goto L_100c3841;
    }
    eax = t83;
    ecx = t84;
    edx = t85;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t86 = cow_call_regs(g, COW_IMG(0x100c3160u), eax, ecx, g->edx, 1, 0);
    t87 = g->edx;
    if ((uint16_t)t86 == 0u)
    {
        edx = t87;
    }
    else
    {
        eax = t86;
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
        {
            edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
        }
        else
        {
            edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
            g->edx = edx;
            g->esp = sp0 - 0x62cu;
            t88 = cow_thiscall(g, COW_IMG(0x100c2fe0u), rd32(self + 0x40u), 0);
            t89 = g->edx;
            wr32(sp0 - 0x630u, t88);
            g->edx = t89;
            cow_call_regs(g, COW_IMG(0x10087df0u), t88, t89, g->edx, 0, 1, t88);
            t90 = g->edx;
            edx = t90;
        }
    }
    wr32(sp0 - 0x630u, 0u);
    wr32(sp0 - 0x634u, 1u);
    wr32(sp0 - 0x638u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x638u;
    t91 = cow_thiscall(g, COW_IMG(0x100c3100u), self, 0);
    t92 = g->edx;
    wr32(sp0 - 0x63cu, t91);
    wr32(sp0 - 0x640u, sp0 - 0x61cu);
    g->ebx = 0u;
    g->esp = sp0 - 0x62cu;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x61cu, t91, 0u, 1u, 0u);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = ebp;
    return 1u;
L_100c3712: ;
    eax = ebp + 4u;
    edx = 1u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x10u);
    goto L_100c3797;
L_100c3724: ;
    t75 = -((uint8_t)ebx != 0u) & 4u;
    eax = ebp + t75 * 4u;
    edx = t75;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + t75 * 0x10u);
    goto L_100c3797;
L_100c373a: ;
    eax = ebp + 8u;
    edx = 2u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x20u);
    goto L_100c3797;
L_100c374c: ;
    if (eax == 0x2cfu) goto L_100c3781;
    eax = eax - 0x2cfu;
    if (eax == 0x5cu) goto L_100c376f;
    eax = eax - 0x5cu;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_100c3793;
    }
    eax = ebp + 0x1cu;
    edx = 7u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x70u);
    goto L_100c3797;
L_100c376f: ;
    eax = ebp + 0x18u;
    edx = 6u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x60u);
    goto L_100c3797;
L_100c3781: ;
    eax = ebp + 0xcu;
    edx = 3u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x30u);
    goto L_100c3797;
L_100c3793: ;
    ebx = rd32(sp0 - 0x620u);
    goto L_100c3797;
L_100c3841: ;
    wr32(sp0 - 0x630u, sp0 - 0x61cu);
    g->esp = sp0 - 0x62cu;
    cow_call_regs(g, COW_IMG(0x100c3170u), g->eax, g->ecx, sp0 - 0x61cu, 1, 1, sp0 - 0x61cu);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = ebp;
    return 1u;
L_100c3860: ;
    t82 = rd32(sp0 - 0x62cu);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = t82;
    g->ebp = ebp;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
