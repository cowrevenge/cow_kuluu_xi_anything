/* f_0x10025c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10025c40(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10456e88u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10456e88u));
        goto L_10025c67;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t3 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t3 & 0xffffff00u;
L_10025c67: ;
    wr32(COW_IMG(0x10456e80u), rd32(arg1));
    t4 = rd32(arg1 + 4u);
    wr32(COW_IMG(0x10456e84u), t4);
    wr32(COW_IMG(0x10456e7cu), arg2);
    if (rd32(ecx) == 0u)
    {
        edx = arg2;
    }
    else
    {
        eax = rd32(ecx);
        wr32(sp0 - 0x44u, 0u);
        g->edx = arg2;
        g->esp = sp0 - 0x40u;
        cow_thiscall(g, COW_IMG(0x10075960u), eax + 0x30u, 1, 0u);
        t5 = g->edx;
        edx = t5;
    }
    wr32(sp0 - 0x44u, 8u);
    wr32(sp0 - 0x48u, 0x19u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t6);
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(t6) + 0xc8u), rd32(t6), 3, t6, 0x19u, 8u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0xeu);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xc8u), rd32(t7), 3, t7, 0xeu, 0u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0xdu);
    wr32(sp0 - 0x4cu, 0u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t8);
    cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 0u, 0xdu, 1u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0xeu);
    wr32(sp0 - 0x4cu, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xeu, 1u);
    if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x5cu) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x5cu);
        edx = rd32(COW_IMG(0x103d3cb8u));
    }
    else
    {
        edx = rd32(COW_IMG(0x103d3cb8u));
        if (rd32(COW_IMG(0x10456a74u)) != 0u)
        {
            eax = rd32(COW_IMG(0x10456a74u));
        }
        else
        {
            wr32(sp0 - 0x44u, 7u);
            wr32(sp0 - 0x48u, 0x80u);
            t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x4cu, t10);
            g->eax = t10;
            g->edx = edx;
            g->esp = sp0 - 0x40u;
            t11 = cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x80u, 7u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    g->esp = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    wr32(sp0 - 0x44u, arg3);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x10456e74u)));
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x10456e78u)));
    cow_thiscall(g, COW_IMG(0x10027e90u), sp0 - 0x40u, 1, arg3);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 0x89u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x89u, 0u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 0x1bu);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x1bu, 1u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 0x13u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0x13u, 5u);
    wr32(sp0 - 0x44u, 2u);
    wr32(sp0 - 0x48u, 0x14u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t16);
    cow_thiscall(g, rd32(rd32(t16) + 0xc8u), rd32(t16), 3, t16, 0x14u, 2u);
    wr32(sp0 - 0x44u, sp0 - 0x40u);
    wr32(sp0 - 0x48u, 0x10u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t17);
    g->edx = sp0 - 0x40u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0x94u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t17, 0x10u, sp0 - 0x40u);
    t18 = g->edx;
    wr32(sp0 - 0x44u, 2u);
    wr32(sp0 - 0x48u, 0x18u);
    wr32(sp0 - 0x4cu, 0u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t19);
    cow_thiscall(g, rd32(rd32(t19) + 0xfcu), rd32(t19), 4, t19, 0u, 0x18u, 2u);
    wr32(sp0 - 0x44u, 0x10000u);
    wr32(sp0 - 0x48u, 0xbu);
    wr32(sp0 - 0x4cu, 0u);
    t20 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t20);
    cow_thiscall(g, rd32(rd32(t20) + 0xfcu), rd32(t20), 4, t20, 0u, 0xbu, 0x10000u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0u);
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t21);
    cow_thiscall(g, rd32(rd32(t21) + 0xfcu), rd32(t21), 4, t21, 0u, 1u, 5u);
    wr32(sp0 - 0x44u, 2u);
    wr32(sp0 - 0x48u, 2u);
    wr32(sp0 - 0x4cu, 0u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t22);
    cow_thiscall(g, rd32(rd32(t22) + 0xfcu), rd32(t22), 4, t22, 0u, 2u, 2u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 - 0x4cu, 0u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t23);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t23, 0u, 3u, 0u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, 0u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t24);
    cow_thiscall(g, rd32(rd32(t24) + 0xfcu), rd32(t24), 4, t24, 0u, 4u, 5u);
    wr32(sp0 - 0x44u, 2u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t25);
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 5u, 2u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, 6u);
    wr32(sp0 - 0x4cu, 0u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t26);
    cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 6u, 0u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 1u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t27);
    cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 1u, 1u, 5u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 2u);
    wr32(sp0 - 0x4cu, 1u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t28);
    cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 1u, 2u, 1u);
    wr32(sp0 - 0x44u, 3u);
    wr32(sp0 - 0x48u, 3u);
    wr32(sp0 - 0x4cu, 1u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t29);
    cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 1u, 3u, 3u);
    wr32(sp0 - 0x44u, 5u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, 1u);
    t30 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t30);
    cow_thiscall(g, rd32(rd32(t30) + 0xfcu), rd32(t30), 4, t30, 1u, 4u, 5u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 1u);
    t31 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t31);
    cow_thiscall(g, rd32(rd32(t31) + 0xfcu), rd32(t31), 4, t31, 1u, 5u, 1u);
    wr32(sp0 - 0x44u, 3u);
    wr32(sp0 - 0x48u, 6u);
    wr32(sp0 - 0x4cu, 1u);
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t32);
    cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 4, t32, 1u, 6u, 3u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 2u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t33);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t33, 2u, 1u, 1u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, 2u);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x50u, t34);
    cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 2u, 4u, 1u);
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x10456e8cu)));
    wr32(sp0 - 0x48u, 0x3cu);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x4cu, t35);
    g->eax = t35;
    g->edx = rd32(COW_IMG(0x10456e8cu));
    t36 = rd32(COW_IMG(0x10456e8cu));
    t37 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t35, 0x3cu, t36);
    t38 = g->edx;
    t39 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t39 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10025c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10025c40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
