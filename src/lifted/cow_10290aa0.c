/* f_0x10290aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10290aa0(Guest* g)
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10290accu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10290acc;
    case 0x10290b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10290b72;
    default: break;
    }
#endif

    COW_AT(10290aa0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103bacd0u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bacd0u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(10290acc)
        wr32(sp0 - 0x10u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd32(arg1 + 0x4cu);
        wr32(sp0 - 0x14u, t9);
        wr32(sp0 - 0x18u, COW_IMG(0x103bacbcu));
        g->ebx = arg2;
        g->eax = t9;
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x10u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bacbcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x1cu, arg3 + 1u);
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bacbcu), rd32(sp0 - 0x14u));
        t14 = g->edx;
        t15 = rd32(arg1 + 0x50u);
        wr32(sp0 - 0x20u, t15);
        wr32(sp0 - 0x24u, COW_IMG(0x103baca8u));
        g->ebx = arg2;
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baca8u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baca8u), rd32(sp0 - 0x20u));
        t20 = g->ecx;
        t21 = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x2cu, t21);
        wr32(sp0 - 0x30u, COW_IMG(0x103bac94u));
        g->ebx = arg2;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x28u;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac94u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac94u), rd32(sp0 - 0x2cu));
        t25 = g->ecx;
        t26 = g->edx;
        t27 = rd32(arg1 + 0x58u);
        wr32(sp0 - 0x38u, t27);
        wr32(sp0 - 0x3cu, COW_IMG(0x103bac80u));
        g->ebx = arg2;
        g->eax = t27;
        g->ecx = t25;
        g->edx = t26;
        g->esp = sp0 - 0x34u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac80u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp0 - 0x40u, arg3 + 1u);
        g->ecx = t29;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac80u), rd32(sp0 - 0x38u));
        t32 = g->ecx;
        t33 = g->edx;
        d34 = (double)rdf32(arg1 + 0x70u);
        wrf64(sp0 - 0x14u, d34);
        wr32(sp0 - 0x18u, COW_IMG(0x103bac6cu));
        g->ebx = arg2;
        g->ecx = t32;
        g->edx = t33;
        g->esp = sp0 - 0x10u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac6cu), cow_dlo(d34));
        t36 = g->ecx;
        t37 = g->edx;
        wr32(sp0 - 0x1cu, arg3 + 1u);
        g->edx = t37;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac6cu), rd32(sp0 - 0x14u));
        t39 = g->edx;
        t40 = rd32(arg1 + 0x88u);
        wr32(sp0 - 0x20u, t40);
        wr32(sp0 - 0x24u, COW_IMG(0x103bac60u));
        g->ebx = arg2;
        g->ecx = t40;
        g->edx = t39;
        g->esp = sp0 - 0x1cu;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac60u), t40);
        t42 = g->ecx;
        t43 = g->edx;
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = t42;
        t44 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac60u), rd32(sp0 - 0x20u));
        t45 = g->ecx;
        t46 = rd32(arg1 + 0xb4u);
        wr32(sp0 - 0x2cu, t46);
        wr32(sp0 - 0x30u, COW_IMG(0x103bac48u));
        g->ebx = arg2;
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0x28u;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac48u), t46);
        t48 = g->ecx;
        t49 = g->edx;
        wr32(sp0 - 0x34u, arg3 + 1u);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, arg1 + 0x14u);
        g->edx = t49;
        g->esp = sp0 - 0x20u;
        t50 = cow_cdecl(g, COW_IMG(0x102a3410u), 7, arg1 + 0x14u, arg2, arg3 + 1u, COW_IMG(0x103bac48u), rd32(sp0 - 0x2cu), arg3 + 1u, COW_IMG(0x103bac60u));
        t51 = g->edx;
        eax = t50;
        edx = t51;
    }
    COW_AT(10290b72)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10290aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10290accu:
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
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b72u:
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
void cow_adapter_10290aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10290aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
