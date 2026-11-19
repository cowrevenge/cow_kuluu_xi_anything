/* f_0x101a0770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a0770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg72 = rd32(sp0 + 0x120u);
    const uint32_t arg73 = rd32(sp0 + 0x124u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a077au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a077a;
    case 0x101a0785u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a0785;
    case 0x101a0794u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0794;
    case 0x101a079au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a079a;
    case 0x101a07adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a07ad;
    case 0x101a07b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_101a07b0;
    case 0x101a07b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a07b5;
    case 0x101a07c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a07c7;
    default: break;
    }
#endif

    COW_AT(101a0770)
    wr32(sp0 - 4u, in_esi);
    if (arg2 != 8u)
    {
        eax = arg2;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_101a07b0;
    }
    COW_AT(101a077a)
    if (arg72 == 0u)
    {
        eax = arg72;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_101a07b0;
    }
    COW_AT(101a0785)
    wr32(sp0 - 8u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->ecx = COW_IMG(0x1066278cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x101be690u), 1, sp0 + 0xcu);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101a0794)
    if ((int32_t)eax >= 0)
    {
        esi = eax;
        goto L_101a07b5;
    }
    COW_AT(101a079a)
    wr32(sp0 - 8u, arg73);
    wr32(sp0 - 0xcu, 0xffffffffu);
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, arg72, arg73, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(101a07ad)
    loc_4 = rd32(sp0 - 4u);
L_101a07b0: ;
    COW_AT(101a07b0)
    g->esi = loc_4;
    g->edx = edx;
    return 0xffffffffu;
L_101a07b5: ;
    COW_AT(101a07b5)
    wr32(sp0 - 8u, arg73);
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 0u);
    g->edx = arg73;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, arg72, ecx, 0);
    t6 = g->edx;
    edx = t6;
    COW_AT(101a07c7)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a0770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a077au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a0785u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a0794u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a079au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a07adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101a07b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a07b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a07c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a0770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a0770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
