/* f_0x10189120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10189120(Guest* g)
{
    double d12;
    double d16;
    double d24;
    double d25;
    double d31;
    double d35;
    double d39;
    double d47;
    double d48;
    double d53;
    double d54;
    double d55;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self - 0x1cu) == 1u) goto L_10189151;
    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 0xcu);
    wr32(arg1, 0xffffffffu);
    wr32(t1, 0x43c80000u);
    wr32(t2, 0u);
    return;
L_10189151: ;
    t3 = rd32(sp0 + 0xcu);
    t4 = rd32(sp0 + 8u);
    wr32(arg1, 0x808080u);
    wr32(t4, 0x43c80000u);
    wr32(t3, 0x43960000u);
    if (rd32(self + 0x18u) != 0u)
    {
        ebp = t3;
        edi = t4;
        if (arg4 == 0u) goto L_101891ff;
        if (arg4 != 1u)
        {
            eax = arg4 - 1u;
            goto L_10189287;
        }
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, COW_IMG(0x10186f90u), self, 0);
        t6 = g->ecx;
        t7 = g->edx;
        d8 = fr(g, (double)rdf32(t5 + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
        wr32(sp0 + 8u, t5);
        g->edx = t7;
        fpush(g, d8);
        t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
        t10 = g->edx;
        t11 = rd32(sp0 + 8u);
        wr8(sp0 + 0xcu, (uint8_t)t9);
        g->ecx = t11;
        d12 = fr(g, (double)rdf32(t11 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
        fpush(g, d12);
        t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
        t14 = g->ecx;
        t15 = rd32(sp0 + 8u);
        wr8(sp0 + 0xdu, (uint8_t)t13);
        g->edx = t15;
        d16 = fr(g, (double)rdf32(t15) * (double)rdf32(COW_IMG(0x10329a20u)));
        fpush(g, d16);
        t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
        t18 = g->edx;
        wr8(sp0 + 0xeu, (uint8_t)t17);
        wr8(sp0 + 0xfu, 0u);
        t19 = rd32(sp0 + 0xcu);
        wr32(arg1, t19);
        t20 = cow_thiscall(g, COW_IMG(0x10186f40u), self, 0);
        t21 = g->ecx;
        t22 = rd32(t20);
        wr32(edi, t22);
        g->edx = t22;
        cow_thiscall(g, COW_IMG(0x101892b0u), t21, 1, 1u);
        t23 = g->edx;
        d24 = cow_take_float(g);
        d25 = fr(g, d24 * (double)rdf32(edi));
        wrf32(edi, (float)d25);
        g->edx = t23;
        t26 = cow_thiscall(g, COW_IMG(0x10186f50u), self, 0);
        t27 = g->edx;
        eax = t26;
        edx = t27;
        loc_10 = 1u;
L_10189275: ;
        wr32(ebp, rd32(eax));
        t51 = rd32(eax);
        g->esp = sp0 - 0xcu;
        t52 = cow_thiscall(g, COW_IMG(0x101892b0u), self, 1, loc_10);
        d53 = cow_take_float(g);
        d54 = fr(g, d53 * (double)rdf32(ebp));
        wrf32(ebp, (float)d54);
        eax = t52;
L_10189287: ;
        if ((double)rdf32(edi) <= (double)rdf32(ebp))
        {
            d55 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(edi, (float)d55);
        }
    }
    return;
L_101891ff: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x10186f90u), self, 0);
    t29 = g->ecx;
    t30 = g->edx;
    d31 = fr(g, (double)rdf32(t28 + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    wr32(sp0 + 8u, t28);
    g->edx = t30;
    fpush(g, d31);
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
    t33 = g->edx;
    t34 = rd32(sp0 + 8u);
    wr8(sp0 + 0xcu, (uint8_t)t32);
    g->ecx = t34;
    d35 = fr(g, (double)rdf32(t34 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d35);
    t36 = cow_call_regs(g, COW_IMG(0x10311c6cu), t32, g->ecx, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = rd32(sp0 + 8u);
    wr8(sp0 + 0xdu, (uint8_t)t36);
    g->edx = t38;
    d39 = fr(g, (double)rdf32(t38) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d39);
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t36, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    wr8(sp0 + 0xeu, (uint8_t)t40);
    wr8(sp0 + 0xfu, 0u);
    t42 = rd32(sp0 + 0xcu);
    wr32(arg1, t42);
    t43 = cow_thiscall(g, COW_IMG(0x10186fb0u), self, 0);
    t44 = g->ecx;
    t45 = rd32(t43);
    wr32(edi, t45);
    g->edx = t45;
    cow_thiscall(g, COW_IMG(0x101892b0u), t44, 1, 0u);
    t46 = g->edx;
    d47 = cow_take_float(g);
    d48 = fr(g, d47 * (double)rdf32(edi));
    wrf32(edi, (float)d48);
    g->edx = t46;
    t49 = cow_thiscall(g, COW_IMG(0x10186fc0u), self, 0);
    t50 = g->edx;
    eax = t49;
    edx = t50;
    loc_10 = 0u;
    goto L_10189275;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189120(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
