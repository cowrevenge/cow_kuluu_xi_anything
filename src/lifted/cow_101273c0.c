/* f_0x101273c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101273c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 328u);

    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, in_edi);
    t1 = rd32(self + 0xcu);
    wr32(arg2 + 8u, t1);
    wr16(arg2, rd16(arg3));
    t2 = rd8(arg3 + 2u);
    wr8(arg2 + 0x13u, 1u);
    wr8(arg2 + 2u, (uint8_t)t2);
    t3 = rd8(arg2);
    wr32(arg2 + 0x38u, 0u);
    wr8(arg2 + 0x15u, 0u);
    if ((uint8_t)t3 == 0xceu)
    {
        ecx = ((arg3 | t2) & 0xffffff00u) | t3;
        goto L_10127411;
    }
    ecx = ((arg3 | t2) & 0xffffff00u) | t3;
    if ((rd8(arg2 + 1u) & 0x40u) != 0u) goto L_10127411;
    ebx = in_ebx & 0xffffff00u;
L_10127413: ;
    t4 = (arg2 & 0xffff0000u) | rd8(arg3);
    wr32(sp0 - 0x134u, t4);
    g->ecx = ecx;
    g->esp = sp0 - 0x130u;
    t5 = cow_call_regs(g, COW_IMG(0x10129cd0u), g->eax, g->ecx, t4, 1, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101276f1;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    t8 = rd8(eax + 3u);
    wr8(arg2 + 0x14u, (uint8_t)t8);
    t9 = (edx & 0xffff0000u) | rd8(eax + 2u);
    wr32(sp0 - 0x134u, t9);
    g->edx = t9;
    g->esp = sp0 - 0x130u;
    t10 = cow_call_regs(g, COW_IMG(0x10129d00u), eax, g->ecx, g->edx, 1, 1, t9);
    t11 = g->edx;
    wr32(arg2 + 4u, t10);
    t12 = rd8(arg2);
    wr8(arg2 + 0x12u, 0u);
    if (t12 - 1u > 0xddu) goto L_10127706;
    eax = t12 - 1u;
    edx = t11;
    t13 = rd32(COW_IMG(0x10127748u) + rd8(COW_IMG(0x10127788u) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x10127463u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127463;
    case 0x10127497u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127497;
    case 0x101274cbu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101274cb;
    case 0x101274ffu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101274ff;
    case 0x10127533u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127533;
    case 0x10127565u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127565;
    case 0x1012759bu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_1012759b;
    case 0x101275cfu: goto L_101275cf;
    case 0x101275d8u: goto L_101275d8;
    case 0x101275eeu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101275ee;
    case 0x10127621u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127621;
    case 0x1012764cu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_1012764c;
    case 0x10127677u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127677;
    case 0x10127693u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127693;
    case 0x101276c2u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101276c2;
    case 0x10127706u: goto L_10127706;
    default: rt_fatal(g, COW_IMG(0x1012745cu), "switch");
    }
    return 0;
L_10127411: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_10127413;
L_10127463: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t37 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t38 = g->edx;
        wr32(arg2 + 0x38u, t37);
        if ((uint8_t)ebx == 0u)
        {
            edx = t38;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if (rd8(self + 0x6404cu) & 1u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
L_10127706: ;
    wr32(sp0 - 0x134u, 0x20u);
    wr32(sp0 - 0x138u, sp0 - 0x120u);
    wr32(sp0 - 0x13cu, 0x80u);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x144u, arg1);
    g->edx = arg1;
    g->esp = sp0 - 0x130u;
    t40 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, arg1, sp0 - 0x100u, 0x80u, sp0 - 0x120u, 0x20u);
    t41 = g->edx;
    esi = sp0 - 0x120u;
    edi = arg2 + 0x18u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t42 = rd32(sp0 - 0x130u);
    wr8(arg2 + 0x37u, 0u);
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = t42;
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = t41;
    return t40;
L_10127497: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t34 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t35 = g->ecx;
        wr32(arg2 + 0x38u, t34);
        if ((uint8_t)ebx != 0u)
        {
            eax = t34;
            ecx = t35;
        }
        else
        {
            eax = t34;
            ecx = t35;
            t36 = rd8(arg2 + 0x15u);
            wr8(arg2 + 0x15u, (t36 & 0xf1u) | 1u);
            eax = (eax & 0xffffff00u) | (t36 & 0xf1u) | 1u;
        }
    }
    if ((rd8(self + 0x6404cu) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        wr8(arg2 + 0x12u, (uint8_t)eax);
    }
    goto L_10127706;
L_101274cb: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t32 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t33 = g->ecx;
        wr32(arg2 + 0x38u, t32);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t33;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd8(self + 0x6404cu) & 4u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101274ff: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t30 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t31 = g->edx;
        wr32(arg2 + 0x38u, t30);
        if ((uint8_t)ebx == 0u)
        {
            edx = t31;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd8(self + 0x6404cu) & 8u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127533: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t29 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t29);
        if ((uint8_t)ebx == 0u)
        {
            eax = t29;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd8(self + 0x6404cu) & 0x10u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127565: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t27 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t28 = g->ecx;
        wr32(arg2 + 0x38u, t27);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t28;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if (rd32(self + 0x6404cu) >> 8u & 1u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_1012759b: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t25 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t26 = g->edx;
        wr32(arg2 + 0x38u, t25);
        if ((uint8_t)ebx == 0u)
        {
            edx = t26;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd8(self + 0x6404cu) & 0x20u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101275cf: ;
    wr8(arg2 + 0x12u, 1u);
    goto L_10127706;
L_101275d8: ;
    if ((rd8(self + 0x6404cu) & 0x40u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101275ee: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t23 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t23);
        if ((uint8_t)ebx != 0u)
        {
            eax = t23;
        }
        else
        {
            eax = t23;
            t24 = rd8(arg2 + 0x15u);
            wr8(arg2 + 0x15u, (t24 & 0xf1u) | 1u);
            eax = (eax & 0xffffff00u) | (t24 & 0xf1u) | 1u;
        }
    }
    if ((int8_t)rd8(self + 0x6404cu) < 0)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127621: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t21 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t22 = g->ecx;
        wr32(arg2 + 0x38u, t21);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t22;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    goto L_10127706;
L_1012764c: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t19 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t20 = g->edx;
        wr32(arg2 + 0x38u, t19);
        if ((uint8_t)ebx == 0u)
        {
            edx = t20;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    goto L_10127706;
L_10127677: ;
    if ((uint8_t)ebx == 0u)
    {
        g->esp = sp0 - 0x130u;
        t18 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t18);
        wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
    }
    goto L_10127706;
L_10127693: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->esp = sp0 - 0x130u;
        t16 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t17 = g->ecx;
        wr32(arg2 + 0x38u, t16);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t17;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd32(self + 0x6404cu) >> 8u & 2u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101276c2: ;
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t14 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t15 = g->edx;
        wr32(arg2 + 0x38u, t14);
        if ((uint8_t)ebx == 0u)
        {
            edx = t15;
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    if ((rd32(self + 0x6404cu) >> 8u & 4u) != 0u)
    {
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101276f1: ;
    wr32(sp0 - 0x134u, 0u);
    wr8(arg2 + 0x14u, 0u);
    g->esp = sp0 - 0x130u;
    t39 = cow_call_regs(g, COW_IMG(0x10129d00u), eax, g->ecx, g->edx, 1, 1, 0u);
    wr32(arg2 + 4u, t39);
    wr8(arg2 + 0x12u, 0u);
    goto L_10127706;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101273c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101273c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
