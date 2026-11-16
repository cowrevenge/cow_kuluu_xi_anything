/* f_0x102efb87 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102efb87(Guest* g)
{
    uint32_t eax;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        t1 = rd32(sp0 + 8u);
        wr32(sp0 - 0x54u, t1);
        wr32(sp0 - 0x58u, arg1);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x48u;
        t2 = cow_cdecl(g, COW_IMG(0x102f2146u), 4, arg1, t1, in_edi, in_esi);
        t3 = g->edx;
        eax = t2;
        ecx = rd32(sp0 - 0x54u);
        edx = t3;
    }
    if (arg3 != 0u)
    {
        wr32(sp0 - 0x54u, arg3);
        wr32(sp0 - 0x58u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x48u;
        t4 = cow_cdecl(g, COW_IMG(0x102f2146u), 4, arg1, arg3, in_edi, in_esi);
        t5 = g->edx;
        eax = t4;
        ecx = arg3;
        edx = t5;
    }
    t6 = rd32(arg1 + 0x9cu);
    wr32(sp0 - 0x54u, t6);
    wr32(sp0 - 0x58u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t7 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, ecx, edx, 1, 2, arg1, t6);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(arg1 + 0xdcu);
    wr32(sp0 - 0x5cu, t10);
    wr32(sp0 - 0x60u, arg1);
    g->esp = sp0 - 0x58u;
    t11 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, t8, t9, 1, 2, arg1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd32(arg1 + 0xd8u);
    wr32(sp0 - 0x64u, t14);
    wr32(sp0 - 0x68u, arg1);
    g->esp = sp0 - 0x60u;
    t15 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, t12, t13, 1, 2, arg1, t14);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(arg1 + 0x174u);
    wr32(sp0 - 0x6cu, t18);
    wr32(sp0 - 0x70u, arg1);
    g->esp = sp0 - 0x68u;
    t19 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, t16, t17, 1, 2, arg1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    t22 = rd32(arg1 + 0x178u);
    wr32(sp0 - 0x74u, t22);
    wr32(sp0 - 0x78u, arg1);
    g->esp = sp0 - 0x70u;
    t23 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, t20, t21, 1, 2, arg1, t22);
    t24 = g->ecx;
    t25 = g->edx;
    t26 = rd32(arg1 + 0x138u);
    wr32(sp0 - 0x7cu, t26);
    wr32(sp0 - 0x80u, arg1);
    g->esp = sp0 - 0x78u;
    t27 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, t24, t25, 1, 2, arg1, t26);
    t28 = g->ecx;
    t29 = g->edx;
    if ((rd8(arg1 + 0x5du) & 0x10u) == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    else
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        t30 = rd32(arg1 + 0x104u);
        wr32(sp0 - 0x54u, t30);
        wr32(sp0 - 0x58u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t31 = cow_call_regs(g, COW_IMG(0x102f20dcu), g->eax, ecx, edx, 1, 2, arg1, t30);
        t32 = g->edx;
        eax = t31;
        ecx = rd32(sp0 - 0x54u);
        edx = t32;
    }
    if ((rd8(arg1 + 0x5du) & 0x20u) != 0u)
    {
        t33 = rd32(arg1 + 0x15cu);
        wr32(sp0 - 0x54u, t33);
        wr32(sp0 - 0x58u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x50u;
        t34 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, ecx, edx, 1, 2, arg1, t33);
        t35 = g->edx;
        eax = t34;
        ecx = rd32(sp0 - 0x54u);
        edx = t35;
    }
    if (rd32(arg1 + 0x144u) != 0u)
    {
        wr32(sp0 - 0x54u, 8u);
        if ((int32_t)(1u << (8u - rd32(arg1 + 0x12cu) & 0x1fu)) <= 0)
        {
            ecx = 8u - rd32(arg1 + 0x12cu);
            goto L_102efc58;
        }
        ecx = 8u - rd32(arg1 + 0x12cu);
        esi = 1u << (8u - rd32(arg1 + 0x12cu) & 0x1fu);
        edi = 0u;
L_102efc42: ;
        t36 = rd32(edi * 4u + rd32(arg1 + 0x144u));
        wr32(sp0 - 0x54u, t36);
        wr32(sp0 - 0x58u, arg1);
        g->eax = rd32(arg1 + 0x144u);
        t37 = rd32(arg1 + 0x144u);
        g->esp = sp0 - 0x50u;
        t38 = cow_call_regs(g, COW_IMG(0x102f766du), g->eax, ecx, edx, 1, 2, arg1, t36);
        t39 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)esi)
        {
            ecx = rd32(sp0 - 0x54u);
            edx = t39;
            edi = edi + 1u;
            goto L_102efc42;
        }
        eax = t38;
        ecx = rd32(sp0 - 0x54u);
        edx = t39;
L_102efc58: ;
        t40 = rd32(arg1 + 0x144u);
        wr32(sp0 - 0x54u, t40);
        wr32(sp0 - 0x58u, arg1);
        g->esp = sp0 - 0x50u;
        cow_call_regs(g, COW_IMG(0x102f766du), g->eax, ecx, edx, 1, 2, arg1, t40);
        t41 = g->edx;
        ecx = rd32(sp0 - 0x54u);
        edx = t41;
    }
    wr32(sp0 - 0x54u, arg1 + 0x64u);
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x102f6ffeu), g->eax, ecx, edx, 1, 3, arg1 + 0x64u, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    wr32(sp0 - 0x54u, 0x10u);
    wr32(sp0 - 0x54u, 0x67u);
    t42 = rd32(arg1 + 0x48u);
    t43 = rd32(arg1 + 0x40u);
    esi = arg1;
    edi = sp0 - 0x44u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t44 = rd32(arg1 + 0x44u);
    wr32(sp0 + 8u, t42);
    edi = arg1;
    eax = 0u;
    ecx = 0x67u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x54u, 0x10u);
    t45 = rd32(sp0 + 8u);
    wr32(arg1 + 0x44u, t44);
    esi = sp0 - 0x44u;
    edi = arg1;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t46 = rd32(sp0 - 0x4cu);
    t47 = rd32(sp0 - 0x50u);
    wr32(arg1 + 0x40u, t43);
    wr32(arg1 + 0x48u, t45);
    g->ebx = rd32(sp0 - 0x48u);
    g->esi = t46;
    g->edi = t47;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t43;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102efb87(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102efb87(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
