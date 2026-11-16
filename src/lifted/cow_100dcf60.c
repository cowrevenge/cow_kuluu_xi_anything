/* f_0x100dcf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100dcf60(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 >> 3u != 0u)
    {
        eax = arg2 + 4u;
        edi = arg3 >> 3u;
L_100dcf7b: ;
        t1 = rd32(eax - 4u) ^ rd32(arg1 + 0x44u);
        wr32(eax - 4u, t1);
        t2 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t1 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t3 = rd32(eax) ^ t2;
        wr32(eax, t3);
        t4 = rd32(arg1 + 0x40u) ^ t3;
        wr32(eax, t4);
        t5 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t4 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t6 = rd32(eax - 4u) ^ t5;
        wr32(eax - 4u, t6);
        t7 = rd32(arg1 + 0x3cu) ^ t6;
        wr32(eax - 4u, t7);
        t8 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t7 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t9 = rd32(eax) ^ t8;
        wr32(eax, t9);
        t10 = rd32(arg1 + 0x38u) ^ t9;
        wr32(eax, t10);
        t11 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t10 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t12 = rd32(eax - 4u) ^ t11;
        wr32(eax - 4u, t12);
        t13 = rd32(arg1 + 0x34u) ^ t12;
        wr32(eax - 4u, t13);
        t14 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t13 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t15 = rd32(eax) ^ t14;
        wr32(eax, t15);
        t16 = rd32(arg1 + 0x30u) ^ t15;
        wr32(eax, t16);
        t17 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t16 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t18 = rd32(eax - 4u) ^ t17;
        wr32(eax - 4u, t18);
        t19 = rd32(arg1 + 0x2cu) ^ t18;
        wr32(eax - 4u, t19);
        t20 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t19 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t21 = rd32(eax) ^ t20;
        wr32(eax, t21);
        t22 = rd32(arg1 + 0x28u) ^ t21;
        wr32(eax, t22);
        t23 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t22 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t24 = rd32(eax - 4u) ^ t23;
        wr32(eax - 4u, t24);
        t25 = rd32(arg1 + 0x24u) ^ t24;
        wr32(eax - 4u, t25);
        t26 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t25 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t27 = rd32(eax) ^ t26;
        wr32(eax, t27);
        t28 = rd32(arg1 + 0x20u) ^ t27;
        wr32(eax, t28);
        t29 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t28 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t30 = rd32(eax - 4u) ^ t29;
        wr32(eax - 4u, t30);
        t31 = rd32(arg1 + 0x1cu) ^ t30;
        wr32(eax - 4u, t31);
        t32 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t31 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t33 = rd32(eax) ^ t32;
        wr32(eax, t33);
        t34 = rd32(arg1 + 0x18u) ^ t33;
        wr32(eax, t34);
        t35 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t34 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t36 = rd32(eax - 4u) ^ t35;
        wr32(eax - 4u, t36);
        t37 = rd32(arg1 + 0x14u) ^ t36;
        wr32(eax - 4u, t37);
        t38 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t37 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t39 = rd32(eax) ^ t38;
        wr32(eax, t39);
        t40 = rd32(arg1 + 0x10u) ^ t39;
        wr32(eax, t40);
        t41 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t40 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t42 = rd32(eax - 4u) ^ t41;
        wr32(eax - 4u, t42);
        t43 = rd32(arg1 + 0xcu) ^ t42;
        wr32(eax - 4u, t43);
        t44 = rd32(arg1 + rd8(eax - 2u) * 4u + 0x848u) + rd32(arg1 + rd8(eax - 4u) * 4u + 0x48u) + ((rd32(arg1 + rd8(eax - 1u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t43 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t45 = rd32(eax) ^ t44;
        wr32(eax, t45);
        t46 = rd32(arg1 + 8u) ^ t45;
        wr32(eax, t46);
        t47 = rd32(arg1 + rd8(eax) * 4u + 0x48u) + rd32(arg1 + rd8(eax + 2u) * 4u + 0x848u) + ((rd32(arg1 + rd8(eax + 3u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(arg1 + (uint8_t)(t46 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
        t48 = rd32(eax - 4u) ^ t47;
        wr32(eax - 4u, t48);
        wr32(eax - 4u, rd32(eax));
        wr32(eax, t48);
        t49 = rd32(arg1 + 4u) ^ t48;
        wr32(eax, t49);
        t50 = rd32(eax - 4u) ^ rd32(arg1);
        wr32(eax - 4u, t50);
        if (edi != 1u)
        {
            eax = eax + 8u;
            edi = edi - 1u;
            goto L_100dcf7b;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dcf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100dcf60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
