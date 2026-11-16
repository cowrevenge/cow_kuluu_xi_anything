/* f_0x10117f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10117f40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 4u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1011b310u), arg1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_10117ff4;
    }
    ecx = t2;
    edx = t3;
    ebx = t1;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x50u, in_edi, in_esi);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_101180e3;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10119300u), eax, 0);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        goto L_101180e3;
    }
    eax = t6;
    edx = t7;
    edi = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101193d0u), edi, 1, ebx);
    t9 = g->edx;
    t10 = (t8 & 0xffffff00u) | rd8(self + 0x99u);
    g->eax = t10;
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x101193f0u), edi, 3, 0u, 0u, t10);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd8(self + 0x99u);
    wr16(self + 0x52u, rd16(edi + 0x1au));
    t15 = (t11 & 0xffffff00u) | t14;
    t16 = rd16(edi + 0x1cu);
    wr16(self + 0x54u, (uint16_t)t16);
    g->ebx = ebx;
    g->eax = t15;
    t17 = cow_fastcall(g, COW_IMG(0x10119550u), edi, (t13 & 0xffff0000u) | t16, 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd16(edi + 0x1cu);
    t21 = rd16(edi + 0x24u);
    wr16(self + 0x40u, (uint16_t)(t20 + t21));
    wr16(self + 0x3eu, (uint16_t)(rd16(edi + 0x1au) + rd16(edi + 0x22u)));
    wr16(self + 0x3cu, rd16(edi + 0x1cu));
    t22 = rd32(self + 0x3eu);
    wr16(self + 0x3au, rd16(edi + 0x1au));
    t23 = rd32(self + 0x3au);
    wr32(self + 0x42u, t23);
    wr32(self + 0x46u, t22);
    g->edx = t23;
    cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, edi);
    t24 = g->edx;
    edx = t24;
L_10117ff4: ;
    if ((int16_t)rd16(rd32(self + 4u) + 0x18u) <= 0) goto L_1011808e;
    ecx = rd32(self + 4u);
    ebp = 0u;
L_10118003: ;
    g->edx = ebp + 1u;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, COW_IMG(0x1011b2e0u), ecx, 1, ebp + 1u);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u)
    {
        edx = t27;
        goto L_1011808e;
    }
    ecx = t26;
    edx = t27;
    ebx = t25;
    g->esp = sp0 - 8u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x60u, in_edi, in_esi);
    t29 = g->edx;
    if (t28 == 0u)
    {
        eax = t28;
        goto L_101180e3;
    }
    eax = t28;
    edx = t29;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t30 = cow_thiscall(g, COW_IMG(0x101198d0u), eax, 1, self);
    t31 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        goto L_101180e3;
    }
    eax = t30;
    edx = t31;
    edi = t30;
    wr16(self + 0x58u, (uint16_t)(rd16(self + 0x58u) + 1u));
    g->ebx = ebx;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x10119a50u), edi, 1, ebx);
    t33 = (t32 & 0xffffff00u) | rd8(self + 0x99u);
    t34 = (uint32_t)(int16_t)rd16(self + 0x54u);
    t35 = (uint32_t)(int16_t)rd16(self + 0x52u);
    g->eax = t33;
    t36 = cow_fastcall(g, COW_IMG(0x10119ad0u), edi, t35, 3, t35, t34, t33);
    t37 = g->edx;
    t38 = (t36 & 0xffffff00u) | rd8(self + 0x99u);
    g->ebp = ebp;
    g->edx = t37;
    t39 = cow_call_regs(g, COW_IMG(0x10119c00u), t38, edi, g->edx, 0, 1, t38);
    t40 = g->edx;
    cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, edi);
    t41 = g->ecx;
    if (rd16(self + 0x4cu) == rd16(edi + 0x3au))
    {
        wr32(self + 8u, edi);
    }
    if ((int32_t)(ebp + 1u) < (int16_t)rd16(rd32(self + 4u) + 0x18u))
    {
        ecx = rd32(self + 4u);
        ebp = ebp + 1u;
        goto L_10118003;
    }
    edx = (uint32_t)(int16_t)rd16(rd32(self + 4u) + 0x18u);
L_1011808e: ;
    g->edx = edx;
    t42 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    t43 = cow_thiscall(g, COW_IMG(0x1011b320u), t42, 0);
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 == 0u)
    {
        eax = t43;
        edx = t45;
        goto L_101180da;
    }
    ecx = t44;
    edx = t45;
    ebx = t43;
    g->esp = sp0 - 8u;
    t46 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x34u, in_edi, in_esi);
    t47 = g->edx;
    if (t46 == 0u)
    {
        eax = t46;
        goto L_101180e3;
    }
    eax = t46;
    edx = t47;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall(g, COW_IMG(0x10119da0u), eax, 0);
    t49 = g->edx;
    if (t48 == 0u)
    {
        eax = t48;
        goto L_101180e3;
    }
    eax = t48;
    edx = t49;
    edi = t48;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10119e20u), edi, 1, ebx);
    t50 = g->edx;
    t51 = rd32(self + 8u);
    g->eax = t51;
    g->edx = t50;
    t52 = cow_thiscall(g, COW_IMG(0x10119e30u), edi, 1, t51);
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_call_regs(g, COW_IMG(0x10119f20u), t52, edi, g->edx, 1, 0);
    t55 = g->edx;
    g->edx = t55;
    t56 = cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, edi);
    t57 = g->edx;
    eax = t56;
    edx = t57;
L_101180da: ;
    g->esp = sp0 - 0x10u;
    t58 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, self, g->edx, 0, 1, 1u);
    eax = t58;
L_101180e3: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10117f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10117f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
