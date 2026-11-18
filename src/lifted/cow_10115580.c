/* f_0x10115580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10115580(Guest* g)
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10115593u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10115593;
    case 0x1011559bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1011559b;
    case 0x101155aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101155ae;
    case 0x101155b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101155b6;
    default: break;
    }
#endif

    COW_AT(10115580)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x4f1a8u) == 0u)
    {
        eax = rd32(arg1 + 0x4f1a8u);
        goto L_1011559b;
    }
    COW_AT(10115593)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_1011559b: ;
    COW_AT(1011559b)
    wr32(sp0 - 0x1cu, arg1 + 0x2f0d4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026dc10u), self, 3, arg1 + 0x2f0d4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_101155b6;
    }
    COW_AT(101155ae)
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 0u;
L_101155b6: ;
    COW_AT(101155b6)
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, arg1 + 0x2f0d4u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1026dbeeu), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t5 = rd32(arg1 + 0x4f1acu);
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0x28u, 0x26u);
    t6 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t6);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10116610u), 3, t6, 0x26u, t5);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x34u, arg1 + 0x2f0d4u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x1026dc2du), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x2cu), 0x26u);
    wr32(arg1 + 0x4f1a8u, 3u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10115580(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10115593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011559bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101155aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101155b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->esi = arg1 + 0x2f0d4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10115580(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10115580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
