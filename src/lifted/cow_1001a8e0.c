/* f_0x1001a8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1001a8e0(Guest* g)
{
    double d14;
    double d15;
    double d21;
    double d24;
    double d25;
    double d26;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d45;
    double d46;
    double d47;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001a8f5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1001a8f5;
    case 0x1001a8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a8fc;
    case 0x1001a904u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a904;
    case 0x1001a912u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a912;
    case 0x1001a93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1001a93b;
    case 0x1001a942u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1001a942;
    case 0x1001a94du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1001a94d;
    case 0x1001a95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a95b;
    case 0x1001a97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); goto E_1001a97c;
    case 0x1001a98au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a98a;
    case 0x1001a9a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9a0;
    case 0x1001a9abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_4_f = rdf32(sp0 - 4u); goto E_1001a9ab;
    case 0x1001a9b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a9b0;
    case 0x1001a9b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001a9b7;
    case 0x1001a9ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9ce;
    case 0x1001a9d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9d5;
    case 0x1001a9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9dd;
    case 0x1001a9edu: ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9ed;
    case 0x1001a9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001a9f4;
    case 0x1001aa0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa0a;
    case 0x1001aa11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa11;
    case 0x1001aa1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa1f;
    case 0x1001aa35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa35;
    case 0x1001aa46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa46;
    case 0x1001aa55u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa55;
    case 0x1001aa69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aa69;
    case 0x1001aa7au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001aa7a;
    case 0x1001aa85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa85;
    case 0x1001aa99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aa99;
    case 0x1001aaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aaa0;
    case 0x1001aaa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aaa8;
    case 0x1001aab8u: ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aab8;
    case 0x1001aabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aabf;
    case 0x1001aad5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aad5;
    case 0x1001aadcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aadc;
    case 0x1001aaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001aaea;
    case 0x1001ab00u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001ab00;
    case 0x1001ab11u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001ab11;
    case 0x1001ab20u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1001ab20;
    case 0x1001ab30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ab30;
    case 0x1001ab41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ab41;
    case 0x1001ab4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1001ab4c;
    case 0x1001ab4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_1001ab4e;
    default: break;
    }
#endif

    COW_AT(1001a8e0)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
        edx = in_edx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1001ab4e;
    }
    eax = rd32(self + 0x34u);
    COW_AT(1001a8f5)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x34u, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1001a8fc)
    if ((uint8_t)eax == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1001ab4e;
    }
    COW_AT(1001a904)
    t3 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t3);
    g->eax = t3;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t3);
    eax = t4;
    COW_AT(1001a912)
    t5 = (uint32_t)(int16_t)rd16(eax + 0x34u);
    wr32(sp0 - 8u, t5);
    t6 = rd32(self + 0x24u);
    wr32(sp0 - 8u, t6);
    wrf32(sp0 - 0xcu, (float)(double)(float)(double)(int32_t)t5);
    d7 = (double)rdf32(self + 0x38u);
    if ((cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        edx = t6;
        loc_8 = t6;
    }
    else
    {
        edx = t6;
        loc_8 = t6;
    COW_AT(1001a93b)
        t8 = rd32(self + 0x38u);
        wr32(sp0 - 0xcu, t8);
    }
    COW_AT(1001a942)
    if ((int32_t)rd32(self + 0x2cu) < 0)
    {
        eax = rd32(self + 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1001ab4e;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(1001a94d)
    t9 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t9);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    t10 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x14u;
    t11 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t9);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(1001a95b)
    d14 = fr(g, fr(g, (double)rdf32(eax + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(self + 0x28u));
    wrf32(sp0 - 4u, (float)(double)(float)d14);
    d15 = (double)rdf32(sp0 - 0xcu);
    if (d15 != (double)rdf32(COW_IMG(0x10329990u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329990u)), 0u);
        loc_4_f = (double)(float)d14;
        goto L_1001a9ab;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x10329990u)), 0u);
    loc_4_f = (double)(float)d14;
    COW_AT(1001a97c)
    t16 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t16);
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = t16;
    t17 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x14u;
    t18 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, t16);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1001a98a)
    d21 = fr(g, (double)rdf32(eax + 0x36u) * (double)rdf32(COW_IMG(0x10329a08u)));
    if (d21 != (double)rdf32(COW_IMG(0x10329a08u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
        loc_4_f = (double)rdf32(sp0 - 4u);
        goto L_1001a9ab;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x10329a08u)), 0u);
    COW_AT(1001a9a0)
    x0 = fr(g, (double)rdf32(self + 0x24u) + (double)rdf32(COW_IMG(0x1032961cu)));
L_1001a9b7: ;
    COW_AT(1001a9b7)
    wrf32(self + 0x24u, (float)x0);
    d25 = (double)rdf32(self + 0x24u);
    d26 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d25, d26, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d25, d26, 0u) & 0x100u;
        goto L_1001aa85;
    }
    COW_AT(1001a9ce)
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        goto L_1001aa35;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(1001a9d5)
    wr32(self + 0x2cu, eax - 1u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001aa35;
    }
    COW_AT(1001a9dd)
    wr32(self + 0x2cu, 0xffffffffu);
    if ((int32_t)arg2 < 3) goto L_1001aa0a;
    COW_AT(1001a9ed)
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t27 = cow_thiscall(g, COW_IMG(0x1001b590u), self, 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(1001a9f4)
    t29 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t29);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001a9ab: ;
    COW_AT(1001a9ab)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t23 = g->edx;
    d24 = cow_take_float(g);
    eax = t22;
    edx = t23;
    x0 = d24;
    COW_AT(1001a9b0)
    x0 = fr(g, fr(g, x0 * (double)rdf32(sp0 - 4u)) + (double)rdf32(self + 0x24u));
    goto L_1001a9b7;
L_1001aa0a: ;
    COW_AT(1001aa0a)
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
    }
    else
    {
    COW_AT(1001aa11)
        wr32(sp0 - 0x18u, 1u);
        g->eax = rd32(arg1);
        g->edx = edx;
        t30 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        t31 = cow_thiscall(g, rd32(t30 + 0x1fcu), arg1, 1, 1u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    COW_AT(1001aa1f)
    t33 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t33);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa35: ;
    COW_AT(1001aa35)
    d34 = (double)rdf32(sp0 - 0xcu);
    if (!(d34 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001aa55;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001aa46)
    wr32(self + 0x24u, 0u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa55: ;
    COW_AT(1001aa55)
    d35 = (double)rdf32(self + 0x24u);
    d36 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d35, d36, 1u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d35, d36, 1u) & 0x100u;
        x0 = d35;
        goto L_1001ab4c;
    }
    eax = cow_fsw(g, d35, d36, 1u) & 0x100u;
    x0 = d35;
L_1001aa69: ;
    COW_AT(1001aa69)
    d37 = fr(g, x0 - (double)rdf32(sp0 - 0xcu));
    d38 = (double)rdf32(sp0 - 0xcu);
    if ((cow_fsw(g, d37, d38, 1u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d37, d38, 1u) & 0x100u;
        x0 = d37;
        goto L_1001aa69;
    }
    eax = cow_fsw(g, d37, d38, 1u) & 0x100u;
    x0 = d37;
    COW_AT(1001aa7a)
    wrf32(self + 0x24u, (float)x0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001aa85: ;
    COW_AT(1001aa85)
    d39 = (double)rdf32(self + 0x24u);
    if (!(d39 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1001ab4e;
    }
    COW_AT(1001aa99)
    if ((int32_t)rd32(self + 0x2cu) <= 0)
    {
        eax = rd32(self + 0x2cu);
        goto L_1001ab00;
    }
    eax = rd32(self + 0x2cu);
    COW_AT(1001aaa0)
    wr32(self + 0x2cu, eax - 1u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1001ab00;
    }
    COW_AT(1001aaa8)
    wr32(self + 0x2cu, 0xffffffffu);
    if ((int32_t)arg2 < 3) goto L_1001aad5;
    COW_AT(1001aab8)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1001b590u), self, 0);
    t40 = g->edx;
    edx = t40;
    COW_AT(1001aabf)
    t41 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t41);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return t41;
L_1001aad5: ;
    COW_AT(1001aad5)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
    COW_AT(1001aadc)
        wr32(sp0 - 0x18u, 1u);
        g->edx = rd32(arg1);
        t42 = rd32(arg1);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t42 + 0x1fcu), arg1, 1, 1u);
        t43 = g->edx;
        edx = t43;
    }
    COW_AT(1001aaea)
    t44 = rd32(sp0 - 8u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x24u, t44);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return t44;
L_1001ab00: ;
    COW_AT(1001ab00)
    d45 = (double)rdf32(sp0 - 0xcu);
    if (!(d45 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1001ab20;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1001ab11)
    wr32(self + 0x24u, 0x3f800000u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001ab20: ;
    COW_AT(1001ab20)
    d46 = (double)rdf32(self + 0x24u);
    if (!(d46 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d46;
        goto L_1001ab4c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d46;
L_1001ab30: ;
    COW_AT(1001ab30)
    d47 = fr(g, x0 + (double)rdf32(sp0 - 0xcu));
    if (d47 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d47;
        goto L_1001ab30;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    x0 = d47;
    COW_AT(1001ab41)
    wrf32(self + 0x24u, (float)x0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_1001ab4c: ;
    COW_AT(1001ab4c)
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1001ab4e: ;
    COW_AT(1001ab4e)
    g->esi = loc_10;
    g->edi = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001a8e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001a8f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a8fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a904u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a912u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a93bu:
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
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a942u:
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
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a94du:
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
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a95bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a97cu:
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
        g->esp = sp0 - 0x14u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1001a98au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9abu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9b0u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9b7u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001a9edu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001a9f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa69u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa7au:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aa99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aaa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aaa8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aab8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1001aabfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aad5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aadcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001aaeau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab30u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab41u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1001ab4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a8e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001a8e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
