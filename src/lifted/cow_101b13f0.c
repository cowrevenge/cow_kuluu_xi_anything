/* f_0x101b13f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b13f0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        goto L_101b1412;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc9u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101b1548;
    }
    eax = t1;
L_101b1412: ;
    g->eax = eax;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x40u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101b1424;
    }
    edx = t5;
    g->edx = edx;
    return 1u;
L_101b1424: ;
    if (rd8(self + 0xf100u) == 0u) goto L_101b1435;
    g->edx = edx;
    return 1u;
L_101b1435: ;
    wr8(self + 0xef22u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x101b5cc0u), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        edx = t7;
        goto L_101b14c1;
    }
    edx = t7;
    g->eax = rd32(self);
    t8 = rd32(self);
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, rd32(t8 + 0x44u), self, 0);
    g->edx = rd32(self);
    t10 = rd32(self);
    t11 = cow_thiscall(g, rd32(t10 + 0x28u), self, 8, 4u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    t12 = g->edx;
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (t11 & 0xffffff00u) | rd8(self + 0xf0ecu);
        edx = t12;
        edi = t9;
        goto L_101b1489;
    }
    eax = (t11 & 0xffffff00u) | rd8(self + 0xf0ecu);
    edx = t12;
    edi = t9;
    if (rd32(self + 0xf0f4u) != 1u) goto L_101b1489;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10190980u), rd32(COW_IMG(0x1066269cu)), 1, edi);
    t13 = g->edx;
    edx = t13;
L_101b1495: ;
    wr8(self + 0xf100u, 1u);
    if (edi == 1u) goto L_101b14a6;
    if (edi != 2u) goto L_101b14b9;
L_101b14a6: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    t15 = g->edx;
    edx = t15;
L_101b14b9: ;
    g->edx = edx;
    return 1u;
L_101b1489: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101aeb30u), rd32(COW_IMG(0x10662dacu)), 1, edi);
    t14 = g->edx;
    edx = t14;
    goto L_101b1495;
L_101b14c1: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x101b5c90u), self, 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_101b1548;
    }
    edx = t17;
    g->eax = rd32(self);
    t18 = rd32(self);
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, rd32(t18 + 0x60u), self, 1, 0u);
    g->edx = rd32(self);
    t20 = rd32(self);
    t21 = cow_thiscall(g, rd32(t20 + 0x70u), self, 0);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t24 = g->edx;
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (t23 & 0xffffff00u) | rd8(self + 0xf0ecu);
        edx = t24;
        goto L_101b152d;
    }
    edx = t24;
    if (rd32(self + 0xf0f4u) != 1u) goto L_101b1528;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798e0u), 1u, 0u);
    t26 = g->edx;
    g->edx = t26;
    cow_thiscall(g, COW_IMG(0x10190980u), rd32(COW_IMG(0x1066269cu)), 1, 0u);
    t27 = g->edx;
    wr8(self + 0xf100u, 1u);
    g->edx = t27;
    return 1u;
L_101b1528: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798e0u), 1u, 0u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_101b152d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101aeb30u), rd32(COW_IMG(0x10662dacu)), 1, 0u);
    t30 = g->edx;
    wr8(self + 0xf100u, 1u);
    g->edx = t30;
    return 1u;
L_101b1548: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b13f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b13f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
