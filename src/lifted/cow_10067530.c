/* f_0x10067530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067530(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 536u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006755fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006755f;
    case 0x10067563u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067563;
    case 0x10067567u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067567;
    case 0x1006756bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006756b;
    case 0x10067573u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067573;
    case 0x10067579u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067579;
    case 0x1006757du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006757d;
    case 0x10067584u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067584;
    case 0x10067588u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067588;
    case 0x1006758bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006758b;
    case 0x1006758fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006758f;
    case 0x10067594u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067594;
    case 0x1006759bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006759b;
    case 0x100675a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675a7;
    case 0x100675b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675b2;
    case 0x100675ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675ce;
    case 0x100675d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675d2;
    case 0x100675e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675e0;
    case 0x100675ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675eb;
    case 0x100675f7u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_100675f7;
    case 0x10067601u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_10067601;
    case 0x1006760fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0x20cu); in_esi = rd32(sp0 - 0x208u); in_ebp = rd32(sp0 - 0x204u); g->ebp = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x208u); goto E_1006760f;
    default: break;
    }
#endif

    COW_AT(10067530)
    wr32(sp0 - 0x204u, in_ebp);
    wr32(sp0 - 0x208u, in_esi);
    wr32(sp0 - 0x20cu, in_edi);
    wr32(sp0 - 0x210u, arg1);
    wr8(sp0 - 0x200u, 0u);
    wr8(arg2, 0u);
    g->eax = arg2;
    g->ecx = self;
    g->esp = sp0 - 0x20cu;
    t1 = cow_call_regs(g, COW_IMG(0x100673d0u), g->eax, g->ecx, in_edx, 0, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0xffu)
    {
        eax = t1;
        edx = t3;
        esi = sp0 - 0x200u;
        goto L_100675a7;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = sp0 - 0x200u;
L_1006755f: ;
    COW_AT(1006755f)
    if ((uint8_t)eax == 0xau) goto L_1006756b;
    COW_AT(10067563)
    if ((uint8_t)eax == 0x20u) goto L_1006756b;
    COW_AT(10067567)
    if ((uint8_t)eax != 9u) goto L_10067573;
L_1006756b: ;
    COW_AT(1006756b)
    if (rd8(sp0 - 0x200u) == 0u) goto L_1006759b;
L_10067573: ;
    COW_AT(10067573)
    wr8(esi, (uint8_t)eax);
    if ((uint8_t)eax == 0xau) goto L_1006757d;
    COW_AT(10067579)
    if ((uint8_t)eax != 9u) goto L_1006758b;
L_1006757d: ;
    COW_AT(1006757d)
    if (rd8(sp0 - 0x200u) != 0x23u) goto L_1006759b;
    COW_AT(10067584)
    if ((uint8_t)eax == 0xau) goto L_100675a7;
    COW_AT(10067588)
    wr8(esi, 0x20u);
L_1006758b: ;
    COW_AT(1006758b)
    if ((uint8_t)eax == 0x3bu) goto L_100675a7;
    COW_AT(1006758f)
    if ((uint8_t)eax == 0x7bu)
    {
        esi = esi + 1u;
        goto L_100675a7;
    }
    esi = esi + 1u;
    COW_AT(10067594)
    if (rd8(sp0 - 0x200u) == 0x7du) goto L_100675a7;
L_1006759b: ;
    COW_AT(1006759b)
    wr32(sp0 - 0x210u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x20cu;
    t4 = cow_call_regs(g, COW_IMG(0x100673d0u), g->eax, g->ecx, edx, 0, 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0xffu)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1006755f;
    }
    eax = t4;
    edx = t6;
L_100675a7: ;
    COW_AT(100675a7)
    wr8(esi, 0u);
    if (rd8(sp0 - 0x200u) != 0xau)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
        goto L_100675ce;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
    COW_AT(100675b2)
    wr32(sp0 - 0x210u, arg2);
    wr32(sp0 - 0x214u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20cu;
    t7 = cow_thiscall(g, COW_IMG(0x10067530u), self, 2, arg1, arg2);
    t8 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t8;
    return t7;
L_100675ce: ;
    COW_AT(100675ce)
    if ((uint8_t)eax != 0u) goto L_100675e0;
    COW_AT(100675d2)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return 0u;
L_100675e0: ;
    COW_AT(100675e0)
    if ((uint8_t)eax != 0x23u) goto L_1006760f;
    COW_AT(100675eb)
    eax = sp0 - 0x200u;
    ecx = sp0 - 0x200u;
L_100675f7: ;
    COW_AT(100675f7)
    t9 = rd8(eax);
    wr8(arg2 + eax - sp0 + 0x200u, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_100675f7;
    }
    COW_AT(10067601)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg2 - (sp0 - 0x200u);
    return arg2;
L_1006760f: ;
    COW_AT(1006760f)
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    wr32(sp0 - 0x214u, arg2);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    cow_call_regs(g, COW_IMG(0x10067630u), eax, self, g->edx, 0, 2, arg2, sp0 - 0x200u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t10;
    return arg2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10067530(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006755fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067563u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067567u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006756bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067573u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067579u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006757du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067584u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067588u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006758bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006758fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067594u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006759bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100675a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100675b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100675ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    case 0x100675d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    case 0x100675e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        (void)sp0;
        return 1;
    }
    case 0x100675ebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100675f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->edx = arg2 - (sp0 - 0x200u);
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10067601u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->edx = arg2 - (sp0 - 0x200u);
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006760fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20cu);
        in_esi = rd32(sp0 - 0x208u);
        in_ebp = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10067530(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10067530(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
