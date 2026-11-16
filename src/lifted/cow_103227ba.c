/* f_0x103227ba - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103227ba(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        edi = rd16(COW_IMG(0x109b2a0cu));
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0xcu, self, in_edx, 1, 4, 1u, edi, 0x15u, arg1 + 0xcu);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = t1;
        g->esp = sp0 - 0x1cu;
        t4 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x10u, t2, t3, 1, 4, 1u, edi, 0x14u, arg1 + 0x10u);
        t5 = g->ecx;
        t6 = g->edx;
        g->ebx = t1 | t4;
        g->esp = sp0 - 0x2cu;
        t7 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x14u, t5, t6, 1, 4, 1u, edi, 0x16u, arg1 + 0x14u);
        t8 = g->ecx;
        t9 = g->edx;
        g->ebx = t1 | t4 | t7;
        g->esp = sp0 - 0x3cu;
        t10 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x18u, t8, t9, 1, 4, 1u, edi, 0x17u, arg1 + 0x18u);
        t11 = g->ecx;
        t12 = g->edx;
        g->ebx = t1 | t4 | t7 | t10;
        g->esp = sp0 - 0xcu;
        t13 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x1cu, t11, t12, 1, 4, 1u, edi, 0x18u, arg1 + 0x1cu);
        t14 = g->ecx;
        t15 = g->edx;
        t16 = rd32(arg1 + 0x1cu);
        g->ecx = t14;
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x103228dcu), t13, g->ecx, t15, 1, 1, t16);
        t17 = g->ecx;
        t18 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13;
        g->esp = sp0 - 0x20u;
        t19 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x20u, t17, t18, 1, 4, 1u, edi, 0x50u, arg1 + 0x20u);
        t20 = g->ecx;
        t21 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19;
        g->esp = sp0 - 0x30u;
        t22 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x24u, t20, t21, 1, 4, 1u, edi, 0x51u, arg1 + 0x24u);
        t23 = g->ecx;
        t24 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22;
        g->esp = sp0 - 0x40u;
        t25 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x28u, t23, t24, 1, 4, 0u, edi, 0x1au, arg1 + 0x28u);
        t26 = g->ecx;
        t27 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25;
        g->esp = sp0 - 0xcu;
        t28 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x29u, t26, t27, 1, 4, 0u, edi, 0x19u, arg1 + 0x29u);
        t29 = g->ecx;
        t30 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28;
        g->esp = sp0 - 0x1cu;
        t31 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x2au, t29, t30, 1, 4, 0u, edi, 0x54u, arg1 + 0x2au);
        t32 = g->ecx;
        t33 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31;
        g->esp = sp0 - 0x2cu;
        t34 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x2bu, t32, t33, 1, 4, 0u, edi, 0x55u, arg1 + 0x2bu);
        t35 = g->ecx;
        t36 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31 | t34;
        g->esp = sp0 - 0x3cu;
        t37 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x2cu, t35, t36, 1, 4, 0u, edi, 0x56u, arg1 + 0x2cu);
        t38 = g->ecx;
        t39 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31 | t34 | t37;
        g->esp = sp0 - 0xcu;
        t40 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x2du, t38, t39, 1, 4, 0u, edi, 0x57u, arg1 + 0x2du);
        t41 = g->ecx;
        t42 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31 | t34 | t37 | t40;
        g->esp = sp0 - 0x1cu;
        t43 = cow_call_regs(g, COW_IMG(0x10325a60u), arg1 + 0x2eu, t41, t42, 1, 4, 0u, edi, 0x52u, arg1 + 0x2eu);
        t44 = g->ecx;
        t45 = g->edx;
        g->ebx = t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31 | t34 | t37 | t40 | t43;
        g->esp = sp0 - 0x2cu;
        t46 = cow_call_regs(g, COW_IMG(0x10325a60u), t43, t44, t45, 1, 4, 0u, edi, 0x53u, arg1 + 0x2fu);
        eax = t46 | t1 | t4 | t7 | t10 | t13 | t19 | t22 | t25 | t28 | t31 | t34 | t37 | t40 | t43;
    }
    else
    {
        eax = 0xffffffffu;
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103227ba(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103227ba(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
