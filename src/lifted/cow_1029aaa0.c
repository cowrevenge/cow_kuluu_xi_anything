/* f_0x1029aaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1029aaa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029aab1u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029aab1;
    case 0x1029aabbu: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029aabb;
    case 0x1029aac5u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029aac5;
    case 0x1029aacfu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029aacf;
    case 0x1029aaf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029aaf3;
    case 0x1029aaf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029aaf8;
    case 0x1029ab1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029ab1b;
    case 0x1029ab3bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029ab3b;
    case 0x1029ab68u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029ab68;
    case 0x1029ab93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1029ab93;
    case 0x1029abbfu: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029abbf;
    default: break;
    }
#endif

    COW_AT(1029aaa0)
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(arg2) != 0x53u) goto L_1029abbf;
    COW_AT(1029aab1)
    if (rd8(arg2 + 1u) != 0x51u) goto L_1029abbf;
    COW_AT(1029aabb)
    if (rd8(arg2 + 2u) != 0x4cu) goto L_1029abbf;
    COW_AT(1029aac5)
    if (rd8(arg2 + 3u) != 0x45u) goto L_1029abbf;
    COW_AT(1029aacf)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, arg2 + 4u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 8u, 4u, 1u, arg2 + 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(rd8(sp0 - 8u) & 1u))
    {
        eax = t1;
        edx = t3;
        ebx = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(1029aaf3)
        ebx = 1u;
    }
    COW_AT(1029aaf8)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    g->eax = eax;
    g->ecx = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 4u, 4u, 1u, eax, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(sp0 - 4u) != 0x150001u)
    {
        eax = rd32(sp0 - 4u);
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_1029ab93;
    }
    eax = rd32(sp0 - 4u);
    ecx = t5;
    esi = t4;
    COW_AT(1029ab1b)
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, esi, ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((arg2 & 0x10000u) == 0u)
    {
        ecx = t8;
        edx = t9;
        esi = t7;
        goto L_1029ab68;
    }
    ecx = t8;
    edx = t9;
    esi = t7;
    COW_AT(1029ab3b)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t10 = cow_stdcall(g, COW_IMG(0x1029a000u), 0);
    t11 = g->edx;
    wr32(sp0 - 0x18u, ebx);
    wr32(t10 + 0x1cu, arg1);
    wr32(sp0 - 0x1cu, arg2 & 0xfffeffffu);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, t10);
    cow_cdecl(g, COW_IMG(0x1029abf0u), 4, t10, esi, arg2 & 0xfffeffffu, ebx);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return t10;
L_1029ab68: ;
    COW_AT(1029ab68)
    wr32(sp0 - 0x18u, COW_IMG(0x103bc3e8u));
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3e8u), rd32(sp0 - 0x14u));
    t12 = g->ecx;
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc3c0u));
    g->ebx = ebx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029ab93: ;
    COW_AT(1029ab93)
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc398u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc398u), eax);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x2cu, COW_IMG(0x103bc3c0u));
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029abbf: ;
    COW_AT(1029abbf)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7a04u));
    g->ebx = in_ebx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a04u), arg2);
    t14 = g->edx;
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc3c0u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc3c0u), arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029aaa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029aab1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029aabbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029aac5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029aacfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1029aaf3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029aaf8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ab1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029ab3bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->eax = arg2;
        wr32(sp0 - 0x28u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ab68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->eax = arg2;
        g->edi = 0u;
        wr32(sp0 - 0x28u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ab93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 0u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029abbfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029aaa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029aaa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
