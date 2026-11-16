/* f_0x102394c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102394c0(Guest* g)
{
    double d18;
    double d26;
    double d27;
    double d29;
    double d31;
    double d32;
    double d38;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0x2cu) != 0u)
    {
        eax = rd32(self + 0x2cu);
        goto L_102395bf;
    }
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = in_edx;
        goto L_102396de;
    }
    eax = rd32(self + 0x34u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0x31u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = rd32(eax);
    g->edx = in_edx;
    t1 = rd32(eax);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10072290u), t1, 3, sp0 - 8u, 0x31u, 0u);
    t3 = g->edx;
    if (rd32(t2) == 0u)
    {
        eax = rd32(t2);
        edx = t3;
        goto L_102396de;
    }
    eax = rd32(t2);
    edx = t3;
    t4 = rd32(eax) + 0x30u;
    wr32(sp0 - 0x1cu, t4);
    g->eax = t4;
    g->esp = sp0 - 0x18u;
    t5 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t4);
    if (rd32(rd32(t5)) == 0u)
    {
        eax = t5;
        edx = rd32(t5);
        goto L_102396de;
    }
    edx = rd32(t5);
    edi = rd32(rd32(t5));
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10160250u), COW_IMG(0x10621838u), 2, sp0 - 0xcu, sp0 - 0x10u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 0x11u);
    wr32(sp0 - 0x24u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t6);
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 0x11u, 2u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 0x10u, 2u);
    t8 = rd32(self + 0x24u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    t9 = ((t8 << 8u | t8) << 8u | t8) << 8u | t8;
    wr32(sp0 - 0x28u, t9);
    t10 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t10);
    t11 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x30u, t11);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, 0u, 0u, t11, t10, t9, 0u, 0u, 0u);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 0x11u);
    wr32(sp0 - 0x24u, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 0x11u, 2u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0x10u);
    wr32(sp0 - 0x24u, 0u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t13);
    g->eax = t13;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t14 = rd32(COW_IMG(0x1045666cu));
    t15 = cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 0u, 0x10u, 1u);
    t16 = g->edx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t16;
    return t15;
L_102395bf: ;
    if (eax == 1u)
    {
        edx = in_edx;
    }
    else
    {
        t17 = rd32(self + 0x28u) + 1u;
        wr32(self + 0x28u, t17);
        if (t17 >= 4u)
        {
            eax = t17;
            edx = t17;
            wr32(sp0 - 0x10u, 0x3f800000u);
        }
        else
        {
            eax = t17;
            edx = t17;
            wr32(sp0 - 8u, eax);
            wr32(sp0 - 4u, 0u);
            d18 = (double)(float)fr(g, (double)(int64_t)cow_i64(eax, 0u) * (double)rdf32(COW_IMG(0x10329ce4u)));
            wrf32(sp0 - 0x10u, (float)d18);
        }
        wr32(sp0 - 0x1cu, in_ebx);
        if ((int32_t)(eax * 2u) <= 8)
        {
            ebx = eax * 2u;
        }
        else
        {
            ebx = 8u;
        }
        wr32(sp0 - 0x20u, COW_IMG(0x1036ffc8u));
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t19 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036ffc8u));
        t20 = cow_divu(g, rd32(self + 0x28u) >> 2u, 5u);
        t21 = cow_modu(g, rd32(self + 0x28u) >> 2u, 5u);
        wr32(sp0 - 0x20u, 1u);
        g->eax = rd32(t19);
        g->edx = t21;
        t22 = rd32(t19);
        t23 = rd32(t21 * 4u + rd32(t19) + 0x294u);
        t24 = cow_thiscall(g, COW_IMG(0x10160290u), COW_IMG(0x10621838u), 1, 1u);
        t25 = g->edx;
        d26 = cow_take_float(g);
        wr32(sp0 - 0x20u, 1u);
        d27 = (double)(float)fr(g, d26 * (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 8u, (float)d27);
        t28 = cow_thiscall(g, COW_IMG(0x101602c0u), COW_IMG(0x10621838u), 1, 1u);
        d29 = cow_take_float(g);
        t30 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        wr32(sp0 - 0xcu, t30);
        g->edx = t30;
        d31 = fr(g, fr(g, (double)(int32_t)t30 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(sp0 - 8u))) - (double)rdf32(COW_IMG(0x1033c934u)));
        d32 = fr(g, d29 * (double)rdf32(COW_IMG(0x10329a08u)));
        fpush(g, d31);
        t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
        t34 = g->edx;
        t35 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        wr32(sp0 - 8u, t35);
        t36 = rd16(COW_IMG(0x106218bau));
        t37 = rd16(COW_IMG(0x106218b6u));
        d38 = fr(g, fr(g, (double)(int32_t)t35 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d32)) - (double)rdf32(COW_IMG(0x10336798u)));
        fpush(g, d38);
        t39 = cow_call_regs(g, COW_IMG(0x10311c6cu), (t33 & 0xffff0000u) | (uint16_t)(t36 - t37), g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x80808080u);
        t40 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x30u, t40);
        wr32(sp0 - 0x34u, 0x3f800000u);
        t41 = t39 - ebx + 8u;
        wr32(sp0 - 0x38u, t41);
        wr32(sp0 - 0x3cu, t33);
        g->eax = t41;
        g->edx = t40;
        t42 = cow_thiscall(g, COW_IMG(0x1011fc80u), t23, 8, t33, t41, 0x3f800000u, t40, 0x80808080u, 0u, 0u, 0u);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    }
L_102396de: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102394c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102394c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
