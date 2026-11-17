/* f_0x10095430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10095430(Guest* g)
{
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x67u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e6cu), t1);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    t7 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t6, 1, 1, 0x66u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e68u), t7);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    t13 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t12, 1, 1, 0x65u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e64u), t13);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    t19 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t18, 1, 1, 0x63u);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->edx = t21;
    t22 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e58u), t19);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    t25 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t24, 1, 1, 0x64u);
    t26 = g->ecx;
    t27 = g->edx;
    g->ecx = t26;
    g->edx = t27;
    t28 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e5cu), t25);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    t31 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t30, 1, 1, 0x68u);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    g->edx = t33;
    t34 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e70u), t31);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 8u;
    t37 = cow_cdecl(g, COW_IMG(0x10095530u), 4, COW_IMG(0x10487e74u), 0x1b78u, 0u, COW_IMG(0x10487e70u));
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x14u;
    t40 = cow_cdecl(g, COW_IMG(0x10095530u), 4, COW_IMG(0x10487e78u), 0x1b7cu, 0u, COW_IMG(0x10487e74u));
    t41 = g->ecx;
    t42 = g->edx;
    g->ecx = t41;
    g->esp = sp0 - 4u;
    t43 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t42, 1, 1, 0x69u);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->edx = t45;
    t46 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e7cu), t43);
    t47 = g->ecx;
    t48 = g->edx;
    g->ecx = t47;
    t49 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t48, 1, 1, 0x6au);
    t50 = g->ecx;
    t51 = g->edx;
    t52 = cow_cdecl(g, COW_IMG(0x10095530u), 2, COW_IMG(0x10487e80u), t49);
    return t52;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
