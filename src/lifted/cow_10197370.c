/* f_0x10197370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10197370(Guest* g)
{
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x2cu);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t1, 1u, 2u);
    t3 = rd32(self + 0x24u);
    t4 = rd32(self + 0x40u);
    t5 = (t2 & 0xffffff00u) | rd8(self + 0x20u) == 1u;
    t6 = cow_call_regs(g, COW_IMG(0x10196b80u), t5, self, g->edx, 0, 5, 3u, t5, t4, t3, 0x64u);
    t7 = rd32(self + 0x24u);
    t8 = rd32(self + 0x44u);
    t9 = (t6 & 0xffffff00u) | rd8(self + 0x21u) == 1u;
    g->edx = (t8 & 0xffffff00u) | rd8(self + 0x21u);
    t10 = rd8(self + 0x21u);
    t11 = cow_call_regs(g, COW_IMG(0x10196b80u), t9, self, g->edx, 0, 5, 4u, t9, t8, t7, 0x64u);
    t12 = g->ecx;
    t13 = g->edx;
    g->ecx = t12;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 1u)
    {
        eax = t14;
        edx = t16;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, COW_IMG(0x10196b10u), self, 3, 5u, 0x3f800000u, 0x80507070u);
        t30 = g->edx;
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x10196b10u), self, 3, 6u, 0x3f800000u, 0x80507070u);
        t32 = g->edx;
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x10196b10u), self, 3, 7u, 0x3f800000u, 0x80507070u);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    else
    {
        ecx = t15;
        edx = t16;
        t17 = rd32(self + 0x4cu);
        t18 = (ecx & 0xffffff00u) | rd8(self + 0x48u) == 1u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10196b80u), t17, self, g->edx, 0, 5, 5u, t18, t17, t17, 0x64u);
        t19 = g->ecx;
        t20 = g->edx;
        t21 = rd32(self + 0x50u);
        t22 = (t20 & 0xffffff00u) | rd8(self + 0x48u) == 2u;
        g->edx = t22;
        cow_call_regs(g, COW_IMG(0x10196b80u), t21, self, g->edx, 0, 5, 6u, t22, t21, t21, 0x64u);
        t23 = g->edx;
        t24 = rd32(self + 0x54u);
        t25 = (t24 & 0xffffff00u) | rd8(self + 0x48u) == 3u;
        g->edx = (t23 & 0xffffff00u) | rd8(self + 0x48u);
        t26 = rd8(self + 0x48u);
        t27 = cow_call_regs(g, COW_IMG(0x10196b80u), t25, self, g->edx, 0, 5, 7u, t25, t24, t24, 0x64u);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    t35 = rd32(self + 0x34u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t36 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t35, 8u, 9u);
    t37 = rd32(self + 0x38u);
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t37, 0xau, 0xbu);
    t39 = g->edx;
    g->edx = t39;
    return t38;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10197370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10197370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
