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
    double d23;
    double d24;
    double d25;
    double d26;
    double d3;
    double d4;
    double d5;
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
    uint32_t t44;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x68u, 0u);
    t1 = rd32(arg1 + 4u);
    wr32(sp0 - 0x50u, t1);
    wr32(sp0 - 0x38u, rd32(arg1));
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x4cu, 0u);
    d2 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1));
    wrf32(sp0 - 0x54u, (float)d2);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x60u, arg3);
    wr32(sp0 - 0x44u, arg3);
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0xcu, arg3);
    d3 = (double)(float)fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1 + 4u));
    wrf32(sp0 - 0x34u, (float)d3);
    d4 = (double)(float)fr(g, (double)rdf32(arg1 + 8u) + (double)rdf32(arg1));
    wrf32(sp0 - 0x1cu, (float)d4);
    wr32(sp0 - 0x30u, 0u);
    d5 = (double)(float)fr(g, (double)rdf32(arg1 + 0xcu) + (double)rdf32(arg1 + 4u));
    wrf32(sp0 - 0x18u, (float)d5);
    wr32(sp0 - 0x5cu, rd32(arg2));
    t6 = rd32(arg2 + 4u);
    wr32(sp0 - 0x58u, t6);
    d7 = (double)(float)fr(g, (double)rdf32(arg1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x70u, (float)d7);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0x3cu, t6);
    wr32(sp0 - 0x24u, rd32(arg2));
    d8 = (double)(float)fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x6cu, (float)d8);
    d9 = (double)(float)fr(g, d2 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x54u, (float)d9);
    d10 = (double)(float)fr(g, cow_bits2f(t1) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x50u, (float)d10);
    d11 = (double)(float)fr(g, cow_bits2f(rd32(arg1)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x38u, (float)d11);
    d12 = (double)(float)fr(g, d3 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x34u, (float)d12);
    d13 = (double)(float)fr(g, d4 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x1cu, (float)d13);
    d14 = (double)(float)fr(g, d5 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x18u, (float)d14);
    d15 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(arg2));
    wrf32(sp0 - 0x40u, (float)d15);
    d16 = (double)(float)fr(g, (double)rdf32(arg2 + 0xcu) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 0x20u, (float)d16);
    d17 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) + (double)rdf32(arg2));
    wrf32(sp0 - 8u, (float)d17);
    d18 = (double)(float)fr(g, (double)rdf32(arg2 + 0xcu) + (double)rdf32(arg2 + 4u));
    wrf32(sp0 - 4u, (float)d18);
    if (rd8(self + 0xcu) == 0u)
    {
        edx = rd32(arg2);
    }
    else
    {
        edx = rd32(arg2);
        loc_5c = rd32(arg2);
        loc_58 = t6;
        loc_3c = t6;
        loc_24 = rd32(arg2);
        loc_40_f = d15;
        loc_20_f = d16;
        loc_8_f = d17;
        loc_4_f = d18;
        d19 = (double)(float)fr(g, cow_bits2f(loc_5c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x5cu, (float)d19);
        d20 = (double)(float)fr(g, cow_bits2f(loc_58) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x58u, (float)d20);
        d21 = (double)(float)fr(g, loc_40_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x40u, (float)d21);
        d22 = (double)(float)fr(g, cow_bits2f(loc_3c) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x3cu, (float)d22);
        d23 = (double)(float)fr(g, cow_bits2f(loc_24) + (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x24u, (float)d23);
        d24 = (double)(float)fr(g, loc_20_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 0x20u, (float)d24);
        d25 = (double)(float)fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 8u, (float)d25);
        d26 = (double)(float)fr(g, loc_4_f - (double)rdf32(COW_IMG(0x10329a08u)));
        wrf32(sp0 - 4u, (float)d26);
    }
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
    t27 = rd32(self);
    t28 = cow_thiscall(g, rd32(t27 + 0x14u), self, 1, sp0 - 0x70u);
    t29 = g->edx;
    if ((uint8_t)t28 != 0u) goto L_1025c422;
    eax = t28;
    edx = t29;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c422: ;
    wr32(sp0 - 0x78u, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t30 = rd32(self);
    g->esp = sp0 - 0x74u;
    t31 = cow_thiscall(g, rd32(t30 + 0x14u), self, 1, sp0 - 0x54u);
    t32 = g->edx;
    if ((uint8_t)t31 != 0u) goto L_1025c439;
    eax = t31;
    edx = t32;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c439: ;
    wr32(sp0 - 0x78u, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t33 = rd32(self);
    g->esp = sp0 - 0x74u;
    t34 = cow_thiscall(g, rd32(t33 + 0x14u), self, 1, sp0 - 0x38u);
    t35 = g->edx;
    if ((uint8_t)t34 != 0u) goto L_1025c450;
    eax = t34;
    edx = t35;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c450: ;
    wr32(sp0 - 0x78u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->edx = rd32(self);
    t36 = rd32(self);
    g->esp = sp0 - 0x74u;
    t37 = cow_thiscall(g, rd32(t36 + 0x14u), self, 1, sp0 - 0x1cu);
    t38 = g->edx;
    if ((uint8_t)t37 != 0u) goto L_1025c467;
    eax = t37;
    edx = t38;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c467: ;
    wr32(sp0 - 0x78u, sp0 - 0x38u);
    g->eax = sp0 - 0x38u;
    g->edx = rd32(self);
    t39 = rd32(self);
    g->esp = sp0 - 0x74u;
    t40 = cow_thiscall(g, rd32(t39 + 0x14u), self, 1, sp0 - 0x38u);
    t41 = g->edx;
    if ((uint8_t)t40 != 0u) goto L_1025c47e;
    eax = t40;
    edx = t41;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = edx;
    return eax;
L_1025c47e: ;
    wr32(sp0 - 0x78u, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = rd32(self);
    t42 = rd32(self);
    g->esp = sp0 - 0x74u;
    t43 = cow_thiscall(g, rd32(t42 + 0x14u), self, 1, sp0 - 0x54u);
    t44 = g->edx;
    g->esi = rd32(sp0 - 0x74u);
    g->edx = t44;
    return (t43 & 0xffffff00u) | (uint8_t)t43 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025c230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025c230(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
