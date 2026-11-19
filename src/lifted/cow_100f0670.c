/* f_0x100f0670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f0670(Guest* g)
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
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f0680u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f0680;
    case 0x100f06a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f06a8;
    default: break;
    }
#endif

    COW_AT(100f0670)
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c794u) == 0u)
    {
        eax = in_eax;
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x1c794u);
        edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100f0680)
        t1 = rd32(arg3 + 0x14u);
        t2 = rd32(arg3 + 0x10u);
        t3 = rd32(arg3 + 0xcu);
        t4 = rd32(arg3 + 4u);
        t5 = (edx & 0xffff0000u) | rd16(edx + 0x1c798u);
        t6 = (arg3 & 0xffff0000u) | rd16(arg3 + 8u);
        g->eax = t6;
        g->edx = t5;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall_cdecl(g, ecx, ecx, 6, t6, t5, t4, t3, t2, t1);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    COW_AT(100f06a8)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f0670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f0680u:
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
    case 0x100f06a8u:
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
void cow_adapter_100f0670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f0670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
