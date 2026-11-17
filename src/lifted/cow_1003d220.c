/* f_0x1003d220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003d220(Guest* g)
{
    double d10;
    double d13;
    double d14;
    double d17;
    double d2;
    double d4;
    double d47;
    double d5;
    double d73;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_30_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
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
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    t1 = rd32(COW_IMG(0x1047bfa8u));
    d2 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x78u, (float)d2);
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        wr32(self + 0x78u, 0u);
    }
    t3 = rd8(rd32(self + 0x74u) + 0x71u);
    wr32(sp0 - 0x30u, t3);
    d4 = (double)(float)fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(sp0 - 0x30u, (float)d4);
    d5 = fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329e94u)));
    if ((cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d5, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = rd32(self + 0x74u);
        edx = t3;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_edi;
    }
    else
    {
        edx = t3;
        loc_30_f = d4;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0u);
        t6 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t7 = rd32(COW_IMG(0x1047cf7cu));
        t8 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(t7 + 0xa90u, t6);
        wr32(sp0 - 0x48u, t8);
        g->esp = sp0 - 0x3cu;
        cow_thiscall(g, COW_IMG(0x1003be10u), self + 0x34u, 3, t8, 0u, 0u);
        d9 = cow_take_float(g);
        eax = self + 0x80u;
        ecx = t8;
        ebx = 4u;
        edi = t8;
L_1003d2ab: ;
        edx = 4u;
L_1003d2b0: ;
        d10 = fr(g, fr(g, fr(g, (double)rdf32(ecx) - (double)rdf32(eax)) * (double)rdf32(sp0 - 0x30u)) + (double)rdf32(eax));
        wrf32(eax, (float)d10);
        if (edx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_1003d2b0;
        }
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            goto L_1003d2ab;
        }
        t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t12 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t12 + 0xa90u, t11);
        wr32(t11 * 4u + t12 + 0xa10u, edi);
        eax = t12;
        ecx = t11;
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    wr32(sp0 - 0x40u, ecx);
    d13 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, (double)rdf32(self + 0x78u) / (double)rdf32(self + 0x7cu)));
    wrf32(sp0 - 0x40u, (float)d13);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x1003d160u), self, 1, cow_f2bits(d13));
    d14 = cow_take_float(g);
    wrf32(sp0 - 0x30u, (float)(double)(float)d14);
    t15 = rd32(rd32(self + 0x74u) + 0x70u);
    if ((int32_t)((uint8_t)t15 + (t15 >> 0x13u & 1u) + (t15 >> 0x14u & 1u)) > 2)
    {
        loc_30_f = (double)(float)d14;
        goto L_1003d498;
    }
    ecx = rd32(self + 0x74u);
    loc_30_f = (double)(float)d14;
    t16 = rd32(ecx + 0x70u);
    if ((uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u) != 2u)
    {
        eax = (uint8_t)t16;
        edx = (uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u);
        goto L_1003d48d;
    }
    edx = (uint8_t)t16 + (t16 >> 0x13u & 1u) + (t16 >> 0x14u & 1u);
    if (rd32(self + 0xc4u) == 0u)
    {
        eax = rd32(self + 0xc4u);
        goto L_1003d48d;
    }
    eax = rd32(self + 0xc4u);
    wr32(sp0 - 0x40u, in_ebp);
    d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - loc_30_f);
    wrf32(sp0 - 0x30u, (float)d17);
    wr32(sp0 - 0x44u, cow_f2bits(d17));
    wr32(sp0 - 0x48u, eax);
    wr32(sp0 - 0x4cu, eax + 0x30u);
    t18 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t18);
    g->eax = t18;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t19 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x40u;
    t20 = cow_thiscall(g, rd32(t19 + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t18, eax + 0x30u, eax, cow_f2bits(d17));
    t21 = g->edx;
    t22 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x30u, t22);
    g->ecx = t22;
    t23 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t24 = g->ecx;
    t25 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x44u, t25);
    wr32(sp0 - 0x48u, t23 + 0x8cu);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t23 + 0x8cu, t25);
    wr8(t23 + 0x88u, 1u);
    wr32(sp0 - 0x44u, cow_f2bits(d17));
    t26 = rd32(self + 0xc4u) + 0x10u;
    wr32(sp0 - 0x48u, t26);
    t27 = rd32(self + 0xc4u) + 0x40u;
    wr32(sp0 - 0x4cu, t27);
    t28 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t28);
    g->eax = t28;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t29 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t30 = cow_thiscall(g, rd32(t29 + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t28, t27, t26, cow_f2bits(d17));
    t31 = g->edx;
    t32 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x30u, t32);
    g->ecx = t32;
    t33 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t34 = g->ecx;
    t35 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x44u, t35);
    wr32(sp0 - 0x48u, t33 + 0x98u);
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t33 + 0x98u, t35);
    wr8(t33 + 0x89u, 1u);
    wr32(sp0 - 0x44u, cow_f2bits(d17));
    t36 = rd32(self + 0xc4u) + 0x20u;
    wr32(sp0 - 0x48u, t36);
    t37 = rd32(self + 0xc4u) + 0x50u;
    wr32(sp0 - 0x4cu, t37);
    t38 = rd32(COW_IMG(0x1047cf7cu)) + 0x910u;
    wr32(sp0 - 0x50u, t38);
    g->eax = t38;
    t39 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x54u), rd32(COW_IMG(0x1047cf7cu)), 4, t38, t37, t36, cow_f2bits(d17));
    t40 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0x910u);
    wr32(sp0 - 0x30u, t40);
    t41 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t42 = rd32(sp0 - 0x30u);
    wr8(t41 + 0x8au, 1u);
    wr32(t41 + 0xa4u, t42);
    t43 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0x914u);
    wr32(sp0 - 0x44u, t43);
    g->eax = t43;
    g->edx = rd32(COW_IMG(0x1047cf7cu));
    t44 = rd32(COW_IMG(0x1047cf7cu));
    t45 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t43);
    t46 = g->edx;
    d47 = (double)rdf32(self + 0x78u);
    if (!(d47 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t46;
        goto L_1003d5b6;
    }
    eax = (t45 & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    wr32(sp0 - 0x40u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t48 = rd32(self);
    g->esp = sp0 - 0x3cu;
    t49 = cow_thiscall(g, rd32(t48 + 0x18u), self, 1, 1u);
    t50 = g->edx;
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->edx = t50;
    return (t49 & 0xffffff00u) | 1u;
L_1003d48d: ;
    wr32(sp0 - 0x40u, self);
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t51 = cow_call_regs(g, COW_IMG(0x1003c970u), eax, ecx, g->edx, 0, 1, self);
    t52 = g->edx;
    eax = t51;
    edx = t52;
L_1003d595: ;
    d73 = (double)rdf32(self + 0x78u);
    if (!(d73 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d73, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1003d5b6;
    }
    wr32(sp0 - 0x40u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t74 = rd32(self);
    g->esp = sp0 - 0x3cu;
    t75 = cow_thiscall(g, rd32(t74 + 0x18u), self, 1, 1u);
    t76 = g->edx;
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->edx = t76;
    return (t75 & 0xffffff00u) | 1u;
L_1003d498: ;
    wr32(sp0 - 0x40u, sp0 - 0xcu);
    wr32(sp0 - 0x44u, sp0 - 0x18u);
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, cow_f2bits(loc_30_f));
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x10055a60u), rd32(self + 0xc0u), 4, cow_f2bits(loc_30_f), sp0 - 0x24u, sp0 - 0x18u, sp0 - 0xcu);
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    wr32(sp0 - 0x44u, self + 0x80u);
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 2, sp0 - 0x24u, self + 0x80u);
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    wr32(sp0 - 0x48u, self + 0x80u);
    wr32(sp0 - 0x4cu, sp0 - 0x1cu);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 4, sp0 - 0x1cu, self + 0x80u, sp0 - 0x1cu, sp0 - 0x24u);
    t53 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x28u, t53);
    t54 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x2cu, t54);
    t55 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x30u, t55);
    g->eax = t55;
    t56 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t57 = rd32(sp0 - 0x30u);
    t58 = rd32(sp0 - 0x2cu);
    wr32(t56 + 0x8cu, t57);
    t59 = rd32(sp0 - 0x28u);
    wr32(t56 + 0x90u, t58);
    wr32(t56 + 0x94u, t59);
    wr8(t56 + 0x88u, 1u);
    t60 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t60);
    t61 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x2cu, t61);
    t62 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x28u, t62);
    g->eax = t61;
    t63 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t64 = rd32(sp0 - 0x28u);
    t65 = rd32(sp0 - 0x2cu);
    wr32(t63 + 0x98u, t64);
    t66 = rd32(sp0 - 0x30u);
    wr32(t63 + 0x9cu, t65);
    wr32(t63 + 0xa0u, t66);
    wr8(t63 + 0x89u, 1u);
    t67 = rd32(sp0 - 8u);
    wr32(sp0 - 0x28u, t67);
    g->eax = t67;
    t68 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t69 = rd32(sp0 - 0x28u);
    wr8(t68 + 0x8au, 1u);
    wr32(t68 + 0xa4u, t69);
    t70 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x40u, t70);
    g->edx = t70;
    t71 = cow_cdecl(g, COW_IMG(0x10015290u), 1, t70);
    t72 = g->edx;
    eax = t71;
    edx = t72;
    goto L_1003d595;
L_1003d5b6: ;
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003d220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
