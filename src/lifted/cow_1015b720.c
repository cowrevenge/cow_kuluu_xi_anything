/* f_0x1015b720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015b720(Guest* g)
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10126350u), self, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101265d0u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(COW_IMG(0x1062180cu), COW_IMG(0x10372150u));
    t5 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t4, 1, 1, 0x28u);
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x1062180cu));
    wr32(t7, t5);
    g->ecx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t6, 1, 1, 0x29u);
    t9 = g->ecx;
    t10 = rd32(COW_IMG(0x1062180cu));
    wr32(t10 + 0x14u, t8);
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t10, 1, 1, 0x2bu);
    t12 = g->edx;
    t13 = rd32(COW_IMG(0x1062180cu));
    wr32(t13 + 0x28u, t11);
    g->ecx = t13;
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t12, 1, 1, 0x37u);
    t15 = g->ecx;
    t16 = rd32(COW_IMG(0x1062180cu));
    wr32(t16 + 0x3cu, t14);
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t16, 1, 1, 0x35u);
    t18 = g->edx;
    t19 = rd32(COW_IMG(0x1062180cu));
    wr32(t19 + 0x50u, t17);
    g->ecx = t19;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t18, 1, 1, 0x36u);
    t21 = g->ecx;
    t22 = rd32(COW_IMG(0x1062180cu));
    wr32(t22 + 0x64u, t20);
    g->esp = sp0 - 0x1cu;
    t23 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t22, 1, 1, 0x2cu);
    t24 = g->edx;
    t25 = rd32(COW_IMG(0x1062180cu));
    wr32(t25 + 0x78u, t23);
    g->ecx = t25;
    g->esp = sp0 - 0x20u;
    t26 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t24, 1, 1, 0x2du);
    t27 = g->ecx;
    t28 = rd32(COW_IMG(0x1062180cu));
    wr32(t28 + 0x8cu, t26);
    g->esp = sp0 - 0x24u;
    t29 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t28, 1, 1, 0x2eu);
    t30 = g->edx;
    t31 = rd32(COW_IMG(0x1062180cu));
    wr32(t31 + 0xa0u, t29);
    g->ecx = t31;
    g->esp = sp0 - 0x28u;
    t32 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t30, 1, 1, 0x2au);
    t33 = g->ecx;
    t34 = rd32(COW_IMG(0x1062180cu));
    wr32(t34 + 0xb4u, t32);
    g->esp = sp0 - 0x2cu;
    t35 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t34, 1, 1, 0x30u);
    t36 = g->edx;
    t37 = rd32(COW_IMG(0x1062180cu));
    wr32(t37 + 0xc8u, t35);
    g->ecx = t37;
    g->esp = sp0 - 0x30u;
    t38 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t36, 1, 1, 0x2fu);
    t39 = g->ecx;
    t40 = rd32(COW_IMG(0x1062180cu));
    wr32(t40 + 0xdcu, t38);
    g->esp = sp0 - 0x34u;
    t41 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t40, 1, 1, 0x3cu);
    t42 = g->edx;
    t43 = rd32(COW_IMG(0x1062180cu));
    wr32(t43 + 0xf0u, t41);
    g->ecx = t43;
    g->esp = sp0 - 0x38u;
    t44 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t42, 1, 1, 0x31u);
    t45 = g->ecx;
    t46 = rd32(COW_IMG(0x1062180cu));
    wr32(t46 + 0x104u, t44);
    g->esp = sp0 - 0x3cu;
    t47 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t46, 1, 1, 0x34u);
    t48 = g->edx;
    t49 = rd32(COW_IMG(0x1062180cu));
    wr32(t49 + 0x118u, t47);
    g->ecx = t49;
    g->esp = sp0 - 0x40u;
    t50 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t48, 1, 1, 0x33u);
    t51 = g->ecx;
    t52 = rd32(COW_IMG(0x1062180cu));
    wr32(t52 + 0x12cu, t50);
    g->esp = sp0 - 4u;
    t53 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t52, 1, 1, 0x32u);
    t54 = g->edx;
    t55 = rd32(COW_IMG(0x1062180cu));
    wr32(t55 + 0x140u, t53);
    g->esp = sp0 - 8u;
    t56 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t54, 1, 1, 0x27u);
    wr32(rd32(COW_IMG(0x1062180cu)) + 0x154u, t56);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
