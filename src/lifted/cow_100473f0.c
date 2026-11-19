/* f_0x100473f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100473f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100473fau: eax = g->eax; self = g->ecx; edx = g->edx; goto E_100473fa;
    case 0x10047404u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047404;
    case 0x10047408u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047408;
    case 0x1004740eu: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1004740e;
    case 0x10047412u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047412;
    case 0x10047416u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047416;
    case 0x10047418u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047418;
    case 0x10047424u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047424;
    case 0x10047428u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047428;
    case 0x10047430u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_10047430;
    case 0x10047436u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10047436;
    case 0x1004743au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004743a;
    case 0x10047443u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10047443;
    case 0x1004744cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004744c;
    case 0x1004744eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1004744e;
    default: break;
    }
#endif

    COW_AT(100473f0)
    if (rd32(self + 0x108u) != 0u)
    {
        eax = rd32(self + 0x108u);
        edx = in_edx;
        goto L_1004744e;
    }
    COW_AT(100473fa)
    if (rd32(self + 0x100u) == 0u)
    {
        edx = rd32(self + 0x100u);
    COW_AT(10047408)
        eax = rd32(self + 0xfcu);
    }
    else
    {
        edx = rd32(self + 0x100u);
    COW_AT(10047404)
        eax = edx;
    }
    COW_AT(1004740e)
    if (eax == 0u)
    {
    COW_AT(10047416)
        eax = 0u;
    }
    else
    {
    COW_AT(10047412)
        eax = rd32(eax);
    }
    COW_AT(10047418)
    if (rd32(eax + 0xa4u) == 0u) goto L_1004744c;
    COW_AT(10047424)
    if (edx == 0u)
    {
    COW_AT(10047430)
        ecx = rd32(self + 0xfcu);
    }
    else
    {
    COW_AT(10047428)
        ecx = rd32(self + 0x100u);
    }
    COW_AT(10047436)
    if (ecx == 0u) goto L_10047443;
    COW_AT(1004743a)
    g->edx = edx;
    return rd32(rd32(ecx) + 0xa4u);
L_10047443: ;
    COW_AT(10047443)
    g->edx = edx;
    return rd32(0xa4u);
L_1004744c: ;
    COW_AT(1004744c)
    eax = 0u;
L_1004744e: ;
    COW_AT(1004744e)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100473f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100473fau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047404u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047408u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1004740eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047412u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047416u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047418u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047424u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047428u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047430u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10047436u:
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
    case 0x1004743au:
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
    case 0x10047443u:
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
    case 0x1004744cu:
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
    case 0x1004744eu:
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
void cow_adapter_100473f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100473f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
