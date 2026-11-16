/* f_0x100a8770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a8770(Guest* g)
{
    double d2;
    double d32;
    double d38;
    double d39;
    double d42;
    double d44;
    double d45;
    double d48;
    double d49;
    double d53;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t1 = g->edx;
    d2 = cow_take_float(g);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d2);
    g->edx = t1;
    t3 = cow_thiscall(g, COW_IMG(0x10084600u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 >= 3u)
    {
        eax = t3;
        goto L_100a89d1;
    }
    edx = t4;
    wr32(sp0 - 0x2cu, self + 0xd4u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x18u, self + 0xd4u);
    t5 = g->ecx;
    t6 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t6);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x18u, t6);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 + 4u, 0x42800000u);
    g->esp = sp0 - 0x28u;
    t9 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t8, 1, 0);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        goto L_100a89d1;
    }
    edx = t10;
    ebp = 0u;
    esi = t9;
L_100a87cc: ;
    if (esi != self)
    {
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t11 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
        t12 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            edx = t12;
        }
        else
        {
            eax = t11;
            g->eax = eax;
            g->edx = rd32(esi);
            t13 = rd32(esi);
            g->esp = sp0 - 0x28u;
            t14 = cow_thiscall(g, rd32(t13 + 0x128u), esi, 0);
            t15 = g->edx;
            if (t14 != 0u)
            {
                edx = t15;
            }
            else
            {
                edx = t15;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t16 = cow_thiscall(g, COW_IMG(0x10084400u), esi, 0);
                t17 = g->edx;
                if (t16 == 0u)
                {
                    edx = t17;
                    goto L_100a881d;
                }
                eax = t16;
                edx = t17;
                if (eax == 1u) goto L_100a881d;
                if (eax == 2u) goto L_100a881d;
                if (eax == 6u) goto L_100a881d;
                if (eax == 7u) goto L_100a881d;
                if (eax != 8u) goto L_100a8906;
L_100a881d: ;
                if ((rd8(esi + 0xb2u) & 2u) == 0u)
                {
                    if (rd16(esi + 0xb2u) == 0u)
                    {
                        g->eax = rd32(esi);
                        g->edx = edx;
                        t18 = rd32(esi);
                        g->esp = sp0 - 0x28u;
                        t19 = cow_thiscall(g, rd32(t18 + 0x34cu), esi, 0);
                        t20 = g->edx;
                        if (t19 != 0u)
                        {
                            edx = t20;
                        }
                        else
                        {
                            eax = t19;
                            g->eax = eax;
                            g->edx = rd32(esi);
                            t21 = rd32(esi);
                            g->esp = sp0 - 0x28u;
                            t22 = cow_thiscall(g, rd32(t21 + 0x358u), esi, 0);
                            t23 = g->edx;
                            if (t22 != 0u)
                            {
                                edx = t23;
                            }
                            else
                            {
                                edx = t23;
                                g->edx = edx;
                                g->esp = sp0 - 0x28u;
                                t24 = cow_thiscall(g, COW_IMG(0x10084390u), esi, 0);
                                t25 = g->edx;
                                if (t24 == 3u)
                                {
                                    edx = t25;
                                }
                                else
                                {
                                    edx = t25;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t26 = cow_thiscall(g, COW_IMG(0x10084390u), esi, 0);
                                    t27 = g->edx;
                                    if (t26 == 2u)
                                    {
                                        edx = t27;
                                    }
                                    else
                                    {
                                        edx = t27;
                                        wr32(sp0 - 0x2cu, 0u);
                                        g->esp = sp0 - 0x28u;
                                        t28 = cow_fastcall(g, COW_IMG(0x10084480u), esi, edx, 1, 0u);
                                        t29 = g->edx;
                                        if ((int32_t)t28 < 50)
                                        {
                                            eax = t28;
                                            edx = t29;
                                            goto L_100a8898;
                                        }
                                        edx = t29;
                                        wr32(sp0 - 0x2cu, 0u);
                                        g->esp = sp0 - 0x28u;
                                        t30 = cow_fastcall(g, COW_IMG(0x10084480u), esi, edx, 1, 0u);
                                        t31 = g->edx;
                                        if ((int32_t)t30 <= 59)
                                        {
                                            edx = t31;
                                            goto L_100a8906;
                                        }
                                        eax = t30;
                                        edx = t31;
L_100a8898: ;
                                        d32 = (double)rdf32(esi + 0x59cu);
                                        if (!(d32 < (double)rdf32(COW_IMG(0x1032961cu))))
                                        {
                                            if (rd32(esi + 0x70u) == 0u) goto L_100a88c5;
                                            ecx = rd32(esi + 0x70u);
                                            g->edx = edx;
                                            g->esp = sp0 - 0x28u;
                                            t33 = cow_thiscall(g, COW_IMG(0x1008e140u), ecx, 0);
                                            t34 = g->edx;
                                            if ((uint8_t)t33 == 0u) goto L_100a88c5;
                                            edx = t34;
                                            if ((int16_t)rd16(esi + 0x5aeu) <= 0) goto L_100a8906;
L_100a88c5: ;
                                            wr32(sp0 - 0x2cu, sp0 - 0x18u);
                                            wr32(sp0 - 0x30u, esi + 0xd4u);
                                            wr32(sp0 - 0x34u, sp0 - 0xcu);
                                            g->edx = sp0 - 0xcu;
                                            g->esp = sp0 - 0x28u;
                                            cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, esi + 0xd4u, sp0 - 0x18u);
                                            t35 = g->edx;
                                            wr32(sp0 - 0x38u, sp0 - 0xcu);
                                            wr32(sp0 - 0x3cu, sp0 - 0xcu);
                                            g->edx = t35;
                                            g->esp = sp0 - 0x34u;
                                            t36 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
                                            t37 = g->edx;
                                            d38 = cow_take_float(g);
                                            d39 = (double)rdf32(sp0 + 4u);
                                            if ((cow_fsw(g, d39, d38, 1u) & 0x4100u) != 0u)
                                            {
                                                edx = t37;
                                                x0 = d38;
                                            }
                                            else
                                            {
                                                edx = t37;
                                                x0 = d38;
                                                wrf32(sp0 + 4u, (float)x0);
                                                ebp = esi;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_100a8906: ;
    g->esp = sp0 - 0x28u;
    t40 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
    t41 = g->edx;
    if (t40 != 0u)
    {
        edx = t41;
        esi = t40;
        goto L_100a87cc;
    }
    eax = t40;
    edx = t41;
    if (ebp == 0u) goto L_100a89d1;
    wr32(sp0 - 0x2cu, self);
    d42 = fr(g, sqrt((double)rdf32(sp0 + 4u)));
    wrf32(sp0 + 4u, (float)d42);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    t43 = g->edx;
    d44 = cow_take_float(g);
    wr32(sp0 - 0x2cu, ebp);
    d45 = fr(g, (double)rdf32(sp0 + 4u) - d44);
    wrf32(sp0 + 4u, (float)d45);
    g->edx = t43;
    t46 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, ebp);
    t47 = g->edx;
    d48 = cow_take_float(g);
    d49 = fr(g, (double)rdf32(sp0 + 4u) - d48);
    if (!(d49 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t46 & 0xffff0000u) | (uint16_t)cow_fsw(g, d49, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t47;
        goto L_100a89b4;
    }
    edx = t47;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t50 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x5a0u, 0);
    t51 = g->ecx;
    t52 = g->edx;
    if (t50 != ebp)
    {
        eax = t50;
        edx = t52;
        goto L_100a8992;
    }
    eax = t50;
    ecx = t51;
    edx = t52;
    if (rd8(self + 0x5b0u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5b0u);
        goto L_100a89d1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x5b0u);
    d53 = (double)rdf32(sp0 - 0x1cu);
    fpush(g, d53);
    g->esp = sp0 - 0x28u;
    t54 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr16(self + 0x5acu, (uint16_t)(rd16(self + 0x5acu) - (uint16_t)t54));
    if ((int16_t)rd16(self + 0x5acu) < 0)
    {
        eax = t54;
        goto L_100a89ca;
    }
    eax = t54;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (eax & 0xffffff00u) | 1u;
L_100a8992: ;
    wr32(sp0 - 0x2cu, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t55 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5a0u, 1, ebp);
    wr16(self + 0x5acu, 0x1eu);
    wr8(self + 0x5b0u, 1u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (t55 & 0xffffff00u) | 1u;
L_100a89b4: ;
    wr32(sp0 - 0x2cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t56 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5a0u, 1, 0u);
    wr16(self + 0x5acu, 0u);
    eax = t56;
L_100a89ca: ;
    wr8(self + 0x5b0u, 0u);
L_100a89d1: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a8770(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
