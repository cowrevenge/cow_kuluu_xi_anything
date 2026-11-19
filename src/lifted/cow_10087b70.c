/* f_0x10087b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10087b70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10087b79u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; goto E_10087b79;
    case 0x10087b81u: ecx = g->ecx; in_esi = g->esi; goto E_10087b81;
    case 0x10087b88u: ecx = g->ecx; in_esi = g->esi; goto E_10087b88;
    case 0x10087b93u: in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10087b93;
    case 0x10087b98u: ecx = g->ecx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10087b98;
    case 0x10087bb4u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; goto E_10087bb4;
    default: break;
    }
#endif

    COW_AT(10087b70)
    t1 = cow_call_regs(g, COW_IMG(0x10087b20u), in_eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10087bb4;
    }
    COW_AT(10087b79)
    if ((int32_t)arg1 < 0)
    {
        eax = arg1;
        goto L_10087bb4;
    }
    COW_AT(10087b81)
    if ((int32_t)arg1 >= 256)
    {
        eax = arg1;
        goto L_10087bb4;
    }
    COW_AT(10087b88)
    if ((int32_t)(arg1 & 0x8000001fu) >= 0)
    {
        ecx = arg1 & 0x8000001fu;
    }
    else
    {
    COW_AT(10087b93)
        ecx = ((arg1 & 0x8000001fu) - 1u | 0xffffffe0u) + 1u;
    }
    COW_AT(10087b98)
    g->esi = in_esi;
    return ((uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 0x1fu)) >> 5u) & 0xffffff00u) | (rd32(COW_IMG(0x104830f8u) + (uint32_t)((int32_t)(arg1 + ((uint32_t)((int32_t)arg1 >> 0x1fu) & 0x1fu)) >> 5u) * 4u) & 1u << (ecx & 0x1fu)) != 0u;
L_10087bb4: ;
    COW_AT(10087bb4)
    g->esi = in_esi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10087b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10087b79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10087b81u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10087b88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10087b93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->ecx = arg1 & 0x8000001fu;
        (void)sp0;
        return 1;
    }
    case 0x10087b98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10087bb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10087b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10087b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
