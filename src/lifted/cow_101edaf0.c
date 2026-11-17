/* f_0x101edaf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101edaf0(Guest* g)
{
    double d13;
    double d17;
    double d21;
    double d25;
    double d28;
    double d29;
    double d33;
    double d37;
    double d41;
    double d45;
    double d48;
    double d49;
    double d50;
    double d53;
    double d54;
    double d58;
    double d6;
    double d64;
    double d69;
    double d7;
    double d70;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d78;
    double d79;
    double d8;
    double d81;
    double d82;
    double d84;
    double d85;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t71;
    uint32_t t77;
    uint32_t t80;
    uint32_t t83;
    uint32_t t86;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(sp0 + 0xcu) != 0u) goto L_101edd94;
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    t1 = (eax & 0xffff0000u) | rd16(self + 0x14u);
    if ((t1 & 0x100u) == 0u) goto L_101edd94;
    eax = t1;
    if ((eax & 0x200u) != 0u) goto L_101edd94;
    edx = eax & 0x200u;
    if ((eax & 8u) != 0u) goto L_101edd94;
    wr32(sp0 - 0x1cu, in_ebp);
    t2 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    wr32(sp0 - 4u, t2);
    t3 = (uint32_t)(int16_t)rd16(self + 0x1eu);
    wr32(sp0 - 4u, t3);
    t4 = rd16(self + 0x1cu);
    t5 = rd16(self + 0x1eu);
    d6 = fr(g, (double)(int32_t)t2 + (double)rdf32(sp0 + 4u));
    d7 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(sp0 + 0xcu, 0u);
    wrf32(sp0 - 0xcu, (float)(double)(float)d6);
    d8 = (double)(float)fr(g, (double)(int32_t)t3 + (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 8u, (float)d8);
    g->ecx = t3;
    g->edx = edx;
    d9 = (double)rdf32(self + 0x44u);
    fpush(g, d9);
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 4u, t10);
    g->ecx = t11;
    g->edx = t12;
    d13 = (double)rdf32(sp0 - 0xcu);
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 < (int32_t)rd32(sp0 - 4u))
    {
        eax = rd32(sp0 - 4u);
        ecx = t15;
        edx = t16;
        ebx = (in_ebx & 0xffff0000u) | t4;
        ebp = (in_ebp & 0xffff0000u) | t5;
        x0 = d7;
        goto L_101edbac;
    }
    eax = rd32(sp0 - 4u);
    ecx = t15;
    edx = t16;
    ebx = (in_ebx & 0xffff0000u) | t4;
    ebp = (in_ebp & 0xffff0000u) | t5;
    edi = t14;
    x0 = d7;
    g->ecx = ecx;
    g->edx = edx;
    d17 = (double)rdf32(self + 0x4cu);
    fpush(g, d17);
    g->esp = sp0 - 0x1cu;
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)edi > (int32_t)t18)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_101edbac;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    g->ecx = ecx;
    g->edx = edx;
    d21 = (double)rdf32(sp0 - 0xcu);
    fpush(g, d21);
    g->esp = sp0 - 0x1cu;
    t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr16(self + 0x1cu, (uint16_t)t22);
    eax = t22;
    ecx = t23;
    edx = t24;
L_101edc35: ;
    g->ecx = ecx;
    g->edx = edx;
    d29 = (double)rdf32(self + 0x48u);
    fpush(g, d29);
    g->esp = sp0 - 0x1cu;
    t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t31 = g->ecx;
    t32 = g->edx;
    g->ecx = t31;
    g->edx = t32;
    d33 = (double)rdf32(sp0 - 8u);
    fpush(g, d33);
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if ((int32_t)t34 < (int32_t)t30)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        ebx = t30;
        goto L_101edc6c;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    ebx = t30;
    edi = t34;
    g->ecx = ecx;
    g->edx = edx;
    d37 = (double)rdf32(self + 0x50u);
    fpush(g, d37);
    g->esp = sp0 - 0x1cu;
    t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t39 = g->ecx;
    t40 = g->edx;
    if ((int32_t)edi > (int32_t)t38)
    {
        eax = t38;
        ecx = t39;
        edx = t40;
        goto L_101edc6c;
    }
    eax = t38;
    ecx = t39;
    edx = t40;
    g->ecx = ecx;
    g->edx = edx;
    d41 = (double)rdf32(sp0 - 8u);
    fpush(g, d41);
    g->esp = sp0 - 0x1cu;
    t42 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t43 = g->ecx;
    t44 = g->edx;
    wr16(self + 0x1eu, (uint16_t)t42);
    ecx = t43;
    edx = t44;
L_101edcf5: ;
    if (rd32(self + 0x8cu) == 0u)
    {
        ebp = rd32(sp0 - 0x1cu);
        goto L_101ede21;
    }
    ebp = rd32(sp0 - 0x1cu);
    t51 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    t52 = rd32(sp0 - 4u);
    wr32(sp0 + 4u, t51);
    if ((int32_t)t51 >= (int32_t)t52)
    {
        eax = t52;
        edi = t51;
        goto L_101edd24;
    }
    eax = t52;
    d53 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x44u));
    wrf32(sp0 + 0xcu, (float)d53);
    x1 = (double)rdf32(self + 0x44u);
L_101edd3e: ;
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x1);
    g->esp = sp0 - 0x18u;
    t59 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t60 = g->ecx;
    t61 = g->edx;
    wr16(self + 0x1cu, (uint16_t)t59);
    eax = t59;
    ecx = t60;
    edx = t61;
L_101edd47: ;
    t62 = (uint32_t)(int16_t)rd16(self + 0x1eu);
    t63 = rd16(self + 0x1eu);
    wr32(sp0 + 4u, t62);
    if ((int16_t)t63 >= (int32_t)ebx)
    {
        edi = t62;
        goto L_101edd61;
    }
    x1 = (double)rdf32(self + 0x48u);
    x0 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x48u));
L_101edd79: ;
    fpush(g, x1);
    g->esp = sp0 - 0x18u;
    t68 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr16(self + 0x1eu, (uint16_t)t68);
    eax = t68;
L_101edd82: ;
    d69 = fr(g, (double)rdf32(sp0 + 0xcu) + (double)rdf32(self + 0x24u));
    wrf32(self + 0x24u, (float)d69);
    d70 = fr(g, x0 + (double)rdf32(self + 0x28u));
    wrf32(self + 0x28u, (float)d70);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_101eddbd: ;
    d75 = (double)rdf32(self + 0x24u);
    d76 = (double)rdf32(self + 0x34u);
    if (!(d75 < d76))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, d76, 0u);
        d78 = (double)rdf32(self + 0x24u);
        d79 = (double)rdf32(self + 0x3cu);
        if ((cow_fsw(g, d78, d79, 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d78, d79, 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d78, d79, 0u) & 0x4100u;
            t80 = rd32(self + 0x3cu);
            wr32(self + 0x24u, t80);
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d75, d76, 0u);
        t77 = rd32(self + 0x34u);
        wr32(self + 0x24u, t77);
    }
    d81 = (double)rdf32(self + 0x28u);
    d82 = (double)rdf32(self + 0x38u);
    if (!(d81 < d82))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d81, d82, 0u);
        goto L_101ede03;
    }
    t83 = rd32(self + 0x38u);
    wr32(self + 0x28u, t83);
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    return;
L_101edbac: ;
    d25 = (double)rdf32(sp0 + 4u);
    if (!(d25 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(self + 0x58u));
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10329a08u)));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(self + 0x58u));
        x1 = fr(g, x1 - (double)rdf32(COW_IMG(0x10329a08u)));
    }
    g->edx = edx;
    fpush(g, x1);
    g->esp = sp0 - 0x1cu;
    t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t27 = g->edx;
    wr32(sp0 - 0xcu, (uint32_t)(int16_t)t26);
    if (!((double)(int32_t)(uint32_t)(int16_t)t26 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)(uint32_t)(int16_t)t26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = (uint32_t)(int16_t)t26;
        edx = t27;
        wr32(sp0 - 0xcu, ecx);
        loc_c = ecx;
    }
    else
    {
        eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)(uint32_t)(int16_t)t26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = (uint32_t)(int16_t)t26;
        wr32(sp0 - 0xcu, -ecx);
        edx = -ecx;
        loc_c = -ecx;
    }
    if ((cow_fsw(g, (double)(int32_t)loc_c, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, (double)(int32_t)loc_c, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        d28 = (double)rdf32(sp0 + 4u);
        if (!(d28 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = 1u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            eax = 0xffffffffu;
        }
    }
    else
    {
        eax = ecx;
    }
    wr16(self + 0x1cu, (uint16_t)(eax + ebx));
    goto L_101edc35;
L_101edc6c: ;
    d45 = (double)rdf32(sp0 + 8u);
    if (!(d45 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = fr(g, (double)rdf32(sp0 + 8u) / (double)rdf32(self + 0x58u));
        x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10329a08u)));
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x1 = fr(g, (double)rdf32(sp0 + 8u) / (double)rdf32(self + 0x58u));
        x1 = fr(g, x1 - (double)rdf32(COW_IMG(0x10329a08u)));
    }
    g->edx = edx;
    fpush(g, x1);
    g->esp = sp0 - 0x1cu;
    t46 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t47 = g->edx;
    wr32(sp0 + 4u, (uint32_t)(int16_t)t46);
    d48 = (double)(int32_t)rd32(sp0 + 4u);
    if (!(d48 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t46 & 0xffff0000u) | (uint16_t)cow_fsw(g, d48, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        ecx = (uint32_t)(int16_t)t46;
        edx = t47;
        wr32(sp0 + 4u, ecx);
    }
    else
    {
        ecx = (uint32_t)(int16_t)t46;
        edx = t47;
        wr32(sp0 + 4u, -ecx);
        eax = -ecx;
    }
    d49 = (double)(int32_t)rd32(sp0 + 4u);
    if ((cow_fsw(g, d49, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d49, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        d50 = (double)rdf32(sp0 + 8u);
        if (!(d50 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = 1u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d50, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            eax = 0xffffffffu;
        }
    }
    else
    {
        eax = ecx;
    }
    wr16(self + 0x1eu, (uint16_t)(eax + ebp));
    goto L_101edcf5;
L_101edd24: ;
    g->ecx = ecx;
    g->edx = edx;
    d54 = (double)rdf32(self + 0x4cu);
    fpush(g, d54);
    g->esp = sp0 - 0x18u;
    t55 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t56 = g->ecx;
    t57 = g->edx;
    if ((int32_t)edi <= (int32_t)t55)
    {
        eax = t55;
        ecx = t56;
        edx = t57;
        goto L_101edd47;
    }
    eax = t55;
    ecx = t56;
    edx = t57;
    d58 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x4cu));
    wrf32(sp0 + 0xcu, (float)d58);
    x1 = (double)rdf32(self + 0x4cu);
    goto L_101edd3e;
L_101edd61: ;
    g->ecx = ecx;
    g->edx = edx;
    d64 = (double)rdf32(self + 0x50u);
    fpush(g, d64);
    g->esp = sp0 - 0x18u;
    t65 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t66 = g->ecx;
    t67 = g->edx;
    if ((int32_t)edi <= (int32_t)t65)
    {
        eax = t65;
        goto L_101edd82;
    }
    eax = t65;
    ecx = t66;
    edx = t67;
    x1 = (double)rdf32(self + 0x50u);
    x0 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(self + 0x50u));
    goto L_101edd79;
L_101edd94: ;
    t71 = rd32(self + 0x8cu);
    d72 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(self + 0x24u));
    d73 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
    wrf32(self + 0x24u, (float)d72);
    d74 = fr(g, fr(g, d73 * (double)rdf32(sp0 + 8u)) + (double)rdf32(self + 0x28u));
    wrf32(self + 0x28u, (float)d74);
    if (t71 == 0u)
    {
        ebp = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_101ede23;
    }
    eax = t71;
    ebp = in_ebp;
    loc_10 = in_ebx;
    loc_14 = in_esi;
    loc_18 = in_edi;
    goto L_101eddbd;
L_101ede03: ;
    d84 = (double)rdf32(self + 0x28u);
    d85 = (double)rdf32(self + 0x40u);
    if ((cow_fsw(g, d84, d85, 0u) & 0x4100u) != 0u) goto L_101ede23;
    t86 = rd32(self + 0x40u);
    wr32(self + 0x28u, t86);
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    return;
L_101ede21: ;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_101ede23: ;
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101edaf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101edaf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
