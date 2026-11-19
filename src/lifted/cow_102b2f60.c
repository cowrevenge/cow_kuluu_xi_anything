/* f_0x102b2f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b2f60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b2f73u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x14u); goto E_102b2f73;
    case 0x102b2f7eu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x14u); goto E_102b2f7e;
    case 0x102b2fcdu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b2fcd;
    case 0x102b2fd0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b2fd0;
    case 0x102b2fd5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b2fd5;
    case 0x102b2fefu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b2fef;
    case 0x102b2ff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b2ff3;
    case 0x102b3026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b3026;
    case 0x102b3031u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b3031;
    case 0x102b3035u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b3035;
    case 0x102b3048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b3048;
    case 0x102b3053u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x14u); goto E_102b3053;
    default: break;
    }
#endif

    COW_AT(102b2f60)
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        ecx = self;
        goto L_102b3053;
    }
    edi = rd32(arg1 + 0x34u);
    COW_AT(102b2f73)
    if (rd32(edi + 0x14u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
        goto L_102b3053;
    }
    ecx = rd32(edi + 0x14u);
    COW_AT(102b2f7e)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, ecx);
    t1 = rd32(edi + 0x54u);
    wr32(sp0 - 0x24u, t1);
    g->eax = ecx;
    g->ecx = t1;
    t2 = rd32(arg1 + 0x44u);
    t3 = rd32(arg1 + 0x4cu);
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, t1, ecx);
    t5 = g->ecx;
    t6 = rd32(edi + 0x60u);
    wr32(sp0 - 0x28u, t6);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t6);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(edi + 0x58u);
    wr32(sp0 - 0x2cu, t9);
    g->eax = t9;
    g->edx = t8;
    g->esp = sp0 - 0x28u;
    t10 = cow_cdecl(g, COW_IMG(0x1028a770u), 1, t9);
    t11 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    t12 = rd32(edi + 0x5cu);
    wr32(sp0 - 0x34u, t12);
    g->ecx = t12;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x1028a790u), 2, t12, 0u);
    t13 = g->ecx;
    t14 = rd32(edi + 0x68u);
    wr32(sp0 - 0x38u, t14);
    t15 = rd32(edi + 0x64u);
    wr32(sp0 - 0x3cu, t15);
    g->eax = t15;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x34u;
    t16 = cow_cdecl(g, COW_IMG(0x1028a7f0u), 2, t15, t14);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t19;
        edx = t20;
        ebx = t2;
        esi = t3;
        goto L_102b3031;
    }
    ecx = t19;
    edx = t20;
    ebx = t2;
    esi = t3;
    COW_AT(102b2fcd)
    if (arg2 == 1u) goto L_102b2fef;
    COW_AT(102b2fd0)
    if (arg2 - 1u != 3u)
    {
        eax = arg2 - 4u;
        goto L_102b3048;
    }
    COW_AT(102b2fd5)
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, ebx * 3u);
    wr32(sp0 - 0x28u, 4u);
    g->eax = arg2 - 4u;
    g->ecx = ebx * 3u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t21 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 4u, ebx * 3u, esi);
    t22 = g->ecx;
    t23 = g->edx;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = t23;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), t21, t22, t23);
L_102b2fef: ;
    COW_AT(102b2fef)
    if (ebx == 0u)
    {
        eax = arg2 - 1u;
        goto L_102b3048;
    }
L_102b2ff3: ;
    COW_AT(102b2ff3)
    wr32(sp0 - 4u, rd32(esi));
    wr32(sp0 - 0x10u, rd32(esi));
    t24 = rd32(esi + 4u);
    wr32(sp0 - 0xcu, t24);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 3u);
    t25 = rd32(esi + 8u);
    wr32(sp0 - 8u, t25);
    g->eax = t25;
    g->ecx = sp0 - 0x10u;
    g->edx = t24;
    g->esp = sp0 - 0x1cu;
    t26 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 3u, 4u, sp0 - 0x10u);
    t27 = g->ecx;
    t28 = g->edx;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 0xcu;
        goto L_102b2ff3;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102b3026)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3031: ;
    COW_AT(102b3031)
    if (ebx == 0u)
    {
        eax = arg2;
        goto L_102b3048;
    }
    eax = arg2;
L_102b3035: ;
    COW_AT(102b3035)
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 3u);
    wr32(sp0 - 0x28u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 1u, 3u, esi);
    t30 = g->ecx;
    t31 = g->edx;
    if (ebx != 1u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        ebx = ebx - 1u;
        esi = esi + 0xcu;
        goto L_102b3035;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
L_102b3048: ;
    COW_AT(102b3048)
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3053: ;
    COW_AT(102b3053)
    wr32(sp0 - 0x18u, 0x8fu);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bfd88u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x24u, COW_IMG(0x103bfd80u));
    wr32(sp0 - 0x28u, COW_IMG(0x103beaa4u));
    g->edx = t34;
    g->esp = sp0 - 0x20u;
    t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bfd80u));
    t36 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t36;
    return t35;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b2f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b2f73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2f7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b2fcdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b2fd0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x102b2fd5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102b2fefu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x102b2ff3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3026u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102b3031u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b3035u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3048u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102b3053u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b2f60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
