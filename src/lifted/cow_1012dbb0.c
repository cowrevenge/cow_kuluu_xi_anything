/* f_0x1012dbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012dbb0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x14cu) != 0u) goto L_1012dce1;
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1012dd2d;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1012dd2d;
    }
    t1 = rd32(COW_IMG(0x1012dd34u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1012dbe4u: goto L_1012dbe4;
    case 0x1012dc1du: goto L_1012dc1d;
    case 0x1012dc56u: goto L_1012dc56;
    case 0x1012dc8fu: goto L_1012dc8f;
    case 0x1012dcc8u: goto L_1012dcc8;
    case 0x1012dd2du: eax = (uint32_t)(int16_t)arg2 - 1u; edx = in_edx; goto L_1012dd2d;
    default: rt_fatal(g, COW_IMG(0x1012dbddu), "switch");
    }
    return 0;
L_1012dbe4: ;
    t20 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t21 = (uint32_t)(int16_t)rd16(t20 + 0x4cu);
    wr32(self + 0x148u, t21);
    wr8(t20 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t20, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t22 = rd32(self + 0x138u);
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t22);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_1012dc1d: ;
    t15 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t16 = (uint32_t)(int16_t)rd16(t15 + 0x4cu);
    wr32(self + 0x148u, t16);
    wr8(t15 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t15, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t17 = rd32(self + 0x13cu);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t17);
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1012dc56: ;
    t10 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t11 = (uint32_t)(int16_t)rd16(t10 + 0x4cu);
    wr32(self + 0x148u, t11);
    wr8(t10 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t10, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t12 = rd32(self + 0x140u);
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t12);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1012dc8f: ;
    t5 = rd32(self + 8u);
    wr8(self + 0x14cu, 1u);
    t6 = (uint32_t)(int16_t)rd16(t5 + 0x4cu);
    wr32(self + 0x148u, t6);
    wr8(t5 + 0x62u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t5, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t7 = rd32(self + 0x144u);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t7);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1012dcc8: ;
    t2 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t2, COW_IMG(0x10621838u), g->edx, 0, 2, t2, 1u);
    t4 = g->edx;
    wr8(self + 0x14u, 1u);
    g->edx = t4;
    return t3;
L_1012dce1: ;
    if ((uint32_t)(int16_t)arg1 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1012dd2d;
    }
    t25 = rd32(COW_IMG(0x1012dd58u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t25 - RD)
    {
    case 0x1012dcf3u: goto L_1012dcf3;
    case 0x1012dd09u: goto L_1012dd09;
    default: rt_fatal(g, COW_IMG(0x1012dcecu), "switch");
    }
    return 0;
L_1012dcf3: ;
    t30 = (self & 0xffff0000u) | rd16(self + 0x148u);
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t31 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg1 - 1u, rd32(self + 8u), g->edx, 0, 2, t30, 0u);
    t32 = g->edx;
    g->ebx = in_ebx;
    g->edx = t32;
    return t31;
L_1012dd09: ;
    t26 = rd32(self + 8u);
    wr8(self + 0x14cu, 0u);
    wr8(t26 + 0x62u, 1u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), (uint32_t)(int16_t)arg1 - 1u, rd32(COW_IMG(0x10662da0u)), t26, 1, 0);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_1012dd2d: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012dbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012dbb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
