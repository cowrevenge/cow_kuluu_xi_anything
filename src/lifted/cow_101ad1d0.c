/* f_0x101ad1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ad1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ad1e2u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ad1e2;
    case 0x101ad1e7u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ad1e7;
    case 0x101ad1e8u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ad1e8;
    case 0x101ad1f0u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101ad1f0;
    default: break;
    }
#endif

    COW_AT(101ad1d0)
    g->eax = rd32(arg2);
    t1 = rd32(arg2);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x10u), arg2, 0);
    t3 = g->ecx;
    if (rd8(t2) == 0u)
    {
        esi = 0u;
        goto L_101ad1f0;
    }
    eax = t2;
    ecx = (t3 & 0xffffff00u) | rd8(t2);
    esi = 0u;
L_101ad1e2: ;
    COW_AT(101ad1e2)
    if ((uint8_t)ecx == 0xfdu)
    {
    COW_AT(101ad1e7)
        esi = esi + 1u;
    }
    COW_AT(101ad1e8)
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_101ad1e2;
    }
L_101ad1f0: ;
    COW_AT(101ad1f0)
    g->esi = in_esi;
    g->edx = arg3;
    return (arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u) * 6u + 6u & 0xffffff00u) | (int32_t)(arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u) * 6u + 6u) < (int32_t)arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ad1d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ad1e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ad1e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ad1e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101ad1f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad1d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ad1d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
