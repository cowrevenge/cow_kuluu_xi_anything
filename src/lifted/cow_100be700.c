/* f_0x100be700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100be700(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100be70fu: in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100be70f;
    case 0x100be71du: self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100be71d;
    case 0x100be735u: eax = g->eax; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->esi - 0x72cu; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100be735;
    case 0x100be74au: eax = g->eax; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100be74a;
    default: break;
    }
#endif

    COW_AT(100be700)
    if (arg2 != 0u) goto L_100be71d;
    COW_AT(100be70f)
    wr32(arg1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return arg2 & 0xffffff00u;
L_100be71d: ;
    COW_AT(100be71d)
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), arg2, self, in_edx, 1, 2, arg2, self + 0x72cu);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x10154a40u), t1, 2, arg2, self + 0x72cu);
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        goto L_100be74a;
    }
    eax = t3;
    COW_AT(100be735)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(rd32(self + 0x72cu) + 8u), self + 0x72cu, 0);
    wr32(arg1, t4);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (t4 & 0xffffff00u) | 1u;
L_100be74a: ;
    COW_AT(100be74a)
    wr32(arg1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100be700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100be70fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg2;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be71du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg2;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100be735u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->esi - 0x72cu;
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100be74au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100be700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100be700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
