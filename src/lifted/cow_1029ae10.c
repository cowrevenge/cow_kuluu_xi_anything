/* f_0x1029ae10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029ae10(Guest* g)
{
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029ae21u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029ae21;
    case 0x1029ae2bu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029ae2b;
    case 0x1029ae35u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029ae35;
    case 0x1029ae3fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029ae3f;
    case 0x1029ae63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029ae63;
    case 0x1029ae68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029ae68;
    case 0x1029ae8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029ae8b;
    case 0x1029aeb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029aeb2;
    case 0x1029aed2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029aed2;
    case 0x1029aeefu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1029aeef;
    case 0x1029af15u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1029af15;
    default: break;
    }
#endif

    COW_AT(1029ae10)
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(rd32(sp0 + 4u)) != 0x53u)
    {
        esi = rd32(sp0 + 4u);
        goto L_1029af15;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(1029ae21)
    if (rd8(esi + 1u) != 0x51u) goto L_1029af15;
    COW_AT(1029ae2b)
    if (rd8(esi + 2u) != 0x4cu) goto L_1029af15;
    COW_AT(1029ae35)
    if (rd8(esi + 3u) != 0x45u) goto L_1029af15;
    COW_AT(1029ae3f)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, esi + 4u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 8u, 4u, 1u, esi + 4u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (!(rd8(sp0 - 8u) & 1u))
    {
        eax = t1;
        edx = t3;
        edi = 0u;
    }
    else
    {
        eax = t1;
        edx = t3;
    COW_AT(1029ae63)
        edi = 1u;
    }
    COW_AT(1029ae68)
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
    if (rd32(sp0 - 4u) == 0xb0001u)
    {
        ecx = t5;
        edx = t6;
        esi = t4;
        goto L_1029aeb2;
    }
    eax = rd32(sp0 - 4u);
    ecx = t5;
    edx = t6;
    esi = t4;
    COW_AT(1029ae8b)
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, COW_IMG(0x103bc5d0u));
    g->ebx = 0u;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc5d0u), eax);
    t8 = g->ecx;
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, COW_IMG(0x103bc5b0u));
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc5b0u), esi);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029aeb2: ;
    COW_AT(1029aeb2)
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 4u, 4u, 1u, esi, edi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((rd32(sp0 + 4u) & 0x10000u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t10;
        edx = t11;
        esi = t9;
        goto L_1029aeef;
    }
    eax = rd32(sp0 + 4u);
    ecx = t10;
    edx = t11;
    esi = t9;
    COW_AT(1029aed2)
    wr32(sp0 - 0x18u, edi);
    wr32(sp0 - 0x1cu, eax & 0xfffeffffu);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 + 4u, eax & 0xfffeffffu);
    g->eax = eax & 0xfffeffffu;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x1029af40u), 3, esi, eax & 0xfffeffffu, edi);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return t12;
L_1029aeef: ;
    COW_AT(1029aeef)
    wr32(sp0 - 0x18u, COW_IMG(0x103bc588u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc588u), rd32(sp0 - 0x14u));
    t14 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, COW_IMG(0x103bc5b0u));
    g->ebx = 0u;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc5b0u), esi);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
L_1029af15: ;
    COW_AT(1029af15)
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7a04u));
    g->ebx = in_ebx;
    g->eax = in_eax;
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7a04u), esi);
    t16 = g->ecx;
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, COW_IMG(0x103bc5b0u));
    g->ebx = in_ebx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc5b0u), esi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029ae10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029ae21u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1029ae2bu:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1029ae35u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1029ae3fu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1029ae63u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ae68u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1029ae8bu:
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
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029aeb2u:
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
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029aed2u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x28u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029aeefu:
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
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029af15u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029ae10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1029ae10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
