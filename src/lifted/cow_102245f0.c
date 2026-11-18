/* f_0x102245f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102245f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10224629u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10224629;
    case 0x10224635u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10224635;
    case 0x1022463au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1022463a;
    default: break;
    }
#endif

    COW_AT(102245f0)
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = (t2 & 0xffffff00u) | rd8(self + 0xd2u);
    t5 = (t3 & 0xffffff00u) | rd8(self + 0xd1u);
    g->eax = arg1;
    g->edx = t5;
    t6 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, arg1, t5, t4);
    t7 = g->edx;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = t7;
    COW_AT(10224629)
        if (rd32(ecx + 0xc4u) == COW_IMG(0x10224ef0u))
        {
    COW_AT(10224635)
            g->eax = eax;
            g->esp = sp0;
            t8 = cow_fastcall(g, COW_IMG(0x101594f0u), ecx, edx, 0);
            eax = t8;
        }
    }
    COW_AT(1022463a)
    g->esi = in_esi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102245f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10224629u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10224635u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022463au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
void cow_adapter_102245f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102245f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
