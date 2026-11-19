/* f_0x1023ebb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023ebb0(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023ebdfu: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1023ebdf;
    case 0x1023ebfau: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1023ebfa;
    default: break;
    }
#endif

    COW_AT(1023ebb0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t3 = g->edx;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(1023ebdf)
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x1cu, 0x3fu);
        wr32(sp0 - 0x20u, 8u);
        g->eax = eax;
        g->ecx = sp0 - 8u;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x3fu);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x1cu, t4);
        g->edx = t6;
        g->esp = sp0 - 0x10u;
        t7 = cow_cdecl(g, COW_IMG(0x1011d7f0u), 3, t4, sp0 - 8u, 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    COW_AT(1023ebfa)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023ebb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023ebdfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x14u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1023ebfau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ebb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023ebb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
