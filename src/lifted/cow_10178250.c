/* f_0x10178250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10178250(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x1cu, 0x20000000u);
    wr32(sp0 - 0x18u, 0x40020000u);
    wr32(sp0 - 0x14u, 0x40020003u);
    wr32(sp0 - 0x10u, 0x40040005u);
    wr32(sp0 - 0xcu, 0x40010007u);
    wr32(sp0 - 8u, 0x4002000fu);
    wr32(sp0 - 4u, 0xffffffffu);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x24u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x2cu, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x34u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x3cu, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x44u, 0);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x10177040u), sp0 - 0x4cu, 0);
    t11 = g->edx;
    wr32(self + 0x39498u, 0u);
    wr32(self + 0x3949cu, 0u);
    if (rd32(COW_IMG(0x10456bf0u)) == 0u)
    {
        eax = 0u;
        edx = t11;
        goto L_10178496;
    }
    edx = t11;
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x909u) != 1u)
    {
        eax = 1u;
        goto L_10178496;
    }
    ecx = rd32(COW_IMG(0x1045666cu));
    if (rd8(ecx + 0x90au) != 1u)
    {
        eax = 1u;
        goto L_10178496;
    }
    wr32(self + 0x39498u, 1u);
    wr32(self + 0x3949cu, 1u);
    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_edi);
    t12 = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u);
    wr32(sp0 - 0x60u, t12);
    wr32(sp0 - 0x64u, 0x13u);
    wr32(sp0 - 0x68u, COW_IMG(0x10376ff8u));
    g->esp = sp0 - 0x5cu;
    cow_call_regs(g, COW_IMG(0x10177090u), rd32(COW_IMG(0x1045666cu)), sp0 - 0x24u, g->edx, 0, 3, COW_IMG(0x10376ff8u), 0x13u, t12);
    wr32(sp0 - 0x60u, self + 0x3946cu);
    wr32(sp0 - 0x64u, sp0 - 0x1cu);
    g->edx = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10177240u), sp0 - 0x24u, 2, sp0 - 0x1cu, self + 0x3946cu);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = (t13 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u);
    wr32(sp0 - 0x60u, t15);
    wr32(sp0 - 0x64u, 0x21u);
    wr32(sp0 - 0x68u, COW_IMG(0x10377048u));
    cow_call_regs(g, COW_IMG(0x10177090u), rd32(COW_IMG(0x1045666cu)), sp0 - 0x2cu, g->edx, 0, 3, COW_IMG(0x10377048u), 0x21u, t15);
    wr32(sp0 - 0x60u, self + 0x39470u);
    wr32(sp0 - 0x64u, sp0 - 0x1cu);
    g->edx = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10177240u), sp0 - 0x2cu, 2, sp0 - 0x1cu, self + 0x39470u);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = (t16 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u);
    wr32(sp0 - 0x60u, t18);
    wr32(sp0 - 0x64u, 0x25u);
    wr32(sp0 - 0x68u, COW_IMG(0x103770d0u));
    cow_call_regs(g, COW_IMG(0x10177090u), rd32(COW_IMG(0x1045666cu)), sp0 - 0x34u, g->edx, 0, 3, COW_IMG(0x103770d0u), 0x25u, t18);
    wr32(sp0 - 0x60u, self + 0x39474u);
    wr32(sp0 - 0x64u, sp0 - 0x1cu);
    g->edx = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10177240u), sp0 - 0x34u, 2, sp0 - 0x1cu, self + 0x39474u);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = (t19 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u);
    wr32(sp0 - 0x60u, t21);
    wr32(sp0 - 0x64u, 0x29u);
    wr32(sp0 - 0x68u, COW_IMG(0x10377168u));
    cow_call_regs(g, COW_IMG(0x10177090u), rd32(COW_IMG(0x1045666cu)), sp0 - 0x3cu, g->edx, 0, 3, COW_IMG(0x10377168u), 0x29u, t21);
    wr32(sp0 - 0x60u, self + 0x39478u);
    wr32(sp0 - 0x64u, sp0 - 0x1cu);
    g->edx = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10177240u), sp0 - 0x3cu, 2, sp0 - 0x1cu, self + 0x39478u);
    t22 = g->ecx;
    t23 = g->edx;
    t24 = (t22 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x920u);
    wr32(sp0 - 0x60u, t24);
    wr32(sp0 - 0x64u, 0x2du);
    wr32(sp0 - 0x68u, COW_IMG(0x10377210u));
    cow_call_regs(g, COW_IMG(0x10177090u), rd32(COW_IMG(0x1045666cu)), sp0 - 0x44u, g->edx, 0, 3, COW_IMG(0x10377210u), 0x2du, t24);
    wr32(sp0 - 0x60u, self + 0x3947cu);
    wr32(sp0 - 0x64u, sp0 - 0x1cu);
    cow_thiscall(g, COW_IMG(0x10177240u), sp0 - 0x44u, 2, sp0 - 0x1cu, self + 0x3947cu);
    t25 = rd32(self + 0x3946cu);
    t26 = rd32(self + 0x39470u);
    t27 = rd32(self + 0x39474u);
    wr32(self + 0x39480u, t25);
    t28 = rd32(self + 0x39478u);
    wr32(self + 0x39484u, t26);
    t29 = rd32(self + 0x3947cu);
    wr32(self + 0x39488u, t27);
    wr32(self + 0x3948cu, t28);
    wr32(self + 0x39490u, t29);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 9u);
    wr32(sp0 - 0x68u, COW_IMG(0x103772c4u));
    g->edx = t27;
    cow_call_regs(g, COW_IMG(0x10177090u), t28, sp0 - 0x4cu, g->edx, 0, 3, COW_IMG(0x103772c4u), 9u, 0u);
    t30 = g->edx;
    wr32(sp0 - 0x60u, self + 0x39494u);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101772e0u), sp0 - 0x4cu, 1, self + 0x39494u);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x4cu, 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x44u, 0);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x3cu, 0);
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x34u, 0);
    t40 = g->edx;
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x2cu, 0);
    t42 = g->edx;
    cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x24u, 0);
    return;
L_10178496: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t43 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x4cu, 0);
    t44 = g->edx;
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x44u, 0);
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x3cu, 0);
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x34u, 0);
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x2cu, 0);
    t52 = g->edx;
    cow_thiscall(g, COW_IMG(0x10177070u), sp0 - 0x24u, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10178250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10178250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
