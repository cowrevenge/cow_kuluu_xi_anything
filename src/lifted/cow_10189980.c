/* f_0x10189980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10189980(Guest* g)
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

    if (rd8(COW_IMG(0x1047bf18u)) != 0u)
    {
        t16 = rd32(COW_IMG(0x1065ca54u));
        wr32(self + 4u, t16);
        t17 = rd8(COW_IMG(0x1065ca4cu));
        wr8(self + 0x10u, (uint8_t)t17);
        t18 = rd32(COW_IMG(0x1065ca50u));
        wr32(self + 8u, t18);
        t19 = rd8(COW_IMG(0x1065ca48u));
        wr8(self + 0x11u, (uint8_t)t19);
        eax = (t16 & 0xffffff00u) | t19;
        ecx = (self & 0xffffff00u) | t17;
        edx = t18;
    }
    else
    {
        t1 = rd32(arg2 + 4u);
        t2 = rd32(arg1 + 4u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 4u, t2, t1, arg3);
        t3 = rd32(arg2 + 8u);
        t4 = rd32(arg1 + 8u);
        g->ecx = t3;
        g->edx = t4;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 8u, t4, t3, arg3);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = (t5 & 0xffffff00u) | rd8(arg2 + 0x10u);
        t8 = (t6 & 0xffffff00u) | rd8(arg1 + 0x10u);
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10189870u), 6, self + 0x10u, t8, t7, arg3, self + 8u, t4);
        t9 = g->ecx;
        t10 = g->edx;
        t11 = (t9 & 0xffffff00u) | rd8(arg2 + 0x11u);
        t12 = (t10 & 0xffffff00u) | rd8(arg1 + 0x11u);
        g->eax = self + 0x11u;
        g->ecx = t11;
        g->edx = t12;
        g->esp = sp0 - 0x38u;
        t13 = cow_cdecl(g, COW_IMG(0x10189870u), 6, self + 0x11u, t12, t11, arg3, self + 0x10u, t8);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    g->ebx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 4, self, arg1, arg2, arg3);
    t20 = rd32(arg2 + 4u);
    t21 = rd32(arg1 + 4u);
    g->edx = t21;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 4u, t21, t20, arg3);
    t22 = g->edx;
    t23 = rd32(arg2 + 8u);
    t24 = rd32(arg1 + 8u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 8u, t24, t23, arg3);
    t25 = rd32(arg2 + 0xcu);
    t26 = rd32(arg1 + 0xcu);
    g->eax = t26;
    g->ecx = self + 0xcu;
    g->edx = t25;
    g->esp = sp0 - 0x40u;
    t27 = cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0xcu, t26, t25, arg3);
    t28 = g->ecx;
    t29 = g->edx;
    t30 = (t29 & 0xffffff00u) | rd8(arg2 + 0x10u);
    t31 = (t27 & 0xffffff00u) | rd8(arg1 + 0x10u);
    g->ecx = t28;
    g->edx = t30;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10189870u), 6, self + 0x10u, t31, t30, arg3, in_edi, in_esi);
    t32 = g->ecx;
    t33 = g->edx;
    t34 = (t32 & 0xffffff00u) | rd8(arg2 + 0x11u);
    t35 = (t33 & 0xffffff00u) | rd8(arg1 + 0x11u);
    g->eax = self + 0x11u;
    g->ecx = t34;
    g->esp = sp0 - 0x18u;
    t36 = cow_cdecl(g, COW_IMG(0x10189870u), 6, self + 0x11u, t35, t34, arg3, self + 0x10u, t31);
    t37 = g->ecx;
    t38 = (t36 & 0xffffff00u) | rd8(arg2 + 0x12u);
    t39 = (t37 & 0xffffff00u) | rd8(arg1 + 0x12u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10189870u), 6, self + 0x12u, t39, t38, arg3, self + 0x11u, t35);
    t40 = rd32(arg2 + 0x1cu);
    t41 = rd32(arg1 + 0x1cu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x1cu, t41, t40, arg3);
    g->ebx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 4, self + 0x20u, arg1 + 0x20u, arg2 + 0x20u, arg3);
    g->ebx = arg1;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x24u, arg1 + 0x24u, arg2 + 0x24u, arg3, self + 0x20u, arg1 + 0x20u, arg2 + 0x20u, arg3, in_edi, in_esi, in_ebp, in_ebx);
    g->ebx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x28u, arg1 + 0x28u, arg2 + 0x28u, arg3, self + 0x24u, arg1 + 0x24u, arg2 + 0x24u, arg3, self + 0x20u, arg1 + 0x20u, arg2 + 0x20u, arg3);
    g->ebx = arg1;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x2cu, arg1 + 0x2cu, arg2 + 0x2cu, arg3, self + 0x28u, arg1 + 0x28u, arg2 + 0x28u, arg3, self + 0x24u, arg1 + 0x24u, arg2 + 0x24u, arg3);
    g->ebx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 4, self + 0x30u, arg1 + 0x30u, arg2 + 0x30u, arg3);
    g->ebx = arg1;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x34u, arg1 + 0x34u, arg2 + 0x34u, arg3, self + 0x30u, arg1 + 0x30u, arg2 + 0x30u, arg3, in_edi, in_esi, in_ebp, in_ebx);
    g->ebx = arg1;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x38u, arg1 + 0x38u, arg2 + 0x38u, arg3, self + 0x34u, arg1 + 0x34u, arg2 + 0x34u, arg3, self + 0x30u, arg1 + 0x30u, arg2 + 0x30u, arg3);
    g->ebx = arg1;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189750u), 12, self + 0x3cu, arg1 + 0x3cu, arg2 + 0x3cu, arg3, self + 0x38u, arg1 + 0x38u, arg2 + 0x38u, arg3, self + 0x34u, arg1 + 0x34u, arg2 + 0x34u, arg3);
    t42 = rd32(arg2 + 0x40u);
    t43 = rd32(arg1 + 0x40u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x40u, t43, t42, arg3);
    t44 = rd32(arg2 + 0x44u);
    t45 = rd32(arg1 + 0x44u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x44u, t45, t44, arg3);
    t46 = rd32(arg2 + 0x48u);
    t47 = rd32(arg1 + 0x48u);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x48u, t47, t46, arg3);
    t48 = rd32(arg2 + 0x4cu);
    t49 = rd32(arg1 + 0x4cu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x4cu, t49, t48, arg3);
    t50 = rd32(arg2 + 0x50u);
    t51 = rd32(arg1 + 0x50u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x50u, t51, t50, arg3);
    t52 = rd32(arg2 + 0x54u);
    t53 = rd32(arg1 + 0x54u);
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x54u, t53, t52, arg3);
    t54 = rd32(arg2 + 0x58u);
    t55 = rd32(arg1 + 0x58u);
    g->edx = self + 0x58u;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x58u, t55, t54, arg3);
    t56 = g->edx;
    t57 = rd32(arg2 + 0x5cu);
    t58 = rd32(arg1 + 0x5cu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10189810u), 4, self + 0x5cu, t58, t57, arg3);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
