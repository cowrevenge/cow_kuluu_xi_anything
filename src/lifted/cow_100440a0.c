/* f_0x100440a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100440a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100440a7u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100440a7;
    case 0x100440dbu: eax = g->eax; ecx = g->ecx; goto E_100440db;
    default: break;
    }
#endif

    COW_AT(100440a0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    g->ecx = self;
    g->esp = sp0 - 8u;
    COW_RET(0x100440a7u);
    t1 = cow_stdcall(g, COW_IMG(0x10043de0u), 0);
    t2 = g->ecx;
    eax = t1;
    ecx = t2;
    COW_AT(100440a7)
    t3 = rd32(sp0 + 4u);
    wr32(eax * 0x20u + ecx + 0xcu, t3);
    wr32(sp0 - 0xcu, 0x1000u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    t4 = rd32(eax * 0x20u + ecx + 0x20u);
    t5 = t4 * rd32(sp0 + 8u);
    wr32(sp0 - 0x14u, t5);
    wr32(sp0 - 0x18u, t4 * t3);
    t6 = rd32(eax * 0x20u + ecx + 4u);
    wr32(sp0 - 0x1cu, t6);
    g->esp = sp0 - 8u;
    COW_RET(0x100440dbu);
    cow_thiscall(g, rd32(rd32(t6) + 0x2cu), rd32(t6), 5, t6, t4 * t3, t5, sp0 + 4u, 0x1000u);
    COW_AT(100440db)
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return rd32(sp0 + 4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100440a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100440a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100440dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100440a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100440a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
