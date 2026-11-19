/* f_0x100fb730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fb730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fb73fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb73f;
    case 0x100fb744u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb744;
    case 0x100fb749u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb749;
    case 0x100fb75cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb75c;
    case 0x100fb76cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb76c;
    case 0x100fb778u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb778;
    case 0x100fb784u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb784;
    case 0x100fb7ccu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb7cc;
    case 0x100fb7d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb7d3;
    case 0x100fb7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb7d6;
    case 0x100fb7e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb7e8;
    case 0x100fb7fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb7fb;
    case 0x100fb802u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb802;
    case 0x100fb80au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb80a;
    case 0x100fb811u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb811;
    case 0x100fb825u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100fb825;
    default: break;
    }
#endif

    COW_AT(100fb730)
    if (rd32(arg3 + 4u) == 1u)
    {
        eax = rd32(arg3 + 4u) - 1u;
        goto L_100fb7cc;
    }
    eax = rd32(arg3 + 4u) - 1u;
    COW_AT(100fb73f)
    if (eax == 3u) goto L_100fb784;
    eax = eax - 3u;
    COW_AT(100fb744)
    if (eax == 4u) goto L_100fb75c;
    eax = eax - 4u;
    COW_AT(100fb749)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x40u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 4u);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
L_100fb7d6: ;
    COW_AT(100fb7d6)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xdu, 1u, 1u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        ecx = t24;
        edx = t25;
    }
    else
    {
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(100fb7e8)
        wr16(eax + 4u, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x100ddd20u), 3, eax, 8u, 0u);
        t26 = g->ecx;
        t27 = g->edx;
        ecx = t26;
        edx = t27;
    }
    COW_AT(100fb7fb)
    if (rd32(arg3 + 8u) != 0u)
    {
        eax = rd32(arg3 + 8u);
    COW_AT(100fb802)
        t28 = rd32(COW_IMG(0x104df770u));
        wr32(t28, eax);
        ecx = t28;
    }
    COW_AT(100fb80a)
    if (rd32(arg3 + 0xcu) == 0u)
    {
        eax = rd32(arg3 + 0xcu);
    }
    else
    {
        eax = rd32(arg3 + 0xcu);
    COW_AT(100fb811)
        t29 = (edx & 0xffff0000u) | (uint16_t)eax;
        g->eax = eax;
        g->edx = t29;
        g->esp = sp0 - 4u;
        t30 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t29);   /* ws2_32.dll!htons */
        t31 = g->edx;
        wr16(rd32(COW_IMG(0x104df770u)) + 0xcu, (uint16_t)t30);
        eax = t30;
        edx = t31;
    }
    COW_AT(100fb825)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100fb75c: ;
    COW_AT(100fb75c)
    wr8(arg1 + 0xcu, 4u);
    if (rd32(arg3 + 0x18u) != 6u)
    {
        eax = rd32(arg3 + 0x18u);
    COW_AT(100fb778)
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t10 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa2u);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(arg3 + 0x18u);
    COW_AT(100fb76c)
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0xfa6u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
L_100fb7d3: ;
    COW_AT(100fb7d3)
    goto L_100fb7d6;
L_100fb784: ;
    COW_AT(100fb784)
    t13 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu);
    t14 = ~(~t13 | 0x40u) & t13;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu, t14);
    t15 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c35cu);
    t16 = ~(~t15 | 4u) & t15;
    t17 = rd32(COW_IMG(0x104dfd98u));
    wr32(t17 + 0x3c35cu, t16);
    g->eax = t15;
    g->edx = t16;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t19 = g->edx;
    g->esi = in_esi;
    g->edx = t19;
    return (t18 & 0xffffff00u) | 1u;
L_100fb7cc: ;
    COW_AT(100fb7cc)
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 4u);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    goto L_100fb7d3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fb730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fb73fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb744u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb749u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb75cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb76cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb778u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fb7ccu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb7d3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb7d6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb7e8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb7fbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb802u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb80au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100fb811u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100fb825u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
void cow_adapter_100fb730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fb730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
