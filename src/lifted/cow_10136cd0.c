/* f_0x10136cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10136cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t4;
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
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx;
    }
    else
    {
        ecx = rd32(self + 8u);
        wr32(sp0 - 0x1cu, in_ebx);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, COW_IMG(0x10118220u), ecx, 0);
        t2 = g->edx;
        t3 = rd32(self + 0x58u);
        wr32(sp0 - 0xcu, t3);
        if (rd32(self + 0x58u) == 0u)
        {
            ebx = t1;
            esi = 0u;
        }
        else
        {
            edx = t2;
            ebx = t1;
            loc_c = t3;
            esi = 0u;
L_10136cfd: ;
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->esp = sp0 - 0x1cu;
            cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
            t4 = g->edx;
            if ((int32_t)esi > 8) goto L_10136d17;
            edx = t4;
            if (rd32(sp0 - 0xcu) != 0u)
            {
                esi = esi + 1u;
                goto L_10136cfd;
            }
            esi = esi + 1u;
L_10136d17: ;
            if ((int32_t)esi > 4)
            {
                esi = 4u;
            }
        }
        t5 = (esi << 4u) + 4u;
        t6 = rd32(ebx + 4u);
        t7 = rd32(sp0 - 0x1cu);
        wr32(t6 + 4u, t5);
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
            edx = t6;
            ebx = t7;
        }
        else
        {
            ecx = t5;
            edx = t6;
            ebx = t7;
            if (rd32(self + 0x64u) == 0u)
            {
                eax = rd32(self + 0x64u);
            }
            else
            {
                eax = rd32(self + 0x64u);
                if (rd32(eax + 8u) != 0u)
                {
                    if (rd8(self + 0x48u) == 0u)
                    {
                        wr16(sp0 - 8u, 0u);
                        wr16(sp0 - 6u, 0u);
                        wr16(sp0 - 4u, 0u);
                        wr16(sp0 - 2u, 0u);
                        wr32(sp0 - 0x1cu, sp0 - 8u);
                        g->esp = sp0 - 0x18u;
                        cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(eax + 8u), g->edx, 0, 1, sp0 - 8u);
                        wr32(sp0 - 0x1cu, 0u);
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 1u);
                        t8 = (esi << 4u) + 4u;
                        wr32(sp0 - 0x28u, t8);
                        t9 = rd32(sp0 - 4u) - rd32(sp0 - 8u);
                        wr32(sp0 - 0x2cu, t9);
                        t10 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x30u, t10);
                        t11 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x34u, t11);
                        g->eax = t11;
                        g->edx = t9;
                        t12 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t11, t10, t9, t8, 1u, 0u, 0u);
                        t13 = g->edx;
                        eax = t12;
                        edx = t13;
                    }
                }
            }
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t14 = cow_call_regs(g, COW_IMG(0x101268a0u), eax, rd32(self + 0x68u), g->edx, 1, 0);
            t15 = g->edx;
            if ((uint8_t)t14 == 0u)
            {
                eax = t14;
                edx = t15;
            }
            else
            {
                eax = t14;
                edx = t15;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t16 = cow_thiscall(g, COW_IMG(0x10126820u), rd32(self + 0x68u), 0);
                t17 = g->edx;
                eax = t16;
                edx = t17;
            }
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t18 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
            t19 = g->edx;
            if ((uint8_t)t18 != 0u)
            {
                eax = t18;
                edx = t19;
            }
            else
            {
                eax = t18;
                t20 = rd32(self + 8u);
                wr32(sp0 - 0x1cu, t20);
                g->eax = eax;
                g->edx = t20;
                g->esp = sp0 - 0x18u;
                t21 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t20);
                t22 = g->ecx;
                t23 = g->edx;
                if ((uint8_t)t21 == 0u)
                {
                    eax = t21;
                    edx = t23;
                }
                else
                {
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x20u, 5u);
                    wr32(sp0 - 0x24u, 0x8bu);
                    wr32(sp0 - 0x28u, 0x3eu);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t24 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                    t25 = g->edx;
                    if ((uint8_t)t24 != 1u)
                    {
                        eax = t24;
                        edx = t25;
                    }
                    else
                    {
                        edx = t25;
                        t26 = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
                        wr32(sp0 - 0x1cu, t26);
                        wr32(sp0 - 0x20u, 5u);
                        g->eax = rd32(self);
                        g->edx = t26;
                        t27 = rd32(self);
                        g->esp = sp0 - 0x18u;
                        t28 = cow_thiscall(g, rd32(t27 + 0x18u), self, 2, 5u, t26);
                        t29 = g->edx;
                        eax = t28;
                        edx = t29;
                    }
                }
            }
            if (rd16(self + 0x60u) != 0u)
            {
                t30 = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
                wr32(sp0 - 0x1cu, t30);
                wr32(sp0 - 0x20u, 5u);
                g->eax = rd32(self);
                g->edx = t30;
                t31 = rd32(self);
                g->esp = sp0 - 0x18u;
                t32 = cow_thiscall(g, rd32(t31 + 0x18u), self, 2, 5u, t30);
                t33 = g->edx;
                eax = t32;
                edx = t33;
            }
        }
    }
    g->ebx = ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136cd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
