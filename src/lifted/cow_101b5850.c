/* f_0x101b5850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_101b5850(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0xf108u) != 1u) goto L_101b5863;
    return 0xffffffffu;
L_101b5863: ;
    wr8(self + 0xef22u, 0u);
    wr8(self + 0x8c80u, 0u);
    if (arg1 - 2u > 3u)
    {
        edx = in_edx;
        goto L_101b59a6;
    }
    t1 = rd32(COW_IMG(0x101b5a5cu) + arg1 * 4u - 8u);
    switch (t1 - RD)
    {
    case 0x101b588fu: goto L_101b588f;
    case 0x101b58e0u: goto L_101b58e0;
    case 0x101b590eu: goto L_101b590e;
    case 0x101b5946u: goto L_101b5946;
    default: rt_fatal(g, COW_IMG(0x101b5888u), "switch");
    }
    return 0;
L_101b588f: ;
    t18 = rd32(self);
    wr32(self + 0xf108u, 2u);
    wr8(self + 0xf11cu, 1u);
    wr8(self + 0xf100u, 0u);
    g->eax = arg1 - 2u;
    g->edx = t18;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, rd32(t18 + 0x5cu), self, 0);
    t20 = g->edx;
    g->edx = t20;
    cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t21 = g->edx;
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    t22 = g->edx;
    g->edx = t22;
    cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    t23 = g->edx;
    g->edx = t23;
    cow_thiscall(g, rd32(rd32(self) + 0x30u), self, 0);
    t24 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 0u);
    edx = t24;
L_101b59a6: ;
    if ((arg8 & 2u) == 0u)
    {
        wr8(self + 0xf11cu, 0u);
    }
    if (rd8(self + 0xf0ecu) != 0u)
    {
        wr32(self + 0xf10cu, 1u);
    }
    else
    {
        wr32(self + 0xf10cu, arg2);
    }
    wr32(self + 0xf114u, arg8);
    wr32(self + 0xf110u, arg3);
    wr32(self + 0xf118u, arg4);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101abbd0u), self + 0x7e30u, 1, arg4);
    if (arg7 == 0u)
    {
        wr32(self + 0x8c78u, COW_IMG(0x101b7e90u));
    }
    else
    {
        wr32(self + 0x8c78u, arg7);
    }
    if (arg6 == 0u)
    {
        wr32(self + 0x8c7cu, self);
    }
    else
    {
        wr32(self + 0x8c7cu, arg6);
    }
    if (arg5 == 0u) goto L_101b5a3e;
    wr32(self + 0xf104u, arg5);
    return 1u;
L_101b58e0: ;
    t16 = rd32(self);
    wr32(self + 0xf108u, 3u);
    wr8(self + 0xf11cu, 1u);
    wr8(self + 0xf100u, 0u);
    g->edx = t16;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t16 + 0x30u), self, 0);
    t17 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 0u);
    edx = t17;
    goto L_101b59a6;
L_101b590e: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x10160c80u), arg1 - 2u, COW_IMG(0x10621838u), g->edx, 1, 0);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        edx = t13;
    }
    else
    {
        eax = t12;
        t14 = rd32(self);
        wr32(self + 0xf108u, 4u);
        wr8(self + 0xf11cu, 1u);
        g->edx = t14;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(t14 + 0x2cu), self, 0);
        t15 = g->edx;
        wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 1u);
        edx = t15;
    }
    goto L_101b59a6;
L_101b5946: ;
    wr32(self + 0xf108u, 5u);
    if (arg2 != 0u)
    {
        wr8(self + 0xf11cu, 0u);
    }
    else
    {
        wr8(self + 0xf11cu, 1u);
    }
    g->eax = arg1 - 2u;
    g->edx = rd32(self);
    t2 = rd32(self);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, rd32(t2 + 0x5cu), self, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x101abe50u), self + 0x7e30u, 0);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x101acf90u), self + 0x7e30u, 0);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x101b6ea0u), self, 0);
    t7 = g->edx;
    g->eax = rd32(self);
    t8 = rd32(self);
    t9 = cow_thiscall(g, rd32(t8 + 0x58u), self, 0);
    g->edx = rd32(self);
    t10 = rd32(self);
    cow_thiscall(g, rd32(t10 + 0x30u), self, 0);
    t11 = g->edx;
    wr8(rd32(COW_IMG(0x1066268cu)) + 0x10du, 1u);
    wr8(self + 0x8c80u, 1u);
    edx = t11;
    goto L_101b59a6;
L_101b5a3e: ;
    if (rd32(COW_IMG(0x10662d98u)) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10662d98u));
        ebx = eax + 0x18u;
    }
    wr32(self + 0xf104u, ebx);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b5850(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
