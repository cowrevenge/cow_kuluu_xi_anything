/* f_0x1030c075 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1030c075(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_8;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = rd32(arg2);
    ecx = rd32(arg2 + 0x40u);
    edx = rd32(arg2 + 0x60u);
    ebx = rd32(arg2 + 0x20u);
    loc_48 = arg1;
    loc_44 = arg2;
    loc_40 = arg3;
    loc_3c = 8u;
L_1030c0ad: ;
    t1 = (uint32_t)((int32_t)(((eax & 0xffff0000u) | rd16(loc_48 + 0x20u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((ebx & 0xffff0000u) | rd16(loc_44 + 0x20u)) << 0x10u) >> 0x10u);
    t2 = -((uint32_t)((int32_t)(((ecx & 0xffff0000u) | rd16(loc_48 + 0x60u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((edx & 0xffff0000u) | rd16(loc_44 + 0x60u)) << 0x10u) >> 0x10u) * 0x3b21u) + t1 * 0x1151u + (uint32_t)((int32_t)(((ecx & 0xffff0000u) | rd16(loc_48 + 0x60u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((edx & 0xffff0000u) | rd16(loc_44 + 0x60u)) << 0x10u) >> 0x10u) * 0x1151u;
    t3 = t1 * 0x29cfu + (uint32_t)((int32_t)(((ecx & 0xffff0000u) | rd16(loc_48 + 0x60u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((edx & 0xffff0000u) | rd16(loc_44 + 0x60u)) << 0x10u) >> 0x10u) * 0x1151u;
    t4 = (uint32_t)(int16_t)rd16(loc_48 + 0x40u) * (uint32_t)(int16_t)rd16(loc_44 + 0x40u);
    t5 = (t4 + (uint32_t)(int16_t)rd16(loc_48) * (uint32_t)(int16_t)rd16(loc_44)) << 0xdu;
    t6 = ((uint32_t)(int16_t)rd16(loc_48) * (uint32_t)(int16_t)rd16(loc_44) - t4) << 0xdu;
    t7 = (uint32_t)((int32_t)((((uint32_t)((int32_t)(((t5 - t3 & 0xffff0000u) | rd16(loc_44 + 0x70u)) << 0x10u) >> 0x10u) & 0xffff0000u) | rd16(loc_48 + 0x10u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)((((uint32_t)((int32_t)(((t6 - t2 & 0xffff0000u) | rd16(loc_44 + 0x30u)) << 0x10u) >> 0x10u) & 0xffff0000u) | rd16(loc_44 + 0x10u)) << 0x10u) >> 0x10u);
    t8 = (uint32_t)((int32_t)(((t2 + t6 & 0xffff0000u) | rd16(loc_48 + 0x70u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((t5 - t3 & 0xffff0000u) | rd16(loc_44 + 0x70u)) << 0x10u) >> 0x10u);
    t9 = (uint32_t)((int32_t)(((t3 + t5 & 0xffff0000u) | rd16(loc_48 + 0x30u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)(((t6 - t2 & 0xffff0000u) | rd16(loc_44 + 0x30u)) << 0x10u) >> 0x10u);
    t10 = (uint32_t)((int32_t)(((t8 & 0xffff0000u) | rd16(loc_48 + 0x50u)) << 0x10u) >> 0x10u) * (uint32_t)((int32_t)((((uint32_t)((int32_t)((((uint32_t)((int32_t)(((t6 - t2 & 0xffff0000u) | rd16(loc_44 + 0x30u)) << 0x10u) >> 0x10u) & 0xffff0000u) | rd16(loc_44 + 0x10u)) << 0x10u) >> 0x10u) & 0xffff0000u) | rd16(loc_44 + 0x50u)) << 0x10u) >> 0x10u);
    t11 = -(t7 * 0x1ccdu) - t8 * 0x1ccdu;
    t12 = (uint32_t)((int32_t)(t5 - t3 - (t11 + t10 * 0x25a1u + t7 * 0x25a1u - t8 * 0x1924u - t9 * 0x1924u + t8 * 0x98eu) + 0x400u) >> 0xbu);
    wr32(loc_40 + 0x80u, t12);
    t13 = (uint32_t)((int32_t)(t11 + t10 * 0x25a1u + t7 * 0x25a1u - t8 * 0x1924u - t9 * 0x1924u + t8 * 0x98eu + t5 - t3 + 0x400u) >> 0xbu);
    wr32(loc_40 + 0x60u, t13);
    t14 = (uint32_t)((int32_t)(t6 - t2 - (t10 * 0x8d5u + t7 * 0x1925u + t8 * 0x25a1u - t9 * 0x2c62u) + 0x400u) >> 0xbu);
    wr32(loc_40 + 0xa0u, t14);
    t15 = (uint32_t)((int32_t)(t2 + t6 - (t7 * 0x25a1u - t10 * 0x2c62u - t8 * 0x1924u - t9 * 0x8d3u) + 0x400u) >> 0xbu);
    wr32(loc_40 + 0xc0u, t15);
    t16 = (uint32_t)((int32_t)(t10 * 0x8d5u + t7 * 0x1925u + t8 * 0x25a1u - t9 * 0x2c62u + t6 - t2 + 0x400u) >> 0xbu);
    wr32(loc_40 + 0x40u, t16);
    t17 = (uint32_t)((int32_t)(t7 * 0x25a1u - t10 * 0x2c62u - t8 * 0x1924u - t9 * 0x8d3u + t2 + t6 + 0x400u) >> 0xbu);
    wr32(loc_40 + 0x20u, t17);
    t18 = (uint32_t)((int32_t)(t3 + t5 - (t11 + t10 * 0x1925u + t7 * 0x1925u + t8 * 0x25a1u + t9 * 0x25a1u + t7 * 0x300bu) + 0x400u) >> 0xbu);
    wr32(loc_40 + 0xe0u, t18);
    t19 = (uint32_t)((int32_t)(t3 + t5 + t11 + t10 * 0x1925u + t7 * 0x1925u + t8 * 0x25a1u + t9 * 0x25a1u + t7 * 0x300bu + 0x400u) >> 0xbu);
    wr32(loc_40, t19);
    if (loc_3c != 1u)
    {
        eax = loc_3c - 1u;
        ecx = t17;
        edx = t16;
        ebx = t19;
        loc_48 = loc_48 + 2u;
        loc_44 = loc_44 + 2u;
        loc_40 = loc_40 + 4u;
        loc_3c = loc_3c - 1u;
        goto L_1030c0ad;
    }
    loc_40 = arg3;
    loc_3c = 8u;
    loc_8 = 0u;
L_1030c2e3: ;
    t20 = rd32(loc_40 + 8u);
    t21 = t20 * 0x1151u - rd32(loc_40 + 0x18u) * 0x29d0u;
    t22 = t20 * 0x29cfu + rd32(loc_40 + 0x18u) * 0x1151u;
    t23 = rd32(loc_40 + 0x10u);
    t24 = (t23 + rd32(loc_40)) << 0xdu;
    t25 = (rd32(loc_40) - t23) << 0xdu;
    t26 = rd32(loc_40 + 0x1cu);
    t27 = rd32(loc_40 + 0xcu);
    t28 = rd32(loc_40 + 4u);
    t29 = rd32(loc_40 + 0x14u);
    t30 = -(t26 * 0x1ccdu) - t28 * 0x1ccdu;
    t31 = t30 + t28 * 0x25a1u + t29 * 0x25a1u - t26 * 0x1924u - t27 * 0x1924u + t26 * 0x98eu;
    t32 = t26 * 0x25a1u + t28 * 0x1925u + t29 * 0x8d5u - t27 * 0x2c62u;
    t33 = t28 * 0x25a1u - t26 * 0x1924u - t27 * 0x8d3u - t29 * 0x2c62u;
    t34 = t30 + t26 * 0x25a1u + t27 * 0x25a1u + t28 * 0x1925u + t29 * 0x1925u + t28 * 0x300bu;
    t35 = ((((t31 & 0xffffff00u) | rd8(arg6 + ((uint32_t)((int32_t)(t24 + t31 - t22 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u | rd8(arg6 + ((uint32_t)((int32_t)(t25 + t32 - t21 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u | rd8(arg6 + ((uint32_t)((int32_t)(t21 + t25 + t33 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u;
    t36 = ((((t32 & 0xffffff00u) | rd8(arg6 + ((uint32_t)((int32_t)(t22 + t24 - t34 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u | rd8(arg6 + ((uint32_t)((int32_t)(t21 + t25 - t33 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u | rd8(arg6 + ((uint32_t)((int32_t)(t25 - t21 - t32 + 0x20000u) >> 0x12u) & 0x3ffu))) << 8u;
    t37 = (t35 & 0xffffff00u) | rd8(arg6 + ((uint32_t)((int32_t)(t22 + t24 + t34 + 0x20000u) >> 0x12u) & 0x3ffu));
    t38 = rd8(arg6 + ((uint32_t)((int32_t)(t24 - t22 - t31 + 0x20000u) >> 0x12u) & 0x3ffu));
    t39 = rd32(arg4 + loc_8);
    wr32(arg5 + t39, t37);
    t40 = (t36 & 0xffffff00u) | t38;
    wr32(arg5 + t39 + 4u, t40);
    if (loc_3c != 1u)
    {
        loc_40 = loc_40 + 0x20u;
        loc_3c = loc_3c - 1u;
        loc_8 = loc_8 + 4u;
        goto L_1030c2e3;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030c075(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030c075(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
