/* f_0x10065f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10065f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1618;
    uint32_t loc_1620;
    uint32_t loc_1624;
    uint32_t loc_1628;
    uint32_t loc_162c;
    uint32_t loc_1630;
    uint32_t loc_1634;
    uint32_t loc_1638;
    uint32_t loc_163c;
    uint32_t loc_1640;
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
    cow_frame(g, sp0, 5708u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10065f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; loc_1640 = rd32(sp0 - 0x1640u); in_edi = rd32(sp0 - 0x163cu); in_esi = rd32(sp0 - 0x1638u); loc_1618 = rd32(sp0 - 0x1618u); g->edi = rd32(sp0 - 0x163cu); g->esi = rd32(sp0 - 0x1638u); goto E_10065f49;
    case 0x10065f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1640 = rd32(sp0 - 0x1640u); loc_163c = rd32(sp0 - 0x163cu); loc_1638 = rd32(sp0 - 0x1638u); loc_1634 = rd32(sp0 - 0x1634u); loc_1630 = rd32(sp0 - 0x1630u); loc_162c = rd32(sp0 - 0x162cu); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); loc_1618 = rd32(sp0 - 0x1618u); goto E_10065f4a;
    case 0x10065f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); goto E_10065f7f;
    case 0x10065f98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); goto E_10065f98;
    case 0x10065fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); goto E_10065fa1;
    case 0x10065faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); goto E_10065faa;
    case 0x10065fb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10065fb9;
    case 0x10065fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10065fbd;
    case 0x10065fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10065fcb;
    case 0x10065fd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10065fd2;
    case 0x10065ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10065ff1;
    case 0x10065ffcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10065ffc;
    case 0x10066022u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10066022;
    case 0x10066027u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10066027;
    case 0x10066040u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); goto E_10066040;
    case 0x10066044u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1630 = rd32(sp0 - 0x1630u); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10066044;
    case 0x10066059u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1630 = rd32(sp0 - 0x1630u); loc_162c = rd32(sp0 - 0x162cu); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_10066059;
    case 0x1006605eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1630 = rd32(sp0 - 0x1630u); loc_162c = rd32(sp0 - 0x162cu); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_1006605e;
    case 0x1006606au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_1640 = rd32(sp0 - 0x1640u); loc_1630 = rd32(sp0 - 0x1630u); loc_162c = rd32(sp0 - 0x162cu); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); goto E_1006606a;
    case 0x10066087u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_1640 = rd32(sp0 - 0x1640u); loc_163c = rd32(sp0 - 0x163cu); loc_1638 = rd32(sp0 - 0x1638u); loc_1634 = rd32(sp0 - 0x1634u); loc_1630 = rd32(sp0 - 0x1630u); loc_162c = rd32(sp0 - 0x162cu); loc_1628 = rd32(sp0 - 0x1628u); loc_1624 = rd32(sp0 - 0x1624u); loc_1620 = rd32(sp0 - 0x1620u); loc_1618 = rd32(sp0 - 0x1618u); goto E_10066087;
    default: break;
    }
#endif

    COW_AT(10065f00)
    wr32(sp0 - 0x1634u, in_ebx);
    wr32(sp0 - 0x1638u, in_esi);
    wr32(sp0 - 0x163cu, in_edi);
    wr32(sp0 - 0x1640u, COW_IMG(0x103d3c84u));
    g->eax = 0x1630u;
    g->esp = sp0 - 0x163cu;
    t1 = cow_fastcall(g, COW_IMG(0x100679e0u), self, in_edx, 1, COW_IMG(0x103d3c84u));
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x1604u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x1640u, arg1);
    wr32(sp0 - 0x1630u, 0u);
    g->eax = arg1;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x100680d0u), sp0 - 0x1604u, 1, arg1);
    t5 = g->edx;
    wr32(sp0 - 0x1618u, t4);
    wr32(sp0 - 0x162cu, 0u);
    if ((int32_t)t4 <= 0)
    {
        eax = t4;
        edx = t5;
        ebp = in_ebp;
        loc_1634 = in_ebx;
        loc_1638 = in_esi;
        loc_163c = in_edi;
    }
    else
    {
        eax = t4;
        edx = t5;
        loc_1618 = t4;
    COW_AT(10065f49)
        wr32(sp0 - 0x1640u, in_ebp);
        ebx = in_ebx;
        esi = 0u;
        loc_1634 = in_ebx;
        loc_1638 = in_esi;
        loc_163c = in_edi;
        loc_1640 = in_ebp;
        loc_1630 = 0u;
        loc_162c = 0u;
L_10065f4a: ;
    COW_AT(10065f4a)
        wr32(sp0 - 0x1644u, loc_162c);
        g->eax = eax;
        g->esp = sp0 - 0x1640u;
        t6 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x1604u, 1, loc_162c);
        wr32(sp0 - 0x1644u, t6);
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        g->ebx = ebx;
        t7 = cow_thiscall(g, COW_IMG(0x100660a0u), self, 2, sp0 - 0x1614u, t6);
        t8 = rd32(t7 + 4u);
        wr32(sp0 - 0x1624u, t8);
        wr32(sp0 - 0x1628u, rd32(t7));
        if (rd32(t7 + 0xcu) != 0x13u)
        {
            ecx = rd32(t7 + 8u);
            edx = rd32(t7);
            ebx = rd32(t7 + 0xcu);
            loc_1624 = t8;
            loc_1628 = rd32(t7);
    COW_AT(10065f98)
            if (ebx == 2u) goto L_10066040;
    COW_AT(10065fa1)
            if (ebx == 1u) goto L_10066040;
    COW_AT(10065faa)
            t12 = ecx + rd32(sp0 - 0x1630u);
            wr32(sp0 - 0x1620u, t12);
            if (ebx == 0x1bu)
            {
                ecx = t12;
                goto L_10066022;
            }
            ecx = t12;
            loc_1620 = t12;
    COW_AT(10065fb9)
            if (esi == 0u) goto L_10066022;
    COW_AT(10065fbd)
            if ((int32_t)rd32(esi * 0x10u + sp0 - 0x1008u) < (int32_t)ecx)
            {
                eax = esi << 4u;
                goto L_10066027;
            }
            eax = esi << 4u;
    COW_AT(10065fcb)
            ebp = eax + sp0 - 0x1000u;
L_10065fd2: ;
    COW_AT(10065fd2)
            t13 = rd32(ebp - 0x10u);
            wr32(sp0 - 0x1644u, t13);
            g->eax = eax;
            g->edx = t13;
            g->esp = sp0 - 0x1640u;
            t14 = cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, t13);
            t15 = g->edx;
            wr32(sp0 - 0x1644u, COW_IMG(0x1034f2b8u));
            cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, COW_IMG(0x1034f2b8u));
            if (esi == 1u)
            {
                esi = esi - 1u;
                goto L_10065ffc;
            }
            ebp = ebp - 0x10u;
            esi = esi - 1u;
    COW_AT(10065ff1)
            if ((int32_t)rd32(ebp - 8u) >= (int32_t)rd32(sp0 - 0x1620u))
            {
                eax = rd32(sp0 - 0x1620u);
                loc_1624 = rd32(sp0 - 0x1624u);
                loc_1628 = rd32(sp0 - 0x1628u);
                loc_1620 = rd32(sp0 - 0x1620u);
                goto L_10065fd2;
            }
L_10065ffc: ;
    COW_AT(10065ffc)
            t16 = rd32(sp0 - 0x1628u);
            t17 = rd32(sp0 - 0x1624u);
            wr32(esi * 0x10u + sp0 - 0x1000u, t16);
            t18 = rd32(sp0 - 0x1620u);
            wr32(esi * 0x10u + sp0 - 0xffcu, t17);
            wr32(esi * 0x10u + sp0 - 0xff8u, t18);
            wr32(esi * 0x10u + sp0 - 0xff4u, ebx);
            edx = esi * 0x10u + sp0 - 0x1000u;
            esi = esi + 1u;
            loc_1630 = rd32(sp0 - 0x1630u);
        }
        else
        {
            eax = t7;
            edx = rd32(t7);
            ebx = rd32(t7 + 0xcu);
            ebp = t6;
    COW_AT(10065f7f)
            wr32(sp0 - 0x1644u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1640u;
            t9 = cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, ebp);
            t10 = g->edx;
            wr32(sp0 - 0x1644u, COW_IMG(0x1034f2b8u));
            g->edx = t10;
            cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, COW_IMG(0x1034f2b8u));
            t11 = g->edx;
            edx = t11;
            loc_1630 = rd32(sp0 - 0x1630u);
        }
L_10066044: ;
    COW_AT(10066044)
        t20 = rd32(sp0 - 0x162cu) + 1u;
        t21 = rd32(sp0 - 0x162cu);
        wr32(sp0 - 0x162cu, t20);
        if ((int32_t)(t21 + 1u) < (int32_t)rd32(sp0 - 0x1618u))
        {
            eax = t20;
            loc_1634 = rd32(sp0 - 0x1634u);
            loc_1638 = rd32(sp0 - 0x1638u);
            loc_163c = rd32(sp0 - 0x163cu);
            loc_1640 = rd32(sp0 - 0x1640u);
            loc_1618 = rd32(sp0 - 0x1618u);
            loc_162c = t20;
            goto L_10065f4a;
        }
        eax = t20;
    COW_AT(10066059)
        if (esi == 0u)
        {
            ebp = rd32(sp0 - 0x1640u);
            loc_1634 = rd32(sp0 - 0x1634u);
            loc_1638 = rd32(sp0 - 0x1638u);
            loc_163c = rd32(sp0 - 0x163cu);
        }
        else
        {
            ebp = rd32(sp0 - 0x1640u);
    COW_AT(1006605e)
            eax = esi << 4u;
            ebx = esi * 0x10u + sp0 - 0x1000u;
L_1006606a: ;
    COW_AT(1006606a)
            t22 = rd32(ebx - 0x10u);
            wr32(sp0 - 0x1640u, t22);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x163cu;
            t23 = cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, t22);
            t24 = g->edx;
            wr32(sp0 - 0x1640u, COW_IMG(0x1034f2b8u));
            g->edx = t24;
            t25 = cow_thiscall(g, COW_IMG(0x10067cd0u), self, 1, COW_IMG(0x1034f2b8u));
            t26 = g->edx;
            if (esi != 1u)
            {
                eax = t25;
                edx = t26;
                ebx = ebx - 0x10u;
                esi = esi - 1u;
                goto L_1006606a;
            }
            eax = t25;
            edx = t26;
            loc_1634 = rd32(sp0 - 0x1634u);
            loc_1638 = rd32(sp0 - 0x1638u);
            loc_163c = rd32(sp0 - 0x163cu);
        }
    }
    COW_AT(10066087)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x163cu;
    t27 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t28 = g->edx;
    g->ebx = rd32(sp0 - 0x1634u);
    g->esi = rd32(sp0 - 0x1638u);
    g->edi = rd32(sp0 - 0x163cu);
    g->ebp = ebp;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_10066022: ;
    COW_AT(10066022)
    eax = esi << 4u;
L_10066027: ;
    COW_AT(10066027)
    wr32(eax + sp0 - 0x1000u, edx);
    wr32(eax + sp0 - 0xffcu, loc_1624);
    wr32(eax + sp0 - 0xff8u, ecx);
    wr32(eax + sp0 - 0xff4u, ebx);
    edx = loc_1624;
    esi = esi + 1u;
    loc_1630 = rd32(sp0 - 0x1630u);
    goto L_10066044;
L_10066040: ;
    COW_AT(10066040)
    t19 = ecx + rd32(sp0 - 0x1630u);
    wr32(sp0 - 0x1630u, t19);
    loc_1630 = t19;
    goto L_10066044;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10065f00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10065f49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1618;
        uint32_t loc_1640;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        loc_1640 = rd32(sp0 - 0x1640u);
        in_edi = rd32(sp0 - 0x163cu);
        in_esi = rd32(sp0 - 0x1638u);
        loc_1618 = rd32(sp0 - 0x1618u);
        g->esp = sp0 - 0x163cu;
        g->esi = 0u;
        wr32(sp0 - 0x1634u, in_ebx);
        wr32(sp0 - 0x1630u, 0u);
        wr32(sp0 - 0x162cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10065f4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1618;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_162c;
        uint32_t loc_1630;
        uint32_t loc_1634;
        uint32_t loc_1638;
        uint32_t loc_163c;
        uint32_t loc_1640;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1640 = rd32(sp0 - 0x1640u);
        loc_163c = rd32(sp0 - 0x163cu);
        loc_1638 = rd32(sp0 - 0x1638u);
        loc_1634 = rd32(sp0 - 0x1634u);
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_162c = rd32(sp0 - 0x162cu);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        loc_1618 = rd32(sp0 - 0x1618u);
        g->esp = sp0 - 0x1640u;
        (void)sp0;
        return 1;
    }
    case 0x10065f7fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065f98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065fa1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065faau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065fb9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065fbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065fcbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065fd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065ff1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10065ffcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066022u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066027u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066040u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1624;
        uint32_t loc_1628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066044u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_1630;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066059u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_162c;
        uint32_t loc_1630;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_162c = rd32(sp0 - 0x162cu);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x1640u;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x1006605eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_162c;
        uint32_t loc_1630;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_162c = rd32(sp0 - 0x162cu);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x163cu;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x1006606au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_162c;
        uint32_t loc_1630;
        uint32_t loc_1640;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_1640 = rd32(sp0 - 0x1640u);
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_162c = rd32(sp0 - 0x162cu);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        g->esp = sp0 - 0x163cu;
        wr32(sp0 - 0x1648u, sp0 - 0x1614u);
        (void)sp0;
        return 1;
    }
    case 0x10066087u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1618;
        uint32_t loc_1620;
        uint32_t loc_1624;
        uint32_t loc_1628;
        uint32_t loc_162c;
        uint32_t loc_1630;
        uint32_t loc_1634;
        uint32_t loc_1638;
        uint32_t loc_163c;
        uint32_t loc_1640;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_1640 = rd32(sp0 - 0x1640u);
        loc_163c = rd32(sp0 - 0x163cu);
        loc_1638 = rd32(sp0 - 0x1638u);
        loc_1634 = rd32(sp0 - 0x1634u);
        loc_1630 = rd32(sp0 - 0x1630u);
        loc_162c = rd32(sp0 - 0x162cu);
        loc_1628 = rd32(sp0 - 0x1628u);
        loc_1624 = rd32(sp0 - 0x1624u);
        loc_1620 = rd32(sp0 - 0x1620u);
        loc_1618 = rd32(sp0 - 0x1618u);
        g->esp = sp0 - 0x163cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10065f00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10065f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
