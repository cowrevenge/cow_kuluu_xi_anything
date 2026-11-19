/* f_0x10019550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10019550(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10019568u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10019568;
    case 0x1001956du: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1001956d;
    default: break;
    }
#endif

    COW_AT(10019550)
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329400u)), 0);   /* winmm.dll!timeGetTime */
    if (t1 - rd32(self + 0x1cu) != rd32(self + 0xcu))
    {
        eax = t1 - rd32(self + 0x1cu) - rd32(self + 0xcu);
        edx = rd32(self + 0x1cu);
    }
    else
    {
        edx = rd32(self + 0x1cu);
    COW_AT(10019568)
        eax = 1u;
    }
    COW_AT(1001956d)
    d2 = fr(g, (double)rdf32(COW_IMG(0x10329cd8u)) / (double)(int64_t)cow_i64(eax, 0u));
    wrf32(self + 4u, (float)d2);
    g->esi = in_esi;
    g->edx = edx;
    fpush(g, d2);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019550(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10019568u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1001956du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019550(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10019550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
