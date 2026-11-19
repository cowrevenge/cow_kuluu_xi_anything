/* f_0x101cc720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cc720(Guest* g)
{
    uint32_t eax;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101cc736u: eax = g->eax; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101cc736;
    case 0x101cc744u: eax = g->eax; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101cc744;
    case 0x101cc74cu: eax = g->eax; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101cc74c;
    case 0x101cc754u: eax = g->eax; self = g->esi; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101cc754;
    case 0x101cc78du: eax = g->eax; goto E_101cc78d;
    case 0x101cc79bu: eax = g->eax; self = g->esi; goto E_101cc79b;
    case 0x101cc7a1u: eax = g->eax; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101cc7a1;
    case 0x101cc7acu: eax = g->eax; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101cc7ac;
    case 0x101cc7e1u: eax = g->eax; goto E_101cc7e1;
    default: break;
    }
#endif

    COW_AT(101cc720)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x101cc6f0u), self, 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101cc744;
    }
    COW_AT(101cc736)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
L_101cc744: ;
    COW_AT(101cc744)
    if (arg2 != 0u) goto L_101cc7ac;
    COW_AT(101cc74c)
    if (arg1 == rd32(self + 0x398u))
    {
        loc_24 = in_ebx;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_101cc7a1;
    }
    COW_AT(101cc754)
    t2 = (uint32_t)(int16_t)rd16(eax + 4u);
    wr32(sp0 - 0x30u, t2);
    wr32(sp0 - 0x34u, rd32(eax));
    wr32(sp0 - 0x38u, COW_IMG(0x1037d790u));
    wr32(sp0 - 0x3cu, self + 0x378u);
    g->ebx = arg1;
    g->edx = rd32(eax);
    t3 = rd32(eax);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x378u, COW_IMG(0x1037d790u), t3, t2, in_edi);
    t4 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x54u);
    wr32(sp0 - 0x3cu, self + 0x324u);
    wr32(sp0 - 0x40u, self + 0x378u);
    g->eax = self + 0x324u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, self + 0x378u, self + 0x324u, 0x54u, 0u, 0u);
    if ((int32_t)t5 >= 0) goto L_101cc79b;
    COW_AT(101cc78d)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 5u;
L_101cc79b: ;
    COW_AT(101cc79b)
    wr32(self + 0x398u, arg1);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
L_101cc7a1: ;
    COW_AT(101cc7a1)
    g->ebx = loc_24;
    g->esi = loc_28;
    g->edi = loc_2c;
    return 0u;
L_101cc7ac: ;
    COW_AT(101cc7ac)
    t6 = (uint32_t)(int16_t)rd16(eax + 4u);
    wr32(sp0 - 0x30u, t6);
    wr32(sp0 - 0x34u, rd32(eax));
    wr32(sp0 - 0x38u, COW_IMG(0x1037d790u));
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->ebx = arg1;
    g->eax = sp0 - 0x20u;
    g->edx = rd32(eax);
    t7 = rd32(eax);
    g->esp = sp0 - 0x28u;
    t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037d790u), t7, t6, in_edi);
    t9 = g->edx;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x54u);
    wr32(sp0 - 0x3cu, arg2);
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, sp0 - 0x20u, arg2, 0x54u, 0u, 0u);
    if ((int32_t)t10 >= 0)
    {
        loc_24 = in_ebx;
        loc_28 = in_esi;
        loc_2c = in_edi;
        goto L_101cc7a1;
    }
    COW_AT(101cc7e1)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return 5u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101cc720(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101cc736u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101cc744u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cc74cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cc754u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cc78du:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101cc79bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->esi;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101cc7a1u:
    {
        uint32_t eax;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x101cc7acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101cc7e1u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc720(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101cc720(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
