/* f_0x100a3040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a3040(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a3051u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100a3051;
    case 0x100a3093u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100a3093;
    case 0x100a30a8u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100a30a8;
    case 0x100a30cbu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100a30cb;
    case 0x100a30d1u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100a30d1;
    default: break;
    }
#endif

    COW_AT(100a3040)
    if (rd32(COW_IMG(0x10487f08u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10487f08u));
        goto L_100a30d1;
    }
    eax = rd32(COW_IMG(0x10487f08u));
    COW_AT(100a3051)
    g->ebx = 0u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x100a30e0u), eax, g->ecx, g->edx, 1, 2, COW_IMG(0x10485178u), 0x400u);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x100a2fd0u), t1, t2, g->edx, 1, 6, COW_IMG(0x104808b0u), 1u, 1u, t1, COW_IMG(0x10485178u), 0x400u);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xf0u, 4u);
    t8 = g->edx;
    g->esp = sp0 - 8u;
    t9 = cow_fastcall(g, COW_IMG(0x100748f0u), t7, t8, 0);
    t10 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t7 == 0u)
    {
        eax = t9;
        goto L_100a30cb;
    }
    eax = t9;
    edx = t10;
    esi = t7;
    COW_AT(100a3093)
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x100a2790u), eax, esi, edx, 0, 1, COW_IMG(0x104808b0u));
    t12 = g->edx;
    wr32(COW_IMG(0x10487f08u), t11);
    if (t11 == 0u)
    {
        eax = t11;
        goto L_100a30d1;
    }
    eax = t11;
    edx = t12;
    COW_AT(100a30a8)
    wr32(eax + 0x50u, COW_IMG(0x100a3160u));
    t13 = rd32(COW_IMG(0x10487f08u));
    wr32(t13 + 0x54u, COW_IMG(0x100a3130u));
    g->eax = t13;
    g->esp = sp0 - 8u;
    t14 = cow_fastcall(g, COW_IMG(0x100a28e0u), rd32(COW_IMG(0x10487f08u)), edx, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t14 & 0xffffff00u) | 1u;
L_100a30cb: ;
    COW_AT(100a30cb)
    wr32(COW_IMG(0x10487f08u), 0u);
L_100a30d1: ;
    COW_AT(100a30d1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a3040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a3051u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a3093u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a30a8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100a30cbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a30d1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a3040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
