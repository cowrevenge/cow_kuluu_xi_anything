/* f_0x10114b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10114b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b72;
    case 0x10114b7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b7d;
    case 0x10114b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b7f;
    case 0x10114b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b87;
    case 0x10114b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b8b;
    case 0x10114b9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10114b9b;
    case 0x10114cd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10114cd9;
    case 0x10114cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10114cde;
    default: break;
    }
#endif

    COW_AT(10114b60)
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x490u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10114b7d)
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(10114b72)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x10113d30u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = t4;
    }
    COW_AT(10114b7f)
    if (esi != rd32(COW_IMG(0x104e1b6cu)))
    {
    COW_AT(10114b87)
        if (esi != 0u)
        {
    COW_AT(10114b8b)
            g->eax = eax;
            g->esp = sp0 - 4u;
            t7 = cow_fastcall(g, COW_IMG(0x10114070u), esi, edx, 0);
            t8 = g->ecx;
            t9 = g->edx;
            t10 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, t9, 1, 1, esi);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
    }
    COW_AT(10114b9b)
    wr32(COW_IMG(0x104e1b68u), 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x10108300u), g->eax, g->ecx, edx, 1, 3, 0u, 0u, 0x1000u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x10u;
    t16 = cow_stdcall(g, COW_IMG(0x1010f8b0u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x101133a0u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->edx = t21;
    t22 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c108u), COW_IMG(0x1036c110u), COW_IMG(0x10114cf0u), 0u);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x20u;
    t25 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c108u), COW_IMG(0x1036c100u), COW_IMG(0x10114d00u), 0u);
    t26 = g->ecx;
    t27 = g->edx;
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0x30u;
    t28 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0f0u), COW_IMG(0x1036c0f8u), COW_IMG(0x10114dc0u), 0u);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x40u;
    t31 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0f0u), COW_IMG(0x1036c0e8u), COW_IMG(0x10114df0u), 0u);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 4u;
    t34 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0d8u), COW_IMG(0x1036c0e0u), COW_IMG(0x10114db0u), 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x14u;
    t37 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0d8u), COW_IMG(0x1036c0d0u), COW_IMG(0x10114db0u), 0u);
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x24u;
    t40 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0d8u), COW_IMG(0x1036c0c8u), COW_IMG(0x10114db0u), 0u);
    t41 = g->ecx;
    t42 = g->edx;
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0x34u;
    t43 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0b4u), COW_IMG(0x1036c0c0u), COW_IMG(0x10114db0u), 0u);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 4u;
    t46 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0b4u), COW_IMG(0x1036c0acu), COW_IMG(0x10114db0u), 0u);
    t47 = g->ecx;
    t48 = g->edx;
    g->ecx = t47;
    g->edx = t48;
    g->esp = sp0 - 0x14u;
    t49 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0b4u), COW_IMG(0x1036c0a0u), COW_IMG(0x10114db0u), 0u);
    t50 = g->ecx;
    t51 = g->edx;
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0x24u;
    t52 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0b4u), COW_IMG(0x1036c098u), COW_IMG(0x10114db0u), 0u);
    t53 = g->ecx;
    t54 = g->edx;
    g->edx = t54;
    g->esp = sp0 - 0x34u;
    t55 = cow_cdecl(g, COW_IMG(0x1010fc50u), 4, COW_IMG(0x1036c0b4u), COW_IMG(0x1036c090u), COW_IMG(0x10114db0u), 0u);
    t56 = g->edx;
    if (rd32(COW_IMG(0x104e1b6cu)) != 0u)
    {
        eax = t55;
        ecx = rd32(COW_IMG(0x104e1b6cu));
        edx = t56;
    COW_AT(10114cd9)
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10114500u), eax, ecx, g->edx, 1, 0);
    }
    COW_AT(10114cde)
    g->esi = in_esi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114b60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114b72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114b7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114b7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114b87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114b9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114cd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10114cdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114b60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10114b60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
