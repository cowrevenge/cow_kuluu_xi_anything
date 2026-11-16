/* f_0x100bb9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bb9c0(Guest* g)
{
    double d13;
    double d24;
    double d32;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        ecx = rd32(self + 0x20u);
        edx = t1;
        goto L_100bba1b;
    }
    eax = t1;
    ecx = rd32(self + 0x20u);
    edx = t1;
    if (eax != 1u) goto L_100bba68;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    d5 = (double)rdf32(t2 + 0x50u);
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t6);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    d13 = (double)rdf32(t10 + 0x54u);
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    g->edx = t15;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 6u, t14);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    t18 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    x0 = (double)rdf32(t18 + 0x58u);
L_100bba51: ;
    g->edx = edx;
    fpush(g, x0);
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t41 = g->edx;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t40);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 8u));
L_100bba68: ;
    return;
L_100bba1b: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    d24 = (double)rdf32(t21 + 0x44u);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t25);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    d32 = (double)rdf32(t29 + 0x48u);
    fpush(g, d32);
    t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t29, g->ecx, g->edx, 1, 0);
    t34 = g->edx;
    g->edx = t34;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 6u, t33);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    t37 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t38 = g->ecx;
    t39 = g->edx;
    eax = t37;
    ecx = t38;
    edx = t39;
    x0 = (double)rdf32(t37 + 0x4cu);
    goto L_100bba51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bb9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bb9c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
