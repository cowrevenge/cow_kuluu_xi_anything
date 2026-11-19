/* f_0x1025a250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1025a250(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025a264u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1025a264;
    case 0x1025a2b0u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1025a2b0;
    default: break;
    }
#endif

    COW_AT(1025a250)
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x24u, in_esi, in_ebx);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1025a2b0;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    COW_AT(1025a264)
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 3u);
    wr32(esi, COW_IMG(0x1033ceccu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10258900u), arg1, 0);
    t4 = g->edx;
    wr32(esi + 0xcu, t3);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10258920u), arg1, 0);
    t6 = g->edx;
    wr32(esi + 0x10u, t5);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1018d2b0u), esi + 0x14u, 0);
    t8 = g->edx;
    wr32(esi + 0x20u, arg1);
    wr32(esi, COW_IMG(0x1033ced0u));
    g->edx = t8;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, esi);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t10;
    return t9;
L_1025a2b0: ;
    COW_AT(1025a2b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x1025a200u), self, 1, 0u);
    t12 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t12;
    return t11;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025a250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025a264u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1025a2b0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025a250(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
