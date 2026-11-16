/* f_0x10160a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10160a70(Guest* g)
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10125360u), in_eax, t1, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        ecx = t2;
        edx = t3;
        goto L_10160a96;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    ecx = t2;
    edx = t3;
    if (eax != 0x70u) goto L_10160bab;
L_10160a96: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1021ed90u), g->eax, g->ecx, edx, 1, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e2cu)), 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e30u)), 0);
    t7 = g->edx;
    if (rd32(COW_IMG(0x10666e34u)) == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10666e34u));
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10666e38u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e38u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    if (rd32(COW_IMG(0x10666e3cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e3cu));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    if (rd32(COW_IMG(0x10666e40u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e40u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x10666e44u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e44u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    if (rd32(COW_IMG(0x10666e48u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e48u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    if (rd32(COW_IMG(0x10666e4cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    if (rd32(COW_IMG(0x10666e50u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e50u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    if (rd32(COW_IMG(0x10666e54u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e54u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    if (rd32(COW_IMG(0x10666e58u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e58u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t26 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
    if (rd32(COW_IMG(0x10666e5cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e5cu));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    if (rd32(COW_IMG(0x10666e60u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e60u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t30 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    if (rd32(COW_IMG(0x10666e64u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e64u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t32 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    if (rd32(COW_IMG(0x10666e68u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e68u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t34 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    if (rd32(COW_IMG(0x10666e6cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e6cu));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t36 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    if (rd32(COW_IMG(0x10666e70u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10666e70u));
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t38 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t39 = g->ecx;
        t40 = g->edx;
        eax = t38;
        ecx = t39;
        edx = t40;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t41 = cow_fastcall(g, COW_IMG(0x1022b290u), ecx, edx, 0);
    t42 = g->ecx;
    t43 = g->edx;
    g->ecx = t42;
    g->edx = t43;
    cow_stdcall(g, COW_IMG(0x10222df0u), 0);
    t44 = g->ecx;
    t45 = g->edx;
    ecx = t44;
    edx = t45;
L_10160bab: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t46 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 != 0u)
    {
        ecx = t47;
        edx = t48;
        goto L_10160c17;
    }
    eax = t46;
    edx = t48;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10160c17;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    wr32(sp0 - 0x10u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t49 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    if ((uint8_t)t49 != 0u)
    {
        ecx = t50;
        edx = t51;
        goto L_10160c17;
    }
    edx = t51;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        ecx = t53;
        edx = t54;
        goto L_10160c17;
    }
    eax = t52;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0x58u);
    wr32(sp0 - 4u, 0x2au);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), self, 3, sp0 - 8u, 0u, 0u);
    t55 = g->ecx;
    t56 = g->edx;
    wr32(sp0 - 0x10u, 0x58u);
    g->eax = 0x58u;
    g->edx = t56;
    t57 = cow_thiscall_cdecl(g, COW_IMG(0x1021ee00u), t55, 1, 0x58u);
    t58 = g->ecx;
    t59 = g->edx;
    g->esp = sp0;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t59;
    return cow_tailcall(g, COW_IMG(0x1021edc0u), t57, t58, t59);
L_10160c17: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t60 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t61 = g->edx;
    if (t60 != 3u)
    {
        eax = t60;
        edx = t61;
        goto L_10160c57;
    }
    eax = t60;
    edx = t61;
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10160c4e;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    wr32(sp0 - 0x10u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t62 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t63 = g->ecx;
    t64 = g->edx;
    if ((uint8_t)t62 != 0u)
    {
        eax = t62;
        ecx = t63;
        edx = t64;
        goto L_10160c4e;
    }
    edx = t64;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t65 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
    t66 = g->ecx;
    t67 = g->edx;
    if ((uint8_t)t65 == 0u)
    {
        eax = t65;
        edx = t67;
        goto L_10160c57;
    }
    eax = t65;
    ecx = t66;
    edx = t67;
L_10160c4e: ;
    g->esp = sp0;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1021edd0u), eax, ecx, edx);
L_10160c57: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10160a70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
