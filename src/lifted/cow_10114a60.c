/* f_0x10114a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10114a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    int64_t q7;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114a80u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10114a80;
    case 0x10114a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10114a94;
    case 0x10114ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10114ab5;
    case 0x10114ac7u: ecx = g->ecx; edx = g->edx; goto E_10114ac7;
    case 0x10114ac9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10114ac9;
    case 0x10114ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10114ae7;
    case 0x10114af9u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10114af9;
    default: break;
    }
#endif

    COW_AT(10114a60)
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, COW_IMG(0x1036c084u));
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c084u), arg1, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)arg1 < 0)
    {
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_10114af9;
    }
    eax = t1;
    edx = t2;
    COW_AT(10114a80)
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4c70u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
    if ((uint8_t)t3 == 0u)
    {
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_10114af9;
    }
    eax = t3;
    COW_AT(10114a94)
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4b40u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
    if (t4 < arg4 + 0x48u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_10114af9;
    }
    eax = t4;
    COW_AT(10114ab5)
    if (eax - arg4 <= arg3 * 0x48u)
    {
        ecx = eax - arg4;
    }
    else
    {
    COW_AT(10114ac7)
        ecx = arg3 * 0x48u;
    }
    COW_AT(10114ac9)
    wr32(sp0 - 0x2cu, arg4 * 0x48u);
    wr32(sp0 - 0x30u, ecx);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = arg2;
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, COW_IMG(0x101c47b0u), rd32(COW_IMG(0x10662dccu)), 4, sp0 - 0x20u, arg2, ecx, arg4 * 0x48u);
    t6 = g->edx;
    if (t5 < 0x48u)
    {
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_10114af9;
    }
    ecx = t5;
    edx = t6;
    COW_AT(10114ae7)
    q7 = (uint64_t)cow_mulu(0x38e38e39u, ecx);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return cow_qhi(q7) >> 4u;
L_10114af9: ;
    COW_AT(10114af9)
    g->esi = loc_24;
    g->edi = loc_28;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114a60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114a80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114a94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114ab5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->esi = arg4;
        g->edi = arg4 * 0x48u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114ac7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->eax = arg3 * 0x48u;
        g->edi = arg4 * 0x48u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114ac9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->edi = arg4 * 0x48u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        wr32(sp0 - 0x2cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114ae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114af9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114a60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10114a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
