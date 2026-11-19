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
    case 0x10290aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10290aad;
    case 0x10290abcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290abc;
    case 0x10290accu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290acc;
    case 0x10290ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290ad3;
    case 0x10290ae1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290ae1;
    case 0x10290ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290ae7;
    case 0x10290af5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290af5;
    case 0x10290afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290afb;
    case 0x10290b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b09;
    case 0x10290b0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b0f;
    case 0x10290b1du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b1d;
    case 0x10290b23u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b23;
    case 0x10290b36u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b36;
    case 0x10290b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b3c;
    case 0x10290b4du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b4d;
    case 0x10290b53u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b53;
    case 0x10290b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b64;
    case 0x10290b6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b6f;
    case 0x10290b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10290b72;
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
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10290aad)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103bacd0u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bacd0u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10290abc)
    if ((int32_t)arg2 >= 1)
    {
    COW_AT(10290acc)
        wr32(sp0 - 0x10u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    COW_AT(10290ad3)
        t9 = rd32(arg1 + 0x4cu);
        wr32(sp0 - 0x14u, t9);
        wr32(sp0 - 0x18u, COW_IMG(0x103bacbcu));
        g->ebx = arg2;
        g->eax = t9;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bacbcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10290ae1)
        wr32(sp0 - 0x1cu, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bacbcu), rd32(sp0 - 0x14u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(10290ae7)
        t15 = rd32(arg1 + 0x50u);
        wr32(sp0 - 0x20u, t15);
        wr32(sp0 - 0x24u, COW_IMG(0x103baca8u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t15;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baca8u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10290af5)
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x1cu;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baca8u), rd32(sp0 - 0x20u));
        t20 = g->ecx;
        eax = t19;
        ecx = t20;
    COW_AT(10290afb)
        t21 = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x2cu, t21);
        wr32(sp0 - 0x30u, COW_IMG(0x103bac94u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t21;
        g->esp = sp0 - 0x28u;
        t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac94u), t21);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    COW_AT(10290b09)
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac94u), rd32(sp0 - 0x2cu));
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
    COW_AT(10290b0f)
        t27 = rd32(arg1 + 0x58u);
        wr32(sp0 - 0x38u, t27);
        wr32(sp0 - 0x3cu, COW_IMG(0x103bac80u));
        g->ebx = arg2;
        g->eax = t27;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac80u), t27);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    COW_AT(10290b1d)
        wr32(sp0 - 0x40u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t31 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac80u), rd32(sp0 - 0x38u));
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    COW_AT(10290b23)
        d34 = (double)rdf32(arg1 + 0x70u);
        wrf64(sp0 - 0x14u, d34);
        wr32(sp0 - 0x18u, COW_IMG(0x103bac6cu));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac6cu), cow_dlo(d34));
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(10290b36)
        wr32(sp0 - 0x1cu, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac6cu), rd32(sp0 - 0x14u));
        t39 = g->edx;
        eax = t38;
        edx = t39;
    COW_AT(10290b3c)
        t40 = rd32(arg1 + 0x88u);
        wr32(sp0 - 0x20u, t40);
        wr32(sp0 - 0x24u, COW_IMG(0x103bac60u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = t40;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac60u), t40);
        t42 = g->ecx;
        t43 = g->edx;
        eax = t41;
        ecx = t42;
        edx = t43;
    COW_AT(10290b4d)
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x1cu;
        t44 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bac60u), rd32(sp0 - 0x20u));
        t45 = g->ecx;
        eax = t44;
        ecx = t45;
    COW_AT(10290b53)
        t46 = rd32(arg1 + 0xb4u);
        wr32(sp0 - 0x2cu, t46);
        wr32(sp0 - 0x30u, COW_IMG(0x103bac48u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t46;
        g->esp = sp0 - 0x28u;
        t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bac48u), t46);
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
    COW_AT(10290b64)
        wr32(sp0 - 0x34u, arg3 + 1u);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, arg1 + 0x14u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t50 = cow_cdecl(g, COW_IMG(0x102a3410u), 7, arg1 + 0x14u, arg2, arg3 + 1u, COW_IMG(0x103bac48u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
        t51 = g->edx;
        eax = t50;
        edx = t51;
    COW_AT(10290b6f)
    }
    COW_AT(10290b72)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
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
    case 0x10290aadu:
    {
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
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->esi = arg3;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10290abcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290accu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290ad3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290ae1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, COW_IMG(0x103bacbcu));
        (void)sp0;
        return 1;
    }
    case 0x10290ae7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290af5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, COW_IMG(0x103baca8u));
        (void)sp0;
        return 1;
    }
    case 0x10290afbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x30u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x30u, COW_IMG(0x103bac94u));
        (void)sp0;
        return 1;
    }
    case 0x10290b0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x3cu, COW_IMG(0x103bac80u));
        (void)sp0;
        return 1;
    }
    case 0x10290b23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x40u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, COW_IMG(0x103bac6cu));
        (void)sp0;
        return 1;
    }
    case 0x10290b3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x24u, COW_IMG(0x103bac60u));
        (void)sp0;
        return 1;
    }
    case 0x10290b53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10290b64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x30u;
        g->ebx = arg2;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x30u, COW_IMG(0x103bac48u));
        (void)sp0;
        return 1;
    }
    case 0x10290b6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10290b72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
