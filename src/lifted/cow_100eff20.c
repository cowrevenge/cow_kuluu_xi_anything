/* f_0x100eff20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eff20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100eff3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_100eff3a;
    case 0x100eff4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff4c;
    case 0x100eff59u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff59;
    case 0x100eff61u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff61;
    case 0x100eff6au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff6a;
    case 0x100eff70u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff70;
    case 0x100eff75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff75;
    case 0x100eff7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff7b;
    case 0x100eff80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff80;
    case 0x100eff95u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100eff95;
    default: break;
    }
#endif

    COW_AT(100eff20)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(COW_IMG(0x104df770u));
    wr32(t1 + 0x136acu, 0u);
    eax = t1;
    edx = in_edx;
    edi = 0u;
    loc_2c = in_esi;
    loc_30 = in_edi;
L_100eff3a: ;
    COW_AT(100eff3a)
    wr32(sp0 - 0x34u, sp0 - 0x28u);
    wr32(sp0 - 0x38u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, edi, sp0 - 0x28u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        goto L_100eff75;
    }
    edx = t3;
    COW_AT(100eff4c)
    if (!(rd32(sp0 - 0x28u) & 1u))
    {
        eax = rd32(sp0 - 0x28u) & 1u;
        goto L_100eff75;
    }
    eax = rd32(sp0 - 0x28u) & 1u;
    ecx = 0u;
L_100eff59: ;
    COW_AT(100eff59)
    if (!(rd8(ecx + sp0 - 8u) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 8u);
        goto L_100eff6a;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 8u);
    COW_AT(100eff61)
    if ((eax >> 1u & 0x3fu) == arg1)
    {
        eax = eax >> 1u & 0x3fu;
        goto L_100eff70;
    }
    eax = eax >> 1u & 0x3fu;
L_100eff6a: ;
    COW_AT(100eff6a)
    if (ecx + 1u < 8u)
    {
        ecx = ecx + 1u;
        goto L_100eff59;
    }
    ecx = ecx + 1u;
L_100eff70: ;
    COW_AT(100eff70)
    if (ecx != 8u) goto L_100eff7b;
L_100eff75: ;
    COW_AT(100eff75)
    if ((int32_t)(edi + 1u) < 64)
    {
        edi = edi + 1u;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        goto L_100eff3a;
    }
    edi = edi + 1u;
L_100eff7b: ;
    COW_AT(100eff7b)
    if (edi != 0x40u) goto L_100eff95;
    COW_AT(100eff80)
    t4 = rd32(COW_IMG(0x104df770u));
    t5 = rd32(sp0 - 0x2cu);
    t6 = rd32(sp0 - 0x30u);
    wr32(t4 + 0x136acu, 0xffffffffu);
    g->esi = t5;
    g->edi = t6;
    g->edx = t4;
    return 0xffffffffu;
L_100eff95: ;
    COW_AT(100eff95)
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100eff20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100eff3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100eff4cu:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff59u:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff61u:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff6au:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff70u:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff75u:
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
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100eff95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100eff20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100eff20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
