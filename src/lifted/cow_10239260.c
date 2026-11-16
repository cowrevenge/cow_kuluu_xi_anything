/* f_0x10239260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10239260(Guest* g)
{
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        if ((int32_t)eax >= 10)
        {
            zf = eax == 0xau;
            goto L_1023928a;
        }
        eax = eax + 1u;
L_1023929d: ;
        wr32(self + 0x18u, eax);
    }
    else
    {
        if (rd32(self + 0x1cu) != rd32(self + 0x20u))
        {
            eax = rd32(self + 0x1cu);
            wr32(self + 0x20u, eax);
            wr32(self + 0x18u, 1u);
        }
    }
L_102392a0: ;
    if (rd32(self + 0x2cu) != 0u)
    {
        eax = rd32(self + 0x2cu);
        goto L_1023936d;
    }
    if (rd32(self + 0x18u) - 0xbu > 4u)
    {
        eax = rd32(self + 0x18u) - 0xbu;
        edx = in_edx;
        goto L_1023943c;
    }
    eax = rd32(self + 0x18u) - 0xbu;
    ecx = rd32(self + 0x18u);
    t1 = rd32(COW_IMG(0x10239444u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102392c1u: goto L_102392c1;
    case 0x102392d8u: goto L_102392d8;
    case 0x10239329u: goto L_10239329;
    case 0x1023934du: goto L_1023934d;
    case 0x10239435u: goto L_10239435;
    default: rt_fatal(g, COW_IMG(0x102392bau), "switch");
    }
    return 0;
L_1023928a: ;
    if (!zf) goto L_102392a0;
    eax = ((-(rd32(self + 0x1cu) != rd32(self + 0x20u)) & 0xffffff00u) | (-(rd32(self + 0x1cu) != rd32(self + 0x20u)) & 0xf5u)) + 0xbu;
    goto L_1023929d;
L_102392c1: ;
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        goto L_10239363;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax - 8u);
    return eax - 8u;
L_102392d8: ;
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
    }
    else
    {
        eax = rd32(self + 0x34u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t8 = g->edx;
        t9 = cow_thiscall(g, COW_IMG(0x10071050u), self + 0x34u, 0);
        wr32(self + 0x34u, 0u);
        eax = t9;
    }
    t10 = rd32(self + 0x20u) + 0x9acfu;
    wr32(sp0 - 0x10u, t10);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, t10);
    t12 = g->edx;
    t13 = rd32(t11);
    wr32(self + 0x30u, t13);
    g->edx = t12;
    cow_call_regs(g, COW_IMG(0x10071e90u), t13, rd32(t13), g->edx, 1, 0);
    t14 = g->edx;
    eax = rd32(self + 0x18u);
    edx = t14;
L_1023931f: ;
    wr32(self + 0x18u, eax + 1u);
    g->edx = edx;
    return eax + 1u;
L_10239329: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x30u, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1023943c;
    }
    edx = t3;
    t4 = rd32(self + 0x30u);
    wr32(self + 0x34u, t4);
    t5 = rd32(self + 0x18u) + 1u;
    t6 = rd32(sp0 - 0xcu);
    wr32(self + 0x18u, t5);
    g->esi = rd32(sp0 - 8u);
    g->edi = t6;
    g->edx = edx;
    return t5;
L_1023934d: ;
    if (rd32(self + 0x24u) == 0x80u)
    {
        eax = rd32(self + 0x24u);
        goto L_10239363;
    }
    eax = rd32(self + 0x24u);
    wr32(self + 0x24u, eax + 8u);
    return eax + 8u;
L_10239363: ;
    wr32(self + 0x18u, ecx + 1u);
    return eax;
L_1023936d: ;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_1023943c;
    }
    if (rd32(self + 0x18u) - 0xbu > 7u)
    {
        eax = rd32(self + 0x18u);
        edx = in_edx;
        goto L_1023943c;
    }
    eax = rd32(self + 0x18u);
    ecx = rd32(self + 0x18u) - 0xbu;
    t15 = rd32(COW_IMG(0x10239458u) + ecx * 4u);
    switch (t15 - RD)
    {
    case 0x1023931fu: edx = in_edx; goto L_1023931f;
    case 0x1023938cu: goto L_1023938c;
    case 0x102393b8u: goto L_102393b8;
    case 0x102393cdu: goto L_102393cd;
    case 0x102393fau: goto L_102393fa;
    case 0x1023941fu: goto L_1023941f;
    case 0x10239435u: goto L_10239435;
    default: rt_fatal(g, COW_IMG(0x10239385u), "switch");
    }
    return 0;
L_1023938c: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x746f6666u);
    wr32(sp0 - 0x20u, 0x81a9u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x746f6666u, 0u, 0u, 0u);
    t29 = g->edx;
    t30 = rd32(self + 0x18u);
    wr32(self + 0x24u, 0x1fu);
    wr32(self + 0x18u, t30 + 1u);
    g->edx = t29;
    return t30 + 1u;
L_102393b8: ;
    if (rd32(self + 0x24u) == 0u)
    {
        edx = in_edx;
        goto L_1023931f;
    }
    ecx = rd32(self + 0x24u);
    wr32(self + 0x24u, ecx - 1u);
    return eax;
L_102393cd: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t18 = cow_stdcall(g, COW_IMG(0x10245500u), 0);
    t19 = g->edx;
    t20 = rd32(self + 0x20u) + 1u;
    wr32(sp0 - 0x10u, t20);
    g->ecx = t20;
    g->edx = t19;
    t21 = cow_cdecl(g, COW_IMG(0x10245540u), 1, t20);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    g->ecx = t22;
    g->esp = sp0 - 0x14u;
    t24 = cow_call_regs(g, COW_IMG(0x10035f80u), g->eax, g->ecx, t23, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, t26, 1, 0);
    t27 = g->edx;
    t28 = rd32(self + 0x18u) + 1u;
    wr32(self + 0x18u, t28);
    g->edx = t27;
    return t28;
L_102393fa: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x6e696666u);
    wr32(sp0 - 0x20u, 0x81a9u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x6e696666u, 0u, 0u, 0u);
    t16 = g->edx;
    t17 = rd32(self + 0x18u) + 1u;
    wr32(self + 0x18u, t17);
    g->edx = t16;
    return t17;
L_1023941f: ;
    if (rd32(self + 0x24u) == 0x1fu)
    {
        edx = in_edx;
        goto L_1023931f;
    }
    ecx = rd32(self + 0x24u);
    wr32(self + 0x24u, ecx + 1u);
    return eax;
L_10239435: ;
    wr32(self + 0x18u, 0u);
    edx = in_edx;
L_1023943c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10239260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10239260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
