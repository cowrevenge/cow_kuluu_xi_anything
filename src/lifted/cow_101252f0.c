/* f_0x101252f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101252f0(Guest* g)
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10125302u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10125302;
    case 0x1012530bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012530b;
    case 0x10125317u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10125317;
    case 0x1012531cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1012531c;
    case 0x10125321u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10125321;
    case 0x10125325u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10125325;
    case 0x10125332u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_ebx = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10125332;
    case 0x1012533du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1012533d;
    case 0x10125341u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10125341;
    case 0x10125353u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10125353;
    default: break;
    }
#endif

    COW_AT(101252f0)
    if (rd32(COW_IMG(0x10456bf8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456bf8u));
        ecx = rd32(COW_IMG(0x1045666cu));
        goto L_1012533d;
    }
    eax = rd32(COW_IMG(0x10456bf8u));
    ecx = rd32(COW_IMG(0x1045666cu));
    COW_AT(10125302)
    if (ecx == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(1012530b)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, arg1);
        t2 = g->edx;
        eax = t1;
        ecx = rd32(COW_IMG(0x1045666cu));
        edx = t2;
    }
    COW_AT(10125317)
    if (rd8(self + 0x4eu) != (uint8_t)arg1)
    {
    COW_AT(1012531c)
        if ((uint8_t)arg1 == 1u)
        {
    COW_AT(10125321)
            if (ecx != 0u)
            {
    COW_AT(10125325)
                t3 = rd8(self + 0x4cu);
                g->eax = t3;
                g->esp = sp0 - 8u;
                t4 = cow_fastcall(g, COW_IMG(0x100097f0u), ecx, edx, 2, t3, 1u);
                t5 = g->edx;
                eax = t4;
                edx = t5;
            }
        }
    }
    COW_AT(10125332)
    wr8(self + 0x4eu, (uint8_t)arg1);
    wr8(self + 0x4eu, (uint8_t)arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_1012533d: ;
    COW_AT(1012533d)
    if (ecx == 0u) goto L_10125353;
    COW_AT(10125341)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10009780u), ecx, 1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(self + 0x4eu, (uint8_t)arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t8;
    return t6;
L_10125353: ;
    COW_AT(10125353)
    wr8(self + 0x4eu, (uint8_t)arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = (in_edx & 0xffffff00u) | (uint8_t)arg1;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101252f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10125302u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1012530bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10125317u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012531cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10125321u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10125325u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10125332u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebx = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012533du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10125341u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10125353u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101252f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101252f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
