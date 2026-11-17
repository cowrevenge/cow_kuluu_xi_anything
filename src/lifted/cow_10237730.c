/* f_0x10237730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10237730(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x20u) == 1u) goto L_10237861;
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10237856;
    }
    t1 = rd32(COW_IMG(0x1023787cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1023775du: goto L_1023775d;
    case 0x1023776eu: goto L_1023776e;
    case 0x10237802u: goto L_10237802;
    case 0x1023781eu: goto L_1023781e;
    case 0x10237847u: goto L_10237847;
    case 0x10237856u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10237856;
    default: rt_fatal(g, COW_IMG(0x10237756u), "switch");
    }
    return 0;
L_1023775d: ;
    if ((int16_t)arg2 < 9) goto L_1023776e;
    if ((int16_t)arg2 <= 10)
    {
        eax = (uint32_t)(int16_t)arg2;
        edx = in_edx;
        goto L_10237876;
    }
L_1023776e: ;
    if ((int16_t)arg2 < 9)
    {
        t10 = (uint32_t)(int16_t)arg2 - 1u;
        t11 = rd32(self + 0x1cu);
        wr32(self + 0x14u, t10);
        if (t11 != (uint32_t)(int16_t)arg2)
        {
            ecx = t10;
            edx = t11;
            g->eax = (uint32_t)(int16_t)arg2;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t12 = cow_thiscall(g, COW_IMG(0x102375a0u), self, 1, ecx);
            t13 = g->ecx;
            t14 = g->edx;
            cow_thiscall(g, COW_IMG(0x10037b30u), t13, 0);
        }
    }
    if (rd32(COW_IMG(0x10456aa4u)) != 0u) goto L_102377c3;
    t15 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    t16 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    g->eax = t16;
    g->edx = rd32(COW_IMG(0x10668facu));
    t17 = rd32(COW_IMG(0x10668facu));
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x102516d0u), rd32(COW_IMG(0x106693fcu)), 2, t16, t15);
    t19 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = t19;
    return t18;
L_102377c3: ;
    if ((int32_t)(rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        edx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        edx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    t20 = ecx + edx * 8u;
    t21 = rd32(COW_IMG(0x10668fd8u));
    wr32(t21 + 0x1cu, t20);
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = t20;
    return t21;
L_10237802: ;
    if ((uint16_t)arg2 != 9u) goto L_10237824;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 2, 4u, 9u);
    t6 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = t6;
    return t5;
L_1023781e: ;
    if ((uint16_t)arg2 == 9u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10237831;
    }
L_10237824: ;
    if ((uint16_t)arg2 == 0xau)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
    }
    else
    {
        t7 = (uint32_t)(int16_t)arg2 - 1u;
        wr32(self + 0x14u, t7);
        eax = t7;
    }
L_10237831: ;
    wr32(self + 0x18u, 1u);
    wr32(self + 0x20u, 1u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10037b90u), 1u, 0);
    t9 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = t9;
    return t8;
L_10237847: ;
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x20u, 1u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), 1u, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10237856: ;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->edx = edx;
    return eax;
L_10237861: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
        t22 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 1u);
        g->edx = t22;
        g->esp = sp0 - 8u;
        t23 = cow_call_regs(g, COW_IMG(0x10118db0u), in_eax, ecx, g->edx, 0, 2, t22, 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
L_10237876: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10237730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10237730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
