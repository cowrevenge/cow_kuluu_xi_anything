/* f_0x10117520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10117520(Guest* g)
{
    double d26;
    double d30;
    double d35;
    double d55;
    double d62;
    double d69;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t of;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        edx = t3;
        loc_8 = t1;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x18u, in_edi);
        ebx = in_ebx;
        ebp = rd32(sp0 - 4u);
L_10117541: ;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->ecx = self + 0x14u;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint32_t)(int16_t)rd16(t4) == 0u)
        {
            eax = (uint32_t)(int16_t)rd16(t4);
            edx = t6;
            edi = t4;
            t20 = (edx & 0xffffff00u) | rd8(self + 0x99u);
            wr32(sp0 - 0x1cu, t20);
            g->ebx = ebx;
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x10119550u), edi, t20, 1, t20);
            t21 = g->ecx;
            t22 = g->edx;
            if ((int32_t)rd32(self + 0x94u) < 0)
            {
                eax = rd32(self + 0x94u);
                ecx = t21;
                edx = t22;
                ebp = edi;
                if (eax != 0xfffffc19u)
                {
                    t44 = rd16(self + 0x8cu);
                    wr16(edi + 0x1au, (uint16_t)t44);
                    t45 = rd16(self + 0x8eu);
                    wr16(edi + 0x1cu, (uint16_t)t45);
                    t46 = rd16(self + 0x90u);
                    wr16(edi + 0x22u, (uint16_t)t46);
                    t47 = rd16(self + 0x92u);
                    wr16(edi + 0x24u, (uint16_t)t47);
                    eax = ((eax | t44) & 0xffff0000u) | t47;
                    ecx = (ecx & 0xffff0000u) | t45;
                    edx = (edx & 0xffff0000u) | t46;
                }
            }
            else
            {
                eax = rd32(self + 0x94u);
                ecx = t21;
                edx = t22;
                ebp = edi;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t23 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t24 = g->ecx;
                t25 = g->edx;
                d26 = cow_take_float(g);
                fpush(g, d26);
                t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
                t28 = rd32(self + 0x94u) - (uint32_t)(int16_t)t27;
                wr32(self + 0x94u, t28);
                t29 = (uint32_t)(int16_t)rd16(self + 0x8cu) - (uint32_t)(int16_t)rd16(edi + 0x1au);
                wr32(sp0 - 4u, t29);
                d30 = fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x10331388u)));
                if (!(d30 < (double)rdf32(COW_IMG(0x1032961cu))))
                {
                    eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t28 & 0xffff0000u) | rd16(self + 0x8cu);
                    edx = (uint32_t)(int16_t)rd16(edi + 0x1au);
                    ebx = (ebx & 0xffff0000u) | rd16(edi + 0x1au);
                    x0 = d30;
                }
                else
                {
                    eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t28 & 0xffff0000u) | rd16(self + 0x8cu);
                    edx = (uint32_t)(int16_t)rd16(edi + 0x1au);
                    ebx = (ebx & 0xffff0000u) | rd16(edi + 0x1au);
                    x0 = d30;
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                        if ((uint16_t)ebx != (uint16_t)ecx)
                        {
                            zf = (uint16_t)((uint16_t)ebx - (uint16_t)ecx) == 0u;
                            sf = (int16_t)((uint16_t)ebx - (uint16_t)ecx) < 0;
                            of = (((uint16_t)ebx ^ (uint16_t)ecx) & ((uint16_t)ebx ^ (uint16_t)((uint16_t)ebx - (uint16_t)ecx))) >> 0xfu;
                            if (zf || sf != of)
                            {
                                x0 = (double)rdf32(COW_IMG(0x1032961cu));
                            }
                            else
                            {
                                x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                            }
                        }
                    }
                }
                g->ecx = ecx;
                fpush(g, x0);
                g->esp = sp0 - 0x18u;
                t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t32 = g->ecx;
                t33 = rd16(edi + 0x1cu);
                wr16(edi + 0x1au, (uint16_t)(ebx + t31));
                t34 = (uint32_t)(int16_t)rd16(self + 0x8eu) - (uint32_t)(int16_t)t33;
                wr32(sp0 - 4u, t34);
                d35 = fr(g, (double)(int32_t)t34 * (double)rdf32(COW_IMG(0x10331388u)));
                if (!(d35 < (double)rdf32(COW_IMG(0x1032961cu))))
                {
                    eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t32 & 0xffff0000u) | rd16(self + 0x8eu);
                    edx = (uint32_t)(int16_t)t33;
                    ebx = (ebx & 0xffff0000u) | t33;
                    x0 = d35;
                }
                else
                {
                    eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t32 & 0xffff0000u) | rd16(self + 0x8eu);
                    edx = (uint32_t)(int16_t)t33;
                    ebx = (ebx & 0xffff0000u) | t33;
                    x0 = d35;
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                        if ((uint16_t)ebx != (uint16_t)ecx)
                        {
                            zf = (uint16_t)((uint16_t)ebx - (uint16_t)ecx) == 0u;
                            sf = (int16_t)((uint16_t)ebx - (uint16_t)ecx) < 0;
                            of = (((uint16_t)ebx ^ (uint16_t)ecx) & ((uint16_t)ebx ^ (uint16_t)((uint16_t)ebx - (uint16_t)ecx))) >> 0xfu;
                            if (zf || sf != of)
                            {
                                x0 = (double)rdf32(COW_IMG(0x1032961cu));
                            }
                            else
                            {
                                x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                            }
                        }
                    }
                }
                g->ecx = ecx;
                g->edx = edx;
                fpush(g, x0);
                g->esp = sp0 - 0x18u;
                t36 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t37 = g->ecx;
                t38 = g->edx;
                wr16(edi + 0x1cu, (uint16_t)(ebx + t36));
                t39 = rd16(self + 0x8cu);
                t40 = rd16(self + 0x90u);
                t41 = rd16(edi + 0x1au);
                wr16(edi + 0x22u, (uint16_t)(t39 + (uint16_t)(t40 - t41)));
                t42 = rd16(self + 0x8eu);
                t43 = rd16(self + 0x92u);
                wr16(edi + 0x24u, (uint16_t)(t42 + (uint16_t)(t43 - (uint16_t)(ebx + t36))));
                eax = t36;
                ecx = (t37 & 0xffff0000u) | (uint16_t)(t39 + (uint16_t)(t40 - t41));
                edx = (t38 & 0xffff0000u) | (uint16_t)(t42 + (uint16_t)(t43 - (uint16_t)(ebx + t36)));
                ebx = ebx + t36;
            }
            t48 = rd16(edi + 0x1au);
            wr16(self + 0x3au, (uint16_t)t48);
            t49 = rd16(edi + 0x1cu);
            wr16(self + 0x3cu, (uint16_t)t49);
            wr16(self + 0x3eu, (uint16_t)(rd16(edi + 0x1au) + rd16(edi + 0x22u)));
            t50 = rd16(edi + 0x1cu);
            t51 = rd16(edi + 0x24u);
            wr16(self + 0x40u, (uint16_t)(t50 + t51));
            ecx = ((ecx | t48) & 0xffff0000u) | (uint16_t)(t50 + t51);
            edx = (edx & 0xffff0000u) | t49;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(t4);
            ecx = t5;
            edx = t6;
            edi = t4;
            if (eax == 1u)
            {
                eax = eax - 1u;
                if (rd32(self + 0x94u) != 0xfffffc19u)
                {
                    wr32(sp0 - 0x1cu, 0u);
                    t12 = (uint32_t)(int16_t)rd16(ebp + 0x1cu);
                    wr32(sp0 - 0x20u, t12);
                    t13 = (uint32_t)(int16_t)rd16(ebp + 0x1au);
                    wr32(sp0 - 0x24u, t13);
                    g->eax = t13;
                    g->esp = sp0 - 0x18u;
                    t14 = cow_fastcall(g, COW_IMG(0x10119ad0u), edi, t12, 3, t13, t12, 0u);
                    t15 = g->ecx;
                    t16 = g->edx;
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
                t17 = (ecx & 0xffffff00u) | rd8(self + 0x99u);
                wr32(sp0 - 0x1cu, t17);
                g->ebp = ebp;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10119c00u), eax, edi, g->edx, 0, 1, t17);
                t18 = g->ecx;
                t19 = g->edx;
                ecx = t18;
                edx = t19;
            }
            else
            {
                eax = eax - 1u;
                if (eax == 1u)
                {
                    eax = eax - 1u;
                    if (rd32(self + 0x94u) != 0xfffffc19u)
                    {
                        t7 = rd32(self + 8u);
                        wr32(sp0 - 0x1cu, t7);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t8 = cow_thiscall(g, COW_IMG(0x10119e30u), edi, 1, t7);
                        t9 = g->edx;
                        eax = t8;
                        edx = t9;
                    }
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    cow_call_regs(g, COW_IMG(0x10119f20u), eax, edi, g->edx, 1, 0);
                    t10 = g->ecx;
                    t11 = g->edx;
                    ecx = t10;
                    edx = t11;
                }
            }
        }
        if (rd32(sp0 - 8u) != 0u) goto L_10117541;
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
    }
    if ((int32_t)rd32(self + 0x94u) > 0)
    {
        eax = rd32(self + 0x94u);
    }
    else
    {
        eax = rd32(self + 0x94u);
        wr32(self + 0x94u, 0xfffffc19u);
    }
    if (rd32(self + 0x10u) != 0xeu) goto L_10117774;
    if ((int16_t)rd16(self + 0x66u) <= 0) goto L_1011779b;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    d55 = cow_take_float(g);
    g->ecx = t53;
    g->edx = t54;
    fpush(g, d55);
    t56 = cow_call_regs(g, COW_IMG(0x10311c6cu), t52, g->ecx, g->edx, 1, 0);
    t57 = g->ecx;
    t58 = g->edx;
    wr16(self + 0x66u, (uint16_t)(rd16(self + 0x66u) - (uint16_t)t56));
    eax = t56;
    ecx = t57;
    edx = t58;
L_10117774: ;
    if ((int16_t)rd16(self + 0x5eu) > 0)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t66 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t67 = g->ecx;
        t68 = g->edx;
        d69 = cow_take_float(g);
        fpush(g, d69);
        t70 = cow_call_regs(g, COW_IMG(0x10311c6cu), t66, g->ecx, g->edx, 1, 0);
        wr16(self + 0x5eu, (uint16_t)(rd16(self + 0x5eu) - (uint16_t)t70));
        if ((int16_t)rd16(self + 0x5eu) >= 0)
        {
            eax = t70;
        }
        else
        {
            eax = t70;
            wr16(self + 0x5eu, 0u);
        }
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
L_1011779b: ;
    if ((int16_t)rd16(self + 0x64u) <= 0) goto L_101177b2;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t59 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t60 = g->ecx;
    t61 = g->edx;
    d62 = cow_take_float(g);
    g->ecx = t60;
    g->edx = t61;
    fpush(g, d62);
    t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), t59, g->ecx, g->edx, 1, 0);
    t64 = g->ecx;
    t65 = g->edx;
    wr16(self + 0x64u, (uint16_t)(rd16(self + 0x64u) - (uint16_t)t63));
    eax = t63;
    ecx = t64;
    edx = t65;
    goto L_10117774;
L_101177b2: ;
    if (rd8(self + 0x6eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x6eu);
        goto L_10117774;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x6eu);
    wr8(self + 0x70u, 1u);
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10117520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
