/* f_0x1010b200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1010b200(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 4304u);

    wr32(sp0 - 0x10b8u, in_ebx);
    wr32(sp0 - 0x10bcu, in_esi);
    wr32(sp0 - 0x10c0u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10bcu;
    cow_thiscall(g, COW_IMG(0x10112550u), self, 1, 0u);
    t1 = g->edx;
    wr32(self + 0x10u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x20u, self + 0x10u);
    wr32(self + 0x18u, self + 0x1cu);
    wr32(self + 8u, COW_IMG(0x10332e50u));
    wr8(self + 0xcu, 1u);
    wr16(self + 0xeu, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x44u, self + 0x34u);
    wr32(self + 0x3cu, self + 0x40u);
    wr32(self + 0x2cu, COW_IMG(0x10332e54u));
    wr8(self + 0x30u, 1u);
    wr16(self + 0x32u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x68u, self + 0x58u);
    wr32(self + 0x60u, self + 0x64u);
    wr32(self + 0x50u, COW_IMG(0x10332e58u));
    wr8(self + 0x54u, 1u);
    wr16(self + 0x56u, 0u);
    wr32(sp0 - 0x10c0u, arg1);
    wr32(self, COW_IMG(0x10332e5cu));
    g->edx = (t1 & 0xffffff00u) | 1u;
    cow_thiscall(g, COW_IMG(0x1010c550u), sp0 - 0x1018u, 1, arg1);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x10a8u, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x1010c590u), t3, sp0 - 0x1018u, g->edx, 1, 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_1010b3a3;
    }
    eax = t5;
L_1010b2cd: ;
    wr32(sp0 - 0x10c0u, 0u);
    wr32(sp0 - 0x10c4u, sp0 - 0x10a8u);
    wr32(sp0 - 0x10c8u, 0x20u);
    wr32(sp0 - 0x10ccu, sp0 - 0x1098u);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = sp0 - 0x1098u;
    g->esp = sp0 - 0x10bcu;
    t7 = cow_thiscall(g, COW_IMG(0x10109c60u), eax, 4, sp0 - 0x1098u, 0x20u, sp0 - 0x10a8u, 0u);
    t8 = g->edx;
    if ((uint16_t)t7 <= 2u)
    {
        eax = t7;
        edx = t8;
        goto L_1010b347;
    }
    edx = t8;
    t9 = rd32(sp0 - 0x1098u);
    wr32(sp0 - 0x10c0u, t9);
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t10 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x10a0u, 1, t9);
    t11 = g->edx;
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf24u));
    g->ebx = 0u;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10109570u), t10, 1, COW_IMG(0x1036bf24u));
    t13 = g->edx;
    g->edx = t13;
    t14 = rd32(sp0 - 0x10b4u);
    t15 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10a0u, 0);
    t16 = g->edx;
    if (rd8(sp0 - 0x10b1u) == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_1010b347;
    }
    edx = t16;
    t17 = rd32(sp0 - 0x1094u);
    wr32(sp0 - 0x10c0u, t17);
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t18 = cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 0x10b0u, 1, t17);
    t19 = g->edx;
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf1cu));
    g->ebx = 0u;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10109570u), t18, 1, COW_IMG(0x1036bf1cu));
    t21 = g->edx;
    g->edx = t21;
    t22 = rd32(sp0 - 0x10b4u);
    t23 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10b0u, 0);
    t24 = g->ecx;
    t25 = g->edx;
    if (rd8(sp0 - 0x10b1u) != 0u)
    {
        eax = t23;
        ecx = t24;
        goto L_1010b35d;
    }
    eax = t23;
    edx = t25;
L_1010b347: ;
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t37 = cow_call_regs(g, COW_IMG(0x1010c590u), eax, sp0 - 0x1018u, g->edx, 1, 0);
    t38 = g->edx;
    if (t37 != 0u)
    {
        eax = t37;
        goto L_1010b2cd;
    }
    eax = t37;
    edx = t38;
L_1010b3a3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10bcu;
    t39 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10a8u, 0);
    t40 = g->edx;
    cow_fastcall(g, COW_IMG(0x1010c520u), sp0 - 0x1018u, t40, 0);
    g->ebx = in_ebx;
    return self;
L_1010b35d: ;
    t26 = rd32(sp0 - 0x1090u);
    wr32(sp0 - 0x10c0u, t26);
    g->eax = eax;
    g->edx = t26;
    g->esp = sp0 - 0x10bcu;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t26);
    t28 = g->edx;
    wr32(self + 4u, t27);
    wr32(sp0 - 0x10c0u, COW_IMG(0x1036bf1cu));
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x10109140u), sp0 - 0x10b0u, 1, COW_IMG(0x1036bf1cu));
    t30 = g->edx;
    wr32(sp0 - 0x10c0u, t29);
    wr32(sp0 - 0x10c4u, sp0 - 0x1018u);
    wr32(sp0 - 0x10c8u, arg2);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101125b0u), self, 3, arg2, sp0 - 0x1018u, t29);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x10b0u, 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x1010b6d0u), self, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    goto L_1010b3a3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010b200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010b200(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
