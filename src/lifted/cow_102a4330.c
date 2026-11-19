/* f_0x102a4330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a4330(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a434bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a434b;
    case 0x102a4356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a4356;
    case 0x102a436bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a436b;
    case 0x102a4378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a4378;
    case 0x102a4385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a4385;
    case 0x102a43a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102a43a1;
    case 0x102a43acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43ac;
    case 0x102a43c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43c1;
    case 0x102a43d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43d3;
    case 0x102a43dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43da;
    case 0x102a43e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a43e1;
    case 0x102a43f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43f5;
    case 0x102a43ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102a43ff;
    default: break;
    }
#endif

    COW_AT(102a4330)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((int32_t)rd32(rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x3cu) + 0x24u) <= 0)
    {
        eax = rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x3cu);
        ecx = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x3cu) + 0x24u);
        edx = in_edx;
        goto L_102a43e1;
    }
    eax = rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x3cu);
    ecx = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x2cu) + 0x3cu) + 0x24u);
    esi = rd32(sp0 + 4u);
    edi = rd32(rd32(sp0 + 4u) + 0x24u);
    COW_AT(102a434b)
    if ((int32_t)rd32(eax + 0x1cu) <= 0)
    {
        edx = rd32(eax + 0x1cu);
        goto L_102a43e1;
    }
    COW_AT(102a4356)
    wr32(sp0 - 0x10u, sp0 + 8u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, ecx);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x1cu, t1);
    g->ecx = t1;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x1027d130u), sp0 + 4u, g->ecx, g->edx, 1, 5, t1, ecx, sp0 + 4u, sp0 + 8u, in_edi);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(102a436b)
    if (rd8(sp0 + 4u) == 0u)
    {
        ebx = eax;
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_102a43d3;
    }
    ebx = eax;
    COW_AT(102a4378)
    if (rd32(rd32(rd32(esi + 0x2cu) + 0x3cu) + 0x28u) == 0u)
    {
        eax = rd32(rd32(esi + 0x2cu) + 0x3cu);
        ecx = rd32(rd32(rd32(esi + 0x2cu) + 0x3cu) + 0x28u);
        edx = rd32(esi + 0x2cu);
        goto L_102a43d3;
    }
    eax = rd32(rd32(esi + 0x2cu) + 0x3cu);
    COW_AT(102a4385)
    t5 = edi * 4u + rd32(eax + 0x34u);
    wr32(sp0 - 0x10u, t5);
    t6 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x14u, t6);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x1cu, ebx + 1u);
    wr32(sp0 - 0x20u, esi);
    g->eax = ebx + 1u;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x102a4410u), 6, esi, ebx + 1u, t7, t6, t5, rd32(sp0 - 0xcu));
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    edi = edi << 2u;
    loc_18 = rd32(sp0 - 0x18u);
    COW_AT(102a43a1)
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, esi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x102a4410u), 6, esi, ebx, eax, loc_18, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    eax = t11;
    COW_AT(102a43ac)
    wr32(sp0 - 0x20u, eax);
    t12 = edi + rd32(rd32(rd32(esi + 0x2cu) + 0x3cu) + 0x30u);
    wr32(sp0 - 0x24u, t12);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027d1f0u), 6, t12, eax, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    COW_AT(102a43c1)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return edi + rd32(rd32(rd32(esi + 0x2cu) + 0x3cu) + 0x30u);
L_102a43d3: ;
    COW_AT(102a43d3)
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0x14u, esi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x102a4410u), 2, esi, ebx);
    eax = t13;
    COW_AT(102a43da)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax;
L_102a43e1: ;
    COW_AT(102a43e1)
    wr32(sp0 - 0x10u, 0x1f2u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bd8d4u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd8d4u));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(102a43f5)
    wr32(sp0 - 0x1cu, COW_IMG(0x103bb404u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb404u), COW_IMG(0x103b379cu));
    COW_AT(102a43ff)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a4330(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a434bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a4356u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a436bu:
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
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a4378u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a4385u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a43a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102a43acu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102a43c1u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102a43d3u:
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
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x14u, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102a43dau:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x102a43e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a43f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102a43ffu:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a4330(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a4330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
