/* f_0x100d4800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100d4800(Guest* g)
{
    double d37;
    double d38;
    double d4;
    double d42;
    double d46;
    double d5;
    double d50;
    double d52;
    double d6;
    uint32_t eax;
    uint32_t edi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t51;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d4898u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_100d4898;
    case 0x100d48abu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_100d48ab;
    case 0x100d48b9u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d48b9;
    case 0x100d48ccu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d48cc;
    case 0x100d48deu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d48de;
    case 0x100d48e8u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d48e8;
    case 0x100d48f6u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d48f6;
    case 0x100d4909u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d4909;
    case 0x100d491bu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d491b;
    case 0x100d4923u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d4923;
    case 0x100d493au: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d493a;
    case 0x100d494du: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d494d;
    case 0x100d4964u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d4964;
    case 0x100d496cu: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d496c;
    case 0x100d4978u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d4978;
    case 0x100d4980u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_100d4980;
    case 0x100d498au: eax = g->eax; edx = g->edx; edi = g->edi; x0 = ST(0); goto E_100d498a;
    default: break;
    }
#endif

    COW_AT(100d4800)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, self + 0x678u);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 0x678u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x28u, 0x3f800000u);
    d4 = (double)(float)(double)rdf32(self + 0x69cu);
    wrf32(sp0 - 0x2cu, (float)d4);
    d5 = (double)(float)(double)rdf32(self + 0x6a0u);
    wrf32(sp0 - 0x30u, (float)d5);
    d6 = (double)(float)(double)rdf32(self + 0x698u);
    wrf32(sp0 - 0x34u, (float)d6);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    cow_cdecl(g, COW_IMG(0x10026e30u), 5, sp0 - 0x10u, cow_f2bits(d6), cow_f2bits(d5), cow_f2bits(d4), 0x3f800000u);
    wr32(sp0 - 0x28u, self + 0x688u);
    wr32(sp0 - 0x2cu, self + 0x678u);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    wr32(sp0 - 0x34u, t1);
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, self);
    g->eax = arg1;
    g->edx = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1002c3e0u), self + 0x674u, 7, self, 0u, arg1, t1, sp0 - 0x10u, self + 0x678u, self + 0x688u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x28u, self + 0x678u);
    wr32(sp0 - 0x2cu, t1);
    wr8(sp0 - 0x11u, (uint8_t)t7);
    t10 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, t1, self + 0x678u);
    t11 = rd32(self);
    wr32(sp0 + 8u, 0u);
    g->edx = t11;
    t12 = cow_thiscall(g, rd32(t11 + 0x34cu), self, 0);
    t13 = g->edx;
    if (t12 != 0u)
    {
        edx = t13;
        edi = t1;
        goto L_100d48ab;
    }
    eax = t12;
    edx = t13;
    edi = t1;
    COW_AT(100d4898)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t14 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t15 = g->edx;
    wr32(sp0 - 0x28u, t14);
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t14);
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_100d48cc;
    }
    edx = t17;
L_100d48ab: ;
    COW_AT(100d48ab)
    g->eax = rd32(self);
    g->edx = edx;
    t18 = rd32(self);
    g->esp = sp0 - 0x24u;
    t19 = cow_thiscall(g, rd32(t18 + 0x358u), self, 0);
    t20 = g->edx;
    if (t19 != 0u)
    {
        eax = t19;
        goto L_100d48e8;
    }
    eax = t19;
    edx = t20;
    COW_AT(100d48b9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t22 = g->edx;
    wr32(sp0 - 0x28u, t21);
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t21);
    t24 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        goto L_100d48e8;
    }
    eax = t23;
    edx = t24;
L_100d48cc: ;
    COW_AT(100d48cc)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t25 = cow_thiscall(g, COW_IMG(0x1002c5c0u), self + 0x674u, 2, arg1, 0u);
    if (t25 != 0u)
    {
        eax = t25;
        goto L_100d48e8;
    }
    eax = t25;
    COW_AT(100d48de)
    wr32(sp0 + 8u, 0xbfa66666u);
L_100d4923: ;
    COW_AT(100d4923)
    g->eax = eax;
    g->edx = rd32(self);
    t34 = rd32(self);
    g->esp = sp0 - 0x24u;
    t35 = cow_thiscall(g, rd32(t34 + 0x110u), self, 0);
    t36 = g->edx;
    d37 = cow_take_float(g);
    if (!(d37 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t36;
    COW_AT(100d4980)
        g->eax = rd32(self);
        g->edx = edx;
        t47 = rd32(self);
        g->esp = sp0 - 0x24u;
        t48 = cow_thiscall(g, rd32(t47 + 0x110u), self, 0);
        t49 = g->edx;
        d50 = cow_take_float(g);
        eax = t48;
        edx = t49;
        x0 = d50;
    }
    else
    {
        eax = (t35 & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t36;
    COW_AT(100d493a)
        d38 = (double)rdf32(self + 0x75cu);
        if (!(d38 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d38, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d4978)
            x0 = (double)rdf32(self + 0x75cu);
        }
        else
        {
    COW_AT(100d494d)
            g->eax = rd32(self);
            g->edx = edx;
            t39 = rd32(self);
            g->esp = sp0 - 0x24u;
            t40 = cow_thiscall(g, rd32(t39 + 0x110u), self, 0);
            t41 = g->edx;
            d42 = cow_take_float(g);
            if (!(d42 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(100d496c)
                g->eax = eax;
                g->edx = rd32(self);
                t43 = rd32(self);
                g->esp = sp0 - 0x24u;
                t44 = cow_thiscall(g, rd32(t43 + 0x110u), self, 0);
                t45 = g->edx;
                d46 = cow_take_float(g);
                eax = t44;
                edx = t45;
                x0 = d46;
            }
            else
            {
                eax = (t40 & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                edx = t41;
    COW_AT(100d4964)
                x0 = (double)rdf32(self + 0x754u);
            }
        }
    }
    COW_AT(100d498a)
    t51 = rd8(sp0 - 0x11u);
    d52 = fr(g, fr(g, x0 * (double)rdf32(sp0 + 8u)) + (double)rdf32(edi + 4u));
    wrf32(edi + 4u, (float)d52);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | t51;
L_100d48e8: ;
    COW_AT(100d48e8)
    g->eax = eax;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall(g, rd32(t26 + 0x36cu), self, 0);
    t28 = g->edx;
    if (t27 != 0u)
    {
        eax = t27;
    }
    else
    {
        eax = t27;
        edx = t28;
    COW_AT(100d48f6)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t29 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
        t30 = g->edx;
        wr32(sp0 - 0x28u, t29);
        g->edx = t30;
        t31 = cow_thiscall(g, COW_IMG(0x10084330u), self, 1, t29);
        t32 = g->edx;
        if ((uint8_t)t31 == 0u)
        {
            eax = t31;
        }
        else
        {
            edx = t32;
    COW_AT(100d4909)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, arg1);
            g->eax = arg1;
            g->esp = sp0 - 0x24u;
            t33 = cow_thiscall(g, COW_IMG(0x1002c5c0u), self + 0x674u, 2, arg1, 0u);
            if (t33 != 0u)
            {
                eax = t33;
            }
            else
            {
                eax = t33;
    COW_AT(100d491b)
                wr32(sp0 + 8u, 0xbf000000u);
            }
        }
    }
    goto L_100d4923;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d4800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d4898u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48abu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48b9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48ccu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48deu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48e8u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d48f6u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4909u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebp = self + 0x674u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d491bu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4923u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d493au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d494du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4964u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d496cu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4978u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d4980u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100d498au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        double x0;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d4800(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
