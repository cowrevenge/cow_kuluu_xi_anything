/* f_0x10314982 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10314982(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103149afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x28u); goto E_103149af;
    case 0x103149b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x28u); goto E_103149b9;
    case 0x103149c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x28u); goto E_103149c1;
    case 0x103149ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103149cc;
    case 0x103149ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103149ce;
    default: break;
    }
#endif

    COW_AT(10314982)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x18u, 0x42u);
    wr32(sp0 - 0x20u, 0x7fffffffu);
    wr32(sp0 - 0x34u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_cdecl(g, COW_IMG(0x10318c9eu), 4, sp0 - 0x24u, arg2, arg3, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(103149af)
    t4 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x20u, t4 - 1u);
    if ((int32_t)(t4 - 1u) < 0)
    {
        esi = eax;
    COW_AT(103149c1)
        wr32(sp0 - 0x2cu, sp0 - 0x24u);
        wr32(sp0 - 0x30u, 0u);
        g->esp = sp0 - 0x20u;
        cow_call_regs(g, COW_IMG(0x10318b86u), g->eax, g->ecx, edx, 1, 4, 0u, sp0 - 0x24u, in_esi, rd32(sp0 - 0x24u));
    COW_AT(103149cc)
    }
    else
    {
        esi = eax;
    COW_AT(103149b9)
        t5 = rd8(rd32(sp0 - 0x24u));
        wr8(rd32(sp0 - 0x24u), 0u);
    }
    COW_AT(103149ce)
    g->esi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 4u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10314982(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103149afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x103149b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x103149c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x103149ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x2cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x103149ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10314982(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10314982(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
