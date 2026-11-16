/* f_0x10134b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10134b20(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10134ca5;
    }
    t1 = rd32(rd32(COW_IMG(0x10666e50u)));
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
        t4 = g->edx;
        edx = t4;
    }
    t5 = rd32(rd32(COW_IMG(0x10666e54u)));
    g->eax = rd32(COW_IMG(0x10666e54u));
    g->ecx = t5;
    g->edx = edx;
    t6 = rd32(COW_IMG(0x10666e54u));
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        ecx = t8;
    }
    else
    {
        eax = t7;
        edx = t9;
        t10 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t10, 2, 5u, 4u);
        t11 = g->ecx;
        ecx = t11;
    }
    t12 = rd32(rd32(COW_IMG(0x10666e58u)));
    g->eax = rd32(COW_IMG(0x10666e58u));
    g->ecx = ecx;
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10666e58u));
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t12);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        ecx = t15;
        edx = t16;
    }
    else
    {
        eax = t14;
        edx = t16;
        g->edx = edx;
        t17 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t17, 2, 5u, 5u);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
    }
    t20 = rd32(rd32(COW_IMG(0x10666e5cu)));
    g->eax = t20;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t20);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        edx = t22;
    }
    else
    {
        eax = t21;
        edx = t22;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 6u);
        t23 = g->edx;
        edx = t23;
    }
    t24 = rd32(rd32(COW_IMG(0x10666e60u)));
    g->eax = rd32(COW_IMG(0x10666e60u));
    g->ecx = t24;
    g->edx = edx;
    t25 = rd32(COW_IMG(0x10666e60u));
    g->esp = sp0 - 4u;
    t26 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        ecx = t27;
    }
    else
    {
        eax = t26;
        edx = t28;
        t29 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t29, 2, 5u, 7u);
        t30 = g->ecx;
        ecx = t30;
    }
    t31 = rd32(rd32(COW_IMG(0x10666e64u)));
    g->eax = rd32(COW_IMG(0x10666e64u));
    g->ecx = ecx;
    g->edx = t31;
    t32 = rd32(COW_IMG(0x10666e64u));
    g->esp = sp0 - 4u;
    t33 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t31);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 != 0u)
    {
        ecx = t34;
        edx = t35;
    }
    else
    {
        eax = t33;
        edx = t35;
        g->edx = edx;
        t36 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t36, 2, 5u, 8u);
        t37 = g->ecx;
        t38 = g->edx;
        ecx = t37;
        edx = t38;
    }
    t39 = rd32(rd32(COW_IMG(0x10666e68u)));
    g->eax = t39;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t40 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t39);
    t41 = g->edx;
    if ((uint8_t)t40 != 0u)
    {
        edx = t41;
    }
    else
    {
        eax = t40;
        edx = t41;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 9u);
        t42 = g->edx;
        edx = t42;
    }
    if (rd32(self + 0x14u) > 0x10u)
    {
        eax = rd32(self + 0x14u);
        goto L_10134ca5;
    }
    eax = rd32(self + 0x14u);
    t43 = rd32(COW_IMG(0x10134ca8u) + rd8(COW_IMG(0x10134cd0u) + eax) * 4u);
    switch (t43 - RD)
    {
    case 0x10134c29u: goto L_10134c29;
    case 0x10134c37u: goto L_10134c37;
    case 0x10134c45u: goto L_10134c45;
    case 0x10134c53u: goto L_10134c53;
    case 0x10134c61u: goto L_10134c61;
    case 0x10134c6fu: goto L_10134c6f;
    case 0x10134c7du: goto L_10134c7d;
    case 0x10134c8bu: goto L_10134c8b;
    case 0x10134c99u: goto L_10134c99;
    case 0x10134ca5u: goto L_10134ca5;
    default: rt_fatal(g, COW_IMG(0x10134c22u), "switch");
    }
    return 0;
L_10134c29: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
    t61 = g->edx;
    g->edx = t61;
    return t60;
L_10134c37: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 2u, 0u);
    t59 = g->edx;
    g->edx = t59;
    return t58;
L_10134c45: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t56 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 3u, 0u);
    t57 = g->edx;
    g->edx = t57;
    return t56;
L_10134c53: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t54 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 4u, 0u);
    t55 = g->edx;
    g->edx = t55;
    return t54;
L_10134c61: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t52 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 5u, 0u);
    t53 = g->edx;
    g->edx = t53;
    return t52;
L_10134c6f: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t50 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 6u, 0u);
    t51 = g->edx;
    g->edx = t51;
    return t50;
L_10134c7d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t48 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 7u, 0u);
    t49 = g->edx;
    g->edx = t49;
    return t48;
L_10134c8b: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t46 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 8u, 0u);
    t47 = g->edx;
    g->edx = t47;
    return t46;
L_10134c99: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t44 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 9u, 0u);
    t45 = g->edx;
    eax = t44;
    edx = t45;
L_10134ca5: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10134b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
