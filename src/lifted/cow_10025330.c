/* f_0x10025330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10025330(Guest* g)
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    if (rd32(self + 4u) != 0u) goto L_10025358;
    eax = rd32(self + 4u);
    edx = t1;
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t2 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t2 & 0xffffff00u;
L_10025358: ;
    wr32(COW_IMG(0x10456e58u), rd32(arg1));
    t3 = rd32(arg1 + 4u);
    t4 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x10456e5cu), t3);
    wr32(COW_IMG(0x10456e68u), arg2);
    t5 = rd32(self + 4u);
    wr32(sp0 - 0x48u, t5);
    wr32(sp0 - 0x4cu, 0u);
    t6 = rd32(t4 + 0xcu);
    wr32(sp0 - 0x50u, t6);
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(rd32(t4 + 0xcu)) + 0xf4u), t5, 3, t6, 0u, t5);
    wr32(sp0 - 0x48u, 8u);
    wr32(sp0 - 0x4cu, 0x19u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0x19u, 8u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 0xeu);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t8);
    cow_thiscall(g, rd32(rd32(t8) + 0xc8u), rd32(t8), 3, t8, 0xeu, 0u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 9u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xc8u), rd32(t9), 3, t9, 9u, 1u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0xdu);
    wr32(sp0 - 0x50u, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 0xdu, 1u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0xeu);
    wr32(sp0 - 0x50u, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t11);
    g->eax = t11;
    t12 = cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 0xeu, 1u);
    wr32(sp0 - 0x48u, arg3);
    cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, arg3);
    if ((rd32(COW_IMG(0x10456e50u)) & 0xff000000u) != 0x80000000u)
    {
        wr32(sp0 - 0x48u, 1u);
        wr32(sp0 - 0x4cu, 0x1bu);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x50u, t13);
        g->edx = rd32(t13);
        t14 = rd32(t13);
        g->esp = sp0 - 0x44u;
        cow_thiscall(g, rd32(t14 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t13, 0x1bu, 1u);
        t15 = g->edx;
        wr32(sp0 - 0x48u, 5u);
        wr32(sp0 - 0x4cu, 0x13u);
        t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x50u, t16);
        cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x13u, 5u);
        wr32(sp0 - 0x48u, 2u);
        wr32(sp0 - 0x4cu, 0x14u);
        t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x50u, t17);
        cow_thiscall(g, rd32(rd32(t17) + 0xc8u), rd32(t17), 3, t17, 0x14u, 2u);
    }
    wr32(sp0 - 0x48u, sp0 - 0x40u);
    wr32(sp0 - 0x4cu, 0x10u);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t18);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t18, 0x10u, sp0 - 0x40u);
    t19 = g->edx;
    wr32(sp0 - 0x48u, 0x104u);
    wr32(sp0 - 0x4cu, 0x18u);
    wr32(sp0 - 0x50u, 0u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 0x18u, 0x104u);
    wr32(sp0 - 0x48u, 0x20000u);
    wr32(sp0 - 0x4cu, 0xbu);
    wr32(sp0 - 0x50u, 0u);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 0xbu, 0x20000u);
    wr32(sp0 - 0x48u, 2u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 0u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t22);
    cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 4, t22, 0u, 1u, 2u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 1u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t23);
    cow_thiscall(g, rd32(rd32(t23) + 0xfcu), rd32(t23), 4, t23, 1u, 1u, 5u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 2u);
    wr32(sp0 - 0x50u, 1u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t24);
    cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 1u, 2u, 1u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 - 0x4cu, 3u);
    wr32(sp0 - 0x50u, 1u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t25);
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 1u, 3u, 3u);
    wr32(sp0 - 0x48u, 6u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 1u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t26);
    cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 1u, 4u, 6u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 5u);
    wr32(sp0 - 0x50u, 1u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t27);
    cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 1u, 5u, 1u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 - 0x4cu, 6u);
    wr32(sp0 - 0x50u, 1u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t28);
    cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 1u, 6u, 3u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 2u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t29);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t29, 2u, 1u, 1u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, 2u);
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x54u, t30);
    cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 4, t30, 2u, 4u, 1u);
    wr32(sp0 - 0x48u, rd32(COW_IMG(0x10456e50u)));
    wr32(sp0 - 0x4cu, 0x3cu);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t31);
    g->eax = t31;
    g->edx = rd32(COW_IMG(0x10456e50u));
    t32 = rd32(COW_IMG(0x10456e50u));
    t33 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t31, 0x3cu, t32);
    t34 = g->edx;
    t35 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x44u);
    return (t35 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10025330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10025330(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
