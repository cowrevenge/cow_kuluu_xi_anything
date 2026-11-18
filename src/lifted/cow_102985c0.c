/* f_0x102985c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102985c0(Guest* g)
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102985ebu: ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102985eb;
    case 0x1029860cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1029860c;
    case 0x10298615u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10298615;
    case 0x10298688u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10298688;
    case 0x1029868du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1029868d;
    case 0x102986afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102986af;
    case 0x102986b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102986b4;
    case 0x102986eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102986ea;
    default: break;
    }
#endif

    COW_AT(102985c0)
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbda0u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = arg2;
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
    COW_AT(102985eb)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd8(arg1 + 0x14u);
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd90u), t8);
        t9 = g->ecx;
        t10 = g->edx;
        if (rd32(arg1 + 0x18u) == 0u)
        {
            eax = rd32(arg1 + 0x18u);
            edx = t10;
        }
        else
        {
            eax = rd32(arg1 + 0x18u);
            ecx = t9;
            edx = t10;
    COW_AT(1029860c)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t11 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    COW_AT(10298615)
        t13 = rd32(arg1 + 0x18u);
        g->eax = eax;
        g->ecx = t13;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd84u), t13);
        t15 = g->ecx;
        t16 = g->edx;
        g->ecx = t15;
        t17 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd84u), t13);
        t18 = g->ecx;
        t19 = rd32(arg1 + 0x1cu);
        g->ecx = t18;
        g->edx = t19;
        g->esp = sp0 - 0x14u;
        t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd78u), t19);
        t21 = g->ecx;
        t22 = g->edx;
        g->ecx = t21;
        g->edx = t22;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd78u), t19);
        t23 = g->ecx;
        t24 = g->edx;
        t25 = rd32(arg1 + 0x20u);
        g->eax = t25;
        g->ecx = t23;
        g->edx = t24;
        g->esp = sp0 - 0x20u;
        t26 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd6cu), t25);
        t27 = g->ecx;
        t28 = g->edx;
        g->edx = t28;
        t29 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd6cu), t25);
        t30 = g->edx;
        t31 = rd32(arg1 + 0x24u);
        g->ecx = t31;
        g->edx = t30;
        g->esp = sp0 - 0x2cu;
        t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd60u), t31);
        t33 = g->ecx;
        t34 = g->edx;
        g->ecx = t33;
        t35 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd60u), t31);
        t36 = g->ecx;
        t37 = rd32(arg1 + 0x28u);
        g->ecx = t36;
        g->edx = t37;
        g->esp = sp0 - 0x38u;
        t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd54u), t37);
        t39 = g->ecx;
        t40 = g->edx;
        g->edx = t40;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd54u), t37);
        t41 = g->edx;
        if (rd32(arg1 + 0x2cu) == 0u)
        {
            eax = rd32(arg1 + 0x2cu);
            ecx = COW_IMG(0x103bbd3cu);
            edx = t41;
        }
        else
        {
            eax = rd32(arg1 + 0x2cu);
            edx = t41;
    COW_AT(10298688)
            ecx = COW_IMG(0x103bbd24u);
        }
    COW_AT(1029868d)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t42 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbd0cu), eax);
        t43 = g->ecx;
        t44 = g->edx;
        g->ecx = t43;
        g->edx = t44;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbd0cu), eax);
        t45 = g->ecx;
        t46 = g->edx;
        if (rd32(arg1 + 0x30u) == 3u)
        {
            eax = COW_IMG(0x103bbd08u);
            ecx = t45;
            edx = t46;
        }
        else
        {
            ecx = t45;
            edx = t46;
    COW_AT(102986af)
            eax = COW_IMG(0x103bbd00u);
        }
    COW_AT(102986b4)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbcf0u), eax);
        t48 = g->ecx;
        t49 = g->edx;
        g->ecx = t48;
        g->edx = t49;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbcf0u), eax);
        t50 = g->ecx;
        t51 = g->edx;
        t52 = rd32(arg1 + 0x34u);
        g->eax = t52;
        g->ecx = t50;
        g->edx = t51;
        g->esp = sp0 - 0x14u;
        t53 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbce0u), t52);
        t54 = g->ecx;
        t55 = g->edx;
        g->edx = t55;
        t56 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bbce0u), t52);
        t57 = g->edx;
        t58 = rd32(arg1 + 0x38u);
        g->edx = t57;
        g->esp = sp0 - 0x20u;
        t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbcd0u), t58);
        t60 = g->edx;
        eax = t59;
        edx = t60;
    }
    COW_AT(102986ea)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102985c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102985ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1029860cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10298615u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10298688u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029868du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102986afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102986b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102986eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102985c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102985c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
