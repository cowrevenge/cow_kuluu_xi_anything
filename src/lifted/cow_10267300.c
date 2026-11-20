/* f_0x10267300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10267300(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026731au: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1026731a;
    case 0x1026731eu: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1026731e;
    case 0x10267328u: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10267328;
    case 0x1026733cu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1026733c;
    case 0x10267348u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10267348;
    case 0x1026734du: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1026734d;
    case 0x10267357u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10267357;
    default: break;
    }
#endif

    COW_AT(10267300)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(t1, 0u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    t2 = rd32(self + 0x18u);
    wr32(sp0 - 0x10u, t2);
    g->eax = t2;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(t2) + 0x18u), rd32(t2), 2, t2, sp0 + 4u);
    eax = t3;
    edi = t1;
    COW_AT(1026731a)
    if ((int32_t)eax >= 0) goto L_10267328;
    COW_AT(1026731e)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004001u;
L_10267328: ;
    COW_AT(10267328)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, COW_IMG(0x1033e878u));
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t4);
    g->eax = t4;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(rd32(rd32(sp0 + 4u))), rd32(rd32(sp0 + 4u)), 3, t4, COW_IMG(0x1033e878u), sp0 - 4u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1026733c)
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t7);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t7) + 8u), rd32(t7), 1, t7);
    esi = eax;
    COW_AT(10267348)
    if ((int32_t)esi >= 0)
    {
        esi = rd32(sp0 - 0xcu);
        goto L_10267357;
    }
    esi = rd32(sp0 - 0xcu);
    COW_AT(1026734d)
    g->esi = esi;
    g->edi = rd32(sp0 - 8u);
    return 0x80004001u;
L_10267357: ;
    COW_AT(10267357)
    t8 = rd32(sp0 - 4u);
    wr32(edi, t8);
    g->esi = esi;
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10267300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026731au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1026731eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10267328u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1026733cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10267348u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1026734du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10267357u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10267300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10267300(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
