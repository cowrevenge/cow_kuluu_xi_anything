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
    double d25;
    double d26;
    double d32;
    double d36;
    double d40;
    double d49;
    double d50;
    double d55;
    double d56;
    double d57;
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
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
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
        g->eax = arg4 - 1u;
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
        g->eax = t19;
        t20 = cow_thiscall(g, COW_IMG(0x10186f40u), self, 0);
        t21 = g->ecx;
        t22 = rd32(t20);
        wr32(edi, t22);
        g->edx = t22;
        t23 = cow_thiscall(g, COW_IMG(0x101892b0u), t21, 1, 1u);
        t24 = g->edx;
        d25 = cow_take_float(g);
        d26 = fr(g, d25 * (double)rdf32(edi));
        wrf32(edi, (float)d26);
        g->edx = t24;
        t27 = cow_thiscall(g, COW_IMG(0x10186f50u), self, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
        loc_10 = 1u;
L_10189275: ;
        t53 = rd32(eax);
        wr32(ebp, t53);
        g->eax = t53;
        g->esp = sp0 - 0xcu;
        t54 = cow_thiscall(g, COW_IMG(0x101892b0u), self, 1, loc_10);
        d55 = cow_take_float(g);
        d56 = fr(g, d55 * (double)rdf32(ebp));
        wrf32(ebp, (float)d56);
        eax = t54;
L_10189287: ;
        if ((double)rdf32(edi) <= (double)rdf32(ebp))
        {
            d57 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(edi, (float)d57);
        }
    }
    return;
L_101891ff: ;
    g->eax = arg4;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, COW_IMG(0x10186f90u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    d32 = fr(g, (double)rdf32(t29 + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
    wr32(sp0 + 8u, t29);
    g->edx = t31;
    fpush(g, d32);
    t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
    t34 = g->edx;
    t35 = rd32(sp0 + 8u);
    wr8(sp0 + 0xcu, (uint8_t)t33);
    g->ecx = t35;
    d36 = fr(g, (double)rdf32(t35 + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d36);
    t37 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
    t38 = g->ecx;
    t39 = rd32(sp0 + 8u);
    wr8(sp0 + 0xdu, (uint8_t)t37);
    g->edx = t39;
    d40 = fr(g, (double)rdf32(t39) * (double)rdf32(COW_IMG(0x10329a20u)));
    fpush(g, d40);
    t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
    t42 = g->edx;
    wr8(sp0 + 0xeu, (uint8_t)t41);
    wr8(sp0 + 0xfu, 0u);
    t43 = rd32(sp0 + 0xcu);
    wr32(arg1, t43);
    g->eax = t43;
    t44 = cow_thiscall(g, COW_IMG(0x10186fb0u), self, 0);
    t45 = g->ecx;
    t46 = rd32(t44);
    wr32(edi, t46);
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x101892b0u), t45, 1, 0u);
    t48 = g->edx;
    d49 = cow_take_float(g);
    d50 = fr(g, d49 * (double)rdf32(edi));
    wrf32(edi, (float)d50);
    g->edx = t48;
    t51 = cow_thiscall(g, COW_IMG(0x10186fc0u), self, 0);
    t52 = g->edx;
    eax = t51;
    edx = t52;
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
