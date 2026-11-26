/* f_0x1026e370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026e370(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026e37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026e37c;
    case 0x1026e38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026e38b;
    case 0x1026e392u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026e392;
    case 0x1026e3b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026e3b9;
    case 0x1026e3bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026e3bf;
    case 0x1026e3d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1026e3d0;
    case 0x1026e3d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1026e3d5;
    case 0x1026e3e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1026e3e0;
    default: break;
    }
#endif

    COW_AT(1026e370)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    COW_RET(0x1026e37cu);
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026e37c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1026e38bu);
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1178u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026e38b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    COW_RET(0x1026e392u);
    t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(1026e392)
    d10 = (double)rdf32(arg1 + 0x20u);
    d11 = (double)rdf32(arg1 + 0x1cu);
    d12 = (double)rdf32(arg1 + 0x18u);
    d13 = (double)rdf32(arg1 + 0x14u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    COW_RET(0x1026e3b9u);
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 9, COW_IMG(0x103b1164u), cow_dlo(d13), cow_dhi(d13), cow_dlo(d12), cow_dhi(d12), cow_dlo(d11), cow_dhi(d11), cow_dlo(d10), cow_dhi(d10));
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(1026e3b9)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    COW_RET(0x1026e3bfu);
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    COW_AT(1026e3bf)
    if (rd32(arg1 + 0x30u) != 0u)
    {
        eax = COW_IMG(0x103b1160u);
    }
    else
    {
    COW_AT(1026e3d0)
        eax = COW_IMG(0x10387ef4u);
    }
    COW_AT(1026e3d5)
    g->esp = sp0;
    COW_RET(0x1026e3e0u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b114cu), eax);
    COW_AT(1026e3e0)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026e370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026e37cu:
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
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1026e38bu:
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
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1026e392u:
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
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1026e3b9u:
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
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1026e3bfu:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e3d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1026e3d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1026e3e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026e370(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
