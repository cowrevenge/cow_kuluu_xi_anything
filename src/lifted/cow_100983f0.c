/* f_0x100983f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100983f0(Guest* g)
{
    double d15;
    double d25;
    double d30;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (rd32(self + 0x170u) != 0x1cu)
    {
        eax = rd32(self + 0x170u);
        if (eax != 0x1fu)
        {
            if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
            {
                eax = rd32(self + 0x120u);
                if ((int8_t)eax >= 0) goto L_10098480;
                if (rd8(COW_IMG(0x104807f5u)) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104807f5u));
                    goto L_10098480;
                }
                t1 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x140u;
                wr32(sp0 - 0x30u, t1);
                wr32(sp0 - 0x34u, sp0 - 0x20u);
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x20u, t1);
                t2 = rd32(rd32(self + 0xd4u) + 0x260u) + 0x150u;
                wr32(sp0 - 0x38u, t2);
                wr32(sp0 - 0x3cu, sp0 - 0x10u);
                g->eax = rd32(self + 0xd4u);
                g->edx = sp0 - 0x10u;
                t3 = rd32(self + 0xd4u);
                g->esp = sp0 - 0x34u;
                t4 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, t2);
                t5 = g->edx;
                if (((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 4u) == 0u) goto L_10098608;
                eax = (t4 & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
L_1009849f: ;
                if (rd32(self + 0x12cu) >> 0xdu & 1u)
                {
                    edx = rd32(self + 0x12cu) >> 0xdu;
                }
                else
                {
                    t8 = rd32(self + 4u);
                    t9 = rd32(self + 8u);
                    t10 = rd32(self + 0xcu);
                    wr32(self + 0x24u, t8);
                    t11 = rd32(self + 0x10u);
                    wr32(self + 0x28u, t9);
                    wr32(self + 0x2cu, t10);
                    wr32(self + 0x30u, t11);
                    eax = t11;
                    edx = t10;
                }
                if (rd8(rd32(self + 0xa0u) + 0xf8u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
                    ecx = rd32(self + 0xa0u);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t22 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t23 = g->ecx;
                    t24 = g->edx;
                    d25 = cow_take_float(g);
                    g->ecx = t23;
                    g->edx = t24;
                    fpush(g, d25);
                    t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), t22, g->ecx, g->edx, 1, 0);
                    t27 = g->ecx;
                    t28 = g->edx;
                    t29 = rd16(self + 0x1b8u);
                    wr16(self + 0x1b8u, 0u);
                    eax = t26;
                    ecx = t27;
                    edx = t28;
                    ebp = (in_ebp & 0xffff0000u) | (uint16_t)((uint16_t)t26 + t29);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(rd32(self + 0xa0u) + 0xf8u);
                    ecx = rd32(self + 0xa0u);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t12 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                    t13 = g->ecx;
                    t14 = g->edx;
                    d15 = cow_take_float(g);
                    g->edx = t14;
                    fpush(g, d15);
                    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
                    t17 = g->edx;
                    wr16(self + 0x1b8u, (uint16_t)((uint16_t)t16 + rd16(self + 0x1b8u)));
                    t18 = rd16(self + 0x1b8u);
                    t19 = cow_fastcall(g, COW_IMG(0x1008d980u), self, t17, 0);
                    t20 = g->ecx;
                    t21 = g->edx;
                    eax = t19;
                    ecx = t20;
                    edx = t21;
                    ebp = (in_ebp & 0xffff0000u) | t18;
                }
                d30 = fr(g, fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(sp0 - 0x1cu)) + (double)rdf32(sp0 - 0x20u));
                if (d30 != (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    if (rd8(COW_IMG(0x10482f18u)) == 0u)
                    {
                        t31 = rd32(self + 0x78u);
                        wr32(sp0 - 0x30u, t31);
                        wr32(sp0 - 0x34u, t31);
                        wr32(sp0 - 0x38u, 0x15u);
                        g->ecx = ecx;
                        g->esp = sp0 - 0x2cu;
                        t32 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x15u, t31, t31);
                        t33 = g->ecx;
                        if (t32 != 0u)
                        {
                            eax = t32;
                            ecx = t33;
                            esi = t32;
                            t34 = rd32(sp0 - 0xcu);
                            wr32(sp0 - 0x30u, t34);
                            g->eax = eax;
                            g->esp = sp0 - 0x2cu;
                            t35 = cow_cdecl(g, COW_IMG(0x100dd970u), 1, t34);
                            wr8(esi + 0x14u, (uint8_t)t35);
                            t36 = rd32(sp0 - 0x20u);
                            wr32(esi + 4u, t36);
                            t37 = rd32(sp0 - 0x1cu);
                            t38 = rd8(esi + 0x15u);
                            wr32(esi + 8u, t37);
                            t39 = rd32(sp0 - 0x18u);
                            wr16(esi + 0x12u, (uint16_t)ebp);
                            wr32(esi + 0xcu, t39);
                            t40 = rd32(self + 0x124u);
                            wr8(esi + 0x15u, (uint8_t)(((t40 >> 0x12u ^ t38) & 1u) ^ t38));
                            t41 = rd32(self + 0x124u);
                            wr8(esi + 0x15u, (uint8_t)((((uint8_t)(t41 >> 0x13u) * 2u ^ t38) & 2u) ^ ((t40 >> 0x12u ^ t38) & 1u) ^ t38));
                            t42 = rd32(self + 0x120u);
                            t43 = rd32(self + 0x128u);
                            wr16(esi + 0x16u, 0u);
                            wr8(esi + 0x15u, (uint8_t)((((t43 >> 0xeu | t42 >> 0x15u | t42 >> 0x14u) << 2u ^ t38) & 4u) ^ (((uint8_t)(t41 >> 0x13u) * 2u ^ t38) & 2u) ^ ((t40 >> 0x12u ^ t38) & 1u) ^ t38));
                            g->eax = (t41 >> 0x13u & 0xffffff00u) | (uint8_t)((((uint8_t)(t41 >> 0x13u) * 2u ^ t38) & 2u) ^ ((t40 >> 0x12u ^ t38) & 1u) ^ t38);
                            g->edx = t42 >> 0x14u;
                            t44 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
                            t45 = g->edx;
                            wr32(esi + 0x18u, t44);
                            if (rd32(COW_IMG(0x1057876cu)) == 0u)
                            {
                                eax = t44;
                                ecx = rd32(COW_IMG(0x1057876cu));
                                edx = t45;
                            }
                            else
                            {
                                eax = t44;
                                ecx = rd32(COW_IMG(0x1057876cu));
                                edx = t45;
                                g->esp = sp0 - 0x2cu;
                                t46 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
                                t47 = g->ecx;
                                t48 = g->edx;
                                if (t46 == 0u)
                                {
                                    eax = t46;
                                    ecx = t47;
                                    edx = t48;
                                }
                                else
                                {
                                    eax = t46;
                                    ecx = t47;
                                    edx = t48;
                                    t49 = rd16(eax);
                                    wr16(esi + 0x16u, (uint16_t)t49);
                                    eax = (eax & 0xffff0000u) | t49;
                                }
                            }
                            wr32(sp0 - 0x30u, 0u);
                            wr32(sp0 - 0x34u, 0x20u);
                            wr32(sp0 - 0x38u, esi);
                            g->esp = sp0 - 0x2cu;
                            cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x20u, 0u);
                        }
                    }
                }
            }
        }
    }
L_10098608: ;
    return;
L_10098480: ;
    wr32(sp0 - 0x30u, self + 4u);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x20u, self + 4u);
    t6 = g->edx;
    wr32(sp0 - 0x38u, self + 0x14u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->eax = self + 0x14u;
    g->esp = sp0 - 0x34u;
    t7 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x10u, self + 0x14u);
    eax = t7;
    goto L_1009849f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100983f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100983f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
