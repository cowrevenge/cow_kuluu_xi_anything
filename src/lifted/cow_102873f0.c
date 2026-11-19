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
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10287408u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287408;
    case 0x10287422u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287422;
    case 0x1028748bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1028748b;
    case 0x102874bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102874bb;
    case 0x10287505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287505;
    case 0x10287531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10287531;
    default: break;
    }
#endif

    COW_AT(102873f0)
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ecx = self;
        edx = in_edx;
        ebx = rd32(sp0 + 8u) + 0x14u;
        edi = rd32(sp0 + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ebx = rd32(sp0 + 8u) + 0x14u;
        edi = rd32(sp0 + 8u);
    COW_AT(10287408)
        g->eax = eax;
        g->ecx = self;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->ebx = ebx;
        g->eax = rd32(COW_IMG(0x109a2788u));
        g->ecx = t2;
        t4 = rd32(COW_IMG(0x109a2788u));
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t3, 1, 5, t4, COW_IMG(0x103b8778u), t1, arg3, in_edi);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    COW_AT(10287422)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg3, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 + 8u, t8);
    g->ebx = ebx;
    g->ecx = t9;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x102860e0u), g->eax, g->ecx, t10, 1, 6, edi, arg3, arg3, in_edi, in_esi, in_ebp);
    t12 = g->ecx;
    t13 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t14 = cow_call_regs(g, COW_IMG(0x10287300u), g->eax, g->ecx, t13, 1, 6, ebx, arg3, edi, arg3, arg3, in_edi);
    t15 = g->edx;
    t16 = rd32(edi + 0x4cu);
    g->ecx = t16;
    g->esp = sp0 - 0x10u;
    t17 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t16, arg3, ebx, arg3, edi, arg3, arg3);
    t18 = g->ecx;
    t19 = rd32(edi + 0x50u);
    g->ecx = t18;
    g->edx = t19;
    g->esp = sp0 - 0x14u;
    t20 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t20);
    t23 = g->ecx;
    t24 = g->edx;
    t25 = rd32(edi + 0x54u);
    g->eax = t25;
    g->ecx = t23;
    g->edx = t24;
    t26 = cow_cdecl(g, COW_IMG(0x10287240u), 2, arg1, t25);
    t27 = g->ecx;
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x10285fb0u), 1, t26);
    t30 = g->edx;
    t31 = rd32(edi + 0x58u);
    g->esp = sp0 - 4u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t31, 7, t31, arg3, t26, arg3, in_edi, in_esi, in_ebp);
    t33 = g->ecx;
    eax = t32;
    ecx = t33;
    ebx = edi + 0x60u;
    ebp = 0x10u;
L_1028748b: ;
    COW_AT(1028748b)
    t34 = rd32(ebx - 4u);
    g->edx = t34;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t34, arg3);
    t35 = g->ecx;
    t36 = g->edx;
    g->eax = rd32(ebx);
    g->edx = t36;
    t37 = rd32(ebx);
    g->esp = sp0 - 4u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t35, 7, t37, arg3, t34, arg3, in_edi, in_esi, in_ebp);
    t39 = g->edx;
    t40 = rd32(ebx + 4u);
    g->esp = sp0 - 0xcu;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t40, 7, t40, arg3, t37, arg3, t34, arg3, in_edi);
    t42 = g->ecx;
    t43 = rd32(ebx + 8u);
    g->edx = t43;
    g->esp = sp0 - 0x14u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t42, 7, t43, arg3, t40, arg3, t37, arg3, t34);
    t45 = g->ecx;
    t46 = g->edx;
    if (ebp != 1u)
    {
        eax = t44;
        ecx = t45;
        ebx = ebx + 0x10u;
        ebp = ebp - 1u;
        goto L_1028748b;
    }
    ecx = t45;
    edx = t46;
    ebx = ebx + 0x10u;
    COW_AT(102874bb)
    t47 = rd32(edi + 0x15cu);
    g->eax = t47;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), ecx, 2, t47, arg3);
    t49 = g->edx;
    t50 = rd32(edi + 0x160u);
    g->esp = sp0 - 4u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x10287270u), t50, 7, t50, arg3, t47, arg3, in_edi, in_esi, in_ebp);
    t52 = g->ecx;
    t53 = rd32(edi + 0x164u);
    g->ecx = t52;
    g->edx = t53;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t53, arg3, t50, arg3, t47, arg3, in_edi);
    t54 = g->ecx;
    t55 = g->edx;
    t56 = rd32(edi + 0x168u);
    g->eax = t56;
    g->ecx = t54;
    g->edx = t55;
    g->esp = sp0 - 0x14u;
    t57 = cow_cdecl(g, COW_IMG(0x10285fb0u), 7, t56, arg3, t53, arg3, t50, arg3, t47);
    t58 = g->ecx;
    t59 = g->edx;
    g->ecx = t58;
    g->esp = sp0 - 0x28u;
    t60 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t59, 1, 3, arg3, t56, arg3);
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 - rd32(sp0 + 8u) == 0x16cu)
    {
        eax = t60 - rd32(sp0 + 8u);
        goto L_10287531;
    }
    eax = t60 - rd32(sp0 + 8u);
    ecx = t61;
    edx = t62;
    edi = rd32(sp0 + 8u);
    COW_AT(10287505)
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t63 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b874cu), in_edi);
    t64 = g->ecx;
    t65 = g->edx;
    g->ecx = t64;
    t66 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t65, 1, 3, arg3, COW_IMG(0x103b874cu), in_edi);
    t67 = g->ecx;
    t68 = g->edx;
    g->ebx = ebx;
    g->eax = t66 - edi;
    g->esp = sp0 - 0x1cu;
    t69 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b81e4u), 0x16cu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return t69 & 0xffffff00u;
L_10287531: ;
    COW_AT(10287531)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102873f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10287408u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10287422u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028748bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102874bbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10287505u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10287531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102873f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102873f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
