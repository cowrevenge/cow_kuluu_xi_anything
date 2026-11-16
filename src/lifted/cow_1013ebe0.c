/* f_0x1013ebe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1013ebe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr16(self + 0x15cu, 0u);
    wr32(sp0 - 0xcu, 0u);
    edi = self + 0x1cu;
    eax = 0u;
    ecx = 0x50u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = in_edx;
    esi = 0u;
    loc_c = 0u;
L_1013ec04: ;
    wr32(sp0 - 0x20u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x100ebe30u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        if ((int32_t)rd16(self + 0x15cu) <= 0)
        {
            edx = rd16(self + 0x15cu);
            ebx = 0u;
        }
        else
        {
            edx = rd16(self + 0x15cu);
            ebx = edx * 0x20u + self - 4u;
L_1013ec2b: ;
            if (rd32(ebx + 8u) <= rd32(eax + 0x54u))
            {
                esi = rd32(eax + 0x54u);
                goto L_1013ec49;
            }
            esi = ebx;
            edi = ebx + 0x20u;
            ecx = 8u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            if ((int32_t)(edx - 1u) > 0)
            {
                edx = edx - 1u;
                ebx = ebx - 0x20u;
                goto L_1013ec2b;
            }
            edx = edx - 1u;
            ebx = ebx - 0x20u;
        }
L_1013ec49: ;
        t4 = rd16(eax + 4u);
        wr16(edx * 0x20u + self + 0x1cu, (uint16_t)t4);
        wr8(edx * 0x20u + self + 0x1eu, rd8(eax + 8u));
        wr16(edx * 0x20u + self + 0x20u, rd16(eax + 0x34u));
        t5 = rd32(sp0 - 0xcu);
        wr16(edx * 0x20u + self + 0x22u, (uint16_t)t5);
        t6 = rd32(eax + 0x54u);
        wr32(edx * 0x20u + self + 0x24u, t6);
        t7 = rd32(eax + 0x40u);
        wr32(edx * 0x20u + self + 0x28u, t7);
        t8 = rd32(eax + 0x44u);
        wr32(edx * 0x20u + self + 0x2cu, t8);
        t9 = rd32(eax + 0x48u);
        wr32(edx * 0x20u + self + 0x30u, t9);
        wr16(edx * 0x20u + self + 0x34u, rd16(eax + 0x4cu));
        t10 = rd8(eax + 0x4eu);
        wr8(edx * 0x20u + self + 0x37u, 0u);
        wr8(edx * 0x20u + self + 0x36u, (uint8_t)t10);
        t11 = rd16(eax + 0x36u);
        wr16(edx * 0x20u + self + 0x38u, (uint16_t)t11);
        wr16(self + 0x15cu, (uint16_t)(rd16(self + 0x15cu) + 1u));
        ecx = edx * 0x20u + self;
        esi = t5;
        edi = edx * 0x20u + self + 0x28u;
        edx = (eax + 0x40u & 0xffffff00u) | t10;
        eax = (eax & 0xffff0000u) | t11;
    }
    wr32(sp0 - 0xcu, esi + 1u);
    if ((int32_t)(esi + 1u) < 10)
    {
        loc_c = esi + 1u;
        esi = esi + 1u;
        goto L_1013ec04;
    }
    loc_c = esi + 1u;
    t12 = rd16(rd32(self + 8u) + 0x4cu);
    t13 = rd32(self + 8u);
    t14 = rd16(self + 0x15cu);
    wr16(self + 0x15eu, (uint16_t)(t12 - 1u));
    if ((uint16_t)(t12 - 1u) >= (uint16_t)t14)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)(t12 - 1u);
        ecx = (t13 & 0xffff0000u) | t14;
        if ((uint16_t)ecx != 0u)
        {
            wr32(sp0 - 0x20u, 0u);
            wr16(self + 0x15eu, (uint16_t)(ecx - 1u));
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 0u);
            t20 = ((uint16_t)(ecx - 1u) << 5u & 0xffff0000u) | rd16(self + (uint16_t)(ecx - 1u) * 0x20u + 0x1cu);
            wr32(sp0 - 0x2cu, t20);
            g->edi = edi;
            g->edx = edx;
            t21 = rd32(COW_IMG(0x10578204u));
            g->esp = sp0 - 0x1cu;
            t22 = cow_call_regs(g, COW_IMG(0x1013e260u), t20, t21, g->edx, 0, 4, t20, 0u, 0u, 0u);
            t23 = g->ecx;
            t24 = g->edx;
            wr32(sp0 - 0x20u, 0u);
            t25 = (t23 & 0xffff0000u) | (uint16_t)(rd16(self + 0x15eu) + 1u);
            wr32(sp0 - 0x24u, t25);
            g->edx = t24;
            t26 = rd32(self + 8u);
            t27 = cow_call_regs(g, COW_IMG(0x10118db0u), t22, t26, g->edx, 0, 2, t25, 0u);
            t28 = g->ecx;
            t29 = g->edx;
            eax = t27;
            ecx = t28;
            edx = t29;
        }
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)(t12 - 1u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        t15 = (edx & 0xffff0000u) | rd16(self + (uint16_t)eax * 0x20u + 0x1cu);
        wr32(sp0 - 0x2cu, t15);
        g->edi = edi;
        g->edx = t15;
        t16 = rd32(COW_IMG(0x10578204u));
        g->esp = sp0 - 0x1cu;
        t17 = cow_call_regs(g, COW_IMG(0x1013e260u), (uint16_t)eax << 5u, t16, g->edx, 0, 4, t15, 0u, 0u, 0u);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    if (rd16(self + 0x15cu) == 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t30 = cow_thiscall(g, COW_IMG(0x1013f090u), self, 0);
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t33 = cow_call_regs(g, COW_IMG(0x101cc330u), eax, g->ecx, g->edx, 1, 0);
    t34 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        eax = t33;
        edx = t34;
    }
    else
    {
        eax = t33;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        t35 = rd32(self + 8u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, t35, g->edx, 0, 1, sp0 - 0xcu);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 1u);
        t36 = rd32(sp0 - 6u) - rd32(sp0 - 0xau);
        wr32(sp0 - 0x2cu, t36);
        wr32(sp0 - 0x30u, 0x11du);
        t37 = rd32(sp0 - 0xau);
        wr32(sp0 - 0x34u, t37);
        t38 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x38u, t38);
        g->eax = t37;
        g->edx = t38;
        t39 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t38, t37, 0x11du, t36, 1u, 1u, 0u);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    }
    if ((uint8_t)arg1 == 1u)
    {
        if (rd32(self + 0x164u) == 0u)
        {
            eax = rd32(self + 0x164u);
        }
        else
        {
            eax = rd32(self + 0x164u);
            if (rd32(eax + 8u) != 0u)
            {
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t41 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
                t42 = g->edx;
                if ((uint8_t)t41 == 0u)
                {
                    eax = t41;
                    edx = t42;
                }
                else
                {
                    edx = t42;
                    wr32(sp0 - 0xcu, 0u);
                    wr32(sp0 - 8u, 0u);
                    if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                    {
                        eax = rd32(COW_IMG(0x104e1d4cu));
                        t43 = rd32(eax + 4u);
                        wr32(sp0 - 0xcu, t43);
                        t44 = rd32(eax + 8u);
                        wr32(sp0 - 8u, t44);
                        edx = t44;
                    }
                    wr32(sp0 - 0x20u, sp0 - 0xcu);
                    g->eax = sp0 - 0xcu;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t45 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(self + 0x164u) + 8u), 1, sp0 - 0xcu);
                    t46 = g->edx;
                    if ((uint8_t)t45 == 0u)
                    {
                        eax = t45;
                        edx = t46;
                    }
                    else
                    {
                        eax = t45;
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 8u);
                        g->eax = eax;
                        g->edx = rd32(self);
                        t47 = rd32(self);
                        g->esp = sp0 - 0x1cu;
                        t48 = cow_thiscall(g, rd32(t47 + 0x18u), self, 2, 8u, 0u);
                        t49 = g->edx;
                        eax = t48;
                        edx = t49;
                    }
                }
            }
        }
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ebe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013ebe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
