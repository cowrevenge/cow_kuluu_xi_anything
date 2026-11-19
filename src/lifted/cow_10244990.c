/* f_0x10244990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10244990(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_114;
    uint32_t loc_118;
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
    uint32_t t3;
    uint32_t t4;
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
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102449afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x118u); in_esi = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x118u); g->esi = rd32(sp0 - 0x114u); goto E_102449af;
    case 0x102449cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102449cd;
    case 0x102449d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102449d5;
    case 0x102449e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102449e1;
    case 0x102449f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102449f2;
    case 0x102449feu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102449fe;
    case 0x10244a19u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10244a19;
    case 0x10244a33u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10244a33;
    case 0x10244a51u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10244a51;
    case 0x10244a61u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10244a61;
    case 0x10244a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10244a6c;
    case 0x10244a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10244a73;
    case 0x10244a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); goto E_10244a83;
    default: break;
    }
#endif

    COW_AT(10244990)
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x118u;
    t1 = cow_cdecl(g, COW_IMG(0x10310929u), 1, sp0 - 0x110u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 < 0)
    {
        loc_114 = in_esi;
        loc_118 = in_edi;
        goto L_10244a83;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    COW_AT(102449af)
    wr32(sp0 - 0x11cu, 0xf1u);
    wr32(sp0 - 0x120u, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xf1u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x124u, t4);
    wr32(sp0 - 0x128u, esi);
    g->edx = t6;
    g->esp = sp0 - 0x120u;
    t7 = cow_cdecl(g, COW_IMG(0x10244aa0u), 2, esi, t4);
    t8 = g->edx;
    if ((int32_t)t7 < 0)
    {
        loc_114 = in_esi;
        loc_118 = in_edi;
        goto L_10244a83;
    }
    edx = t8;
    COW_AT(102449cd)
    if (rd32(sp0 - 0x110u) != 0u)
    {
        eax = rd32(sp0 - 0x110u);
        goto L_102449e1;
    }
    eax = rd32(sp0 - 0x110u);
    COW_AT(102449d5)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x118u);
    return 0xffffffffu;
L_102449e1: ;
    COW_AT(102449e1)
    t9 = rd32(arg1 + 0x10u);
    wr32(arg1 + 4u, eax);
    if (t9 == 0u)
    {
        ecx = t9;
    COW_AT(102449f2)
        wr32(sp0 - 0x11cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x110u;
        t10 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u));
        wr32(arg1 + 0x10u, t10);
    }
    COW_AT(102449fe)
    wr32(sp0 - 0x11cu, sp0 - 0x110u);
    t11 = rd32(arg1 + 4u);
    wr32(sp0 - 0x120u, t11);
    t12 = rd32(arg1 + 0x10u);
    wr32(sp0 - 0x124u, t12);
    g->eax = t12;
    g->ecx = sp0 - 0x110u;
    g->edx = t11;
    g->esp = sp0 - 0x118u;
    t13 = cow_cdecl(g, COW_IMG(0x10311be5u), 3, t12, t11, sp0 - 0x110u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        ecx = t14;
        edx = t15;
        goto L_10244a6c;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    edi = t13;
    COW_AT(10244a19)
    wr32(sp0 - 0x11cu, 0xf3u);
    wr32(sp0 - 0x120u, 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xf3u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x124u, t16);
    wr32(sp0 - 0x128u, edi);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x120u;
    t19 = cow_cdecl(g, COW_IMG(0x10244aa0u), 2, edi, t16);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)t19 < 0)
    {
        ecx = t20;
        edx = t21;
        goto L_10244a6c;
    }
    eax = t19;
    ecx = t20;
    COW_AT(10244a33)
    t22 = (ecx & 0xffffff00u) | rd8(sp0 - 0x103u) == 2u;
    wr32(sp0 - 0x11cu, t22);
    t23 = rd32(arg1 + 4u);
    wr32(sp0 - 0x120u, t23);
    wr32(sp0 - 0x124u, arg1);
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x102441e0u), 3, arg1, t23, t22);
    t24 = g->ecx;
    t25 = g->edx;
    if (rd32(arg1 + 0x10u) != 0u)
    {
        eax = rd32(arg1 + 0x10u);
        ecx = t24;
        edx = t25;
    COW_AT(10244a51)
        wr32(sp0 - 0x11cu, eax);
        g->esp = sp0 - 0x118u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(arg1 + 0x10u, 0u);
    }
    COW_AT(10244a61)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = rd32(sp0 - 0x118u);
    return 0u;
L_10244a6c: ;
    COW_AT(10244a6c)
    if (rd32(arg1 + 0x10u) == 0u)
    {
        loc_114 = rd32(sp0 - 0x114u);
        loc_118 = rd32(sp0 - 0x118u);
    }
    else
    {
        eax = rd32(arg1 + 0x10u);
    COW_AT(10244a73)
        wr32(sp0 - 0x11cu, eax);
        g->esp = sp0 - 0x118u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(arg1 + 0x10u, 0u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_118 = rd32(sp0 - 0x118u);
    }
L_10244a83: ;
    COW_AT(10244a83)
    g->esi = loc_114;
    g->edi = loc_118;
    return 0xfffffffeu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10244990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102449afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x118u);
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x11cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102449cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102449d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102449e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x102449f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102449feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244a19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x10244a33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244a51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244a61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x10244a6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244a73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10244a83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10244990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10244990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
