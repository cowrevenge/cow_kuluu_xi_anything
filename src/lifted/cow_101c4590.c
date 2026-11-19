/* f_0x101c4590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c4590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_248;
    uint32_t loc_24c;
    uint32_t loc_250;
    uint32_t t1;
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
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 616u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c45abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x250u); in_ebp = rd32(sp0 - 0x24cu); in_ebx = rd32(sp0 - 0x248u); g->ebp = rd32(sp0 - 0x24cu); g->ebx = rd32(sp0 - 0x248u); g->esi = rd32(sp0 - 0x250u); goto E_101c45ab;
    case 0x101c45b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x250u); in_ebp = rd32(sp0 - 0x24cu); in_ebx = rd32(sp0 - 0x248u); g->ebp = rd32(sp0 - 0x24cu); g->ebx = rd32(sp0 - 0x248u); g->esi = rd32(sp0 - 0x250u); goto E_101c45b2;
    case 0x101c45c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101c45c1;
    case 0x101c45c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x250u); in_ebp = rd32(sp0 - 0x24cu); in_ebx = rd32(sp0 - 0x248u); g->ebp = rd32(sp0 - 0x24cu); g->ebx = rd32(sp0 - 0x248u); g->esi = rd32(sp0 - 0x250u); goto E_101c45c3;
    case 0x101c45c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_248 = rd32(sp0 - 0x248u); goto E_101c45c5;
    case 0x101c45d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_248 = rd32(sp0 - 0x248u); goto E_101c45d0;
    case 0x101c45e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101c45e7;
    case 0x101c45edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_101c45ed;
    case 0x101c4606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; self = g->ebx - 0x10u; goto E_101c4606;
    case 0x101c460au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; self = g->ebx - 0x10u; goto E_101c460a;
    case 0x101c4636u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; self = g->ebx - 0x10u; goto E_101c4636;
    case 0x101c463eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; self = g->ebx - 0x10u; goto E_101c463e;
    case 0x101c4654u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c4654;
    case 0x101c4662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_250 = rd32(sp0 - 0x250u); loc_24c = rd32(sp0 - 0x24cu); loc_248 = rd32(sp0 - 0x248u); goto E_101c4662;
    default: break;
    }
#endif

    COW_AT(101c4590)
    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, in_ebp);
    wr32(sp0 - 0x250u, in_esi);
    wr32(sp0 - 0x254u, 0x5f4u);
    wr8(self + 0x10u, 0u);
    g->esp = sp0 - 0x248u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x5f4u, in_esi, in_ebp);
    eax = t1;
    COW_AT(101c45ab)
    if (eax == 0u)
    {
    COW_AT(101c45c3)
        eax = 0u;
        loc_248 = in_ebx;
        loc_24c = in_ebp;
        loc_250 = in_esi;
    }
    else
    {
    COW_AT(101c45b2)
        t2 = rd32(self + 0xcu);
        wr32(sp0 - 0x254u, t2);
        t3 = rd32(self + 8u);
        wr32(sp0 - 0x258u, t3);
        g->eax = eax;
        g->esp = sp0 - 0x250u;
        t4 = cow_thiscall(g, COW_IMG(0x101be790u), eax, 2, t3, t2);
        eax = t4;
    COW_AT(101c45c1)
        loc_248 = rd32(sp0 - 0x248u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_250 = rd32(sp0 - 0x250u);
    }
    COW_AT(101c45c5)
    wr32(self + 4u, eax);
    if (eax == 0u)
    {
        edi = in_edi;
        goto L_101c4662;
    }
    COW_AT(101c45d0)
    wr32(sp0 - 0x254u, arg2);
    wr32(sp0 - 0x258u, arg1);
    g->ebx = self + 0x10u;
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 0x250u;
    t5 = cow_thiscall(g, COW_IMG(0x101be900u), eax, 2, arg1, arg2);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101c45e7)
    if (eax == 0u)
    {
        ebp = eax;
        edi = in_edi;
        goto L_101c4654;
    }
    ebp = eax;
    COW_AT(101c45ed)
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0x120u);
    wr32(sp0 - 0x25cu, sp0 - 0x244u);
    wr32(sp0 - 0x260u, COW_IMG(0x1037cd3cu));
    g->eax = sp0 - 0x244u;
    g->esp = sp0 - 0x250u;
    t7 = cow_thiscall(g, COW_IMG(0x101bf8b0u), rd32(self + 4u), 4, COW_IMG(0x1037cd3cu), sp0 - 0x244u, 0x120u, 0u);
    eax = t7;
    COW_AT(101c4606)
    if ((int32_t)eax < 0)
    {
        edi = in_edi;
        loc_248 = rd32(sp0 - 0x248u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_250 = rd32(sp0 - 0x250u);
        goto L_101c4662;
    }
    COW_AT(101c460a)
    wr32(sp0 - 0x254u, in_edi);
    esi = sp0 - 0x244u;
    edi = sp0 - 0x120u;
    ecx = 0x48u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x258u, 1u);
    wr32(sp0 - 0x25cu, 0x100u);
    wr32(sp0 - 0x260u, sp0 - 0x244u);
    wr32(sp0 - 0x264u, sp0 - 0x120u);
    g->eax = eax;
    g->esp = sp0 - 0x254u;
    t8 = cow_cdecl(g, COW_IMG(0x103114a2u), 4, sp0 - 0x120u, sp0 - 0x244u, 0x100u, 1u);
    eax = t8;
    COW_AT(101c4636)
    if ((int32_t)eax < 0)
    {
        edi = rd32(sp0 - 0x254u);
        loc_248 = rd32(sp0 - 0x248u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_250 = rd32(sp0 - 0x250u);
        goto L_101c4662;
    }
    edi = rd32(sp0 - 0x254u);
    COW_AT(101c463e)
    eax = sp0 - 0x244u;
    ecx = sp0 - 0x244u;
L_101c464a: ;
    COW_AT(101c464a)
    t9 = rd8(eax);
    wr8(eax + self - sp0 + 0x254u, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_101c464a;
    }
L_101c4654: ;
    COW_AT(101c4654)
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x250u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x24cu);
    return ebp;
L_101c4662: ;
    COW_AT(101c4662)
    g->ebx = loc_248;
    g->esi = loc_250;
    g->edi = edi;
    g->ebp = loc_24c;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c4590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c45abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x250u);
        in_ebp = rd32(sp0 - 0x24cu);
        in_ebx = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x254u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x250u);
        in_ebp = rd32(sp0 - 0x24cu);
        in_ebx = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x250u);
        in_ebp = rd32(sp0 - 0x24cu);
        in_ebx = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_248;
        uint32_t loc_24c;
        uint32_t loc_250;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_248 = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_248;
        uint32_t loc_24c;
        uint32_t loc_250;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_248 = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c45edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x250u;
        g->ebx = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101c4606u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        self = g->ebx - 0x10u;
        g->esp = sp0 - 0x250u;
        wr32(sp0 - 0x25cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101c460au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        self = g->ebx - 0x10u;
        g->esp = sp0 - 0x250u;
        wr32(sp0 - 0x25cu, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101c4636u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        self = g->ebx - 0x10u;
        g->esp = sp0 - 0x264u;
        wr32(sp0 - 0x264u, sp0 - 0x120u);
        wr32(sp0 - 0x260u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101c463eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        self = g->ebx - 0x10u;
        g->esp = sp0 - 0x250u;
        wr32(sp0 - 0x264u, sp0 - 0x120u);
        wr32(sp0 - 0x260u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101c4654u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    case 0x101c4662u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_248;
        uint32_t loc_24c;
        uint32_t loc_250;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_250 = rd32(sp0 - 0x250u);
        loc_24c = rd32(sp0 - 0x24cu);
        loc_248 = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x250u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101c464a: holds self, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c4590(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
