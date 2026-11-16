/* f_0x1030cb8f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1030cb8f(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg2;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    loc_30 = arg1;
    loc_2c = arg3;
    loc_28 = arg2;
    loc_20 = (rd32(sp0 - 0x20u) & 0xffff0000u) | 8u;
    loc_1c = rd32(sp0 - 0x1cu);
    loc_18 = rd32(sp0 - 0x18u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = rd32(sp0 - 0xcu);
    loc_8 = rd32(sp0 - 8u);
L_1030cbb0: ;
    t1 = (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(rd16(loc_30 + 0x20u) * rd16(loc_2c + 0x20u)) - (uint16_t)(rd16(loc_30 + 0x60u) * rd16(loc_2c + 0x60u))) * 0x16au) >> 8u) - (uint16_t)((uint16_t)(rd16(loc_30 + 0x20u) * rd16(loc_2c + 0x20u)) + (uint16_t)(rd16(loc_30 + 0x60u) * rd16(loc_2c + 0x60u))));
    t2 = (uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)((uint16_t)(rd16(loc_30 + 0x70u) * rd16(loc_2c + 0x70u)) + (uint16_t)(rd16(loc_30 + 0x10u) * rd16(loc_2c + 0x10u))) - (uint16_t)((uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u)) + (uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)))) * 0x16au) >> 8u);
    t3 = (uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)((uint16_t)(rd16(loc_30 + 0x10u) * rd16(loc_2c + 0x10u)) - (uint16_t)(rd16(loc_30 + 0x70u) * rd16(loc_2c + 0x70u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)) - (uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u)))) * 0x1d9u) >> 8u);
    t4 = (uint16_t)((uint16_t)((uint16_t)t3 + (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)) - (uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u))) * 0xfffffd63u) >> 8u)) - (uint16_t)((uint16_t)((uint16_t)(rd16(loc_30 + 0x70u) * rd16(loc_2c + 0x70u)) + (uint16_t)(rd16(loc_30 + 0x10u) * rd16(loc_2c + 0x10u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u)) + (uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)))));
    t5 = (uint16_t)((uint16_t)((uint16_t)((uint16_t)(rd16(loc_30) * rd16(loc_2c)) + (uint16_t)(rd16(loc_30 + 0x40u) * rd16(loc_2c + 0x40u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x20u) * rd16(loc_2c + 0x20u)) + (uint16_t)(rd16(loc_30 + 0x60u) * rd16(loc_2c + 0x60u)))) + (uint16_t)((uint16_t)((uint16_t)(rd16(loc_30 + 0x70u) * rd16(loc_2c + 0x70u)) + (uint16_t)(rd16(loc_30 + 0x10u) * rd16(loc_2c + 0x10u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u)) + (uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)))));
    t6 = (uint16_t)((uint16_t)((uint16_t)((uint16_t)(rd16(loc_30) * rd16(loc_2c)) + (uint16_t)(rd16(loc_30 + 0x40u) * rd16(loc_2c + 0x40u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x20u) * rd16(loc_2c + 0x20u)) + (uint16_t)(rd16(loc_30 + 0x60u) * rd16(loc_2c + 0x60u)))) - (uint16_t)((uint16_t)((uint16_t)(rd16(loc_30 + 0x70u) * rd16(loc_2c + 0x70u)) + (uint16_t)(rd16(loc_30 + 0x10u) * rd16(loc_2c + 0x10u))) + (uint16_t)((uint16_t)(rd16(loc_30 + 0x30u) * rd16(loc_2c + 0x30u)) + (uint16_t)(rd16(loc_30 + 0x50u) * rd16(loc_2c + 0x50u)))));
    t7 = rd16(loc_30 + 0x50u);
    t8 = rd16(loc_2c + 0x50u);
    t9 = rd16(loc_30 + 0x30u);
    t10 = rd16(loc_2c + 0x30u);
    t11 = rd16(loc_30);
    t12 = rd16(loc_2c);
    t13 = rd16(loc_30 + 0x40u);
    t14 = rd16(loc_2c + 0x40u);
    t15 = rd16(loc_30 + 0x20u);
    t16 = rd16(loc_2c + 0x20u);
    t17 = rd16(loc_30 + 0x60u);
    t18 = rd16(loc_2c + 0x60u);
    t19 = rd16(loc_30 + 0x10u);
    t20 = rd16(loc_2c + 0x10u);
    t21 = rd16(loc_30 + 0x70u);
    t22 = rd16(loc_2c + 0x70u);
    wr16(loc_28, (uint16_t)t5);
    wr16(loc_28 + 0x70u, (uint16_t)t6);
    wr16(loc_28 + 0x10u, (uint16_t)((uint16_t)t4 + (uint16_t)((uint16_t)t1 + (uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)))));
    wr16(loc_28 + 0x60u, (uint16_t)((uint16_t)((uint16_t)t1 + (uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14))) - (uint16_t)t4));
    wr16(loc_28 + 0x20u, (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)) - (uint16_t)t1)));
    wr16(loc_28 + 0x50u, (uint16_t)((uint16_t)((uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)) - (uint16_t)t1) - (uint16_t)((uint16_t)t2 - (uint16_t)t4)));
    t23 = (uint16_t)((uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18))) - (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3)));
    t24 = (uint16_t)((uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18))) + (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3)));
    wr16(loc_28 + 0x40u, (uint16_t)t24);
    wr16(loc_28 + 0x30u, (uint16_t)t23);
    if ((uint16_t)((uint16_t)loc_20 - 1u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
        ecx = (t2 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3));
        edx = ((uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t7 * t8) - (uint16_t)(t9 * t10)) * 0xfffffd63u) >> 8u) & 0xffff0000u) | (uint16_t)((uint16_t)t2 - (uint16_t)t4);
        ebx = (t3 & 0xffff0000u) | (uint16_t)t24;
        loc_30 = loc_30 + 2u;
        loc_2c = loc_2c + 2u;
        loc_28 = loc_28 + 2u;
        loc_20 = (loc_20 & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
        loc_1c = (loc_1c & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)) - (uint16_t)t1);
        loc_18 = (loc_18 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) + (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18)));
        loc_14 = (loc_14 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18)));
        loc_10 = (loc_10 & 0xffff0000u) | (uint16_t)((uint16_t)t1 + (uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)));
        loc_c = (loc_c & 0xffff0000u) | (uint16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22));
        loc_8 = (loc_8 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18))) + (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3)));
        goto L_1030cbb0;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
    ecx = (t2 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3));
    edx = ((uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t7 * t8) - (uint16_t)(t9 * t10)) * 0xfffffd63u) >> 8u) & 0xffff0000u) | (uint16_t)((uint16_t)t2 - (uint16_t)t4);
    ebx = (t3 & 0xffff0000u) | (uint16_t)t24;
    loc_20 = (loc_20 & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
    loc_1c = (loc_1c & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)) - (uint16_t)t1);
    loc_18 = (loc_18 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) + (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18)));
    loc_14 = (loc_14 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18)));
    loc_10 = (loc_10 & 0xffff0000u) | (uint16_t)((uint16_t)t1 + (uint16_t)((uint16_t)(t11 * t12) - (uint16_t)(t13 * t14)));
    loc_c = (loc_c & 0xffff0000u) | (uint16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22));
    loc_8 = (loc_8 & 0xffff0000u) | (uint16_t)((uint16_t)((uint16_t)((uint16_t)(t11 * t12) + (uint16_t)(t13 * t14)) - (uint16_t)((uint16_t)(t15 * t16) + (uint16_t)(t17 * t18))) + (uint16_t)((uint16_t)((uint16_t)t2 - (uint16_t)t4) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t19 * t20) - (uint16_t)(t21 * t22)) * 0x115u) >> 8u) - (uint16_t)t3)));
    loc_28 = arg2;
    loc_20 = (loc_20 & 0xffff0000u) | 8u;
    loc_24 = 0u;
L_1030cd36: ;
    t25 = (uint16_t)((uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(loc_28 + 0xau) - rd16(loc_28 + 6u)) * 0xfffffd63u) >> 8u) + (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(rd16(loc_28 + 0xau) - rd16(loc_28 + 6u)) + (uint16_t)(rd16(loc_28 + 2u) - rd16(loc_28 + 0xeu))) * 0x1d9u) >> 8u)) - (uint16_t)((uint16_t)(rd16(loc_28 + 0xau) + rd16(loc_28 + 6u)) + (uint16_t)(rd16(loc_28 + 0xeu) + rd16(loc_28 + 2u))));
    t26 = (uint16_t)((uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(rd16(loc_28 + 0xeu) + rd16(loc_28 + 2u)) - (uint16_t)(rd16(loc_28 + 0xau) + rd16(loc_28 + 6u))) * 0x16au) >> 8u) - (uint16_t)t25) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(loc_28 + 2u) - rd16(loc_28 + 0xeu)) * 0x115u) >> 8u) - (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(rd16(loc_28 + 0xau) - rd16(loc_28 + 6u)) + (uint16_t)(rd16(loc_28 + 2u) - rd16(loc_28 + 0xeu))) * 0x1d9u) >> 8u)));
    t27 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(rd16(loc_28) + rd16(loc_28 + 8u)) + (uint16_t)(rd16(loc_28 + 0xcu) + rd16(loc_28 + 4u))) + (uint16_t)((uint16_t)(rd16(loc_28 + 0xau) + rd16(loc_28 + 6u)) + (uint16_t)(rd16(loc_28 + 0xeu) + rd16(loc_28 + 2u)))) >> 5u) & 0x3ffu));
    t28 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(rd16(loc_28) + rd16(loc_28 + 8u)) + (uint16_t)(rd16(loc_28 + 0xcu) + rd16(loc_28 + 4u))) - (uint16_t)((uint16_t)(rd16(loc_28 + 0xau) + rd16(loc_28 + 6u)) + (uint16_t)(rd16(loc_28 + 0xeu) + rd16(loc_28 + 2u)))) >> 5u) & 0x3ffu));
    t29 = rd16(loc_28);
    t30 = rd16(loc_28 + 8u);
    t31 = rd16(loc_28 + 0xcu);
    t32 = rd16(loc_28 + 4u);
    t33 = rd16(loc_28 + 0xau);
    t34 = rd16(loc_28 + 6u);
    t35 = rd16(loc_28 + 0xeu);
    t36 = rd16(loc_28 + 2u);
    t37 = rd32(arg4 + loc_24);
    wr8(arg5 + t37, (uint8_t)t27);
    wr8(arg5 + t37 + 7u, (uint8_t)t28);
    t38 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)t25 + (uint16_t)((uint16_t)(t29 - t30) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32)))) >> 5u) & 0x3ffu));
    t39 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(t29 - t30) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32))) - (uint16_t)t25) >> 5u) & 0x3ffu));
    wr8(arg5 + t37 + 1u, (uint8_t)t38);
    wr8(arg5 + t37 + 6u, (uint8_t)t39);
    t40 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t35 + t36) - (uint16_t)(t33 + t34)) * 0x16au) >> 8u) - (uint16_t)t25) + (uint16_t)((uint16_t)(t29 - t30) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32)))) >> 5u) & 0x3ffu));
    t41 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(t29 - t30) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32))) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t35 + t36) - (uint16_t)(t33 + t34)) * 0x16au) >> 8u) - (uint16_t)t25)) >> 5u) & 0x3ffu));
    wr8(arg5 + t37 + 2u, (uint8_t)t40);
    wr8(arg5 + t37 + 5u, (uint8_t)t41);
    t42 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(t29 + t30) - (uint16_t)(t31 + t32)) - (uint16_t)t26) >> 5u) & 0x3ffu));
    t43 = rd8(arg6 + ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)t26 + (uint16_t)((uint16_t)(t29 + t30) - (uint16_t)(t31 + t32))) >> 5u) & 0x3ffu));
    wr8(arg5 + t37 + 4u, (uint8_t)t43);
    wr8(arg5 + t37 + 3u, (uint8_t)t42);
    if ((uint16_t)((uint16_t)loc_20 - 1u) != 0u)
    {
        eax = (t42 & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
        ecx = (uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)t26 + (uint16_t)((uint16_t)(t29 + t30) - (uint16_t)(t31 + t32))) >> 5u) & 0x3ffu;
        edx = (t38 & 0xffff0000u) | (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t35 + t36) - (uint16_t)(t33 + t34)) * 0x16au) >> 8u) - (uint16_t)t25);
        ebx = ((uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)((uint16_t)(t29 - t30) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32))) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)((uint16_t)(t35 + t36) - (uint16_t)(t33 + t34)) * 0x16au) >> 8u) - (uint16_t)t25)) >> 5u) & 0x300u) | t43;
        loc_28 = loc_28 + 0x10u;
        loc_20 = (loc_20 & 0xffff0000u) | (uint16_t)((uint16_t)loc_20 - 1u);
        loc_1c = (loc_1c & 0xffff0000u) | (uint16_t)((uint16_t)(t29 - t30) - (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32)));
        loc_18 = (loc_18 & 0xffff0000u) | (uint16_t)((uint16_t)(t29 + t30) + (uint16_t)(t31 + t32));
        loc_14 = (loc_14 & 0xffff0000u) | (uint16_t)((uint16_t)(t29 + t30) - (uint16_t)(t31 + t32));
        loc_10 = (loc_10 & 0xffff0000u) | (uint16_t)((uint16_t)(t29 - t30) + (uint16_t)((uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(t32 - t31) * 0x16au) >> 8u) - (uint16_t)(t31 + t32)));
        loc_c = (loc_c & 0xffff0000u) | (uint16_t)(t36 - t35);
        loc_8 = (loc_8 & 0xffff0000u) | (uint16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)((uint16_t)t26 + (uint16_t)((uint16_t)(t29 + t30) - (uint16_t)(t31 + t32))) >> 5u);
        loc_24 = loc_24 + 4u;
        goto L_1030cd36;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030cb8f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030cb8f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
