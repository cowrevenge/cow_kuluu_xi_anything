/* f_0x100a9fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a9fc0(Guest* g)
{
    double d11;
    double d14;
    double d15;
    double d18;
    double d19;
    double d20;
    double d21;
    double d3;
    double d30;
    double d34;
    double d35;
    double d36;
    double d38;
    double d4;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d51;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_2c_f;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t37;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a9fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100a9fcc;
    case 0x100aa000u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100aa000;
    case 0x100aa005u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa005;
    case 0x100aa019u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_100aa019;
    case 0x100aa028u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa028;
    case 0x100aa038u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa038;
    case 0x100aa04au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa04a;
    case 0x100aa07fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa07f;
    case 0x100aa08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa08c;
    case 0x100aa0a8u: eax = g->eax; self = g->ecx; edx = g->edx; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_100aa0a8;
    case 0x100aa0adu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa0ad;
    case 0x100aa0c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_100aa0c1;
    case 0x100aa0d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa0d0;
    case 0x100aa0e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa0e0;
    case 0x100aa0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa0f5;
    case 0x100aa108u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa108;
    case 0x100aa11eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa11e;
    case 0x100aa12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa12f;
    case 0x100aa145u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa145;
    case 0x100aa14fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_100aa14f;
    case 0x100aa169u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa169;
    case 0x100aa179u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100aa179;
    case 0x100aa1aau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100aa1aa;
    default: break;
    }
#endif

    COW_AT(100a9fc0)
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    eax = t1;
    edx = t2;
    x0 = d3;
    COW_AT(100a9fcc)
    wrf32(sp0 - 0x2cu, (float)(double)(float)x0);
    d4 = fr(g, (double)rdf32(self + 0x108u) - (double)(float)x0);
    wrf32(self + 0x108u, (float)d4);
    t5 = rd32(self + 0x110u);
    wr32(sp0 - 0x38u, t5);
    wr32(sp0 - 0x3cu, self);
    wr32(sp0 - 0x40u, sp0 - 0x1cu);
    if (!(d4 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = t5;
        loc_2c_f = (double)(float)x0;
        loc_38 = t5;
        goto L_100aa0a8;
    }
    eax = t5;
    loc_38 = t5;
    COW_AT(100aa000)
    g->ecx = self;
    g->esp = sp0 - 0x34u;
    cow_stdcall(g, COW_IMG(0x100aa4e0u), 3, sp0 - 0x1cu, self, loc_38);
    t6 = g->ecx;
    ecx = t6;
    COW_AT(100aa005)
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x38u, t7);
    wr32(sp0 - 0x3cu, sp0 - 0x1cu);
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t8 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x28u, sp0 - 0x1cu, t7);
    eax = t8;
    edi = t7;
    COW_AT(100aa019)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, sp0 - 0x28u);
    g->eax = eax;
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x40u;
    t9 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x28u, sp0 - 0x28u);
    t10 = g->edx;
    d11 = cow_take_float(g);
    eax = t9;
    edx = t10;
    x0 = d11;
    COW_AT(100aa028)
    wrf32(sp0 + 4u, (float)fr(g, sqrt(x0)));
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x100d4b90u), self, 0);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    ecx = t12;
    edx = t13;
    x0 = d14;
    COW_AT(100aa038)
    d15 = fr(g, (double)rdf32(sp0 + 4u) - x0);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    wrf32(sp0 + 4u, (float)d15);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t16 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x28u, g->ecx, g->edx, 1, 1, sp0 - 0x28u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(100aa04a)
    d18 = fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(sp0 + 4u));
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, self + 0x5c4u);
    d19 = fr(g, d18 + (double)rdf32(edi));
    wrf32(edi, (float)d19);
    d20 = fr(g, fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(sp0 + 4u)) + (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d20);
    d21 = fr(g, fr(g, (double)rdf32(sp0 - 0x20u) * (double)rdf32(sp0 + 4u)) + (double)rdf32(edi + 8u));
    wrf32(edi + 8u, (float)d21);
    g->eax = eax;
    g->ecx = self + 0x5c4u;
    g->esp = sp0 - 0x38u;
    t22 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5c4u, edi);
    t23 = g->ecx;
    eax = t22;
    ecx = t23;
    COW_AT(100aa07f)
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, self + 0x5fcu);
    g->eax = eax;
    g->esp = sp0 - 0x40u;
    t24 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x5fcu, edi);
    eax = t24;
    COW_AT(100aa08c)
    wr32(self + 0x608u, 0x3f800000u);
    wr8(self + 0x103u, 0u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return eax;
L_100aa0a8: ;
    COW_AT(100aa0a8)
    g->ecx = self;
    g->esp = sp0 - 0x34u;
    cow_stdcall(g, COW_IMG(0x100aa4e0u), 3, sp0 - 0x1cu, self, loc_38);
    t25 = g->ecx;
    ecx = t25;
    COW_AT(100aa0ad)
    t26 = rd32(sp0 + 4u);
    wr32(sp0 - 0x38u, t26);
    wr32(sp0 - 0x3cu, sp0 - 0x1cu);
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->esp = sp0 - 0x34u;
    t27 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x28u, sp0 - 0x1cu, t26);
    eax = t27;
    edi = t26;
    COW_AT(100aa0c1)
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, sp0 - 0x28u);
    g->eax = eax;
    g->edx = sp0 - 0x28u;
    g->esp = sp0 - 0x40u;
    t28 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x28u, sp0 - 0x28u);
    t29 = g->edx;
    d30 = cow_take_float(g);
    eax = t28;
    edx = t29;
    x0 = d30;
    COW_AT(100aa0d0)
    wrf32(sp0 + 4u, (float)fr(g, sqrt(x0)));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t31 = cow_thiscall(g, COW_IMG(0x100d4b90u), self, 0);
    t32 = g->ecx;
    t33 = g->edx;
    d34 = cow_take_float(g);
    eax = t31;
    ecx = t32;
    edx = t33;
    x0 = d34;
    COW_AT(100aa0e0)
    d35 = fr(g, (double)rdf32(sp0 + 4u) - x0);
    wrf32(sp0 + 4u, (float)d35);
    if (!(d35 < (double)rdf32(COW_IMG(0x10329a18u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
        goto L_100aa11e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
    COW_AT(100aa0f5)
    d36 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d36, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100aa11e;
    }
    COW_AT(100aa108)
    t37 = rd32(sp0 - 0x34u);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x103u, 0u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t37;
    return 0u;
L_100aa11e: ;
    COW_AT(100aa11e)
    d38 = (double)rdf32(sp0 + 4u);
    if (!(d38 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100aa145;
    COW_AT(100aa12f)
    t39 = rd32(sp0 - 0x34u);
    wr32(self + 0x108u, 0u);
    wr8(self + 0x103u, 0u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t39;
    return 0u;
L_100aa145: ;
    COW_AT(100aa145)
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t40 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x28u, g->ecx, g->edx, 1, 1, sp0 - 0x28u);
    t41 = g->edx;
    eax = t40;
    edx = t41;
    COW_AT(100aa14f)
    d42 = fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(self + 0x10cu));
    d43 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d42, d43, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d42, d43, 1u) & 0x4100u;
        x0 = d42;
    }
    else
    {
        eax = cow_fsw(g, d42, d43, 1u) & 0x4100u;
        x0 = d42;
    COW_AT(100aa169)
        d44 = (double)rdf32(sp0 + 4u);
        wr32(self + 0x108u, 0u);
        x0 = d44;
    }
    COW_AT(100aa179)
    d45 = fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * x0) + (double)rdf32(edi));
    wrf32(edi, (float)d45);
    d46 = fr(g, fr(g, (double)rdf32(sp0 - 0x24u) * x0) + (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d46);
    d47 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 0x20u)) + (double)rdf32(edi + 8u));
    wrf32(edi + 8u, (float)d47);
    wr32(sp0 - 0x38u, self + 0xe4u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x10u, self + 0xe4u);
    COW_AT(100aa1aa)
    t48 = rd32(sp0 - 0x10u);
    t49 = rd32(sp0 - 8u);
    t50 = rd32(sp0 - 4u);
    d51 = fr(g, atan2((double)rdf32(sp0 - 0x20u), (double)rdf32(sp0 - 0x28u)));
    wr32(self + 0xe4u, t48);
    wr32(self + 0xecu, t49);
    wr32(self + 0xf0u, t50);
    t52 = rd32(sp0 - 0x34u);
    wrf32(self + 0xe8u, (float)-d51);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = t52;
    return t49;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a9fc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a9fccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100aa000u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_2c_f;
        uint32_t loc_38;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
        g->esi = self;
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        wr32(sp0 - 0x3cu, self);
        (void)sp0;
        return 1;
    }
    case 0x100aa005u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa019u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa028u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa038u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa04au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa07fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa08cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa0a8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_2c_f;
        uint32_t loc_38;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x40u;
        g->esi = self;
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        wr32(sp0 - 0x3cu, self);
        (void)sp0;
        return 1;
    }
    case 0x100aa0adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa0c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa0d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa0e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa0f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa108u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa11eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa145u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100aa14fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa169u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x1cu);
        wr32(sp0 - 0x38u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100aa1aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x3cu;
        g->edi = self + 0xe4u;
        wr32(sp0 - 0x48u, sp0 - 0x28u);
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9fc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a9fc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
