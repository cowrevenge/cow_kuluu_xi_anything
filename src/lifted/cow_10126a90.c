/* f_0x10126a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10126a90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10126aa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10126aa0;
    case 0x10126abau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10126aba;
    case 0x10126ac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10126ac2;
    case 0x10126adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126ade;
    case 0x10126ae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126ae3;
    case 0x10126aefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126aef;
    case 0x10126af3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126af3;
    case 0x10126afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126afc;
    case 0x10126affu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126aff;
    case 0x10126b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b13;
    case 0x10126b1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b1e;
    case 0x10126b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b29;
    case 0x10126b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b38;
    case 0x10126b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b41;
    case 0x10126b48u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b48;
    case 0x10126b4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10126b4c;
    default: break;
    }
#endif

    COW_AT(10126a90)
    if (rd32(self + 0x1cu) == 0u)
    {
        loc_4 = self;
        goto L_10126b4c;
    }
    eax = rd32(self + 0x1cu);
    COW_AT(10126aa0)
    t1 = rd32(eax + 0x10u);
    g->edx = rd32(rd32(self + 0x30u) + 0x64u);
    t2 = rd32(rd32(self + 0x30u) + 0x64u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10129290u), t1, rd32(t2 + 0x18u), g->edx, 0, 1, t1);
    t3 = g->edx;
    if ((rd32(self + 0x20u) >> 8u & 0x40u) != 0u)
    {
        eax = rd32(self + 0x20u);
        edx = t3;
    COW_AT(10126aba)
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10136800u), rd32(self + 0x30u), 0);
    }
    COW_AT(10126ac2)
    t4 = rd32(self + 0x1cu) + 0x82cu;
    t5 = rd32(self + 0x1cu) + 0x828u;
    g->eax = t4;
    t6 = rd32(self + 0x1cu);
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x10126c60u), t6, 2, t5, t4);
    t8 = g->ecx;
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10126b13;
    }
    eax = t7;
    ecx = t8;
    COW_AT(10126ade)
    if (rd8(eax) == 0u) goto L_10126b13;
    COW_AT(10126ae3)
    if (!(rd8(self + 0x20u) & 1u))
    {
        loc_4 = self & 0xffffff00u;
    }
    else
    {
    COW_AT(10126aef)
        loc_4 = (self & 0xffffff00u) | 1u;
    }
    COW_AT(10126af3)
    if (rd8(rd32(self + 0x1cu) + 4u) != 0x97u)
    {
        ecx = rd32(self + 0x1cu);
    }
    else
    {
        ecx = rd32(self + 0x1cu);
    COW_AT(10126afc)
        wr8(self + 0x34u, 1u);
    }
    COW_AT(10126aff)
    t9 = (ecx & 0xffffff00u) | rd8(self + 0x34u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10136670u), rd32(self + 0x30u), 3, eax, t9, loc_4);
L_10126b1e: ;
    COW_AT(10126b1e)
    if (rd32(self + 0x20u) - 0x31u > 7u) goto L_10126b4c;
    eax = rd32(self + 0x20u) - 0x31u;
    COW_AT(10126b29)
    t11 = rd32(COW_IMG(0x10126b50u) + rd8(COW_IMG(0x10126b58u) + eax) * 4u);
    switch (t11 - RD)
    {
    case 0x10126b38u: goto L_10126b38;
    case 0x10126b48u: goto L_10126b48;
    default: rt_fatal(g, COW_IMG(0x10126b31u), "switch");
    }
    return;
L_10126b13: ;
    COW_AT(10126b13)
    t10 = rd32(self + 0x1cu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126970u), self, 1, t10);
    loc_4 = self;
    goto L_10126b1e;
L_10126b38: ;
    COW_AT(10126b38)
    if (rd8(rd32(self + 0x1cu) + 4u) != 0x97u) goto L_10126b48;
    COW_AT(10126b41)
    wr8(self + 0x34u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10126b48: ;
    COW_AT(10126b48)
    wr8(self + 0x34u, 0u);
L_10126b4c: ;
    COW_AT(10126b4c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10126a90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10126aa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126abau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126ac2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126adeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126ae3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126aefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        wr32(sp0 - 4u, self & 0xffffff00u);
        (void)sp0;
        return 1;
    }
    case 0x10126af3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126afcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126affu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126b13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10126b1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126b29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126b38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126b41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10126b48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10126b4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10126a90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10126a90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
