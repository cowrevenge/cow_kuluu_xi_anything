/* f_0x101fbb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fbb30(Guest* g)
{
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fbc63;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101fbbf4;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        edx = in_edx;
        goto L_101fbc53;
    }
    t1 = rd32(COW_IMG(0x10663894u));
    wr16(t1 + 0x70u, 0xffffu);
    wr8(t1 + 0x64u, 1u);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x101fb9a0u), 0);
    t2 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t3 = rd32(COW_IMG(0x106218b8u));
    t4 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 4u, t2);
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ac88u)));
    d6 = (double)(float)fr(g, d5 + d5);
    d7 = (double)(float)fr(g, d5 * (double)rdf32(COW_IMG(0x1032a3a0u)));
    t8 = rd32(COW_IMG(0x10663888u));
    cow_call_regs(g, COW_IMG(0x101f8a00u), t3 - t4, t8, g->edx, 0, 2, cow_f2bits(d7), cow_f2bits(d6));
    t9 = g->ecx;
    t10 = rd32(COW_IMG(0x10663888u));
    wr16(t10 + 0x16u, 7u);
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 9u);
    t12 = g->edx;
    g->edx = t12;
    cow_thiscall(g, COW_IMG(0x101efc60u), rd32(COW_IMG(0x10663888u)), 1, t11);
    t13 = g->edx;
    t14 = rd32(rd32(COW_IMG(0x10663888u)) + 8u);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t13, 2, t14, 0u);
    t15 = g->edx;
    t16 = rd32(self + 8u);
    g->edx = t15;
    t17 = cow_call_regs(g, COW_IMG(0x1015e790u), t16, COW_IMG(0x10621838u), g->edx, 0, 2, t16, 1u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_101fbbf4: ;
    g->edx = in_edx;
    t19 = rd32(COW_IMG(0x10663894u));
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x101fb400u), t19, 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        edx = t22;
        goto L_101fbc53;
    }
    eax = t20;
    ecx = t21;
    t23 = rd32(eax + 4u);
    g->ecx = ecx;
    g->edx = t23;
    g->esp = sp0 - 4u;
    t24 = cow_cdecl(g, COW_IMG(0x100f93c0u), 1, t23);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        eax = t24;
        edx = t26;
        goto L_101fbc2c;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t27 = g->edx;
    t28 = rd32(self + 8u);
    g->edx = t27;
    t29 = cow_call_regs(g, COW_IMG(0x1015e790u), t28, COW_IMG(0x10621838u), g->edx, 0, 2, t28, 1u);
    t30 = g->edx;
    g->edx = t30;
    return t29;
L_101fbc2c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038502cu));
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101fb950u), rd32(COW_IMG(0x10663894u)), 0);
    t34 = g->edx;
    g->edx = t34;
    cow_call_regs(g, COW_IMG(0x101fa420u), t33, rd32(COW_IMG(0x10663888u)), g->edx, 0, 1, 0u);
    t35 = g->edx;
    edx = t35;
L_101fbc53: ;
    t36 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t37 = cow_call_regs(g, COW_IMG(0x1015e790u), t36, COW_IMG(0x10621838u), g->edx, 0, 2, t36, 1u);
    t38 = g->edx;
    eax = t37;
    edx = t38;
L_101fbc63: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fbb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fbb30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
