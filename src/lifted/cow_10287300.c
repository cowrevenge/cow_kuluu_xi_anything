/* f_0x10287300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10287300(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg2, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        t4 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 8u;
        t5 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t4, COW_IMG(0x103b8728u), t1, arg2, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    g->ebx = t8;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t10, 1, 6, arg1, arg2, arg2, in_edi, in_esi, in_ebx);
    t12 = g->edx;
    t13 = rd32(arg1 + 0x14u);
    g->esp = sp0 - 4u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t13, 7, t13, arg2, arg1, arg2, arg2, in_edi, in_esi);
    t15 = g->ecx;
    t16 = rd32(arg1 + 0x18u);
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t15, 7, t16, arg2, t13, arg2, arg1, arg2, arg2);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(arg1 + 0x1cu);
    g->eax = t19;
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t17, 7, t19, arg2, t16, arg2, t13, arg2, arg1);
    t21 = g->edx;
    t22 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 0x1cu;
    t23 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t22, 7, t22, arg2, t19, arg2, t16, arg2, t13);
    t24 = g->ecx;
    t25 = rd32(arg1 + 0x24u);
    g->edx = t25;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t24, 7, t25, arg2, t22, arg2, t19, arg2, t16);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(arg1 + 0x28u);
    g->eax = t28;
    g->edx = t27;
    g->esp = sp0 - 0x2cu;
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t26, 7, t28, arg2, t25, arg2, t22, arg2, t19);
    t30 = g->edx;
    t31 = rd32(arg1 + 0x2cu);
    g->esp = sp0 - 0x34u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t31, 7, t31, arg2, t28, arg2, t25, arg2, t22);
    t33 = g->ecx;
    t34 = rd32(arg1 + 0x30u);
    g->edx = t34;
    g->esp = sp0 - 0xcu;
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t33, 2, t34, arg2);
    t36 = g->ecx;
    t37 = g->edx;
    if (rd8(arg1 + 0x34u) == 0u)
    {
        ecx = t36;
        edx = t37;
        ebx = t8;
    }
    else
    {
        ecx = t36;
        edx = t37;
        ebx = t8;
        wr8(arg1 + 0x34u, 1u);
    }
    t38 = rd8(arg1 + 0x34u);
    g->eax = t38;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_cdecl(g, COW_IMG(0x10285fb0u), 2, t38, arg2);
    t40 = g->ecx;
    t41 = g->edx;
    g->ecx = t40;
    t42 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t41, 1, 3, arg2, t38, arg2);
    t43 = g->ecx;
    t44 = g->edx;
    if (t42 - ebx == 0x38u)
    {
        eax = t42 - ebx;
        goto L_102873ea;
    }
    eax = t42 - ebx;
    ecx = t43;
    edx = t44;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b86fcu), in_edi);
    t46 = g->ecx;
    t47 = g->edx;
    g->ecx = t46;
    t48 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t47, 1, 3, arg2, COW_IMG(0x103b86fcu), in_edi);
    t49 = g->ecx;
    t50 = g->edx;
    g->eax = t48 - ebx;
    g->ecx = t49;
    g->edx = t50;
    g->esp = sp0 - 0x18u;
    t51 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x38u);
    t52 = g->ecx;
    t53 = g->edx;
    g->esp = sp0 - 0x20u;
    t54 = cow_call_regs(g, COW_IMG(0x102755e0u), g->eax, g->ecx, t53, 1, 2, arg1, 0x38u);
    g->ebx = in_ebx;
    return t54 & 0xffffff00u;
L_102873ea: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
