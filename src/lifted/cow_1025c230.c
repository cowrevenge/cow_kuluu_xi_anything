/* f_0x1025c230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1025c230(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d3;
    double d4;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_20_f;
    uint32_t loc_24;
    uint32_t loc_3c;
    double loc_40_f;
    double loc_4_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    double loc_8_f;
    uint32_t t1;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025c36bu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x74u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_40_f = rdf32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_24 = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0x74u); goto E_1025c36b;
    case 0x1025c3dbu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0x74u); loc_40_f = rdf32(sp0 - 0x40u); loc_20_f = rdf32(sp0 - 0x20u); loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); g->esi = rd32(sp0 - 0x74u); goto E_1025c3db;
    case 0x1025c41bu: eax = g->eax; edx = g->edx; goto E_1025c41b;
    case 0x1025c422u: eax = g->eax; edx = g->edx; self = g->esi; goto E_1025c422;
    case 0x1025c432u: eax = g->eax; edx = g->edx; goto E_1025c432;
    case 0x1025c439u: eax = g->eax; edx = g->edx; self = g->esi; goto E_1025c439;
    case 0x1025c449u: eax = g->eax; edx = g->edx; goto E_1025c449;
    case 0x1025c450u: eax = g->eax; edx = g->edx; self = g->esi; goto E_1025c450;
    case 0x1025c460u: eax = g->eax; edx = g->edx; goto E_1025c460;
    case 0x1025c467u: eax = g->eax; edx = g->edx; self = g->esi; goto E_1025c467;
    case 0x1025c477u: eax = g->eax; edx = g->edx; goto E_1025c477;
    case 0x1025c47eu: eax = g->eax; edx = g->edx; self = g->esi; goto E_1025c47e;
    default: break;
    }
#endif

    COW_AT(1025c230)
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x68u, 0u);
    t1 = rd32(arg1 + 4u);
    d2 = fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1));
    wr32(sp0 - 0x50u, t1);
    wr32(sp0 - 0x38u, rd32(arg1));
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    wrf32(sp0 - 0x54u, (float)(double)(float)d2);
    d3 = fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1 + 4u));
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x60u, arg3);
    wr32(sp0 - 0x44u, arg3);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0xcu, arg3);
    wrf32(sp0 - 0x34u, (float)(double)(float)d3);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d2);
    wr32(sp0 - 0x30u, 0u);
    wrf32(sp0 - 0x18u, (float)(double)(float)d3);
    d4 = fr(g, (double)rdf32(arg1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x5cu, rd32(arg2));
    t5 = rd32(arg2 + 4u);
    wr32(sp0 - 0x58u, t5);
    wrf32(sp0 - 0x70u, (float)(double)(float)d4);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    d6 = fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0x3cu, t5);
    wr32(sp0 - 0x24u, rd32(arg2));
    wrf32(sp0 - 0x6cu, (float)(double)(float)d6);
    d7 = fr(g, (double)(float)d2 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x54u, (float)(double)(float)d7);
    d8 = fr(g, cow_bits2f(t1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x50u, (float)(double)(float)d8);
    d9 = fr(g, cow_bits2f(rd32(arg1)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x38u, (float)(double)(float)d9);
    d10 = fr(g, (double)(float)d3 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x34u, (float)(double)(float)d10);
    d11 = fr(g, (double)(float)d2 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d11);
    d12 = fr(g, (double)(float)d3 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)(double)(float)d12);
    d13 = fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(arg2));
    wrf32(sp0 - 0x40u, (float)(double)(float)d13);
    d14 = fr(g, (double)rdf32(arg2 + 0xcu) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 0x20u, (float)(double)(float)d14);
    wrf32(sp0 - 8u, (float)(double)(float)d13);
    wrf32(sp0 - 4u, (float)(double)(float)d14);
    if (rd8(self + 0xcu) == 0u)
    {
        edx = rd32(arg2);
    }
    else
    {
        edx = rd32(arg2);
        loc_5c = rd32(arg2);
        loc_58 = t5;
        loc_3c = t5;
        loc_24 = rd32(arg2);
        loc_40_f = (double)(float)d13;
        loc_20_f = (double)(float)d14;
        loc_8_f = (double)(float)d13;
        loc_4_f = (double)(float)d14;
    COW_AT(1025c36b)
        d15 = fr(g, cow_bits2f(loc_5c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d15);
        d16 = fr(g, cow_bits2f(loc_58) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x58u, (float)(double)(float)d16);
        d17 = fr(g, loc_40_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x40u, (float)(double)(float)d17);
        d18 = fr(g, cow_bits2f(loc_3c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x3cu, (float)(double)(float)d18);
        d19 = fr(g, cow_bits2f(loc_24) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x24u, (float)(double)(float)d19);
        d20 = fr(g, loc_20_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x20u, (float)(double)(float)d20);
        d21 = fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 8u, (float)(double)(float)d21);
        d22 = fr(g, loc_4_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 4u, (float)(double)(float)d22);
    }
    COW_AT(1025c3db)
    wr32(sp0 - 0x78u, sp0 - 0x5cu);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x5cu);
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x40u);
    wr32(sp0 - 0x78u, sp0 - 0x24u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 0x24u);
    wr32(sp0 - 0x78u, sp0 - 8u);
    cow_thiscall(g, rd32(rd32(self) + 0x10u), self, 1, sp0 - 8u);
    wr32(sp0 - 0x78u, sp0 - 0x70u);
    g->eax = sp0 - 0x70u;
    g->edx = rd32(self);
    t23 = rd32(self);
    t24 = cow_thiscall(g, rd32(t23 + 0x14u), self, 1, sp0 - 0x70u);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u) goto L_1025c422;
    eax = t24;
    edx = t25;
    COW_AT(1025c41b)
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c422: ;
    COW_AT(1025c422)
    wr32(sp0 - 0x78u, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t26 = rd32(self);
    g->esp = sp0 - 0x74u;
    t27 = cow_thiscall(g, rd32(t26 + 0x14u), self, 1, sp0 - 0x54u);
    t28 = g->edx;
    if ((uint8_t)t27 != 0u) goto L_1025c439;
    eax = t27;
    edx = t28;
    COW_AT(1025c432)
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c439: ;
    COW_AT(1025c439)
    wr32(sp0 - 0x78u, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t29 = rd32(self);
    g->esp = sp0 - 0x74u;
    t30 = cow_thiscall(g, rd32(t29 + 0x14u), self, 1, sp0 - 0x38u);
    t31 = g->edx;
    if ((uint8_t)t30 != 0u) goto L_1025c450;
    eax = t30;
    edx = t31;
    COW_AT(1025c449)
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c450: ;
    COW_AT(1025c450)
    wr32(sp0 - 0x78u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = rd32(self);
    t32 = rd32(self);
    g->esp = sp0 - 0x74u;
    t33 = cow_thiscall(g, rd32(t32 + 0x14u), self, 1, sp0 - 0x1cu);
    t34 = g->edx;
    if ((uint8_t)t33 != 0u) goto L_1025c467;
    eax = t33;
    edx = t34;
    COW_AT(1025c460)
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c467: ;
    COW_AT(1025c467)
    wr32(sp0 - 0x78u, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t35 = rd32(self);
    g->esp = sp0 - 0x74u;
    t36 = cow_thiscall(g, rd32(t35 + 0x14u), self, 1, sp0 - 0x38u);
    t37 = g->edx;
    if ((uint8_t)t36 != 0u) goto L_1025c47e;
    eax = t36;
    edx = t37;
    COW_AT(1025c477)
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c47e: ;
    COW_AT(1025c47e)
    wr32(sp0 - 0x78u, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t38 = rd32(self);
    g->esp = sp0 - 0x74u;
    t39 = cow_thiscall(g, rd32(t38 + 0x14u), self, 1, sp0 - 0x54u);
    t40 = g->edx;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = t40;
    return (t39 & 0xffffff00u) | (uint8_t)t39 != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025c230(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025c36bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_20_f;
        uint32_t loc_24;
        uint32_t loc_3c;
        double loc_40_f;
        double loc_4_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        double loc_8_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x74u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1025c3dbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        double loc_20_f;
        double loc_40_f;
        double loc_4_f;
        double loc_8_f;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x74u);
        loc_40_f = rdf32(sp0 - 0x40u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x1025c41bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1025c422u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1025c432u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1025c439u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x1025c449u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c450u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c460u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025c467u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1025c477u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1025c47eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c230(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025c230(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
