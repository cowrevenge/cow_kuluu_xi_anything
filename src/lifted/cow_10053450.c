/* f_0x10053450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10053450(Guest* g)
{
    uint32_t eax;
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 0x20u);
    wr32(self + 0x20u, t1);
    t2 = rd32(arg1 + 0x24u);
    wr32(self + 0x24u, t2);
    t3 = rd32(arg1 + 0x28u);
    wr32(self + 0x28u, t3);
    t4 = rd32(arg1 + 0x2cu);
    wr32(self + 0x2cu, t4);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1003c740u), self + 0x30u, 1, arg1 + 0x30u);
    t5 = rd32(arg1 + 0x70u);
    wr32(self + 0x70u, t5);
    t6 = rd32(arg1 + 0x74u);
    wr32(self + 0x74u, t6);
    t7 = rd32(arg1 + 0x78u);
    wr32(self + 0x78u, t7);
    t8 = rd32(arg1 + 0x7cu);
    wr32(self + 0x7cu, t8);
    t9 = rd32(arg1 + 0x80u);
    wr32(self + 0x80u, t9);
    t10 = rd32(arg1 + 0x84u);
    wr32(self + 0x84u, t10);
    t11 = rd32(arg1 + 0x88u);
    wr32(self + 0x88u, t11);
    t12 = rd32(arg1 + 0x8cu);
    wr32(self + 0x8cu, t12);
    t13 = rd32(arg1 + 0x90u);
    wr32(self + 0x90u, t13);
    t14 = rd32(arg1 + 0x94u);
    wr32(self + 0x94u, t14);
    t15 = rd32(arg1 + 0x98u);
    wr32(self + 0x98u, t15);
    t16 = rd32(arg1 + 0x98u);
    wr32(self + 0x98u, t16);
    t17 = rd32(arg1 + 0x9cu);
    wr32(self + 0x9cu, t17);
    t18 = rd32(arg1 + 0xa0u);
    wr32(self + 0xa0u, t18);
    t19 = rd32(arg1 + 0xa4u);
    wr32(self + 0xa4u, t19);
    t20 = rd32(arg1 + 0xa8u);
    wr32(self + 0xa8u, t20);
    t21 = rd32(arg1 + 0xacu);
    wr32(self + 0xacu, t21);
    t22 = rd32(arg1 + 0xb0u);
    wr32(self + 0xb0u, t22);
    eax = 3u;
    edx = self + 0xb4u;
L_10053505: ;
    t23 = rd32(arg1 + edx - self);
    wr32(edx, t23);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = edx + 4u;
        goto L_10053505;
    }
    wr32(self + 0xb0u, 0u);
    wr32(self + 0xacu, 0u);
    wr32(self + 0xa8u, 0u);
    wr32(self + 0xa4u, 0u);
    t24 = rd32(arg1 + 0xc0u);
    wr32(self + 0xc0u, t24);
    t25 = rd32(arg1 + 0xc4u);
    wr32(self + 0xc4u, t25);
    t26 = rd32(arg1 + 0xc8u);
    wr32(self + 0xc8u, t26);
    t27 = rd32(arg1 + 0xccu);
    wr32(self + 0xccu, t27);
    t28 = rd32(arg1 + 0xd0u);
    wr32(self + 0xd0u, t28);
    t29 = rd16(arg1 + 0xd4u);
    wr16(self + 0xd4u, (uint16_t)t29);
    wr16(self + 0xd6u, rd16(arg1 + 0xd6u));
    t30 = ((rd32(arg1 + 0xd8u) ^ rd32(self + 0xd8u)) & 0x1ffu) ^ rd32(self + 0xd8u);
    wr32(self + 0xd8u, t30);
    t31 = ((rd32(arg1 + 0xd8u) ^ t30) & 0x200u) ^ t30;
    wr32(self + 0xd8u, t31);
    t32 = ((t31 & 0xffff00ffu) | (t31 >> 8u & 0xf3u) << 8u) ^ (rd32(arg1 + 0xd8u) & 0x400u);
    wr32(self + 0xd8u, t32);
    t33 = ((rd32(arg1 + 0xd8u) ^ t32) & 0x1000u) ^ t32;
    wr32(self + 0xd8u, t33);
    t34 = ((rd32(arg1 + 0xd8u) ^ t33) & 0x2000u) ^ t33;
    wr32(self + 0xd8u, t34);
    t35 = ((rd32(arg1 + 0xd8u) ^ t34) & 0xfffc000u) ^ t34;
    wr32(self + 0xd8u, t35);
    t36 = ((rd32(arg1 + 0xd8u) ^ t35) & 0x10000000u) ^ t35;
    wr32(self + 0xd8u, t36);
    t37 = ((rd32(arg1 + 0xd8u) ^ t36) & 0x20000000u) ^ t36;
    wr32(self + 0xd8u, t37);
    t38 = ((rd32(arg1 + 0xd8u) ^ t37) & 0x40000000u) ^ t37;
    wr32(self + 0xd8u, t38);
    t39 = ((t38 ^ rd32(arg1 + 0xd8u)) & 0x7fffffffu) ^ rd32(arg1 + 0xd8u);
    t40 = rd32(arg1 + 0xd8u);
    wr32(self + 0xd8u, t39);
    wr16(self + 0xdcu, rd16(arg1 + 0xdcu));
    wr8(self + 0xdeu, rd8(arg1 + 0xdeu));
    wr8(self + 0xdfu, rd8(arg1 + 0xdfu));
    t41 = rd32(arg1 + 0xe0u);
    wr32(self + 0xe0u, t41);
    t42 = rd32(arg1 + 0xe4u);
    wr32(self + 0xe4u, t42);
    t43 = rd32(arg1 + 0xe8u);
    wr32(self + 0xe8u, t43);
    t44 = rd32(arg1 + 0xecu);
    wr32(self + 0xecu, t44);
    g->edx = t44;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10053450(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
