/* f_0x100255c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100255c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) != 0u) goto L_100255cc;
    eax = rd32(self + 4u);
    return eax & 0xffffff00u;
L_100255cc: ;
    if (rd32(COW_IMG(0x10456e58u)) == 0u)
    {
        t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t8);
        t9 = rd32(t8);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t9 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t8, 0u, 0u);
        t10 = g->edx;
        edx = t10;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e58u));
        g->eax = rd32(COW_IMG(0x1045666cu));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x1045666cu));
        t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t3 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x10025860u), ecx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        cow_thiscall(g, rd32(t3 + 0xf4u), t5, 3, t2, 0u, t4);
        t7 = g->edx;
        edx = t7;
    }
    if (rd32(COW_IMG(0x10456e5cu)) == 0u)
    {
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t18);
        t19 = rd32(t18);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t19 + 0xf4u), rd32(COW_IMG(0x1045666cu)), 3, t18, 1u, 0u);
        t20 = g->edx;
        edx = t20;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10456e5cu));
        g->eax = rd32(COW_IMG(0x1045666cu));
        g->edx = edx;
        t11 = rd32(COW_IMG(0x1045666cu));
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        t13 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, COW_IMG(0x10025860u), ecx, 0);
        t15 = g->ecx;
        t16 = g->edx;
        g->edx = t16;
        cow_thiscall(g, rd32(t13 + 0xf4u), t15, 3, t12, 1u, t14);
        t17 = g->edx;
        edx = t17;
    }
    t21 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(t21) + 0xc8u), rd32(t21), 3, t21, 9u, 2u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t22) + 0xc8u), rd32(t22), 3, t22, 0x1bu, 0u);
    t23 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t23) + 0xc8u), rd32(t23), 3, t23, 0x19u, 5u);
    t24 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t24) + 0xc8u), rd32(t24), 3, t24, 0xeu, 1u);
    t25 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t25) + 0xfcu), rd32(t25), 4, t25, 0u, 0xdu, 3u);
    t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t26) + 0xfcu), rd32(t26), 4, t26, 0u, 0xeu, 3u);
    t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t27) + 0xfcu), rd32(t27), 4, t27, 0u, 0x18u, 0u);
    t28 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t28) + 0xfcu), rd32(t28), 4, t28, 0u, 0xbu, 0u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t30 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(rd32(t29) + 0xfcu), rd32(t29), 4, t29, 0u, 1u, 5u);
    t31 = g->edx;
    if ((int32_t)arg1 <= 0)
    {
        edx = t31;
        goto L_100257a2;
    }
    edx = t31;
    if ((int32_t)arg1 > 2) goto L_100257a2;
    t32 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t32) + 0xfcu), rd32(t32), 4, t32, 1u, 1u, 0x12u);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t33) + 0xfcu), rd32(t33), 4, t33, 1u, 4u, 7u);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t34) + 0xfcu), rd32(t34), 4, t34, 1u, 2u, 1u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t35) + 0xfcu), rd32(t35), 4, t35, 1u, 3u, 2u);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t36) + 0xfcu), rd32(t36), 4, t36, 1u, 5u, 1u);
    loc_4 = 2u;
L_1002581b: ;
    t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t42) + 0xfcu), rd32(t42), 3, t42, 1u, 6u);
    t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t43;
    g->esp = sp0;
    t44 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t43, 0x3cu, rd32(COW_IMG(0x10456e68u)), loc_4);
    return (t44 & 0xffffff00u) | 1u;
L_100257a2: ;
    t37 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(t37) + 0xfcu), rd32(t37), 4, t37, 1u, 1u, 5u);
    t38 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t38) + 0xfcu), rd32(t38), 4, t38, 1u, 2u, 1u);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t39) + 0xfcu), rd32(t39), 4, t39, 1u, 3u, 3u);
    t40 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t40) + 0xfcu), rd32(t40), 4, t40, 1u, 4u, 6u);
    t41 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    cow_thiscall(g, rd32(rd32(t41) + 0xfcu), rd32(t41), 4, t41, 1u, 5u, 1u);
    loc_4 = 3u;
    goto L_1002581b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100255c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100255c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
