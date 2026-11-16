/* f_0x101fae40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fae40(Guest* g)
{
    double d23;
    double d24;
    double d29;
    double d33;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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

    if ((rd8(self + 0x14u) & 0x40u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fafe3;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
        goto L_101faedf;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101fafe3;
    }
    eax = eax - 1u;
    if (rd16(self + 0x104u) != 7u)
    {
        ecx = (self & 0xffff0000u) | rd16(self + 0x104u);
        goto L_101fae7a;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101fb310u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_101fae7a: ;
    if ((uint32_t)(int16_t)rd16(self + 0x16u) == 0u) goto L_101faebf;
    eax = (uint32_t)(int16_t)rd16(self + 0x16u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101faeb2;
    }
    eax = eax - 1u;
    if (eax != 6u)
    {
        eax = eax - 6u;
        edx = in_edx;
        goto L_101fafe3;
    }
    eax = eax - 6u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101f8b00u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr16(self + 0x16u, 0u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101efc60u), t4, 1, 0u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x101fb970u), 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101faeb2: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x101f8b90u), self, 1, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101faebf: ;
    if ((uint32_t)(int16_t)ecx == 1u)
    {
        eax = (uint32_t)(int16_t)ecx;
        edx = in_edx;
        goto L_101fafe3;
    }
    eax = (uint32_t)(int16_t)ecx;
    if (eax == 2u)
    {
        edx = in_edx;
        goto L_101fafe3;
    }
    g->eax = rd32(self);
    g->edx = in_edx;
    t12 = rd32(self);
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, rd32(t12 + 0x50u), self, 0);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101faedf: ;
    if (rd16(self + 0x104u) != 7u) goto L_101faef4;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101fb2c0u), eax, self, g->edx, 1, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101faef4: ;
    if ((uint32_t)(int16_t)rd16(self + 0x16u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x16u);
        goto L_101fafc6;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x16u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101fafb9;
    }
    eax = eax - 1u;
    if (eax != 6u)
    {
        eax = eax - 6u;
        edx = in_edx;
        goto L_101fafe3;
    }
    eax = eax - 6u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x101f8b00u), self, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr16(self + 0x16u, 0u);
    cow_thiscall(g, COW_IMG(0x101efc60u), t18, 1, 0u);
    t20 = (uint32_t)(int16_t)rd16(rd32(self + 0x130u) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x130u) + 0x20u);
    t21 = rd32(self + 0x130u);
    t22 = rd16(rd32(self + 0x130u) + 0x20u);
    d23 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
    wr32(sp0 + 4u, t20);
    g->ecx = t20;
    g->edx = (uint32_t)(int16_t)t22;
    d24 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1033a914u))) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = (uint32_t)(int16_t)rd16(self + 0x1eu);
    wr32(sp0 + 4u, t28);
    g->edx = t27;
    d29 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * d23) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d29);
    g->esp = sp0 - 8u;
    t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
    t31 = g->edx;
    t32 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    wr32(sp0 + 4u, t32);
    g->edx = t31;
    d33 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * d23) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d33);
    g->esp = sp0 - 0xcu;
    t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
    t35 = g->edx;
    g->esp = sp0 - 4u;
    t36 = cow_call_regs(g, COW_IMG(0x101fb3d0u), t34, rd32(COW_IMG(0x10663894u)), t35, 0, 3, t34, t30, t25);
    t37 = g->edx;
    g->edx = t37;
    t38 = cow_stdcall(g, COW_IMG(0x101fb970u), 0);
    t39 = g->edx;
    g->edx = t39;
    return t38;
L_101fafb9: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t40 = cow_thiscall(g, COW_IMG(0x101f8b90u), self, 1, 1u);
    t41 = g->edx;
    g->edx = t41;
    return t40;
L_101fafc6: ;
    if (rd8(self + 0x10bu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10bu);
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t42 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10384ff4u), 1u, 0u);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    }
L_101fafe3: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fae40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fae40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
