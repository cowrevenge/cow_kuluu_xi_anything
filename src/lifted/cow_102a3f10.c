/* f_0x102a3f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a3f10(Guest* g)
{
    double d34;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a3f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a3f3f;
    case 0x102a3fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a3fd0;
    case 0x102a3fd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a3fd5;
    case 0x102a3ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a3ffc;
    case 0x102a400bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a400b;
    default: break;
    }
#endif

    COW_AT(102a3f10)
    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda4cu), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 >= 1)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(102a3f3f)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp0 - 0x10u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda40u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda40u), t9);
        t14 = g->edx;
        t15 = rd32(arg1 + 0xcu);
        g->ebx = arg2;
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda30u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda30u), t15);
        t20 = g->ecx;
        t21 = rd32(arg1 + 0x10u);
        g->ebx = arg2;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x28u;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda20u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda20u), t21);
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(arg1 + 0x1cu);
        g->ebx = arg2;
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x34u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda10u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        g->ecx = t29;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda10u), t27);
        t32 = g->ecx;
        t33 = g->edx;
        d34 = (double)rdf32(arg1 + 0x20u);
        g->ebx = arg2;
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x10u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bda00u), cow_dlo(d34));
        t36 = g->ecx;
        t37 = g->edx;
        g->edx = t37;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bda00u), cow_dlo(d34));
        t39 = g->edx;
        t40 = rd32(arg1 + 0x24u);
        g->ebx = arg2;
        g->ecx = t40;
        g->edx = t39;
        g->esp = sp0 - 0x1cu;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd9f0u), t40);
        t42 = g->ecx;
        t43 = g->edx;
        g->ecx = t42;
        g->edx = t43;
        t44 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bd9f0u), t40);
        t45 = g->ecx;
        t46 = g->edx;
        if (rd8(arg1 + 0x28u) != 0u)
        {
            eax = COW_IMG(0x103bd9e8u);
            ecx = t45;
            edx = t46;
        }
        else
        {
            ecx = t45;
            edx = t46;
    COW_AT(102a3fd0)
            eax = COW_IMG(0x103bd9e0u);
        }
    COW_AT(102a3fd5)
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd9d0u), eax);
        t48 = g->ecx;
        t49 = g->edx;
        g->ecx = t48;
        t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bd9d0u), eax);
        t51 = g->ecx;
        t52 = rd32(arg1 + 0x2cu);
        g->ebx = arg2;
        g->ecx = t51;
        g->edx = t52;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd9c4u), t52);
        t53 = g->ecx;
        t54 = g->edx;
        if ((int32_t)arg2 >= 2)
        {
            ecx = t53;
            edx = t54;
    COW_AT(102a3ffc)
            t55 = rd32(arg1 + 0x2cu);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x102a4130u), 3, t55, arg2, arg3 + 2u);
        }
    }
    COW_AT(102a400b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a3f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a3f3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3fd0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3fd5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a3ffcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a400bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a3f10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
