/* f_0x10257330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10257330(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (in_eax & 0xffff0000u) | rd16(arg1 + 0xau);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd16(arg1 + 0xcu);
    wr16(arg1 + 0xau, (uint16_t)t2);
    t6 = (t3 & 0xffff0000u) | t5;
    g->ecx = t6;
    g->edx = t4;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd16(arg1 + 0xeu);
    wr16(arg1 + 0xcu, (uint16_t)t7);
    t11 = (t9 & 0xffff0000u) | t10;
    g->ecx = t8;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t11);
    t13 = g->ecx;
    t14 = g->edx;
    wr16(arg1 + 0xeu, (uint16_t)t12);
    t15 = rd32(arg1 + 0x10u);
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    t16 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t15);
    t17 = g->edx;
    t18 = rd32(arg1 + 0x28u);
    wr32(arg1 + 0x10u, t16);
    g->ecx = t18;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t18);
    t20 = g->ecx;
    t21 = rd32(arg1 + 0x2cu);
    wr32(arg1 + 0x28u, t19);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x18u;
    t22 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t21);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(arg1 + 0x2cu, t22);
    t25 = rd32(arg1 + 0x14u);
    g->edx = t24;
    g->esp = sp0 - 0x1cu;
    t26 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t25);
    t27 = g->edx;
    t28 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x14u, t26);
    g->ecx = t28;
    g->esp = sp0 - 0x20u;
    t29 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t28);
    t30 = g->ecx;
    t31 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, t29);
    g->ecx = t30;
    g->edx = t31;
    g->esp = sp0 - 0x24u;
    t32 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t31);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(arg1 + 0x1cu, t32);
    t35 = rd32(arg1 + 0x20u);
    g->edx = t34;
    g->esp = sp0 - 0x28u;
    t36 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t35);
    t37 = g->edx;
    t38 = rd32(arg1 + 0x24u);
    wr32(arg1 + 0x20u, t36);
    g->ecx = t38;
    g->edx = t37;
    g->esp = sp0 - 0x2cu;
    t39 = cow_cdecl(g, COW_IMG(0x1000d150u), 1, t38);
    t40 = g->ecx;
    t41 = g->edx;
    t42 = rd16(arg1 + 0x32u);
    wr32(arg1 + 0x24u, t39);
    t43 = (t41 & 0xffff0000u) | t42;
    g->esp = sp0 - 0x30u;
    t44 = cow_cdecl(g, COW_IMG(0x1000d100u), 1, t43);
    wr16(arg1 + 0x32u, (uint16_t)t44);
    return t44;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
