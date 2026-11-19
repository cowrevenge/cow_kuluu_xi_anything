/* f_0x10085060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10085060(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_23c;
    uint32_t loc_240;
    uint32_t loc_244;
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
    cow_frame(g, sp0, 600u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008507cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); g->ebp = rd32(sp0 - 0x23cu); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_1008507c;
    case 0x10085089u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); g->ebp = rd32(sp0 - 0x23cu); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_10085089;
    case 0x10085094u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); g->ebp = rd32(sp0 - 0x23cu); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_10085094;
    case 0x10085098u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); g->ebp = rd32(sp0 - 0x23cu); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_10085098;
    case 0x1008509au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x244u); in_esi = rd32(sp0 - 0x240u); in_ebp = rd32(sp0 - 0x23cu); g->ebp = rd32(sp0 - 0x23cu); g->edi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x240u); goto E_1008509a;
    case 0x100850b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100850b9;
    case 0x100850c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100850c4;
    case 0x100850dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100850dc;
    case 0x100850ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100850eb;
    case 0x100850f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100850f9;
    case 0x1008510eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008510e;
    case 0x1008511du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008511d;
    case 0x10085123u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10085123;
    case 0x10085127u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10085127;
    case 0x10085129u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10085129;
    case 0x1008514cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008514c;
    case 0x10085157u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_10085157;
    case 0x1008516fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008516f;
    case 0x1008517eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008517e;
    case 0x1008518cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_1008518c;
    case 0x10085199u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_10085199;
    case 0x100851a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100851a8;
    case 0x100851aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100851aa;
    case 0x100851b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100851b7;
    case 0x100851bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_100851bb;
    case 0x100851ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_244 = rd32(sp0 - 0x244u); loc_240 = rd32(sp0 - 0x240u); loc_23c = rd32(sp0 - 0x23cu); goto E_100851ce;
    default: break;
    }
#endif

    COW_AT(10085060)
    wr32(sp0 - 0x23cu, in_ebp);
    wr32(sp0 - 0x240u, in_esi);
    wr32(sp0 - 0x244u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x244u;
    t2 = cow_thiscall(g, rd32(t1 + 0x124u), self, 0);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        loc_23c = in_ebp;
        loc_240 = in_esi;
        loc_244 = in_edi;
        goto L_100851ce;
    }
    eax = t2;
    edx = t3;
    COW_AT(1008507c)
    if ((rd8(self + 0xb2u) & 2u) != 0u)
    {
        loc_23c = in_ebp;
        loc_240 = in_esi;
        loc_244 = in_edi;
        goto L_100851ce;
    }
    COW_AT(10085089)
    if (arg1 == 0u)
    {
    COW_AT(10085098)
        eax = 0u;
    }
    else
    {
    COW_AT(10085094)
        eax = rd32(arg1);
    }
    COW_AT(1008509a)
    wr32(sp0 - 0x248u, 0xffffffffu);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, 5u);
    wr32(sp0 - 0x254u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t4 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x21cu, 4, eax, 5u, 0u, 0xffffffffu);
    t5 = g->edx;
    wr32(sp0 - 0x248u, 0u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x21cu, 1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        edx = t8;
        goto L_1008511d;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
L_100850b9: ;
    COW_AT(100850b9)
    if (rd8(eax + 0x1au) >> 2u & 1u) goto L_1008510e;
    COW_AT(100850c4)
    if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u - 1u > 0x12u)
    {
        edx = (rd8(eax + 0x36u) & 1u) << 4u;
        goto L_1008510e;
    }
    ecx = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u - 1u;
    COW_AT(100850dc)
    t9 = rd32(COW_IMG(0x100851dcu) + rd8(COW_IMG(0x100851e4u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x100851e4u) + ecx);
    switch (t9 - RD)
    {
    case 0x100850ebu: goto L_100850eb;
    case 0x1008510eu: goto L_1008510e;
    default: rt_fatal(g, COW_IMG(0x100850e4u), "switch");
    }
    return 0;
L_100850eb: ;
    COW_AT(100850eb)
    if (rd32(eax + 0xd8u) >> 0xcu & 1u)
    {
        ecx = rd32(eax + 0xd8u) >> 0xcu;
    COW_AT(100850f9)
        wr32(sp0 - 0x248u, ecx);
        wr32(sp0 - 0x24cu, 0u);
        wr32(sp0 - 0x250u, 0u);
        wr32(sp0 - 0x254u, self);
        wr32(sp0 - 0x248u, 0u);
        g->eax = eax;
        g->esp = sp0 - 0x244u;
        t10 = cow_fastcall(g, COW_IMG(0x10053a00u), eax, edx, 4, self, 0u, 0u, 0u);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
L_1008510e: ;
    COW_AT(1008510e)
    wr32(sp0 - 0x248u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t12 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x21cu, 1, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100850b9;
    }
    edx = t14;
L_1008511d: ;
    COW_AT(1008511d)
    if (arg1 == 0u)
    {
    COW_AT(10085127)
        eax = 0u;
    }
    else
    {
    COW_AT(10085123)
        eax = rd32(arg1);
    }
    COW_AT(10085129)
    wr32(sp0 - 0x248u, 0xffffffffu);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, 5u);
    wr32(sp0 - 0x254u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t15 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x238u, 4, eax, 5u, 0u, 0xffffffffu);
    t16 = g->edx;
    wr32(sp0 - 0x248u, 0u);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x238u, 1, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t19;
        loc_23c = rd32(sp0 - 0x23cu);
        loc_240 = rd32(sp0 - 0x240u);
        loc_244 = rd32(sp0 - 0x244u);
        goto L_100851ce;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    esi = 0u;
L_1008514c: ;
    COW_AT(1008514c)
    if (rd8(eax + 0x1au) >> 2u & 1u)
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 0x1au) >> 2u;
        goto L_10085199;
    }
    COW_AT(10085157)
    if ((rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u - 1u > 0x12u)
    {
        edx = rd32(eax + 0x34u) & 0xfu;
        goto L_10085199;
    }
    ecx = (rd32(eax + 0x34u) & 0xfu) + (rd8(eax + 0x36u) & 1u) * 0x10u - 1u;
    COW_AT(1008516f)
    t20 = rd32(COW_IMG(0x100851f8u) + rd8(COW_IMG(0x10085200u) + ecx) * 4u);
    edx = rd8(COW_IMG(0x10085200u) + ecx);
    switch (t20 - RD)
    {
    case 0x1008517eu: goto L_1008517e;
    case 0x10085199u: goto L_10085199;
    default: rt_fatal(g, COW_IMG(0x10085177u), "switch");
    }
    return 0;
L_1008517e: ;
    COW_AT(1008517e)
    if (!(rd32(eax + 0xd8u) >> 0xcu & 1u)) goto L_10085199;
    ecx = rd32(eax + 0xd8u) >> 0xcu;
    COW_AT(1008518c)
    wr32(esi * 4u + sp0 - 0x200u, eax);
    if ((int32_t)(esi + 1u) >= 128)
    {
        esi = esi + 1u;
        goto L_100851aa;
    }
    esi = esi + 1u;
L_10085199: ;
    COW_AT(10085199)
    wr32(sp0 - 0x248u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t23 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x238u, 1, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_1008514c;
    }
    eax = t23;
    edx = t25;
    COW_AT(100851a8)
L_100851b7: ;
    COW_AT(100851b7)
    if (esi == 0u)
    {
        loc_23c = rd32(sp0 - 0x23cu);
        loc_240 = rd32(sp0 - 0x240u);
        loc_244 = rd32(sp0 - 0x244u);
        goto L_100851ce;
    }
L_100851bb: ;
    COW_AT(100851bb)
    wr32(sp0 - 0x248u, 1u);
    wr32(sp0 - 0x24cu, 0u);
    wr32(sp0 - 0x250u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t26 = cow_thiscall(g, COW_IMG(0x100536c0u), rd32(esi * 4u + sp0 - 0x204u), 3, self, 0u, 1u);
    t27 = g->edx;
    if (esi != 1u)
    {
        eax = t26;
        edx = t27;
        esi = esi - 1u;
        goto L_100851bb;
    }
    eax = t26;
    edx = t27;
    loc_23c = rd32(sp0 - 0x23cu);
    loc_240 = rd32(sp0 - 0x240u);
    loc_244 = rd32(sp0 - 0x244u);
L_100851ce: ;
    COW_AT(100851ce)
    g->esi = loc_240;
    g->edi = loc_244;
    g->ebp = loc_23c;
    g->edx = edx;
    return eax;
L_100851aa: ;
    COW_AT(100851aa)
    wr32(sp0 - 0x248u, COW_IMG(0x10358288u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x248u;
    t21 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    goto L_100851b7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10085060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008507cu:
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x10085089u:
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x10085094u:
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085098u:
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008509au:
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
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x244u);
        in_esi = rd32(sp0 - 0x240u);
        in_ebp = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100850b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100850c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100850dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100850ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100850f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008510eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1008511du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085123u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x244u;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10085127u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x244u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10085129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x244u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1008514cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x10085157u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x1008516fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x1008517eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x1008518cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x10085199u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x100851a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x100851aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x100851b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x100851bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x100851ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_23c;
        uint32_t loc_240;
        uint32_t loc_244;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_244 = rd32(sp0 - 0x244u);
        loc_240 = rd32(sp0 - 0x240u);
        loc_23c = rd32(sp0 - 0x23cu);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10085060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10085060(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
