/* f_0x1028d790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1028d790(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
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
    case 0x1028d79cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d79c;
    case 0x1028d7abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7ab;
    case 0x1028d7bbu: ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7bb;
    case 0x1028d7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7c2;
    case 0x1028d7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7d2;
    case 0x1028d7d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7d8;
    case 0x1028d7e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7e6;
    case 0x1028d7ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7ec;
    case 0x1028d7fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d7fa;
    case 0x1028d800u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d800;
    case 0x1028d80eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d80e;
    case 0x1028d814u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d814;
    case 0x1028d822u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d822;
    case 0x1028d828u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d828;
    case 0x1028d839u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d839;
    case 0x1028d83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1028d83c;
    default: break;
    }
#endif

    COW_AT(1028d790)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    COW_RET(0x1028d79cu);
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1028d79c)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1028d7abu);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5f8u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(1028d7ab)
    if ((int32_t)arg2 < 1)
    {
        eax = arg2;
    }
    else
    {
    COW_AT(1028d7bb)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        COW_RET(0x1028d7c2u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    COW_AT(1028d7c2)
        t8 = rd8(arg1 + 0x14u);
        g->eax = t8;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        COW_RET(0x1028d7d2u);
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5e8u), t8);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    COW_AT(1028d7d2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        COW_RET(0x1028d7d8u);
        t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    COW_AT(1028d7d8)
        t14 = rd32(arg1 + 0x1cu);
        g->eax = eax;
        g->ecx = t14;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        COW_RET(0x1028d7e6u);
        t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5d8u), t14);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(1028d7e6)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x20u;
        COW_RET(0x1028d7ecu);
        t18 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t19 = g->ecx;
        eax = t18;
        ecx = t19;
    COW_AT(1028d7ec)
        t20 = rd32(arg1 + 0x20u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t20;
        g->esp = sp0 - 0x24u;
        COW_RET(0x1028d7fau);
        t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5c4u), t20);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(1028d7fa)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        COW_RET(0x1028d800u);
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    COW_AT(1028d800)
        t26 = rd32(arg1 + 0x24u);
        g->eax = t26;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        COW_RET(0x1028d80eu);
        t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5b0u), t26);
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    COW_AT(1028d80e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        COW_RET(0x1028d814u);
        t30 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(1028d814)
        t32 = rd32(arg1 + 0x28u);
        g->eax = eax;
        g->ecx = t32;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        COW_RET(0x1028d822u);
        t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba5a0u), t32);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    COW_AT(1028d822)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x44u;
        COW_RET(0x1028d828u);
        t36 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t37 = g->ecx;
        eax = t36;
        ecx = t37;
    COW_AT(1028d828)
        t38 = rd32(arg1 + 0x2cu);
        g->eax = eax;
        g->edx = t38;
        g->esp = sp0 - 8u;
        COW_RET(0x1028d839u);
        t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba590u), t38);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    COW_AT(1028d839)
    }
    COW_AT(1028d83c)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028d790(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028d79cu:
    {
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
        g->esp = sp0 - 0xcu;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1028d7abu:
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
        g->esp = sp0 - 0x14u;
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7bbu:
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
        g->esi = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7c2u:
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
        g->esp = sp0 - 0xcu;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7d2u:
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
        g->esp = sp0 - 0x14u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7d8u:
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
        g->esp = sp0 - 0x18u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7e6u:
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
        g->esp = sp0 - 0x20u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7ecu:
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
        g->esp = sp0 - 0x24u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d7fau:
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
        g->esp = sp0 - 0x2cu;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d800u:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d80eu:
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
        g->esp = sp0 - 0x38u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d814u:
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
        g->esp = sp0 - 0x3cu;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d822u:
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
        g->esp = sp0 - 0x44u;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d828u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x48u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028d839u:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028d83cu:
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
void cow_adapter_1028d790(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028d790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
