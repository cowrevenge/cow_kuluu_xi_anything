/* f_0x100fbd40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fbd40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_54;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd16(arg3 + 0xau);
    wr16(sp0 - 0x4cu, (uint16_t)t1);
    if ((rd8(arg3 + 0xcu) & 0x10u) == 0u)
    {
        eax = (((eax & 0xffff0000u) | t1) & 0xffffff00u) | rd8(arg3 + 0xcu);
        edx = in_edx;
        goto L_100fbd7b;
    }
    eax = (((eax & 0xffff0000u) | t1) & 0xffffff00u) | rd8(arg3 + 0xcu);
    t2 = rd32(arg3 + 4u);
    wr32(sp0 - 0x60u, t2);
    g->eax = eax;
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t3 = cow_cdecl(g, COW_IMG(0x100e0b20u), 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3;
        edx = t5;
        goto L_100fbea8;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
L_100fbd7b: ;
    wr32(sp0 - 0x60u, COW_IMG(0x1036239cu));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t6 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x1036239cu), in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t9 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x54u, t9);
        eax = t9;
        ecx = t10;
        edx = t11;
        loc_54 = t9;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362390u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t12 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362390u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t15 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x54u, t15);
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_54 = t15;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362388u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t18 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362388u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t21 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t22 = g->ecx;
        t23 = g->edx;
        wr32(sp0 - 0x48u, t21);
        eax = t21;
        ecx = t22;
        edx = t23;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362380u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t24 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362380u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
    }
    else
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t27 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t28 = g->ecx;
        t29 = g->edx;
        wr32(sp0 - 0x44u, t27);
        eax = t27;
        ecx = t28;
        edx = t29;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362378u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t30 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362378u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        ecx = t31;
        edx = t32;
    }
    else
    {
        eax = t30;
        ecx = t31;
        edx = t32;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t33 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t34 = g->ecx;
        t35 = g->edx;
        wr32(sp0 - 0x40u, t33);
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362370u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t36 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362370u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
    }
    else
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t39 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t40 = g->ecx;
        t41 = g->edx;
        wr32(sp0 - 0x3cu, t39);
        eax = t39;
        ecx = t40;
        edx = t41;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362368u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t42 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362368u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 == 0u)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
    }
    else
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        wr32(sp0 - 0x60u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t45 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, eax);
        t46 = g->ecx;
        t47 = g->edx;
        wr8(sp0 - 4u, (uint8_t)t45);
        eax = t45;
        ecx = t46;
        edx = t47;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362360u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t48 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362360u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 == 0u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    else
    {
        eax = t48;
        ecx = t49;
        wr32(sp0 - 0x60u, 0x18u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        g->eax = eax;
        g->edx = sp0 - 0x34u;
        g->esp = sp0 - 0x4cu;
        t51 = cow_thiscall_cdecl(g, COW_IMG(0x100fc8e0u), ecx, 7, sp0 - 0x34u, eax, 0x18u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
        t52 = g->ecx;
        t53 = g->edx;
        eax = t51;
        ecx = t52;
        edx = t53;
    }
    wr32(sp0 - 0x60u, COW_IMG(0x10362358u));
    wr32(sp0 - 0x64u, arg3 + 0xdu);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x54u;
    t54 = cow_call_regs(g, COW_IMG(0x100fc8a0u), g->eax, g->ecx, edx, 1, 4, arg3 + 0xdu, COW_IMG(0x10362358u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t55 = g->ecx;
    t56 = g->edx;
    if (t54 == 0u)
    {
        eax = t54;
        edx = t56;
    }
    else
    {
        eax = t54;
        ecx = t55;
        edx = t56;
        wr32(sp0 - 0x60u, 0x18u);
        wr32(sp0 - 0x64u, eax);
        wr32(sp0 - 0x68u, sp0 - 0x1cu);
        g->eax = sp0 - 0x1cu;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t57 = cow_thiscall_cdecl(g, COW_IMG(0x100fc8e0u), ecx, 7, sp0 - 0x1cu, eax, 0x18u, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
        t58 = g->edx;
        eax = t57;
        edx = t58;
    }
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t59 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t60 = g->edx;
    eax = t59;
    edx = t60;
L_100fbea8: ;
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fbd40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fbd40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
