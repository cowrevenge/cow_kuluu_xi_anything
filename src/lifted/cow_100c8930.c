/* f_0x100c8930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c8930(Guest* g)
{
    double d12;
    double d15;
    double d19;
    double d20;
    double d32;
    double d45;
    double d46;
    double d49;
    double d54;
    double d55;
    double d58;
    double d62;
    double d65;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t loc_8;
    double loc_8_f;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c8946u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100c8946;
    case 0x100c894eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100c894e;
    case 0x100c895bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_100c895b;
    case 0x100c8962u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8962;
    case 0x100c896bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c896b;
    case 0x100c8979u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8979;
    case 0x100c8980u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8980;
    case 0x100c8989u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8989;
    case 0x100c89a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100c89a4;
    case 0x100c89aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100c89ae;
    case 0x100c89b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100c89b6;
    case 0x100c89c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c89c0;
    case 0x100c89cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c89cf;
    case 0x100c89d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c89d9;
    case 0x100c89e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c89e7;
    case 0x100c89f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8_f = rdf32(sp0 - 8u); goto E_100c89f3;
    case 0x100c89fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c89fa;
    case 0x100c8a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a02;
    case 0x100c8a06u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a06;
    case 0x100c8a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a0d;
    case 0x100c8a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a15;
    case 0x100c8a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a1d;
    case 0x100c8a2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100c8a2c;
    case 0x100c8a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a36;
    case 0x100c8a41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8a41;
    case 0x100c8a53u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8a53;
    case 0x100c8a6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_100c8a6e;
    case 0x100c8a81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a81;
    case 0x100c8a8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a8e;
    case 0x100c8a95u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a95;
    case 0x100c8a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8a9d;
    case 0x100c8aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8aa1;
    case 0x100c8aa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8aa8;
    case 0x100c8ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8ab0;
    case 0x100c8ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8ab4;
    case 0x100c8abeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8abe;
    case 0x100c8acdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8acd;
    case 0x100c8ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8ad3;
    case 0x100c8addu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8add;
    case 0x100c8aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8aec;
    case 0x100c8af0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8af0;
    case 0x100c8b01u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); goto E_100c8b01;
    case 0x100c8b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); goto E_100c8b09;
    case 0x100c8b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b13;
    case 0x100c8b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8b22;
    case 0x100c8b2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8b2c;
    case 0x100c8b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b30;
    case 0x100c8b46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b46;
    case 0x100c8b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); goto E_100c8b4a;
    case 0x100c8b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_100c8b54;
    case 0x100c8b5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b5c;
    case 0x100c8b6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b6b;
    case 0x100c8b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b80;
    case 0x100c8b8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b8f;
    case 0x100c8b97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100c8b97;
    default: break;
    }
#endif

    COW_AT(100c8930)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, 0u);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x304u), self, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100c8946)
    if ((uint8_t)eax == 0u)
    {
        loc_c = in_esi;
        loc_8 = 0u;
        goto L_100c8a2c;
    }
    COW_AT(100c894e)
    if (rd8(COW_IMG(0x10487f81u)) != 0u)
    {
        loc_c = in_esi;
        loc_8 = 0u;
        goto L_100c8a2c;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487f81u));
    COW_AT(100c895b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x100844e0u), self, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100c8962)
    if (eax == 1u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        goto L_100c8a2c;
    }
    COW_AT(100c896b)
    if (rd8(self + 0x101u) != 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        goto L_100c8a2c;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x101u);
    COW_AT(100c8979)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(100c8980)
    if (eax == 4u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        goto L_100c8a2c;
    }
    COW_AT(100c8989)
    t8 = rd32(self + 0x594u);
    wr32(sp0 - 8u, t8);
    if (!(cow_bits2f(t8) <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(t8), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_8 = t8;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(t8), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_8 = t8;
    COW_AT(100c89a4)
        if (rd8(self + 0xf8u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf8u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xf8u);
    COW_AT(100c89ae)
            wr32(sp0 - 8u, 0x3eaaaaabu);
            loc_8 = 0x3eaaaaabu;
        }
    }
    COW_AT(100c89b6)
    g->eax = eax;
    g->edx = rd32(self);
    t9 = rd32(self);
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, rd32(t9 + 0x1a0u), self, 0);
    t11 = g->edx;
    d12 = cow_take_float(g);
    eax = t10;
    edx = t11;
    x0 = d12;
    COW_AT(100c89c0)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_8_f = (double)rdf32(sp0 - 8u);
    }
    else
    {
    COW_AT(100c89cf)
        g->eax = rd32(self);
        t13 = rd32(self);
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, rd32(t13 + 0x1a0u), self, 0);
        d15 = cow_take_float(g);
        eax = t14;
        x0 = d15;
    COW_AT(100c89d9)
        t16 = rd32(self);
        wrf32(sp0 + 4u, (float)x0);
        g->eax = eax;
        g->edx = t16;
        g->esp = sp0 - 0xcu;
        t17 = cow_thiscall(g, rd32(t16 + 0x1a8u), self, 0);
        t18 = g->edx;
        d19 = cow_take_float(g);
        eax = t17;
        edx = t18;
        x0 = d19;
    COW_AT(100c89e7)
        d20 = fr(g, fr(g, (double)rdf32(sp0 + 4u) / x0) * (double)rdf32(sp0 - 8u));
        wrf32(sp0 - 8u, (float)(double)(float)d20);
        loc_8_f = (double)(float)d20;
    }
    COW_AT(100c89f3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(100c89fa)
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    COW_AT(100c8a02)
    if ((uint8_t)eax != 0u) goto L_100c8a1d;
    COW_AT(100c8a06)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(100c8a0d)
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(100c8a15)
    if ((uint8_t)eax == 0u) goto L_100c8b4a;
L_100c8a1d: ;
    COW_AT(100c8a1d)
    x0 = fr(g, (double)rdf32(sp0 - 8u) * rdf64(COW_IMG(0x10331370u)));
L_100c8b46: ;
    COW_AT(100c8b46)
    wrf32(sp0 - 8u, (float)(double)(float)x0);
L_100c8b4a: ;
    COW_AT(100c8b4a)
    g->eax = rd32(self);
    t63 = rd32(self);
    g->esp = sp0 - 0xcu;
    t64 = cow_thiscall(g, rd32(t63 + 0x14cu), self, 0);
    eax = t64;
    COW_AT(100c8b54)
    if ((uint8_t)eax == 0u)
    {
        x0 = (double)rdf32(sp0 - 8u);
        goto L_100c8b80;
    }
    x0 = (double)rdf32(sp0 - 8u);
    COW_AT(100c8b5c)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u) goto L_100c8b97;
    COW_AT(100c8b6b)
    d65 = (double)rdf32(COW_IMG(0x1032961cu));
    wrf32(self + 0x824u, (float)d65);
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, d65);
    return;
L_100c8a2c: ;
    COW_AT(100c8a2c)
    g->eax = rd32(self);
    g->edx = edx;
    t29 = rd32(self);
    g->esp = sp0 - 0xcu;
    t30 = cow_thiscall(g, rd32(t29 + 0x19cu), self, 0);
    t31 = g->edx;
    eax = t30;
    edx = t31;
    COW_AT(100c8a36)
    if ((uint8_t)eax == 0u)
    {
        eax = rd32(sp0 + 4u);
        x0 = (double)rdf32(rd32(sp0 + 4u) + 8u);
    COW_AT(100c8a53)
        d32 = (double)rdf32(eax + 4u);
        x1 = d32;
        x0 = fr(g, sqrt(fr(g, fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(eax)) + fr(g, x0 * x0)) + fr(g, d32 * d32))));
    }
    else
    {
        eax = rd32(sp0 + 4u);
        x0 = (double)rdf32(rd32(sp0 + 4u) + 8u);
    COW_AT(100c8a41)
        x1 = (double)rdf32(eax);
        x0 = fr(g, sqrt(fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(eax)) + fr(g, x0 * x0))));
    }
    COW_AT(100c8a6e)
    wrf32(sp0 + 4u, (float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a1a8u)), 0u);
        goto L_100c8a8e;
    }
    COW_AT(100c8a81)
    wr32(sp0 - 8u, 0u);
    goto L_100c8b4a;
L_100c8a8e: ;
    COW_AT(100c8a8e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    COW_AT(100c8a95)
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t35 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, eax);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(100c8a9d)
    if ((uint8_t)eax != 0u) goto L_100c8ad3;
    COW_AT(100c8aa1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t37 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    COW_AT(100c8aa8)
    wr32(sp0 - 0x10u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, eax);
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(100c8ab0)
    if ((uint8_t)eax != 0u) goto L_100c8ad3;
    COW_AT(100c8ab4)
    g->eax = eax;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, rd32(t41 + 0x1a8u), self, 0);
    t43 = g->ecx;
    t44 = g->edx;
    d45 = cow_take_float(g);
    eax = t42;
    ecx = t43;
    edx = t44;
    x0 = d45;
    COW_AT(100c8abe)
    d46 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032b160u)));
    wrf32(sp0 - 4u, (float)(double)(float)d46);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t48 = g->edx;
    d49 = cow_take_float(g);
    eax = t47;
    edx = t48;
    x0 = d49;
    COW_AT(100c8acd)
    x0 = fr(g, x0 * (double)rdf32(sp0 - 4u));
L_100c8af0: ;
    COW_AT(100c8af0)
    wrf32(sp0 - 4u, (float)(double)(float)x0);
    if (!(x0 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
        loc_4_f = (double)(float)x0;
    COW_AT(100c8b09)
        g->eax = eax;
        g->edx = rd32(self);
        t59 = rd32(self);
        g->esp = sp0 - 0xcu;
        t60 = cow_thiscall(g, rd32(t59 + 0x1a0u), self, 0);
        t61 = g->edx;
        d62 = cow_take_float(g);
        eax = t60;
        edx = t61;
        x0 = d62;
    COW_AT(100c8b13)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
        {
    COW_AT(100c8b2c)
            x0 = (double)rdf32(sp0 - 8u);
        }
        else
        {
    COW_AT(100c8b22)
            x0 = fr(g, (double)rdf32(sp0 + 4u) / (double)rdf32(sp0 - 4u));
        }
    }
    else
    {
    COW_AT(100c8b01)
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    COW_AT(100c8b30)
    x0 = fr(g, fr(g, (double)rdf32(self + 0x824u) * (double)rdf32(COW_IMG(0x10329d34u))) + fr(g, x0 * (double)rdf32(COW_IMG(0x10329ce4u))));
    goto L_100c8b46;
L_100c8ad3: ;
    COW_AT(100c8ad3)
    g->eax = rd32(self);
    g->edx = edx;
    t50 = rd32(self);
    g->esp = sp0 - 0xcu;
    t51 = cow_thiscall(g, rd32(t50 + 0x1a8u), self, 0);
    t52 = g->ecx;
    t53 = g->edx;
    d54 = cow_take_float(g);
    eax = t51;
    ecx = t52;
    edx = t53;
    x0 = d54;
    COW_AT(100c8add)
    d55 = fr(g, x0 * (double)rdf32(COW_IMG(0x10331368u)));
    wrf32(sp0 - 4u, (float)(double)(float)d55);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t56 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t57 = g->edx;
    d58 = cow_take_float(g);
    eax = t56;
    edx = t57;
    x0 = d58;
    COW_AT(100c8aec)
    x0 = fr(g, x0 * (double)rdf32(sp0 - 4u));
    goto L_100c8af0;
L_100c8b80: ;
    COW_AT(100c8b80)
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329d38u)), 1u) & 0x4100u) == 0u)
    {
    COW_AT(100c8b8f)
        x0 = (double)rdf32(COW_IMG(0x10329d38u));
    }
L_100c8b97: ;
    COW_AT(100c8b97)
    wrf32(self + 0x824u, (float)x0);
    g->esi = rd32(sp0 - 0xcu);
    fpush(g, x0);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c8930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c8946u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c894eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c895bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100c8962u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c896bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8979u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8980u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8989u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c89fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a36u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8a9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8aa1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8aa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8ab0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8ab4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8abeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8acdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8ad3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8addu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8aecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8af0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_4_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_4_f = rdf32(sp0 - 4u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_4_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100c8b97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c8930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100c8930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
