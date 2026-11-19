/* f_0x1025c4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=4 */
uint32_t cow_fn_1025c4a0(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_18_f;
    double loc_1c_f;
    double loc_20_f;
    uint32_t loc_24;
    double loc_34_f;
    uint32_t loc_38;
    uint32_t loc_3c;
    double loc_40_f;
    double loc_4_f;
    uint32_t loc_50;
    double loc_54_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    double loc_6c_f;
    double loc_70_f;
    double loc_74_f;
    double loc_8_f;
    uint32_t t10;
    uint32_t t2;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 128u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025c54du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38 = rd32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->esi = rd32(sp0 - 0x78u); goto E_1025c54d;
    case 0x1025c57cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_54_f = rdf32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); loc_38 = rd32(sp0 - 0x38u); loc_34_f = rdf32(sp0 - 0x34u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->esi = rd32(sp0 - 0x78u); goto E_1025c57c;
    case 0x1025c64du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54_f = rdf32(sp0 - 0x54u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34_f = rdf32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0x78u); goto E_1025c64d;
    case 0x1025c6bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x78u); loc_74_f = rdf32(sp0 - 0x74u); loc_70_f = rdf32(sp0 - 0x70u); loc_6c_f = rdf32(sp0 - 0x6cu); loc_54_f = rdf32(sp0 - 0x54u); loc_40_f = rdf32(sp0 - 0x40u); loc_34_f = rdf32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0x78u); goto E_1025c6bd;
    case 0x1025c6fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025c6fd;
    case 0x1025c704u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025c704;
    case 0x1025c714u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025c714;
    case 0x1025c71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025c71b;
    case 0x1025c72bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025c72b;
    case 0x1025c732u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025c732;
    case 0x1025c742u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025c742;
    case 0x1025c749u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025c749;
    case 0x1025c759u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1025c759;
    case 0x1025c760u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025c760;
    default: break;
    }
#endif

    COW_AT(1025c4a0)
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x68u, 0u);
    d1 = fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1));
    wr32(sp0 - 0x70u, rd32(arg1));
    t2 = rd32(arg1 + 4u);
    wr32(sp0 - 0x6cu, t2);
    wrf32(sp0 - 0x54u, (float)(double)(float)d1);
    d3 = fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1 + 4u));
    wr32(sp0 - 0x50u, t2);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x38u, rd32(arg1));
    wr32(sp0 - 0x30u, 0u);
    wrf32(sp0 - 0x34u, (float)(double)(float)d3);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d1);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wrf32(sp0 - 0x18u, (float)(double)(float)d3);
    d4 = fr(g, d1 * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x74u, (float)(double)(float)d4);
    eax = sp0 - 0x6cu;
    ecx = 4u;
    loc_54_f = (double)(float)d1;
    loc_50 = t2;
    loc_38 = rd32(arg1);
    loc_34_f = (double)(float)d3;
    loc_1c_f = (double)(float)d1;
    loc_18_f = (double)(float)d3;
    loc_74_f = (double)(float)d4;
    x2 = fr(g, cos((double)rdf32(sp0 + 0x10u)));
    x1 = fr(g, sin((double)rdf32(sp0 + 0x10u)));
    x0 = fr(g, d3 * (double)rdf32(COW_IMG(0x10329a08u)));
L_1025c54d: ;
    COW_AT(1025c54d)
    d5 = fr(g, (double)rdf32(eax - 4u) - loc_74_f);
    d6 = fr(g, (double)rdf32(eax) - x0);
    wrf32(eax - 4u, (float)fr(g, fr(g, fr(g, d5 * x2) - fr(g, d6 * x1)) + loc_74_f));
    wrf32(eax, (float)fr(g, fr(g, fr(g, d6 * x2) + fr(g, d5 * x1)) + x0));
    if (ecx != 1u)
    {
        eax = eax + 0x1cu;
        ecx = ecx - 1u;
        goto L_1025c54d;
    }
    loc_70_f = (double)rdf32(sp0 - 0x70u);
    loc_6c_f = (double)rdf32(sp0 - 0x6cu);
    COW_AT(1025c57c)
    d7 = fr(g, loc_70_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x60u, arg3);
    wr32(sp0 - 0x44u, arg3);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0xcu, arg3);
    wrf32(sp0 - 0x70u, (float)(double)(float)d7);
    d8 = fr(g, loc_6c_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x6cu, (float)(double)(float)d8);
    d9 = fr(g, loc_54_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x5cu, rd32(arg2));
    t10 = rd32(arg2 + 4u);
    wr32(sp0 - 0x58u, t10);
    wr32(sp0 - 0x3cu, t10);
    wr32(sp0 - 0x24u, rd32(arg2));
    wrf32(sp0 - 0x54u, (float)(double)(float)d9);
    d11 = fr(g, cow_bits2f(loc_50) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x50u, (float)(double)(float)d11);
    d12 = fr(g, cow_bits2f(loc_38) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d12);
    d13 = fr(g, loc_34_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x34u, (float)(double)(float)d13);
    d14 = fr(g, loc_1c_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
    d15 = fr(g, loc_18_f - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d15);
    d16 = fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(arg2));
    wrf32(sp0 - 0x40u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(arg2 + 0xcu) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 0x20u, (float)(double)(float)d17);
    wrf32(sp0 - 8u, (float)(double)(float)d16);
    wrf32(sp0 - 4u, (float)(double)(float)d17);
    if (rd8(self + 0xcu) == 0u)
    {
        edx = rd32(arg2);
    }
    else
    {
        edx = rd32(arg2);
        loc_5c = rd32(arg2);
        loc_58 = t10;
        loc_3c = t10;
        loc_24 = rd32(arg2);
        loc_40_f = (double)(float)d16;
        loc_20_f = (double)(float)d17;
        loc_8_f = (double)(float)d16;
        loc_4_f = (double)(float)d17;
    COW_AT(1025c64d)
        d18 = fr(g, cow_bits2f(loc_5c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d18);
        d19 = fr(g, cow_bits2f(loc_58) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x58u, (float)(double)(float)d19);
        d20 = fr(g, loc_40_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x40u, (float)(double)(float)d20);
        d21 = fr(g, cow_bits2f(loc_3c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d21);
        d22 = fr(g, cow_bits2f(loc_24) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x24u, (float)(double)(float)d22);
        d23 = fr(g, loc_20_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x20u, (float)(double)(float)d23);
        d24 = fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 8u, (float)(double)(float)d24);
        d25 = fr(g, loc_4_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 4u, (float)(double)(float)d25);
    }
    COW_AT(1025c6bd)
    wr32(sp0 - 0x7cu, sp0 - 0x5cu);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x5cu);
    wr32(sp0 - 0x7cu, sp0 - 0x40u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x40u);
    wr32(sp0 - 0x7cu, sp0 - 0x24u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x24u);
    wr32(sp0 - 0x7cu, sp0 - 8u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 8u);
    wr32(sp0 - 0x7cu, sp0 - 0x70u);
    g->eax = sp0 - 0x70u;
    g->edx = rd32(self);
    t26 = rd32(self);
    t27 = cow_thiscall(g, rd32(t26 + 0x14u), self, 1, sp0 - 0x70u);
    t28 = g->edx;
    if ((uint8_t)t27 != 0u) goto L_1025c704;
    eax = t27;
    edx = t28;
    COW_AT(1025c6fd)
    g->esi = rd32(sp0 - 0x78u);
    g->edx = edx;
    return eax;
