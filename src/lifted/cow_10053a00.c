/* f_0x10053a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_10053a00(Guest* g)
{
    uint32_t af;
    uint32_t cf;
    double d10;
    double d11;
    double d21;
    double d22;
    double d23;
    double d46;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x38u, COW_IMG(0x1032b108u));
    wr32(sp0 - 0x20u, self);
    wr8(sp0 - 0x21u, 0u);
    g->esp = sp0 - 0x34u;
    t1 = cow_fastcall(g, COW_IMG(0x1002c8f0u), self, in_edx, 1, COW_IMG(0x1032b108u));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        edi = self;
        loc_20 = self;
    }
    else
    {
        edx = t2;
        if (rd32(self + 0x28u) == 0u)
        {
            wr32(sp0 - 0x20u, 0u);
            loc_20 = 0u;
        }
        else
        {
            eax = rd32(self + 0x28u);
            wr32(sp0 - 0x20u, rd32(eax));
            loc_20 = rd32(eax);
        }
        edi = loc_20;
    }
    if (arg1 == 0u) goto L_10053b89;
    eax = arg1;
    loc_28 = in_ebx;
    loc_2c = in_ebp;
    loc_30 = in_esi;
    loc_34 = in_edi;
L_10053a49: ;
    ebx = rd32(arg1 + 0x68u);
L_10053a50: ;
    if (ebx == 0u) goto L_10053c65;
    g->eax = eax;
    g->edx = rd32(ebx);
    t3 = rd32(ebx);
    g->esp = sp0 - 0x34u;
    t4 = cow_thiscall(g, rd32(t3 + 0x18u), ebx, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_10053b50;
    }
    eax = t4;
    edx = t5;
    esi = t4;
    wr32(sp0 - 0x38u, COW_IMG(0x1032b108u));
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t6 = cow_fastcall(g, COW_IMG(0x1002c8f0u), esi, edx, 1, COW_IMG(0x1032b108u));
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_10053b50;
    }
    eax = t6;
    edx = t7;
    if (esi != self) goto L_10053ad5;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        goto L_10053abc;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    wr32(sp0 - 0x38u, 0u);
    g->esp = sp0 - 0x34u;
    t8 = cow_call_regs(g, COW_IMG(0x10053890u), eax, self, edx, 0, 1, 0u);
    t9 = g->edx;
    d10 = (double)rdf32(self + 0xd0u);
    d11 = (double)rdf32(self + 0xc8u);
    if ((cow_fsw(g, d10, d11, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d10, d11, 0u) & 0x4100u;
        edx = t9;
        goto L_10053b50;
    }
    edx = t9;
    t12 = rd32(self + 0xd0u);
    wr32(self + 0xc8u, t12);
    eax = t12;
    ebx = rd32(ebx + 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10053a50;
L_10053abc: ;
    wr8(sp0 - 0x21u, 1u);
    wr32(sp0 - 0x38u, arg4);
    g->ebp = self;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t13 = cow_call_regs(g, COW_IMG(0x100538e0u), eax, self, g->edx, 0, 1, arg4);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    ebx = rd32(ebx + 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10053a50;
L_10053ad5: ;
    if (rd32(esi + 0x28u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        eax = rd32(eax);
    }
    if (eax != rd32(sp0 - 0x20u)) goto L_10053b50;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t15 = cow_thiscall(g, COW_IMG(0x1003b700u), esi + 0x30u, 0);
    t16 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_10053b03;
    }
    eax = t15;
    edx = t16;
    edi = esi + 0x30u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t17 = cow_thiscall(g, COW_IMG(0x1003b700u), edi, 0);
    t18 = g->edx;
    if (t17 != arg2)
    {
        eax = t17;
        edx = t18;
        goto L_10053b50;
    }
    eax = t17;
    edx = t18;
L_10053b03: ;
    if ((uint8_t)arg3 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg3;
        ecx = esi;
        goto L_10053b58;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
    ecx = esi;
    wr32(sp0 - 0x38u, 0u);
    g->esp = sp0 - 0x34u;
    t19 = cow_call_regs(g, COW_IMG(0x10053890u), eax, ecx, edx, 0, 1, 0u);
    t20 = g->edx;
    d21 = (double)rdf32(esi + 0xd0u);
    if (d21 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t20;
        goto L_10053b50;
    }
    eax = (t19 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t20;
    d22 = (double)rdf32(esi + 0xd0u);
    d23 = (double)rdf32(esi + 0xc8u);
    if ((cow_fsw(g, d22, d23, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d22, d23, 0u) & 0x4100u;
        goto L_10053b50;
    }
    eax = cow_fsw(g, d22, d23, 0u) & 0x4100u;
    t24 = rd32(esi + 0xd0u);
    t25 = rd16(esi + 0x18u);
    wr32(esi + 0xc8u, t24);
    if ((t25 & 0x7fffu) == 0u)
    {
        edx = t24;
        cf = 0u;
        pf = PARITY((uint8_t)t25);
        af = 0u;
        zf = (t25 & 0x7fffu) == 0u;
        sf = (int16_t)(t25 & 0x7fffu) < 0;
        of = 0u;
        goto L_10053b75;
    }
    edx = t24;
L_10053b50: ;
    ebx = rd32(ebx + 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10053a50;
L_10053b58: ;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x10071e90u), eax, ecx, g->edx, 1, 0);
    t26 = g->edx;
    wr32(sp0 - 0x38u, arg4);
    g->ebp = self;
    g->edx = t26;
    t27 = cow_call_regs(g, COW_IMG(0x100538e0u), arg4, esi, g->edx, 0, 1, arg4);
    t28 = g->edx;
    t29 = g->cf;
    t30 = g->pf;
    t31 = g->af;
    t32 = g->zf;
    t33 = g->sf;
    t34 = g->of;
    g->edx = t28;
    t35 = cow_thiscall(g, COW_IMG(0x10071ec0u), esi, 0);
    t36 = g->edx;
    wr8(sp0 - 0x21u, 1u);
    eax = t35;
    edx = t36;
    cf = g->cf;
    pf = g->pf;
    af = g->af;
    zf = g->zf;
    sf = g->sf;
    of = g->of;
L_10053b75: ;
    t37 = rd32(esi + 0x14u);
    wr32(sp0 - 0x38u, t37);
    g->cf = cf;
    g->pf = pf;
    g->af = af;
    g->zf = zf;
    g->sf = sf;
    g->of = of;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t38 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t37);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_10053a49;
L_10053b89: ;
    eax = arg1;
    loc_28 = in_ebx;
    loc_2c = in_ebp;
    loc_30 = in_esi;
    loc_34 = in_edi;
L_10053b91: ;
    wr32(sp0 - 0x38u, 0xffffffffu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 5u);
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x1047d128u)));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t40 = cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 5u, 0u, 0xffffffffu);
    t41 = g->edx;
    eax = t40;
    edx = t41;
L_10053ba7: ;
    wr32(sp0 - 0x38u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t42 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t43 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        edx = t43;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        goto L_10053c65;
    }
    eax = t42;
    edx = t43;
    esi = t42;
    if (!(rd8(esi + 0x1au) >> 2u & 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(esi + 0x1au) >> 2u;
        goto L_10053ba7;
    }
    edx = (edx & 0xffffff00u) | rd8(esi + 0x1au) >> 2u;
    if (rd32(esi + 0xf4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi + 0xf4u);
        eax = rd32(eax);
    }
    if (eax != edi) goto L_10053ba7;
    if ((uint8_t)arg3 == 0u)
    {
        ecx = esi;
        goto L_10053c38;
    }
    ecx = esi;
    wr32(sp0 - 0x38u, 0u);
    g->esp = sp0 - 0x34u;
    t44 = cow_call_regs(g, COW_IMG(0x10053890u), eax, ecx, edx, 0, 1, 0u);
    t45 = g->edx;
    d46 = (double)rdf32(esi + 0xd0u);
    if (d46 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t44 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t45;
        goto L_10053ba7;
    }
    eax = (t44 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t45;
    d47 = (double)rdf32(esi + 0xd0u);
    d48 = (double)rdf32(esi + 0xc8u);
    if ((cow_fsw(g, d47, d48, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d47, d48, 0u) & 0x4100u;
        goto L_10053ba7;
    }
    t49 = rd32(esi + 0xd0u);
    t50 = rd16(esi + 0x18u);
    wr32(esi + 0xc8u, t49);
    if ((t50 & 0x7fffu) != 0u)
    {
        eax = t49;
        goto L_10053ba7;
    }
    eax = t49;
    pf = PARITY((uint8_t)t50);
    zf = (t50 & 0x7fffu) == 0u;
    sf = (int16_t)(t50 & 0x7fffu) < 0;
    t51 = rd32(esi + 0x14u);
    wr32(sp0 - 0x38u, t51);
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t52 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t51);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    goto L_10053b91;
L_10053c38: ;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t54 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, ecx, g->edx, 1, 0);
    t55 = g->edx;
    wr32(sp0 - 0x38u, arg4);
    g->ebp = arg4;
    g->edx = t55;
    t56 = cow_call_regs(g, COW_IMG(0x100538e0u), t54, esi, g->edx, 0, 1, arg4);
    t57 = g->edx;
    t58 = g->cf;
    t59 = g->pf;
    t60 = g->af;
    t61 = g->zf;
    t62 = g->sf;
    t63 = g->of;
    g->edx = t57;
    t64 = cow_thiscall(g, COW_IMG(0x10071ec0u), esi, 0);
    t65 = g->edx;
    t66 = rd32(esi + 0x14u);
    wr32(sp0 - 0x38u, t66);
    t67 = rd32(COW_IMG(0x1047d128u));
    wr8(sp0 - 0x21u, 1u);
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    g->edx = t65;
    t68 = cow_stdcall(g, COW_IMG(0x10073b20u), 1, t66);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    loc_34 = rd32(sp0 - 0x34u);
    goto L_10053b91;
L_10053c65: ;
    g->ebx = loc_28;
    g->esi = loc_30;
    g->edi = loc_34;
    g->ebp = loc_2c;
    g->edx = edx;
    return (eax & 0xffffff00u) | rd8(sp0 - 0x21u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10053a00(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
