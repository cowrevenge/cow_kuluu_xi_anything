/* f_0x10076520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10076520(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
    t4 = g->edx;
    wr32(t3 + 0x60u, 0x3f800000u);
    wr32(t3 + 0x44u, 0x3f800000u);
    wr32(t3 + 0x28u, 0x3f800000u);
    wr32(t3 + 0xcu, 0x3f800000u);
    wr32(t3 + 0x5cu, 0u);
    wr32(t3 + 0x64u, 0x80ff0000u);
    wr32(t3 + 0x48u, 0x80ff0000u);
    wr32(t3 + 0x2cu, 0x80ff0000u);
    wr32(t3 + 0x10u, 0x80ff0000u);
    wr32(t3 + 0x40u, 0u);
    wr32(t3 + 0x24u, 0u);
    wr32(t3 + 8u, 0u);
    d5 = (double)rdf32(arg1);
    wrf32(t3 + 0x38u, (float)d5);
    wrf32(t3, (float)d5);
    d6 = fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1));
    wrf32(t3 + 0x54u, (float)d6);
    wrf32(t3 + 0x1cu, (float)d6);
    d7 = (double)rdf32(arg1 + 4u);
    wrf32(t3 + 0x20u, (float)d7);
    wrf32(t3 + 4u, (float)d7);
    d8 = fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1 + 4u));
    wrf32(t3 + 0x58u, (float)d8);
    wrf32(t3 + 0x3cu, (float)d8);
    d9 = (double)rdf32(arg2);
    wrf32(t3 + 0x4cu, (float)d9);
    wrf32(t3 + 0x14u, (float)d9);
    d10 = (double)rdf32(arg2 + 8u);
    wrf32(t3 + 0x68u, (float)d10);
    wrf32(t3 + 0x30u, (float)d10);
    d11 = (double)rdf32(arg2 + 4u);
    wrf32(t3 + 0x34u, (float)d11);
    wrf32(t3 + 0x18u, (float)d11);
    d12 = (double)rdf32(arg2 + 0xcu);
    wrf32(t3 + 0x6cu, (float)d12);
    wrf32(t3 + 0x50u, (float)d12);
    g->edx = t4;
    t13 = cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    t14 = g->edx;
    if ((uint8_t)arg3 == 0u)
    {
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10075960u), self, 1, 0u);
        t15 = g->edx;
        edx = t15;
    }
    t16 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t17 = rd32(t16);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t17 + 0xfcu), t17, 4, t16, 0u, 0x18u, 0u);
    t18 = g->ecx;
    t19 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t19);
    t20 = rd32(t19);
    cow_thiscall(g, rd32(t20 + 0xfcu), t18, 4, t19, 0u, 0xbu, 0u);
    t21 = g->edx;
    t22 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t23 = rd32(t22);
    cow_thiscall(g, rd32(t23 + 0xfcu), t23, 4, t22, 0u, 1u, 2u);
    t24 = g->ecx;
    t25 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t25);
    t26 = rd32(t25);
    cow_thiscall(g, rd32(t26 + 0xfcu), t24, 4, t25, 0u, 2u, 2u);
    t27 = g->edx;
    t28 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t29 = rd32(t28);
    cow_thiscall(g, rd32(t29 + 0xfcu), t29, 4, t28, 0u, 4u, 2u);
    t30 = g->ecx;
    t31 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t31);
    t32 = rd32(t31);
    cow_thiscall(g, rd32(t32 + 0xfcu), t30, 4, t31, 0u, 5u, 0u);
    t33 = g->edx;
    t34 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t35 = rd32(t34);
    cow_thiscall(g, rd32(t35 + 0xfcu), t35, 4, t34, 0u, 0x10u, 2u);
    t36 = g->ecx;
    t37 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t37);
    t38 = rd32(t37);
    cow_thiscall(g, rd32(t38 + 0xfcu), t36, 4, t37, 0u, 0x11u, 2u);
    t39 = g->edx;
    t40 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t41 = rd32(t40);
    cow_thiscall(g, rd32(t41 + 0xfcu), t41, 4, t40, 1u, 1u, 1u);
    t42 = g->ecx;
    t43 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t43;
    g->edx = rd32(t43);
    t44 = rd32(t43);
    t45 = cow_thiscall(g, rd32(t44 + 0xfcu), t42, 4, t43, 1u, 4u, 1u);
    t46 = g->edx;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba8u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10076520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10076520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
