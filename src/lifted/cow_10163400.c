/* f_0x10163400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10163400(Guest* g)
{
    double d11;
    double d12;
    double d5;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x20u, 0u);
    t1 = (uint32_t)(int16_t)rd16(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u);
    t3 = rd16(rd32(sp0 + 4u) + 4u);
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 0xcu, 0u);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint32_t)(int16_t)t3);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wrf32(sp0 - 0x50u, (float)(double)(float)(double)(int32_t)t4);
    d5 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x3cu, (float)d5);
    wrf32(sp0 - 0x28u, (float)(double)(float)(double)(int32_t)t4);
    t6 = (uint32_t)(int16_t)rd16(t2 + 2u);
    t7 = rd16(t2 + 6u);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t6);
    wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t8);
    t9 = rd32(COW_IMG(0x1045666cu));
    t10 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint32_t)(int16_t)t7);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wrf32(sp0 - 0x4cu, (float)(double)(float)(double)(int32_t)t10);
    wrf32(sp0 - 0x38u, (float)(double)(float)(double)(int32_t)t10);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x18u, arg2);
    d11 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x24u, (float)d11);
    d12 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x10u, (float)d12);
    wr32(sp0 - 4u, arg2);
    g->edx = (uint32_t)(int16_t)t7;
    g->esp = sp0;
    cow_bridge_indirect(g, COW_IMG(0x10009920u), 0u, 20u, (const uint32_t[]){cow_f2bits((double)(float)(double)(int32_t)t4), cow_f2bits((double)(float)(double)(int32_t)t10), 0u, 0x3f800000u, arg2, cow_f2bits(d5), cow_f2bits((double)(float)(double)(int32_t)t10), 0u, 0x3f800000u, arg2, cow_f2bits((double)(float)(double)(int32_t)t4), cow_f2bits(d11), 0u, 0x3f800000u, arg2, cow_f2bits((double)(float)(double)(int32_t)t8), cow_f2bits(d12), 0u, 0x3f800000u, arg2}, t9, g->edx, arg2, 80u);
    t13 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 7u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t14);
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 7u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0x1cu);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0x1cu, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0x89u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t16);
    cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x89u, 0u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 0x1bu);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x5cu, t17);
    cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x1bu, 0u);
    wr32(sp0 - 0x54u, 2u);
    wr32(sp0 - 0x58u, 0x10u);
    wr32(sp0 - 0x5cu, 0u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t18);
    cow_thiscall(g, rd32(rd32(t18) + 0xfcu), rd32(t18), 4, t18, 0u, 0x10u, 2u);
    wr32(sp0 - 0x54u, 2u);
    wr32(sp0 - 0x58u, 0x11u);
    wr32(sp0 - 0x5cu, 0u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 0u, 0x11u, 2u);
    wr32(sp0 - 0x54u, 2u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 0u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 1u, 2u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 2u);
    wr32(sp0 - 0x5cu, 0u);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 2u, 0u);
    wr32(sp0 - 0x54u, 2u);
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, 0u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t22);
    cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 4, t22, 0u, 4u, 2u);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x58u, 5u);
    wr32(sp0 - 0x5cu, 0u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t23);
    cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 0u, 5u, 0u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 1u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t24);
    cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 1u, 1u, 1u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, 1u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x60u, t25);
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 1u, 4u, 1u);
    wr32(sp0 - 0x54u, 0x44u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x58u, t26);
    g->eax = t26;
    t27 = cow_thiscall(g, rd32(rd32(t26) + 0x130u), rd32(t26), 2, t26, 0x44u);
    wr32(sp0 - 0x54u, 0x14u);
    wr32(sp0 - 0x58u, sp0 - 0x50u);
    wr32(sp0 - 0x5cu, 2u);
    wr32(sp0 - 0x60u, 5u);
    g->edx = sp0 - 0x50u;
    t28 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x50u, 0x14u);
    t29 = g->edx;
    g->edx = t29;
    t30 = cow_call_regs(g, COW_IMG(0x10009920u), t28, rd32(COW_IMG(0x1045666cu)), g->edx, 1, 0);
    t31 = g->edx;
    cow_call_regs(g, COW_IMG(0x101604b0u), g->eax, g->ecx, t31, 1, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10163400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10163400(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
