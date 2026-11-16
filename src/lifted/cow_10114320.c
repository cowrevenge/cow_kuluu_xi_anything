/* f_0x10114320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114320(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    t1 = rd8(self + 0x10au) - rd8(self + 0x108u) & 0xfu;
    if ((uint16_t)t1 != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x108u);
        esi = t1;
        if (rd32(COW_IMG(0x10662dccu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10662dccu));
            wr32(sp0 - 0x24u, self + 0x238u);
            g->eax = self + 0x238u;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t2 = cow_thiscall(g, COW_IMG(0x101c4aa0u), ecx, 1, self + 0x238u);
            t3 = g->ecx;
            t4 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                ecx = t3;
                edx = t4;
                if ((uint16_t)esi != 0u)
                {
                    wr32(sp0 - 0x24u, in_edi);
                    ebp = 0u;
L_10114372: ;
                    wr32(sp0 - 0x14u, esi + 0xffffu);
                    if ((uint16_t)ebp >= 4u) goto L_10114445;
                    loc_14 = esi + 0xffffu;
                    esi = esi + 0xffffu;
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    g->esp = sp0 - 0x24u;
                    cow_call_regs(g, COW_IMG(0x10114120u), eax, self, edx, 0, 1, sp0 - 0x10u);
                    t5 = g->edx;
                    if ((uint16_t)rd32(sp0 - 0xcu) == 0u)
                    {
                        ecx = rd32(sp0 - 0xcu);
                        edx = t5;
                        eax = rd32(sp0 - 8u);
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0xcu);
                        t6 = rd32(sp0 - 0x10u);
                        wr32(self + (uint16_t)ebp * 0x48u + 0x110u, t6);
                        wr32(self + (uint16_t)ebp * 0x48u + 0x114u, ecx);
                        t7 = self + (uint16_t)ebp * 0x48u + 0x118u;
                        edi = t7;
                        eax = 0u;
                        ecx = 0x10u;
                        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        if ((rd32(sp0 - 0xau) & 0xff00u) == 0u)
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = rd32(sp0 - 0xau);
                            edx = t7;
                        }
                        else
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = rd32(sp0 - 0xau);
                            edx = t7;
                            t8 = (uint16_t)ecx >> 8u << 2u;
                            t9 = rd32(eax + 4u);
                            esi = t9;
                            edi = edx;
                            ecx = t8 >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            ecx = t8 & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            edx = t8;
                            esi = rd32(sp0 - 0x14u);
                        }
                        ebp = ebp + 1u;
                    }
                    if (eax != 0u)
                    {
                        t10 = rd32(eax) - 1u;
                        t11 = rd32(eax);
                        wr32(eax, t10);
                        if (t11 >= 2u)
                        {
                            ecx = t11;
                            edx = t10;
                        }
                        else
                        {
                            ecx = t11;
                            edx = t10;
                            if (rd32(rd32(sp0 - 8u) + 4u) == 0u)
                            {
                                eax = rd32(rd32(sp0 - 8u) + 4u);
                            }
                            else
                            {
                                eax = rd32(rd32(sp0 - 8u) + 4u);
                                wr32(sp0 - 0x28u, eax);
                                g->eax = eax;
                                g->esp = sp0 - 0x1cu;
                                t12 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
                                t13 = g->edx;
                                eax = t12;
                                edx = t13;
                            }
                            t14 = rd32(sp0 - 8u);
                            wr32(sp0 - 0x28u, t14);
                            g->eax = eax;
                            g->ecx = t14;
                            g->edx = edx;
                            g->esp = sp0 - 0x24u;
                            t15 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t14);
                            t16 = g->ecx;
                            t17 = g->edx;
                            eax = t15;
                            ecx = t16;
                            edx = t17;
                        }
                        wr32(sp0 - 8u, 0u);
                        loc_8 = 0u;
                    }
                    if ((uint16_t)esi != 0u) goto L_10114372;
L_10114445: ;
                    if ((uint16_t)ebp != 0u)
                    {
                        if (rd32(self + 0x234u) <= 0x2710u)
                        {
                            wr32(sp0 - 0x24u, 1u);
                            t21 = (uint16_t)ebp * 0x48u;
                            wr32(sp0 - 0x28u, t21);
                            wr32(sp0 - 0x2cu, self + 0x110u);
                            esi = t21;
                            loc_28 = t21;
                            loc_24 = 1u;
                        }
                        else
                        {
                            t18 = rd8(self + 0x232u);
                            t19 = rd16(self + 0x230u);
                            wr32(self + 0x234u, 0u);
                            wr16(self + 0x232u, t18 + 1u & 7u);
                            if ((uint16_t)t19 != (t18 + 1u & 7u))
                            {
                                eax = t18 + 1u & 7u;
                                ecx = (ecx & 0xffff0000u) | t19;
                            }
                            else
                            {
                                eax = t18 + 1u & 7u;
                                ecx = (ecx & 0xffff0000u) | t19;
                                wr16(self + 0x230u, (uint8_t)ecx + 1u & 7u);
                                ecx = (uint8_t)ecx + 1u & 7u;
                            }
                            wr32(sp0 - 0x24u, (uint16_t)eax);
                            wr32(sp0 - 0x28u, COW_IMG(0x1036c084u));
                            wr32(sp0 - 0x2cu, self + 0x238u);
                            g->esp = sp0 - 0x18u;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x238u, COW_IMG(0x1036c084u), (uint16_t)eax, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
                            wr32(sp0 - 0x24u, 0u);
                            t20 = (uint16_t)ebp * 0x48u;
                            wr32(sp0 - 0x28u, t20);
                            wr32(sp0 - 0x2cu, self + 0x110u);
                            edx = self + 0x110u;
                            esi = t20;
                            loc_28 = t20;
                            loc_24 = 0u;
                        }
                        wr32(sp0 - 0x30u, self + 0x238u);
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x101c4900u), rd32(COW_IMG(0x10662dccu)), 4, self + 0x238u, self + 0x110u, loc_28, loc_24);
                        wr32(self + 0x234u, esi + rd32(self + 0x234u));
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
