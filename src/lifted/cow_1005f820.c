/* f_0x1005f820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005f820(Guest* g)
{
    double d14;
    double d19;
    double d24;
    double d37;
    double d4;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005f830u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1005f830;
    case 0x1005f83eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1005f83e;
    case 0x1005f85du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->esi = rd32(sp0 - 0x10u); goto E_1005f85d;
    case 0x1005f867u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->esi = rd32(sp0 - 0x10u); goto E_1005f867;
    case 0x1005f870u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); x0 = ST(0); g->esi = rd32(sp0 - 0x10u); goto E_1005f870;
    case 0x1005f929u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1005f929;
    case 0x1005f935u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1005f935;
    case 0x1005f948u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1005f948;
    case 0x1005f959u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1005f959;
    case 0x1005f96au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1005f96a;
    case 0x1005f97au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1005f97a;
    default: break;
    }
#endif

    COW_AT(1005f820)
    if (rd8(self + 0x85u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x85u);
        goto L_1005f83e;
    }
    COW_AT(1005f830)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), self, 1, 1u);
    t3 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t3;
    return (t2 & 0xffffff00u) | 1u;
L_1005f83e: ;
    COW_AT(1005f83e)
    d4 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t5 = rd32(COW_IMG(0x1047bfa8u));
    d6 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x74u, (float)d4);
    if (!(d4 < d6))
    {
        ecx = t5;
        x0 = d4;
    COW_AT(1005f867)
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x0 / (double)rdf32(self + 0x78u)));
    }
    else
    {
        ecx = t5;
        x0 = d4;
    COW_AT(1005f85d)
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    COW_AT(1005f870)
    t7 = rd8(self + 0x7eu);
    t8 = rd8(self + 0x82u) - rd8(self + 0x7eu);
    g->edx = t8;
    d9 = fr(g, fr(g, (double)(int32_t)t8 * x0) + (double)(int32_t)t7);
    fpush(g, d9);
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    t12 = rd8(self + 0x7du);
    t13 = rd8(self + 0x81u) - t12;
    g->ecx = t13;
    d14 = fr(g, fr(g, (double)(int32_t)t13 * x0) + (double)(int32_t)t12);
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    t16 = g->ecx;
    t17 = rd8(self + 0x7cu);
    t18 = rd8(self + 0x80u) - t17;
    g->edx = t18;
    d19 = fr(g, fr(g, (double)(int32_t)t18 * x0) + (double)(int32_t)t17);
    fpush(g, d19);
    t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
    t21 = g->edx;
    t22 = rd8(self + 0x7fu);
    t23 = rd8(self + 0x83u) - t22;
    g->edx = t21;
    d24 = fr(g, fr(g, (double)(int32_t)t23 * x0) + (double)(int32_t)t22);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t22, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t28 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        eax = t27;
        edx = t28;
        loc_c = ((t10 << 0x10u | (uint32_t)(uint8_t)t15 << 8u | (uint8_t)t20) & 0xffffffu) | (uint32_t)(uint8_t)t25 << 0x18u;
    COW_AT(1005f929)
        if (rd8(self + 0x84u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x84u);
    COW_AT(1005f948)
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t33 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t33);
            t34 = rd32(t33);
            t35 = cow_thiscall(g, rd32(t34 + 0x30u), t33, 1, loc_c);
            t36 = g->edx;
            eax = t35;
            edx = t36;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x84u);
    COW_AT(1005f935)
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t29 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t29);
            t30 = rd32(t29);
            t31 = cow_thiscall(g, rd32(t30 + 0x60u), t29, 1, loc_c);
            t32 = g->edx;
            eax = t31;
            edx = t32;
        }
    }
    COW_AT(1005f959)
    d37 = (double)rdf32(self + 0x74u);
    if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1005f97a;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1005f96a)
    g->eax = eax;
    g->edx = rd32(self);
    t38 = rd32(self);
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, rd32(t38 + 0x18u), self, 1, 1u);
    t40 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t40;
    return (t39 & 0xffffff00u) | 1u;
L_1005f97a: ;
    COW_AT(1005f97a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1005f820(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005f830u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1005f83eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1005f85du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1005f867u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1005f870u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1005f929u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005f935u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ecx = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005f948u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ecx = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005f959u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1005f96au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1005f97au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f820(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1005f820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
