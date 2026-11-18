/* f_0x10115cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10115cc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10115cdau: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10115cda;
    case 0x10115ce3u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10115ce3;
    case 0x10115cf6u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_10115cf6;
    case 0x10115cffu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_10115cff;
    default: break;
    }
#endif

    COW_AT(10115cc0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(arg1 + 0x4f1a8u) == 0u)
    {
        eax = rd32(arg1 + 0x4f1a8u);
        ebx = rd32(arg1 + 0x4f1acu);
        goto L_10115ce3;
    }
    COW_AT(10115cda)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10115ce3: ;
    COW_AT(10115ce3)
    wr32(sp0 - 0x20u, arg1 + 0x2f0d4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026dc10u), self, 3, arg1 + 0x2f0d4u, in_edi, in_esi);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        edx = t2;
        goto L_10115cff;
    }
    COW_AT(10115cf6)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_10115cff: ;
    COW_AT(10115cff)
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, arg1 + 0x2f0d4u);
    wr32(ebx + 0x140u, arg2);
    g->eax = arg2;
    g->ecx = sp0 - 0x10u;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x1026dbeeu), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t4 = g->ecx;
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, 0x2bu);
    t5 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t5);
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10116610u), 3, t5, 0x2bu, ebx);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, arg1 + 0x2f0d4u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x1026dc2du), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x30u), 0x2bu);
    wr32(arg1 + 0x4f1a8u, 0x15u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10115cc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10115cdau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10115ce3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10115cf6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10115cffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
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
void cow_adapter_10115cc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10115cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
