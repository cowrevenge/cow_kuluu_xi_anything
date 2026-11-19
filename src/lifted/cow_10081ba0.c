/* f_0x10081ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10081ba0(Guest* g)
{
    double d17;
    double d21;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10081bf0u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081bf0;
    case 0x10081bf7u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081bf7;
    case 0x10081c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081c01;
    case 0x10081c03u: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081c03;
    case 0x10081c0au: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081c0a;
    case 0x10081c14u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081c14;
    case 0x10081cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081cd3;
    case 0x10081cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10081cdb;
    default: break;
    }
#endif

    COW_AT(10081ba0)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, rd32(t1 + 0x1bcu), self, 1, COW_IMG(0x103581b4u));
    t3 = g->ecx;
    t4 = g->edx;
    t5 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t2, COW_IMG(0x103581b4u));
    g->edx = rd32(self);
    t6 = rd32(self);
    t7 = cow_thiscall_cdecl(g, rd32(t6 + 0x1c0u), self, 1, COW_IMG(0x103581c4u));
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t7, COW_IMG(0x103581c4u));
    t10 = g->edx;
    cow_thiscall(g, rd32(rd32(self) + 0x268u), self, 1, 0u);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
    {
        ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(10081c03)
        eax = COW_IMG(0x103d3c84u);
L_10081c0a: ;
    COW_AT(10081c0a)
        t12 = rd8(eax);
        wr8(eax + self - COW_IMG(0x103d3c84u) + 0xb8u, (uint8_t)t12);
        if ((uint8_t)t12 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t12;
            goto L_10081c0a;
        }
    }
    else
    {
        ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(10081bf0)
        eax = COW_IMG(0x1035821cu);
L_10081bf7: ;
    COW_AT(10081bf7)
        t11 = rd8(eax);
        wr8(eax + self - COW_IMG(0x1035821cu) + 0xb8u, (uint8_t)t11);
        if ((uint8_t)t11 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t11;
            goto L_10081bf7;
        }
    COW_AT(10081c01)
    }
    COW_AT(10081c14)
    t13 = rd32(self + 0x88u) & 0xfffff800u;
    t14 = rd32(self);
    wr32(self + 0x88u, t13);
    wr32(self + 0x78u, 0x80808080u);
    wr32(self + 0x7cu, 0x80808080u);
    wr16(self + 0xb2u, 0u);
    wr32(self + 0x80u, 0u);
    wr32(self + 0xb4u, 0u);
    wr32(self + 0xa0u, 0u);
    wr32(self + 0xa8u, 0u);
    wr32(self + 0x84u, 0u);
    wr32(self + 0x70u, 0u);
    wr8(self + 0xc0u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x68u, 0u);
    g->edx = t14;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t14 + 0x1acu), self, 1, 0x40a00000u);
    t15 = g->ecx;
    t16 = g->edx;
    d17 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x103581a0u)) * (double)rdf32(COW_IMG(0x1032cfdcu)));
    g->eax = rd32(self);
    t18 = rd32(self);
    t19 = cow_thiscall(g, rd32(t18 + 0x1a4u), self, 1, cow_f2bits(d17));
    t20 = g->ecx;
    d21 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x103581a0u)) * (double)rdf32(COW_IMG(0x1032cfd8u)));
    g->edx = rd32(self);
    t22 = rd32(self);
    cow_thiscall(g, rd32(t22 + 0x1b4u), self, 1, cow_f2bits(d21));
    t23 = g->ecx;
    t24 = g->edx;
    g->eax = rd32(self);
    g->edx = t24;
    t25 = rd32(self);
    t26 = cow_thiscall(g, rd32(t25 + 0x290u), self, 1, 0u);
    t27 = g->edx;
    t28 = cow_thiscall(g, COW_IMG(0x10081ae0u), self, 0);
    g->edx = rd32(self);
    t29 = rd32(self);
    cow_thiscall(g, rd32(t29 + 0x350u), self, 1, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        ecx = t30;
        edx = t31;
    }
    else
    {
        eax = rd32(COW_IMG(0x104568fcu));
        ecx = t30;
        edx = t31;
    COW_AT(10081cd3)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t32 = cow_call_regs(g, COW_IMG(0x10082bf0u), g->eax, g->ecx, edx, 1, 0);
        t33 = g->ecx;
        t34 = g->edx;
        wr32(self + 0x74u, t32);
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    COW_AT(10081cdb)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t35 = cow_call_regs(g, COW_IMG(0x10082bf0u), g->eax, g->ecx, edx, 1, 0);
    t36 = g->edx;
    wr32(self + 0x74u, t35);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t36;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10081ba0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10081bf0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = self + 0xb8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081bf7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = self + 0xb8u - COW_IMG(0x1035821cu);
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081c01u:
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
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081c03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = self + 0xb8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081c0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = self + 0xb8u - COW_IMG(0x103d3c84u);
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081c14u:
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
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10081cd3u:
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
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10081cdbu:
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
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10081ba0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10081ba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
