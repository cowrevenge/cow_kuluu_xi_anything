/* f_0x101cda60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101cda60(Guest* g)
{
    double d59;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    uint32_t eax;
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
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x101cec10u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        edx = t2;
        t3 = (eax & 0xffffff00u) | rd8(self + 5u);
        wr32(sp0 - 0x24u, t3);
        t4 = rd32(self + 0x10u);
        wr32(sp0 - 0x28u, t4);
        g->esp = sp0 - 0x20u;
        t5 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t4, t3);
        if (t5 == 0u)
        {
            eax = t5;
        }
        else
        {
            eax = t5;
            edi = t5;
            if (rd16(self + 0x2au) != rd8(edi + 0x10u))
            {
                edx = rd8(edi + 0x10u);
                if (rd32(self + 0x64u) == 0u)
                {
                    ecx = rd32(self + 0x64u);
                }
                else
                {
                    ecx = rd32(self + 0x64u);
                    wr32(sp0 - 0x24u, 1u);
                    g->eax = rd32(ecx);
                    t6 = rd32(ecx);
                    g->esp = sp0 - 0x20u;
                    t7 = cow_thiscall(g, rd32(t6 + 0x18u), ecx, 1, 1u);
                    t8 = g->ecx;
                    wr32(self + 0x64u, 0u);
                    eax = t7;
                    ecx = t8;
                }
                t9 = rd8(edi + 0x10u);
                wr16(self + 0x2au, (uint16_t)t9);
                if (rd8(edi + 0x10u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(edi + 0x10u);
                }
                else
                {
                    ecx = (ecx & 0xffff0000u) | t9;
                    if (rd16(rd32(COW_IMG(0x106631d4u)) + 0x1cu) == 3u)
                    {
                        edx = rd32(COW_IMG(0x106631d4u));
                        if (rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) != 0u)
                        {
                            eax = rd32(rd32(COW_IMG(0x10664420u)) + 0xcu);
                            if (rd8(eax + 2u) == rd8(edi + 2u))
                            {
                                edx = (edx & 0xffffff00u) | rd8(edi + 2u);
                                if (rd16(eax) == rd16(edi))
                                {
                                    edx = (edx & 0xffff0000u) | rd16(eax);
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2d8u));
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x20u;
                                    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2d8u));
                                    t11 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2c4u));
                                    g->edx = t11;
                                    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2c4u));
                                    t13 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e2b0u));
                                    g->edx = t13;
                                    t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e2b0u));
                                    t15 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e29cu));
                                    g->edx = t15;
                                    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
                                    t17 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e288u));
                                    g->edx = t17;
                                    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e288u));
                                    t19 = g->edx;
                                    wr32(sp0 - 0x24u, COW_IMG(0x1037e274u));
                                    g->edx = t19;
                                    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e274u));
                                    t20 = g->edx;
                                    wr32(sp0 - 0x24u, 1u);
                                    t21 = rd32(COW_IMG(0x10664520u));
                                    wr8(t21 + 0x3au, 0u);
                                    wr32(t21 + 0x14u, 0u);
                                    t22 = rd32(t21 + 8u);
                                    wr32(sp0 - 0x28u, t22);
                                    g->edx = t20;
                                    cow_call_regs(g, COW_IMG(0x1015e790u), t22, COW_IMG(0x10621838u), g->edx, 0, 2, t22, 1u);
                                    t23 = g->edx;
                                    if (rd16(rd32(COW_IMG(0x106631d4u)) + 0x1cu) == 3u)
                                    {
                                        edx = t23;
                                        if (rd8(rd32(COW_IMG(0x10664420u)) + 8u) == 0u)
                                        {
                                            eax = rd32(COW_IMG(0x10664420u));
                                            wr32(sp0 - 0x24u, eax);
                                            g->esp = sp0 - 0x20u;
                                            cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, eax);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t24 = rd8(edi + 0x10u);
                    wr32(sp0 - 0x24u, t24);
                    t25 = rd8(edi + 0x14u) - 1u;
                    wr32(sp0 - 0x28u, t25);
                    g->edx = t24;
                    t26 = rd32(COW_IMG(0x106631d4u));
                    g->esp = sp0 - 0x20u;
                    t27 = cow_thiscall(g, COW_IMG(0x101d5ec0u), t26, 2, t25, t24);
                    t28 = g->ecx;
                    t29 = g->edx;
                    if (t27 == 0x3e7u)
                    {
                        eax = t27;
                    }
                    else
                    {
                        eax = t27;
                        ecx = t28;
                        edx = t29;
                        wr32(sp0 - 0x24u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t30 = cow_cdecl(g, COW_IMG(0x101cce00u), 1, eax);
                        t31 = g->edx;
                        wr32(sp0 - 0x24u, t30);
                        wr32(sp0 - 0x28u, sp0 - 0x14u);
                        g->edx = t31;
                        t32 = rd32(COW_IMG(0x1047d128u));
                        t33 = cow_thiscall(g, COW_IMG(0x100731b0u), t32, 2, sp0 - 0x14u, t30);
                        t34 = g->ecx;
                        t35 = g->edx;
                        wr32(self + 0x5cu, rd32(t33));
                        if (rd32(self + 0x64u) != 0u)
                        {
                            edx = t35;
                        }
                        else
                        {
                            ecx = t34;
                            edx = t35;
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 4u);
                            wr32(sp0 - 0x2cu, 0x794u);
                            g->edx = edx;
                            g->esp = sp0 - 0x24u;
                            t36 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x794u, 4u);
                            t37 = g->edx;
                            g->esp = sp0 - 0x20u;
                            cow_fastcall(g, COW_IMG(0x100748f0u), t36, t37, 0);
                            t38 = g->edx;
                            wr8(COW_IMG(0x1047d13cu), 1u);
                            if (t36 == 0u)
                            {
                                edx = t38;
                                eax = 0u;
                            }
                            else
                            {
                                edi = t36;
                                t39 = rd32(self + 0x5cu);
                                wr32(sp0 - 0x24u, t39);
                                g->edx = t39;
                                g->esp = sp0 - 0x20u;
                                t40 = cow_thiscall(g, COW_IMG(0x100c41b0u), edi, 1, t39);
                                t41 = g->edx;
                                eax = t40;
                                edx = t41;
                            }
                            wr32(self + 0x64u, eax);
                        }
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t42 = cow_stdcall(g, COW_IMG(0x101d5fe0u), 0);
                        t43 = g->edx;
                        if ((uint8_t)t42 == 0u)
                        {
                            eax = t42;
                            edx = t43;
                        }
                        else
                        {
                            eax = t42;
                            edx = t43;
                            wr32(sp0 - 0x24u, 0u);
                            g->esp = sp0 - 0x20u;
                            t44 = cow_call_regs(g, COW_IMG(0x100859d0u), eax, rd32(self + 0x64u), edx, 0, 1, 0u);
                            t45 = g->edx;
                            eax = t44;
                            edx = t45;
                        }
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t46 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, self, g->edx, 1, 0);
                        t47 = g->ecx;
                        t48 = g->edx;
                        if (t46 == 0u)
                        {
                            eax = t46;
                        }
                        else
                        {
                            eax = t46;
                            ecx = t47;
                            edx = t48;
                            g->edx = edx;
                            g->esp = sp0 - 0x20u;
                            t49 = cow_call_regs(g, COW_IMG(0x101cd9a0u), eax, ecx, g->edx, 1, 0);
                            t50 = g->ecx;
                            t51 = g->edx;
                            t52 = rd32(t49 + 0x34u);
                            wr32(sp0 - 0x10u, t52);
                            g->edx = t51;
                            t53 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t52, t50, g->edx, 1, 0);
                            t54 = g->edx;
                            t55 = rd32(t53 + 0x38u);
                            wr32(sp0 - 0xcu, t55);
                            t56 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t53, self, g->edx, 1, 0);
                            wr32(sp0 - 0x24u, sp0 - 0x10u);
                            t57 = rd32(self + 0x64u) + 0x34u;
                            wr32(sp0 - 0x28u, t57);
                            t58 = rd32(t56 + 0x3cu);
                            wr32(sp0 - 8u, t58);
                            d59 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x1032b15cu)));
                            wrf32(sp0 - 0xcu, (float)d59);
                            g->eax = sp0 - 0x10u;
                            g->edx = t58;
                            t60 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t57, sp0 - 0x10u);
                            t61 = g->edx;
                            g->edx = t61;
                            t62 = rd32(self + 0x64u);
                            t63 = cow_call_regs(g, COW_IMG(0x101cd9a0u), t60, self, g->edx, 1, 0);
                            t64 = g->ecx;
                            t65 = g->edx;
                            wr32(sp0 - 0x24u, t63 + 0x44u);
                            wr32(sp0 - 0x28u, t62 + 0x44u);
                            g->eax = t63 + 0x44u;
                            t66 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t62 + 0x44u, t63 + 0x44u);
                            d67 = (double)rdf32(t62 + 0x44u);
                            if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                ebx = t62 + 0x44u;
                                edi = t62;
                            }
                            else
                            {
                                eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                ebx = t62 + 0x44u;
                                edi = t62;
                                d68 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(ebx, (float)d68);
                            }
                            if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                                d69 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(ebx, (float)d69);
                            }
                            d70 = (double)rdf32(edi + 0x48u);
                            if ((cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d70, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                d71 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x48u, (float)d71);
                            }
                            d72 = (double)rdf32(edi + 0x48u);
                            if (!(d72 < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                                d73 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x48u, (float)d73);
                            }
                            d74 = (double)rdf32(edi + 0x4cu);
                            if ((cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                            {
                                eax = cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                            }
                            else
                            {
                                eax = cow_fsw(g, d74, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                                d75 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x4cu, (float)d75);
                            }
                            d76 = (double)rdf32(edi + 0x4cu);
                            if (!(d76 < (double)rdf32(COW_IMG(0x10337e20u))))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                            }
                            else
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d76, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                                d77 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                                wrf32(edi + 0x4cu, (float)d77);
                            }
                        }
                    }
                }
            }
        }
    }
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cda60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cda60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
