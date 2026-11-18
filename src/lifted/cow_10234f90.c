/* f_0x10234f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10234f90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10234fb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10234fb2;
    case 0x10234fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10234fbc;
    default: break;
    }
#endif

    COW_AT(10234f90)
    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
    t2 = cow_divs(g, t1, rd32(COW_IMG(0x10386c70u) + arg2 * 4u));
    t3 = cow_mods(g, t1, rd32(COW_IMG(0x10386c70u) + arg2 * 4u));
    eax = t3 * 3u;
    ecx = rd32(COW_IMG(0x10386a60u) + arg2 * 4u + t3 * 0x18u);
    edx = arg1;
L_10234fb2: ;
    COW_AT(10234fb2)
    t4 = rd8(ecx);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = (eax & 0xffffff00u) | t4;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10234fb2;
    }
    COW_AT(10234fbc)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10234f90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10234fb2u:
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
    case 0x10234fbcu:
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
void cow_adapter_10234f90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10234f90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
