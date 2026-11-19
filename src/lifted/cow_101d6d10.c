/* f_0x101d6d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d6d10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d6d2fu: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d2f;
    case 0x101d6d32u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d32;
    case 0x101d6d39u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d39;
    case 0x101d6d4cu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d4c;
    case 0x101d6d53u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d53;
    case 0x101d6d5bu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d5b;
    case 0x101d6d62u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101d6d62;
    default: break;
    }
#endif

    COW_AT(101d6d10)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101d6d4c;
    COW_AT(101d6d2f)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101d6d62;
    }
    COW_AT(101d6d32)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
        goto L_101d6d5b;
    }
    eax = rd32(self + 0x14u);
    COW_AT(101d6d39)
    t1 = ((uint16_t)arg2 != 1u) * 8u + 1u;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, eax, t1, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101d6cc0u), self, 0);
    t5 = g->edx;
    g->esi = in_esi;
    g->edx = t5;
    return t4;
L_101d6d4c: ;
    COW_AT(101d6d4c)
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
    COW_AT(101d6d53)
        t6 = ((uint16_t)arg2 != 1u) * 8u + 1u;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall_cdecl(g, eax, t6, 2, t6, 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
L_101d6d5b: ;
    COW_AT(101d6d5b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x101d6cc0u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101d6d62: ;
    COW_AT(101d6d62)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d6d10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d6d2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        g->ecx = ((uint16_t)arg2 != 1u) * 8u + 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = ((uint16_t)arg2 != 1u) * 8u + 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d39u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = ((uint16_t)arg2 != 1u) * 8u + 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d4cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = ((uint16_t)arg2 != 1u) * 8u + 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d53u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = ((uint16_t)arg2 != 1u) * 8u + 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d5bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101d6d62u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_101d6d10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d6d10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
