/* f_0x102a1ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a1ee0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a1ef1u: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102a1ef1;
    case 0x102a1ef8u: eax = g->eax; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102a1ef8;
    case 0x102a1efdu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102a1efd;
    default: break;
    }
#endif

    COW_AT(102a1ee0)
    if (rd32(arg1) - 0xf0001u > 6u)
    {
        eax = rd32(arg1) - 0xf0001u;
        goto L_102a1efd;
    }
    eax = rd32(arg1) - 0xf0001u;
    COW_AT(102a1ef1)
    t1 = rd32(COW_IMG(0x102a1f24u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102a1ef8u: goto L_102a1ef8;
    default: rt_fatal(g, COW_IMG(0x102a1ef1u), "switch");
    }
    return 0;
L_102a1ef8: ;
    COW_AT(102a1ef8)
    g->esi = in_esi;
    return arg1 + 0x14u;
L_102a1efd: ;
    COW_AT(102a1efd)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd460u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd440u), rd32(arg1));
    g->esi = in_esi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a1ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a1ef1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1ef8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102a1efdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a1ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
