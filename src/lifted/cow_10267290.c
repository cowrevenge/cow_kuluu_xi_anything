/* f_0x10267290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10267290(Guest* g)
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
    case 0x102672aau: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102672aa;
    case 0x102672aeu: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102672ae;
    case 0x102672b8u: eax = g->eax; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_102672b8;
    case 0x102672ccu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102672cc;
    case 0x102672d8u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102672d8;
    case 0x102672ddu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102672dd;
    case 0x102672e7u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102672e7;
    default: break;
    }
#endif

    COW_AT(10267290)
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
    COW_AT(102672aa)
    if ((int32_t)eax >= 0) goto L_102672b8;
    COW_AT(102672ae)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004001u;
L_102672b8: ;
    COW_AT(102672b8)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, COW_IMG(0x1033eeb8u));
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t4);
    g->eax = t4;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(rd32(rd32(sp0 + 4u))), rd32(rd32(sp0 + 4u)), 3, t4, COW_IMG(0x1033eeb8u), sp0 - 4u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(102672cc)
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t7);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t7) + 8u), rd32(t7), 1, t7);
    esi = eax;
    COW_AT(102672d8)
    if ((int32_t)esi >= 0)
    {
        esi = rd32(sp0 - 0xcu);
        goto L_102672e7;
    }
    esi = rd32(sp0 - 0xcu);
    COW_AT(102672dd)
    g->esi = esi;
    g->edi = rd32(sp0 - 8u);
    return 0x80004001u;
L_102672e7: ;
    COW_AT(102672e7)
    t8 = rd32(sp0 - 4u);
    wr32(edi, t8);
    g->esi = esi;
    g->edi = rd32(sp0 - 8u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10267290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102672aau:
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
    case 0x102672aeu:
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
    case 0x102672b8u:
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
    case 0x102672ccu:
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
    case 0x102672d8u:
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
    case 0x102672ddu:
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
    case 0x102672e7u:
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
void cow_adapter_10267290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10267290(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
