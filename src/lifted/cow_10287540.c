/* f_0x10287540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10287540(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b87c4u), t1, arg3, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg3, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    g->ebx = t6;
    g->ecx = t7;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t8, 1, 6, arg2, arg3, arg3, in_edi, in_esi, in_ebp);
    t9 = g->ecx;
    t10 = g->edx;
    g->ebx = t6;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10287300u), g->eax, g->ecx, t10, 1, 6, arg2 + 0x14u, arg3, arg2, arg3, arg3, in_edi);
    t11 = g->edx;
    t12 = rd32(arg2 + 0x4cu);
    g->ecx = t12;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t12, arg3, arg2 + 0x14u, arg3, arg2, arg3, arg3);
    t13 = g->ecx;
    t14 = rd32(arg2 + 0x50u);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t14, arg3, t12, arg3, arg2 + 0x14u, arg3, arg2);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(arg2 + 0x54u);
    g->edx = t16;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t17, arg3, t14, arg3, t12, arg3, arg2 + 0x14u);
    t18 = g->edx;
    t19 = rd32(arg2 + 0x58u);
    g->ecx = t19;
    g->edx = t18;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t19, arg3, t17, arg3, t14, arg3, t12);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(arg2 + 0x5cu, 0u);
    g->ecx = t20;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, 0u, arg3, t19, arg3, t17, arg3, t14);
    t22 = g->ecx;
    t23 = rd32(arg2 + 0x60u);
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x14u;
    t24 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t23);
    t25 = g->ecx;
    t26 = g->edx;
    g->ecx = t25;
    g->edx = t26;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t24);
    t27 = g->ecx;
    t28 = g->edx;
    t29 = rd32(arg2 + 0x64u);
    g->ecx = t27;
    g->edx = t28;
    t30 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t29);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t30);
    t33 = g->edx;
    t34 = rd32(arg2 + 0x68u);
    g->ecx = t34;
    g->edx = t33;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t34, arg3, t30, arg3, in_edi, in_esi, in_ebp);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->esp = sp0 - 0x18u;
    t37 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t36, 1, 3, arg3, t34, arg3);
    t38 = g->ecx;
    t39 = g->edx;
    if (t37 - t6 == 0x6cu)
    {
        eax = t37 - t6;
        goto L_10287634;
    }
    eax = t37 - t6;
    ecx = t38;
    edx = t39;
    ebx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b879cu), in_edi);
    t40 = g->ecx;
    t41 = g->edx;
    g->ecx = t40;
    t42 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t41, 1, 3, arg3, COW_IMG(0x103b879cu), in_edi);
    t43 = g->ecx;
    t44 = g->edx;
    g->eax = t42 - ebx;
    g->esp = sp0 - 0x1cu;
    t45 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x6cu);
    g->ebx = in_ebx;
    return t45 & 0xffffff00u;
L_10287634: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
