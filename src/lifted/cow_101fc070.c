/* f_0x101fc070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101fc070(Guest* g)
{
    double d20;
    double d31;
    double d37;
    double d42;
    double d49;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101fc274;
    }
    ecx = rd32(COW_IMG(0x10663888u));
    if (rd8(ecx + 0x10au) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(ecx + 0x10au);
        edx = in_edx;
        goto L_101fc274;
    }
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 3u > 0xeu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 3u;
        edx = in_edx;
        goto L_101fc274;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 3u;
    t1 = rd32(COW_IMG(0x101fc27cu) + rd8(COW_IMG(0x101fc294u) + eax) * 4u);
    edx = rd8(COW_IMG(0x101fc294u) + eax);
    switch (t1 - RD)
    {
    case 0x101fc0b0u: goto L_101fc0b0;
    case 0x101fc1d6u: goto L_101fc1d6;
    case 0x101fc20bu: goto L_101fc20b;
    case 0x101fc22du: goto L_101fc22d;
    case 0x101fc264u: goto L_101fc264;
    case 0x101fc274u: goto L_101fc274;
    default: rt_fatal(g, COW_IMG(0x101fc0a9u), "switch");
    }
    return 0;
L_101fc0b0: ;
    if (rd16(sp0 + 8u) != 0xbu)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        goto L_101fc0cb;
    }
    g->eax = rd32(self);
    g->edx = edx;
    t21 = rd32(self);
    g->esp = sp0 - 8u;
    t22 = cow_thiscall(g, rd32(t21 + 0x18u), self, 2, 4u, 0xbu);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_101fc0cb: ;
    if ((uint16_t)eax != 0xcu) goto L_101fc0e1;
    g->eax = eax;
    g->edx = rd32(self);
    t24 = rd32(self);
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, rd32(t24 + 0x18u), self, 2, 3u, 0xcu);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_101fc0e1: ;
    if (rd32(self + 0x38u) != 0u) goto L_101fc1c4;
    t27 = (uint32_t)(int16_t)eax - 1u;
    wr32(self + 0x14u, t27);
    if ((uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u) > 3u)
    {
        eax = t27;
        goto L_101fc274;
    }
    eax = t27;
    ecx = rd32(COW_IMG(0x10663888u));
    edi = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u);
    t28 = rd32(COW_IMG(0x101fc2a4u) + edi * 4u);
    switch (t28 - RD)
    {
    case 0x101fc110u: goto L_101fc110;
    case 0x101fc159u: goto L_101fc159;
    case 0x101fc18au: goto L_101fc18a;
    default: rt_fatal(g, COW_IMG(0x101fc109u), "switch");
    }
    return 0;
L_101fc110: ;
    if (rd8(eax * 0x16u + ecx + 0x6e8u) != 1u)
    {
        t43 = rd32(COW_IMG(0x10663890u));
        wr32(t43 + 0x14u, 0u);
        edx = t43;
    }
    else
    {
        edx = eax * 5u;
        wr32(rd32(COW_IMG(0x10663890u)) + 0x14u, 1u);
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t44 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385068u), 1u, 0u);
    t45 = g->ecx;
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x10037b90u), t45, 0);
    t48 = g->edx;
    d49 = cow_take_float(g);
    g->edx = t48;
    fpush(g, d49);
    return t47;
L_101fc159: ;
    if (rd8(eax * 0x16u + ecx + 0x7c4u) != 1u)
    {
        edx = eax * 5u;
        eax = eax * 0xbu;
        goto L_101fc1ba;
    }
    edx = eax * 5u;
    eax = eax * 0xbu;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t35 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t36 = g->edx;
    d37 = cow_take_float(g);
    t38 = rd32(self + 0x14u);
    wr32(sp0 + 8u, t38);
    t39 = rd32(COW_IMG(0x10663888u));
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->edx = t36;
    fpush(g, d37);
    return cow_tailcall(g, COW_IMG(0x101f8de0u), t35, t39, t36);
L_101fc18a: ;
    if (rd8(eax * 0x16u + ecx + edi * 0xdcu + 0x6e8u) != 1u)
    {
        edx = eax * 5u + edi * 0x32u;
        eax = eax * 0xbu + edi * 0x6eu;
        goto L_101fc1ba;
    }
    edx = eax * 5u + edi * 0x32u;
    eax = eax * 0xbu + edi * 0x6eu;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t30 = g->edx;
    d31 = cow_take_float(g);
    t32 = rd32(self + 0x14u);
    g->edx = t30;
    t33 = cow_thiscall(g, COW_IMG(0x101f90c0u), rd32(COW_IMG(0x10663888u)), 2, edi, t32);
    t34 = g->edx;
    g->edx = t34;
    fpush(g, d31);
    return t33;
L_101fc1ba: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t40 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t41 = g->edx;
    d42 = cow_take_float(g);
    g->edx = t41;
    fpush(g, d42);
    return t40;
L_101fc1c4: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t50 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t51 = g->edx;
    g->edx = t51;
    return t50;
L_101fc1d6: ;
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc1ef;
    }
    eax = rd32(self + 0x38u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101fc1ef: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x101f9070u), eax, ecx, g->edx, 1, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    loc_c = 1u;
L_101fc1f6: ;
    t14 = rd32(COW_IMG(0x10663888u));
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x101fad70u), eax, t14, edx, 0, 1, loc_c);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10037b30u), t16, 0);
    t19 = g->edx;
    d20 = cow_take_float(g);
    g->edx = t19;
    fpush(g, d20);
    return t18;
L_101fc20b: ;
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc224;
    }
    eax = rd32(self + 0x38u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101fc224: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x101f9070u), eax, ecx, g->edx, 1, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    loc_c = 0xffffffffu;
    goto L_101fc1f6;
L_101fc22d: ;
    if (rd32(self + 0x38u) != 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc26b;
    }
    eax = rd32(self + 0x38u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10384ff4u));
    t2 = rd32(COW_IMG(0x10663884u));
    wr32(sp0 + 8u, 0u);
    t3 = rd32(t2 + 8u);
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t2;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t3, COW_IMG(0x10621838u), t2);
L_101fc264: ;
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        goto L_101fc274;
    }
    eax = rd32(self + 0x38u);
L_101fc26b: ;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101fbe40u), eax, self, edx, 0, 1, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101fc274: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fc070(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
