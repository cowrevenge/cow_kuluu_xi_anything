/* f_0x100f1a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1a60(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f1a7du: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1a7d;
    case 0x100f1a8au: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1a8a;
    case 0x100f1a92u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1a92;
    case 0x100f1aacu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1aac;
    default: break;
    }
#endif

    COW_AT(100f1a60)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_cdecl(g, COW_IMG(0x100f1920u), 1, sp0 - 0x28u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x34u, t1);
    g->edx = t3;
    g->esp = sp0 - 0x30u;
    t4 = cow_cdecl(g, COW_IMG(0x100f15d0u), 1, t1);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        esi = t4;
        goto L_100f1aac;
    }
    edx = t5;
    esi = t4;
    COW_AT(100f1a7d)
    if (rd32(sp0 - 0x28u) & 1u)
    {
        eax = rd32(sp0 - 0x28u) & 1u;
        goto L_100f1a92;
    }
    eax = rd32(sp0 - 0x28u) & 1u;
    COW_AT(100f1a8a)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xffffffffu;
L_100f1a92: ;
    COW_AT(100f1a92)
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 0xfu);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, arg1);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1, sp0 - 0x20u, 0xfu);
    wr8(arg1 + 0xfu, 0u);
L_100f1aac: ;
    COW_AT(100f1aac)
    g->esi = in_esi;
    g->edi = in_edi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f1a60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f1a7du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1a8au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1a92u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1aacu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1a60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f1a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
