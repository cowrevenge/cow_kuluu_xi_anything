/* f_0x100f42d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100f42d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f42e2u: self = g->ecx; in_edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f42e2;
    case 0x100f42e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f42e9;
    case 0x100f4300u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4300;
    case 0x100f4318u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4318;
    case 0x100f4348u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4348;
    case 0x100f435au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f435a;
    case 0x100f4364u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4364;
    case 0x100f4390u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4390;
    case 0x100f4395u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4395;
    case 0x100f43a0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43a0;
    case 0x100f43bau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43ba;
    case 0x100f43c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43c4;
    case 0x100f43d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43d9;
    case 0x100f43e1u: ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43e1;
    case 0x100f43e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43e9;
    case 0x100f43f4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f43f4;
    case 0x100f4402u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->edi - 0x218u; g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4402;
    case 0x100f440fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f440f;
    case 0x100f4411u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4411;
    case 0x100f4419u: eax = g->eax; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4419;
    case 0x100f441bu: eax = g->eax; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f441b;
    case 0x100f443fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f443f;
    case 0x100f446au: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f446a;
    case 0x100f4474u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4474;
    case 0x100f4487u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4487;
    case 0x100f4492u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100f4492;
    default: break;
    }
#endif

    COW_AT(100f42d0)
    if (arg1 > 3u) goto L_100f4492;
    COW_AT(100f42e2)
    t1 = rd32(COW_IMG(0x100f44a0u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f42e9u: goto L_100f42e9;
    case 0x100f4300u: goto L_100f4300;
    case 0x100f4348u: goto L_100f4348;
    case 0x100f446au: goto L_100f446a;
    default: rt_fatal(g, COW_IMG(0x100f42e2u), "switch");
    }
    return 0;
L_100f42e9: ;
    COW_AT(100f42e9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return ((int32_t)rd32(self + 0x208u) < 0) - 1u & 3u;
L_100f4300: ;
    COW_AT(100f4300)
    wr32(self + 0x210u, 0u);
    wr32(self + 0x214u, 0u);
    wr32(self + 0x218u, 0u);
    wr16(self + 0x10u, 0u);
L_100f4318: ;
    COW_AT(100f4318)
    t12 = rd32(self + 0x210u);
    g->eax = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x10310f2du), 4, self + 0xc48u, self + 0x21cu, t12, 5u);
    wr32(self + 0x208u, t13);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x16u;
L_100f4348: ;
    COW_AT(100f4348)
    if ((int32_t)rd32(self + 0x218u) <= 0)
    {
        ecx = self;
        goto L_100f43ba;
    }
    eax = rd32(self + 0x218u);
    COW_AT(100f435a)
    if ((int32_t)rd32(self + 0x214u) >= (int32_t)eax) goto L_100f4390;
    ecx = rd32(self + 0x214u);
    COW_AT(100f4364)
    t2 = ecx * 0x208u + self + 0x224u;
    wr32(arg2, t2);
    t3 = rd32(self + 0x214u) + 1u;
    wr32(self + 0x214u, t3);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x18u;
L_100f4390: ;
    COW_AT(100f4390)
    if ((int32_t)eax >= 5) goto L_100f43a0;
    COW_AT(100f4395)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x17u;
L_100f43a0: ;
    COW_AT(100f43a0)
    t4 = rd32(self + 0x210u);
    wr32(self + 0x218u, 0u);
    wr32(self + 0x214u, 0u);
    wr32(self + 0x210u, eax + t4);
    wr16(self + 0x10u, 0u);
    ecx = eax + t4;
L_100f43ba: ;
    COW_AT(100f43ba)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        goto L_100f43f4;
    }
    eax = rd32(self + 0x208u);
    COW_AT(100f43c4)
    t5 = rd16(self + 0x10u);
    wr16(self + 0x10u, (uint16_t)(((eax & 0xffff0000u) | t5) + 1u));
    if ((uint16_t)t5 <= 0xau) goto L_100f4318;
    COW_AT(100f43d9)
    if (arg3 != 0u)
    {
    COW_AT(100f43e1)
        t6 = rd32(self + 0x208u);
        wr32(arg3, t6);
    }
    COW_AT(100f43e9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x14u;
L_100f43f4: ;
    COW_AT(100f43f4)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10310f22u), 2, eax, self + 0x218u);
    t8 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        edx = t8;
        sf = (int32_t)t7 < 0;
        goto L_100f440f;
    }
    COW_AT(100f4402)
    wr32(self + 0x218u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x16u;
L_100f440f: ;
    COW_AT(100f440f)
    if (!sf) goto L_100f443f;
    COW_AT(100f4411)
    if (arg3 != 0u)
    {
    COW_AT(100f4419)
        wr32(arg3, eax);
    }
    COW_AT(100f441b)
    t9 = rd32(self + 0x208u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t9);
    wr32(self + 0x208u, 0xffffffffu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x14u;
L_100f443f: ;
    COW_AT(100f443f)
    t10 = rd32(self + 0x208u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t10);
    t11 = rd32(self + 0x218u);
    wr32(self + 0x208u, 0xffffffffu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return ((int32_t)t11 <= 0) + 0x16u;
L_100f446a: ;
    COW_AT(100f446a)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
    COW_AT(100f4474)
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    COW_AT(100f4487)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 6u;
L_100f4492: ;
    COW_AT(100f4492)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f42d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f42e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f42e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f4300u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f4318u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f4348u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f435au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f4364u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f4390u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f4395u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f43a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f43bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f43c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f43d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f43e1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f43e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f43f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f4402u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->edi - 0x218u;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f440fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100f4411u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f4419u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f441bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f443fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = self + 0x218u;
        (void)sp0;
        return 1;
    }
    case 0x100f446au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f4474u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f4487u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100f4492u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f42d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f42d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
