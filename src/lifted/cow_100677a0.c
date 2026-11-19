/* f_0x100677a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100677a0(Guest* g)
{
    uint32_t al_m70c;
    uint32_t al_m720;
    uint32_t al_m724;
    uint32_t al_m728;
    uint32_t al_m72c;
    double d20;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1864u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100677e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); al_m728 = rd32(sp1 - 0x728u); al_m724 = rd32(sp1 - 0x724u); al_m720 = rd32(sp1 - 0x720u); al_m70c = rd32(sp1 - 0x70cu); loc_4 = rd32(sp0 - 4u); goto E_100677e4;
    case 0x10067809u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_10067809;
    case 0x10067820u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067820;
    case 0x10067826u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067826;
    case 0x10067834u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067834;
    case 0x1006783du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_1006783d;
    case 0x10067844u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067844;
    case 0x1006784au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_1006784a;
    case 0x1006786au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_1006786a;
    case 0x10067890u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067890;
    case 0x10067897u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_10067897;
    case 0x1006789eu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_1006789e;
    case 0x100678a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_100678a4;
    case 0x100678a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_100678a5;
    case 0x100678aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); goto E_100678ae;
    case 0x100678c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); al_m728 = rd32(sp1 - 0x728u); al_m724 = rd32(sp1 - 0x724u); al_m720 = rd32(sp1 - 0x720u); al_m70c = rd32(sp1 - 0x70cu); loc_4 = rd32(sp0 - 4u); goto E_100678c9;
    case 0x100678d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); al_m728 = rd32(sp1 - 0x728u); al_m724 = rd32(sp1 - 0x724u); al_m720 = rd32(sp1 - 0x720u); al_m70c = rd32(sp1 - 0x70cu); loc_4 = rd32(sp0 - 4u); goto E_100678d2;
    case 0x100678dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; al_m72c = rd32(sp1 - 0x72cu); al_m728 = rd32(sp1 - 0x728u); al_m724 = rd32(sp1 - 0x724u); al_m720 = rd32(sp1 - 0x720u); al_m70c = rd32(sp1 - 0x70cu); loc_4 = rd32(sp0 - 4u); goto E_100678dc;
    default: break;
    }
#endif

    COW_AT(100677a0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x720u, in_ebx);
    wr32(sp1 - 0x724u, in_esi);
    wr32(sp1 - 0x728u, in_edi);
    g->edx = in_edx;
    g->esp = sp1 - 0x728u;
    t1 = cow_thiscall(g, COW_IMG(0x10067930u), sp1 - 0x718u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp1 - 0x608u, 0);
    t3 = g->edx;
    wr32(sp1 - 0x72cu, arg2);
    g->eax = arg2;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x100680d0u), sp1 - 0x608u, 1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp1 - 0x70cu, t4);
    if ((int32_t)t4 <= 0)
    {
        ecx = t5;
        loc_4 = in_ebp;
        al_m720 = in_ebx;
        al_m724 = in_esi;
        al_m728 = in_edi;
        goto L_100678c9;
    }
    eax = t4;
    edx = t6;
    edi = 0u;
    loc_4 = in_ebp;
    al_m720 = in_ebx;
    al_m724 = in_esi;
    al_m728 = in_edi;
    al_m70c = t4;
L_100677e4: ;
    COW_AT(100677e4)
    wr32(sp1 - 0x72cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t7 = cow_thiscall(g, COW_IMG(0x10068050u), sp1 - 0x608u, 1, edi);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp1 - 0x72cu, t7);
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x10064470u), 1, t7);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_1006789e;
    }
    eax = t10;
    edx = t11;
    COW_AT(10067809)
    wr32(sp1 - 0x72cu, 1u);
    wr32(sp1 - 0x730u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x72cu;
    t12 = cow_thiscall(g, COW_IMG(0x10068050u), sp1 - 0x608u, 1, edi);
    t13 = g->edx;
    wr32(sp1 - 0x730u, t12);
    g->ebp = sp0 - 4u;
    g->edx = t13;
    g->esp = sp1 - 0x728u;
    t14 = cow_thiscall(g, COW_IMG(0x10064230u), self + 4u, 2, t12, 1u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_10067897;
    }
    eax = t14;
    edx = t15;
    esi = t14;
    COW_AT(10067820)
    if (rd32(esi + 0x14u) == 2u)
    {
    COW_AT(10067826)
        wr32(sp1 - 0x72cu, COW_IMG(0x10354014u));
        g->edx = edx;
        g->esp = sp1 - 0x728u;
        cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, COW_IMG(0x10354014u));
        t16 = g->edx;
        edx = t16;
    }
    COW_AT(10067834)
    if (rd32(esi + 0x10u) - 1u > 4u)
    {
        eax = rd32(esi + 0x10u) - 1u;
        goto L_100678ae;
    }
    eax = rd32(esi + 0x10u) - 1u;
    COW_AT(1006783d)
    t17 = rd32(COW_IMG(0x100678fcu) + eax * 4u);
    switch (t17 - RD)
    {
    case 0x10067844u: goto L_10067844;
    case 0x1006784au: goto L_1006784a;
    case 0x1006786au: goto L_1006786a;
    case 0x10067890u: goto L_10067890;
    default: rt_fatal(g, COW_IMG(0x1006783du), "switch");
    }
    return 0;
L_10067844: ;
    COW_AT(10067844)
    t25 = rd32(esi + 0x18u);
    wr32(sp1 - 0x72cu, t25);
    al_m72c = t25;
L_100678a5: ;
    COW_AT(100678a5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t28 = cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, al_m72c);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_100678ae: ;
    COW_AT(100678ae)
    wr32(sp1 - 0x72cu, COW_IMG(0x1034f2b8u));
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, COW_IMG(0x1034f2b8u));
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp1 - 0x70cu))
    {
        eax = rd32(sp1 - 0x70cu);
        edx = t31;
        edi = edi + 1u;
        loc_4 = rd32(sp0 - 4u);
        al_m720 = rd32(sp1 - 0x720u);
        al_m724 = rd32(sp1 - 0x724u);
        al_m728 = rd32(sp1 - 0x728u);
        al_m70c = rd32(sp1 - 0x70cu);
        goto L_100677e4;
    }
    ecx = t30;
    loc_4 = rd32(sp0 - 4u);
    al_m720 = rd32(sp1 - 0x720u);
    al_m724 = rd32(sp1 - 0x724u);
    al_m728 = rd32(sp1 - 0x728u);
L_100678c9: ;
    COW_AT(100678c9)
    eax = rd32(sp1 - 0x714u);
    edx = arg1 - rd32(sp1 - 0x714u);
L_100678d2: ;
    COW_AT(100678d2)
    t32 = rd8(eax);
    wr8(eax + edx, (uint8_t)t32);
    if ((uint8_t)t32 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t32;
        goto L_100678d2;
    }
    eax = eax + 1u;
    COW_AT(100678dc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t33 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t34 = g->edx;
    t35 = cow_fastcall(g, COW_IMG(0x10067950u), sp1 - 0x718u, t34, 0);
    t36 = g->edx;
    g->ebx = rd32(sp1 - 0x720u);
    g->esi = rd32(sp1 - 0x724u);
    g->edi = rd32(sp1 - 0x728u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t36;
    return t35;
L_1006784a: ;
    COW_AT(1006784a)
    g->eax = eax;
    g->esp = sp1 - 0x728u;
    t22 = cow_thiscall(g, COW_IMG(0x100643f0u), esi, 0);
    t23 = g->ecx;
    wr32(sp1 - 0x72cu, t22);
    wr32(sp1 - 0x730u, COW_IMG(0x10352ff0u));
    wr32(sp1 - 0x734u, sp1 - 0x708u);
    g->ebx = self;
    g->edx = sp1 - 0x708u;
    g->esp = sp1 - 0x720u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x708u, COW_IMG(0x10352ff0u), t22, rd32(sp1 - 0x728u), rd32(sp1 - 0x724u));
    t24 = g->edx;
    eax = sp1 - 0x708u;
    edx = t24;
L_100678a4: ;
    COW_AT(100678a4)
    wr32(sp1 - 0x72cu, eax);
    al_m72c = eax;
    goto L_100678a5;
L_1006786a: ;
    COW_AT(1006786a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t18 = cow_thiscall(g, COW_IMG(0x10064400u), esi, 0);
    t19 = g->edx;
    d20 = cow_take_float(g);
    wrf64(sp1 - 0x730u, d20);
    wr32(sp1 - 0x734u, COW_IMG(0x10353bacu));
    wr32(sp1 - 0x738u, sp1 - 0x708u);
    g->ebx = self;
    g->esp = sp1 - 0x724u;
    t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x708u, COW_IMG(0x10353bacu), cow_dlo(d20), cow_dhi(d20), rd32(sp1 - 0x728u));
    wr32(sp1 - 0x72cu, sp1 - 0x708u);
    eax = t21;
    edx = sp1 - 0x708u;
    al_m72c = sp1 - 0x708u;
    goto L_100678a5;
L_10067890: ;
    COW_AT(10067890)
    wr32(sp1 - 0x72cu, COW_IMG(0x10354010u));
    al_m72c = COW_IMG(0x10354010u);
    goto L_100678a5;
L_10067897: ;
    COW_AT(10067897)
L_1006789e: ;
    COW_AT(1006789e)
    wr32(sp1 - 0x72cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t26 = cow_thiscall(g, COW_IMG(0x10068050u), sp1 - 0x608u, 1, edi);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    goto L_100678a4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100677a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x100677e4u:
    {
        uint32_t al_m70c;
        uint32_t al_m720;
        uint32_t al_m724;
        uint32_t al_m728;
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        al_m728 = rd32(sp1 - 0x728u);
        al_m724 = rd32(sp1 - 0x724u);
        al_m720 = rd32(sp1 - 0x720u);
        al_m70c = rd32(sp1 - 0x70cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067809u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x728u;
        g->ecx = sp1 - 0x608u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067820u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067826u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067834u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006783du:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067844u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006784au:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006786au:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067890u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10067897u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1006789eu:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ecx = sp1 - 0x608u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678a5u:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x72cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678aeu:
    {
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678c9u:
    {
        uint32_t al_m70c;
        uint32_t al_m720;
        uint32_t al_m724;
        uint32_t al_m728;
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        al_m728 = rd32(sp1 - 0x728u);
        al_m724 = rd32(sp1 - 0x724u);
        al_m720 = rd32(sp1 - 0x720u);
        al_m70c = rd32(sp1 - 0x70cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678d2u:
    {
        uint32_t al_m70c;
        uint32_t al_m720;
        uint32_t al_m724;
        uint32_t al_m728;
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        al_m728 = rd32(sp1 - 0x728u);
        al_m724 = rd32(sp1 - 0x724u);
        al_m720 = rd32(sp1 - 0x720u);
        al_m70c = rd32(sp1 - 0x70cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100678dcu:
    {
        uint32_t al_m70c;
        uint32_t al_m720;
        uint32_t al_m724;
        uint32_t al_m728;
        uint32_t al_m72c;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        al_m72c = rd32(sp1 - 0x72cu);
        al_m728 = rd32(sp1 - 0x728u);
        al_m724 = rd32(sp1 - 0x724u);
        al_m720 = rd32(sp1 - 0x720u);
        al_m70c = rd32(sp1 - 0x70cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x728u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100677a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100677a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
