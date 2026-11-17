/* f_0x1023fe40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023fe40(Guest* g)
{
    double d12;
    double d13;
    double d18;
    double d23;
    double d27;
    double d32;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    double loc_1c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr8(rd32(self + 8u) + 0x5du, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x86u, 0u);
    t2 = rd32(self + 8u);
    wr8(t2 + 0x84u, 0u);
    eax = t2;
    edx = t1;
    esi = 0u;
L_1023fe72: ;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi + 1u);
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x101192b0u), rd32(self + 8u), 2, esi + 1u, 0u);
    t4 = g->edx;
    if ((int32_t)(esi + 1u) < 5)
    {
        eax = t3;
        edx = t4;
        esi = esi + 1u;
        goto L_1023fe72;
    }
    eax = t3;
    t5 = rd32(self + 8u);
    wr8(t5 + 0xd0u, 1u);
    g->eax = eax;
    g->edx = t5;
    g->esp = sp0 - 0x2cu;
    t6 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t7 = g->edx;
    wr8(t6 + 0x4cu, 1u);
    t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 0x18u, t8);
    t9 = rd16(COW_IMG(0x106218bau));
    t10 = rd16(COW_IMG(0x106218b6u));
    wr16(sp0 - 8u, 0u);
    t11 = (uint32_t)(int16_t)(t9 - t10);
    wr32(sp0 - 0x18u, t11);
    d12 = fr(g, (double)(int32_t)t8 * (double)rdf32(COW_IMG(0x10337eb0u)));
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d12);
    d13 = (double)(float)fr(g, (double)(int32_t)t11 * (double)rdf32(COW_IMG(0x1033cae8u)));
    wrf32(sp0 - 0x18u, (float)d13);
    eax = t11;
    edx = (t7 & 0xffff0000u) | (uint16_t)(t9 - t10);
    ebx = 0u;
    ebp = in_ebp;
    esi = 1u;
    loc_18_f = d13;
    loc_1c_f = (double)(float)d12;
L_1023fef9: ;
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, esi);
    wr32(sp0 - 0x3cu, sp0 - 8u);
    g->ebx = ebx;
    g->edi = self;
    t14 = rd32(self + 8u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10118900u), t14, 4, sp0 - 8u, esi, 1u, 1u);
    t15 = g->ecx;
    t16 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x10u, t16);
    t17 = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x14u, t17);
    g->edx = t17;
    d18 = fr(g, (double)(int32_t)t17 * (double)rdf32(sp0 - 0x1cu));
    fpush(g, d18);
    t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
    t20 = g->edx;
    t21 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0xcu, t21);
    t22 = (uint32_t)(int16_t)rd16(sp0 - 2u) - (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x14u, t22);
    g->ecx = t22;
    g->edx = t20;
    d23 = fr(g, (double)(int32_t)t22 * (double)rdf32(sp0 - 0x18u));
    fpush(g, d23);
    t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    g->ecx = t25;
    g->edx = t26;
    d27 = fr(g, (double)(int32_t)rd32(sp0 - 0x10u) * (double)rdf32(sp0 - 0x1cu));
    fpush(g, d27);
    t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
    t29 = g->ecx;
    t30 = g->edx;
    t31 = rd32(sp0 - 0xcu);
    wr16(sp0 - 8u, (uint16_t)t28);
    d32 = fr(g, (double)(int32_t)t31 * (double)rdf32(sp0 - 0x18u));
    fpush(g, d32);
    t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x30u, esi);
    wr32(sp0 - 0x34u, sp0 - 8u);
    t34 = rd32(self + 8u);
    t35 = rd16(sp0 - 8u);
    wr16(sp0 - 6u, (uint16_t)t33);
    wr16(sp0 - 4u, (uint16_t)((uint16_t)t19 + t35));
    wr16(sp0 - 2u, (uint16_t)((uint16_t)t24 + (uint16_t)t33));
    g->edx = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10118980u), t34, 2, sp0 - 8u, esi);
    t36 = g->edx;
    if ((int32_t)esi < 5)
    {
        eax = esi;
        edx = t36;
        ebx = (ebx & 0xffff0000u) | (uint16_t)((uint16_t)t24 + (uint16_t)t33);
        ebp = (ebp & 0xffff0000u) | (uint16_t)((uint16_t)t19 + t35);
        esi = esi + 1u;
        loc_18_f = (double)rdf32(sp0 - 0x18u);
        loc_1c_f = (double)rdf32(sp0 - 0x1cu);
        goto L_1023fef9;
    }
    eax = esi;
    wr32(sp0 - 0x30u, 0xau);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x78u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 2u);
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t37 = rd32(rd32(COW_IMG(0x10662d40u)));
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(t37 + 0x28u), rd32(COW_IMG(0x10662d40u)), 8, 2u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    t38 = g->edx;
    t39 = rd32(self + 8u);
    t40 = rd32(sp0 - 0x24u);
    t41 = rd32(sp0 - 0x28u);
    t42 = rd32(sp0 - 0x2cu);
    wr8(t39 + 0x69u, 0u);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = t41;
    g->edi = t42;
    g->ebp = t40;
    g->edx = t38;
    return t39;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023fe40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023fe40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
