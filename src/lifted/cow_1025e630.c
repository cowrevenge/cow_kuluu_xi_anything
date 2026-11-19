/* f_0x1025e630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025e630(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025e653u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_1025e653;
    case 0x1025e66du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1025e66d;
    case 0x1025e679u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025e679;
    case 0x1025e684u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1025e684;
    default: break;
    }
#endif

    COW_AT(1025e630)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_edi);
    t1 = rd32(self + 0x54u);
    wr32(sp0 - 4u, t1);
    t2 = rd32(self + 0x58u);
    wr32(sp0 - 8u, t2);
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t3 + 0x48u), self, 0);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x14u, in_esi);
    ecx = t4;
    edx = t5;
    edi = rd32(COW_IMG(0x103291c0u));
L_1025e653: ;
    COW_AT(1025e653)
    wr32(sp0 - 0x18u, 0x2710u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 2u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, edi, ecx, 4, 2u, sp0 - 8u, 0u, 0x2710u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0x102u)
    {
        ecx = t7;
        edx = t8;
        goto L_1025e653;
    }
    eax = t6;
    esi = t6;
    COW_AT(1025e66d)
    g->eax = eax;
    g->edx = rd32(self);
    t9 = rd32(self);
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, rd32(t9 + 0x4cu), self, 0);
    t11 = g->edx;
    if (esi != 0u)
    {
        eax = t10;
        edx = t11;
        esi = rd32(sp0 - 0x14u);
        goto L_1025e684;
    }
    edx = t11;
    esi = rd32(sp0 - 0x14u);
    COW_AT(1025e679)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80040223u;
L_1025e684: ;
    COW_AT(1025e684)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1025ee70u), self, 0);
    t12 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t12;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025e630(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025e653u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1025e66du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025e679u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025e684u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e630(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025e630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
