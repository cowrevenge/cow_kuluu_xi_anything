/* f_0x100dc210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100dc210(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dc215u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dc215;
    case 0x100dc222u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dc222;
    case 0x100dc226u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dc226;
    case 0x100dc230u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dc230;
    case 0x100dc240u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dc240;
    default: break;
    }
#endif

    COW_AT(100dc210)
    t1 = cow_stdcall(g, COW_IMG(0x100dbe00u), 0);
    eax = t1;
    COW_AT(100dc215)
    if (rd32(rd32(COW_IMG(0x10492e10u)) + 0x50u) >= eax)
    {
        ecx = rd32(rd32(COW_IMG(0x10492e10u)) + 0x50u);
        edx = rd32(COW_IMG(0x10492e10u));
        goto L_100dc226;
    }
    edx = rd32(COW_IMG(0x10492e10u));
    COW_AT(100dc222)
    wr32(edx + 0x50u, eax);
    return;
L_100dc226: ;
    COW_AT(100dc226)
    if (ecx - eax >= 0xe0000000u)
    {
    COW_AT(100dc230)
        t2 = rd32(edx + 0x4cu) + 1u;
        wr32(edx + 0x4cu, t2);
        wr32(rd32(COW_IMG(0x10492e10u)) + 0x50u, eax);
    }
    COW_AT(100dc240)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dc210(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dc215u:
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
    case 0x100dc222u:
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
    case 0x100dc226u:
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
    case 0x100dc230u:
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
    case 0x100dc240u:
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
void cow_adapter_100dc210(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100dc210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
