/* f_0x1015e530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015e530(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        esi = rd32(sp0 + 4u);
        if (rd8(esi + 0x6eu) != 0u)
        {
            eax = (in_eax & 0xffffff00u) | rd8(esi + 0x6eu);
        }
        else
        {
            if (rd32(esi + 4u) == 0u)
            {
                eax = rd32(esi + 4u);
            }
            else
            {
                if (rd32(esi + 0x10u) != 0xeu)
                {
                    eax = rd32(esi + 0x10u);
                }
                else
                {
                    eax = rd32(esi + 0x10u);
                    wr32(sp0 - 0x14u, 0xeu);
                    g->edx = in_edx;
                    g->esp = sp0 - 0x14u;
                    cow_stdcall(g, COW_IMG(0x10123ea0u), 0);
                    t1 = g->edx;
                    if (rd32(esi + 0x10u) == 0xeu)
                    {
                        eax = rd32(esi + 0x10u);
                        edx = t1;
                        goto L_1015e581;
                    }
                    eax = rd32(esi + 0x10u);
                    edx = t1;
                    if (rd8(esi + 0x6eu) == 0u)
                    {
                        ebx = in_ebx & 0xffffff00u;
                        goto L_1015e595;
                    }
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x6eu);
L_1015e581: ;
                    g->ebx = in_ebx & 0xffffff00u;
                    g->esp = sp0 - 0x10u;
                    cow_fastcall(g, COW_IMG(0x10117ee0u), esi, edx, 0);
                    t2 = g->edx;
                    wr32(esi + 0x10u, 0u);
                    wr8(esi + 0x6eu, 0u);
                    edx = t2;
                    ebx = (in_ebx & 0xffffff00u) | 1u;
L_1015e595: ;
                    wr32(sp0 - 0x14u, 0u);
                    t3 = rd32(esi + 4u) + 0x46u;
                    wr32(sp0 - 0x18u, t3);
                    g->edx = edx;
                    g->esp = sp0 - 0x10u;
                    t4 = cow_call_regs(g, COW_IMG(0x1015dc70u), t3, g->ecx, g->edx, 0, 2, t3, 0u);
                    t5 = g->edx;
                    if (t4 == 0u)
                    {
                        eax = t4;
                        edx = t5;
                        wr32(esi + 0xcu, 0u);
                    }
                    else
                    {
                        eax = t4;
                        edx = t5;
                        ebp = t4;
                        wr32(sp0 - 0x14u, ebp);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t6 = cow_thiscall(g, COW_IMG(0x10118f20u), esi, 1, ebp);
                        t7 = g->edx;
                        t8 = cow_thiscall(g, COW_IMG(0x1011a490u), esi, 0);
                        g->edx = rd32(ebp);
                        t9 = rd32(ebp);
                        t10 = cow_thiscall(g, rd32(t9 + 0x14u), ebp, 0);
                        t11 = g->edx;
                        g->edx = t11;
                        cow_thiscall(g, COW_IMG(0x10124b70u), rd32(COW_IMG(0x104e1d4cu)), 0);
                        t12 = g->edx;
                        if ((rd32(esi + 0x34u) >> 8u & 0x10u) == 0u)
                        {
                            edx = t12;
                        }
                        else
                        {
                            eax = rd32(esi + 0x34u);
                            edx = t12;
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 0u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t13 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 0u);
                            t14 = g->edx;
                            wr32(sp0 - 0x18u, t13);
                            g->edx = t14;
                            g->esp = sp0 - 0x10u;
                            cow_stdcall(g, COW_IMG(0x1015f790u), 2, t13, rd32(sp0 - 0x14u));
                            t15 = g->edx;
                            edx = t15;
                        }
                        if ((rd32(esi + 0x34u) >> 8u & 0x40u) != 0u)
                        {
                            eax = rd32(esi + 0x34u);
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 2u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t16 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 2u);
                            t17 = g->edx;
                            wr32(sp0 - 0x18u, t16);
                            g->edx = t17;
                            g->esp = sp0 - 0x10u;
                            t18 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t16, rd32(sp0 - 0x14u));
                            t19 = g->edx;
                            if ((uint8_t)t18 != 0u)
                            {
                                edx = t19;
                            }
                            else
                            {
                                eax = t18;
                                edx = t19;
                                wr32(sp0 - 0x14u, esi);
                                wr32(sp0 - 0x18u, 1u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x14u;
                                t20 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 1u);
                                t21 = g->edx;
                                wr32(sp0 - 0x18u, t20);
                                g->edx = t21;
                                g->esp = sp0 - 0x10u;
                                cow_stdcall(g, COW_IMG(0x1015f790u), 2, t20, rd32(sp0 - 0x14u));
                                t22 = g->edx;
                                edx = t22;
                            }
                        }
                        if ((rd32(esi + 0x34u) >> 8u & 0x20u) == 0u)
                        {
                            eax = rd32(esi + 0x34u);
                        }
                        else
                        {
                            eax = rd32(esi + 0x34u);
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 1u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t23 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 1u);
                            t24 = g->edx;
                            wr32(sp0 - 0x18u, t23);
                            g->edx = t24;
                            g->esp = sp0 - 0x10u;
                            t25 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t23, rd32(sp0 - 0x14u));
                            t26 = g->edx;
                            eax = t25;
                            edx = t26;
                        }
                        if ((rd32(esi + 0x34u) & 0x10000000u) != 0u)
                        {
                            wr32(sp0 - 0x14u, esi);
                            wr32(sp0 - 0x18u, 0x10000000u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t27 = cow_thiscall(g, COW_IMG(0x1015f960u), self, 1, 0x10000000u);
                            t28 = g->edx;
                            wr32(sp0 - 0x18u, t27);
                            g->edx = t28;
                            g->esp = sp0 - 0x10u;
                            t29 = cow_stdcall(g, COW_IMG(0x1015f790u), 2, t27, rd32(sp0 - 0x14u));
                            t30 = g->edx;
                            eax = t29;
                            edx = t30;
                        }
                    }
                    if ((uint8_t)ebx != 0u)
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t31 = cow_thiscall(g, COW_IMG(0x10118220u), esi, 0);
                        t32 = g->edx;
                        if ((rd8(esi + 0x34u) & 8u) == 0u)
                        {
                            eax = t31;
                            edx = t32;
                            wr8(esi + 0x68u, 1u);
                            if (eax != 0u)
                            {
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t37 = cow_call_regs(g, COW_IMG(0x101193a0u), eax, eax, g->edx, 1, 0);
                                t38 = g->edx;
                                eax = t37;
                                edx = t38;
                            }
                        }
                        else
                        {
                            eax = t31;
                            edx = t32;
                            wr8(esi + 0x68u, 0u);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x10u;
                            t33 = cow_thiscall(g, COW_IMG(0x10118220u), esi, 0);
                            t34 = g->edx;
                            if (t33 == 0u)
                            {
                                eax = t33;
                                edx = t34;
                            }
                            else
                            {
                                eax = t33;
                                edx = t34;
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                t35 = cow_thiscall(g, COW_IMG(0x101193b0u), eax, 0);
                                t36 = g->edx;
                                eax = t35;
                                edx = t36;
                            }
                        }
                    }
                    if ((rd32(esi + 0x34u) & 0x20000u) != 0u)
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x10u;
                        t39 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
                        t40 = g->edx;
                        wr32(sp0 + 4u, t39);
                        if (t39 == 0u)
                        {
                            eax = t39;
                        }
                        else
                        {
                            edx = t40;
L_1015e6b1: ;
                            wr32(sp0 - 0x14u, sp0 + 4u);
                            g->eax = sp0 + 4u;
                            g->esp = sp0 - 0x10u;
                            t41 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
                            t42 = g->edx;
                            if ((rd32(t41 + 0x34u) & 0x40000u) == 0u)
                            {
                                edx = t42;
                            }
                            else
                            {
                                eax = t41;
                                edx = t42;
                                wr32(sp0 - 0x14u, 1u);
                                wr32(sp0 - 0x18u, eax);
                                g->edx = edx;
                                g->esp = sp0 - 0x10u;
                                cow_call_regs(g, COW_IMG(0x1015e790u), eax, self, g->edx, 0, 2, eax, 1u);
                                t43 = g->edx;
                                edx = t43;
                            }
                            if (rd32(sp0 + 4u) != 0u) goto L_1015e6b1;
                            eax = rd32(sp0 + 4u);
                        }
                    }
                }
            }
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e530(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
