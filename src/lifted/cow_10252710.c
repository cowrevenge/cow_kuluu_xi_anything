/* f_0x10252710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10252719u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252719;
    case 0x10252721u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252721;
    case 0x1025272eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025272e;
    case 0x10252735u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252735;
    case 0x1025274cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025274c;
    case 0x1025275bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025275b;
    case 0x10252763u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252763;
    case 0x1025277au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025277a;
    case 0x10252789u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252789;
    case 0x1025278du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025278d;
    case 0x10252794u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252794;
    case 0x102527a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102527a3;
    default: break;
    }
#endif

    COW_AT(10252710)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_10252735;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(10252719)
    if (rd32(sp0 + 8u) == 0u) goto L_10252735;
    eax = rd32(sp0 + 8u);
    COW_AT(10252721)
    wr32(sp0 - 8u, 0x22u);
    wr32(sp0 - 0xcu, COW_IMG(0x10389a74u));
    wr32(sp0 - 0x10u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389a74u), 0x22u);
    t1 = g->edx;
    edx = t1;
    COW_AT(1025272e)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_10252735: ;
    COW_AT(10252735)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, sp0 + 8u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, 0u, sp0 + 4u, sp0 + 8u, 0u);
    t2 = g->ecx;
    ecx = t2;
    COW_AT(1025274c)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025278d;
    }
    eax = rd32(sp0 + 8u);
    edx = rd32(sp0 + 4u);
    COW_AT(1025275b)
    wr32(sp0 - 8u, 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 2u);   /* kernel32.dll!Sleep */
    t3 = g->edx;
    edx = t3;
    COW_AT(10252763)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, sp0 + 8u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, 0u, sp0 + 4u, sp0 + 8u, 0u);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(1025277a)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025278d;
    }
    edx = rd32(sp0 + 4u);
    COW_AT(10252789)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_1025278d: ;
    COW_AT(1025278d)
    wr32(sp0 - 8u, 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10275c50u), 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10252794)
    wr32(sp0 - 0xcu, 0x34u);
    wr32(sp0 - 0x10u, COW_IMG(0x10389bb0u));
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, esi, COW_IMG(0x10389bb0u), 0x34u);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(102527a3)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252719u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10252721u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025272eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10252735u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025274cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025275bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252763u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025277au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252789u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025278du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252794u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102527a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10252710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10252710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
