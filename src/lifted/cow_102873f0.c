/* f_0x102873f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102873f0(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 8u) + 0x14u;
        edi = rd32(sp0 + 8u);
    }
    else
    {
        ebx = rd32(sp0 + 8u) + 0x14u;
        edi = rd32(sp0 + 8u);
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10314d95u), 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b8778u), t1, arg3, in_edi);
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
    wr32(sp0 + 8u, t6);
    g->ecx = t7;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t8, 1, 6, edi, arg3, arg3, in_edi, in_esi, in_ebp);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10287300u), g->eax, g->ecx, t10, 1, 6, ebx, arg3, edi, arg3, arg3, in_edi);
    t11 = g->edx;
    t12 = rd32(edi + 0x4cu);
    g->ecx = t12;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t12, arg3, ebx, arg3, edi, arg3, arg3);
    t13 = g->ecx;
    t14 = rd32(edi + 0x50u);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t14);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    t20 = rd32(edi + 0x54u);
    g->ecx = t18;
    g->edx = t19;
    t21 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t20);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t21);
    t24 = g->edx;
    t25 = rd32(edi + 0x58u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t25, 7, t25, arg3, t21, arg3, in_edi, in_esi, in_ebp);
    t26 = g->ecx;
    ecx = t26;
    ebx = edi + 0x60u;
    ebp = 0x10u;
L_1028748b: ;
    t27 = rd32(ebx - 4u);
    g->edx = t27;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t27, arg3);
    t28 = g->ecx;
    t29 = g->edx;
    g->edx = t29;
    t30 = rd32(ebx);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t28, 7, t30, arg3, t27, arg3, in_edi, in_esi, in_ebp);
    t31 = g->edx;
    t32 = rd32(ebx + 4u);
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t32, 7, t32, arg3, t30, arg3, t27, arg3, in_edi);
    t33 = g->ecx;
    t34 = rd32(ebx + 8u);
    g->edx = t34;
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t33, 7, t34, arg3, t32, arg3, t30, arg3, t27);
    t35 = g->ecx;
    t36 = g->edx;
    if (ebp != 1u)
    {
        ecx = t35;
        ebx = ebx + 0x10u;
        ebp = ebp - 1u;
        goto L_1028748b;
    }
    ecx = t35;
    edx = t36;
    t37 = rd32(edi + 0x15cu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t37, arg3);
    t38 = g->edx;
    t39 = rd32(edi + 0x160u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t39, 7, t39, arg3, t37, arg3, in_edi, in_esi, in_ebp);
    t40 = g->ecx;
    t41 = rd32(edi + 0x164u);
    g->ecx = t40;
    g->edx = t41;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t41, arg3, t39, arg3, t37, arg3, in_edi);
    t42 = g->ecx;
    t43 = g->edx;
    t44 = rd32(edi + 0x168u);
    g->ecx = t42;
    g->edx = t43;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t44, arg3, t41, arg3, t39, arg3, t37);
    t45 = g->ecx;
    t46 = g->edx;
    g->ecx = t45;
    g->esp = sp0 - 0x28u;
    t47 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t46, 1, 3, arg3, t44, arg3);
    t48 = g->ecx;
    t49 = g->edx;
    if (t47 - rd32(sp0 + 8u) == 0x16cu)
    {
        eax = t47 - rd32(sp0 + 8u);
        goto L_10287531;
    }
    eax = t47 - rd32(sp0 + 8u);
    ecx = t48;
    edx = t49;
    edi = rd32(sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b874cu), in_edi);
    t50 = g->ecx;
    t51 = g->edx;
    g->ecx = t50;
    t52 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t51, 1, 3, arg3, COW_IMG(0x103b874cu), in_edi);
    t53 = g->ecx;
    t54 = g->edx;
    g->eax = t52 - edi;
    g->esp = sp0 - 0x1cu;
    t55 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x16cu);
    return t55 & 0xffffff00u;
L_10287531: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102873f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102873f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
