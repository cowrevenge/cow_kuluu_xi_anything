/* f_0x1013e7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013e7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013e7aau: self = g->ecx; in_edx = g->edx; goto E_1013e7aa;
    case 0x1013e7adu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013e7ad;
    case 0x1013e7b5u: self = g->ecx; in_edx = g->edx; goto E_1013e7b5;
    case 0x1013e7beu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013e7be;
    case 0x1013e7c5u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013e7c5;
    case 0x1013e7cfu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1013e7cf;
    case 0x1013e7d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013e7d3;
    default: break;
    }
#endif

    COW_AT(1013e7a0)
    if ((uint32_t)(int16_t)arg1 == 5u)
    {
    COW_AT(1013e7b5)
        wr16(self + 0x1cu, (uint16_t)arg2);
    }
    else
    {
    COW_AT(1013e7aa)
        if ((uint32_t)(int16_t)arg1 == 6u)
        {
    COW_AT(1013e7ad)
            wr16(self + 0x1cu, 0xeu);
        }
    }
    COW_AT(1013e7be)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x20u);
    COW_AT(1013e7c5)
        if (rd16(self + 0x1cu) == 0xdu)
        {
            edx = in_edx;
        }
        else
        {
            ecx = (self & 0xffff0000u) | rd16(self + 0x1cu);
    COW_AT(1013e7cf)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t1 = cow_thiscall_cdecl(g, eax, ecx, 1, ecx);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
    }
    COW_AT(1013e7d3)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013e7a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013e7aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1013e7adu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013e7b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x1013e7beu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013e7c5u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013e7cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013e7d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013e7a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013e7a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