L_1025c704: ;
    COW_AT(1025c704)
    wr32(sp0 - 0x7cu, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t29 = rd32(self);
    g->esp = sp0 - 0x78u;
    t30 = cow_thiscall(g, rd32(t29 + 0x14u), self, 1, sp0 - 0x54u);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u) goto L_1025c71b;
    eax = t30;
    edx = t31;
    COW_AT(1025c714)
    g->esi = rd32(sp0 - 0x78u);
    g->edx = edx;
    return eax;
L_1025c71b: ;
    COW_AT(1025c71b)
    wr32(sp0 - 0x7cu, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t32 = rd32(self);
    g->esp = sp0 - 0x78u;
    t33 = cow_thiscall(g, rd32(t32 + 0x14u), self, 1, sp0 - 0x38u);
    t34 = g->edx;
    if ((uint8_t)t33 != 0u) goto L_1025c732;
    eax = t33;
    edx = t34;
    COW_AT(1025c72b)
    g->esi = rd32(sp0 - 0x78u);
    g->edx = edx;
    return eax;
L_1025c732: ;
    COW_AT(1025c732)
    wr32(sp0 - 0x7cu, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = rd32(self);
    t35 = rd32(self);
    g->esp = sp0 - 0x78u;
    t36 = cow_thiscall(g, rd32(t35 + 0x14u), self, 1, sp0 - 0x1cu);
    t37 = g->edx;
    if ((uint8_t)t36 != 0u) goto L_1025c749;
    eax = t36;
    edx = t37;
    COW_AT(1025c742)
    g->esi = rd32(sp0 - 0x78u);
    g->edx = edx;
    return eax;
L_1025c749: ;
    COW_AT(1025c749)
    wr32(sp0 - 0x7cu, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t38 = rd32(self);
    g->esp = sp0 - 0x78u;
    t39 = cow_thiscall(g, rd32(t38 + 0x14u), self, 1, sp0 - 0x38u);
    t40 = g->edx;
    if ((uint8_t)t39 != 0u) goto L_1025c760;
    eax = t39;
    edx = t40;
    COW_AT(1025c759)
    g->esi = rd32(sp0 - 0x78u);
    g->edx = edx;
    return eax;
L_1025c760: ;
    COW_AT(1025c760)
    wr32(sp0 - 0x7cu, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0x78u;
    t42 = cow_thiscall(g, rd32(t41 + 0x14u), self, 1, sp0 - 0x54u);
    t43 = g->edx;
    g->esi = rd32(sp0 - 0x78u);
    g->edx = t43;
    return (t42 & 0xffffff00u) | (uint8_t)t42 != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025c4a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025c54du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_18_f;
        double loc_1c_f;
        double loc_34_f;
        uint32_t loc_38;
        uint32_t loc_50;
        double loc_54_f;
        double loc_74_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1025c57cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_18_f;
        double loc_1c_f;
        double loc_34_f;
        uint32_t loc_38;
        uint32_t loc_50;
        double loc_54_f;
        double loc_6c_f;
        double loc_70_f;
        double loc_74_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1025c64du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        uint32_t loc_24;
        double loc_34_f;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_4_f;
        double loc_54_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_6c_f;
        double loc_70_f;
        double loc_74_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1025c6bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_18_f;
        double loc_1c_f;
        double loc_20_f;
        double loc_34_f;
        double loc_40_f;
        double loc_4_f;
        double loc_54_f;
        double loc_6c_f;
        double loc_70_f;
        double loc_74_f;
        double loc_8_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x78u);
        loc_74_f = rdf32(sp0 - 0x74u);
        loc_70_f = rdf32(sp0 - 0x70u);
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_54_f = rdf32(sp0 - 0x54u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_34_f = rdf32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1025c6fdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1025c704u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1025c714u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1025c71bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1025c72bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c732u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c742u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025c749u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025c759u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c760u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c4a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025c4a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
