/* f_0x101d2ff0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d2ff0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d301cu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101d301c;
    case 0x101d3025u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101d3025;
    case 0x101d3027u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101d3027;
    case 0x101d3051u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_101d3051;
    case 0x101d305eu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_101d305e;
    default: break;
    }
#endif

    COW_AT(101d2ff0)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 0x894u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x894u, 4u);
    t2 = g->edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
    t4 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t1 == 0u)
    {
        edx = t4;
    COW_AT(101d3025)
        eax = 0u;
    }
    else
    {
        eax = t3;
        edx = t4;
        edi = t1;
    COW_AT(101d301c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, COW_IMG(0x100ac8e0u), edi, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    COW_AT(101d3027)
    wr32(sp0 - 0x1cu, 0x3032375fu);
    wr32(self + 0x38u, eax);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100acba0u), eax, 1, 0x3032375fu);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 8u;
    g->edx = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x100ad010u), rd32(self + 0x38u), 3, sp0 - 0x10u, sp0 - 0xcu, sp0 - 8u);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_101d305e;
    eax = t7;
    edx = t8;
    COW_AT(101d3051)
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x101d30b0u), self, edx, 0);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
L_101d305e: ;
    COW_AT(101d305e)
    t9 = rd32(COW_IMG(0x104e1ba8u));
    wr32(rd32(self + 0x38u) + 0x78u, t9);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    t10 = rd32(self + 0x38u) + 0x34u;
    wr32(sp0 - 0x20u, t10);
    t11 = rd32(self + 0x38u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t10, sp0 - 0x10u);
    wr8(t11 + 0xc0u, 1u);
    t12 = rd32(self + 4u);
    wr32(t11 + 0x70u, t12);
    wr32(rd32(self + 4u) + 0xa0u, t11);
    t13 = (rd32(rd32(self + 4u) + 0x130u) & 0xffffff00u) | (uint8_t)(rd32(rd32(self + 4u) + 0x130u) | 8u);
    t14 = rd32(sp0 - 0x18u);
    wr32(rd32(self + 4u) + 0x130u, t13);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = t14;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d2ff0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d301cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101d3025u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101d3027u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101d3051u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101d305eu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d2ff0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101d2ff0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
