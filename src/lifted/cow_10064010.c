/* f_0x10064010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10064010(Guest* g)
{
    double d10;
    double d14;
    double d18;
    double d19;
    double d2;
    double d21;
    double d23;
    double d24;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_28_f;
    double loc_2c_f;
    double loc_30_f;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t20;
    uint32_t t22;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006406du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_1006406d;
    case 0x10064158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); loc_30_f = rdf32(sp0 - 0x30u); loc_2c_f = rdf32(sp0 - 0x2cu); loc_28_f = rdf32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_10064158;
    default: break;
    }
#endif

    COW_AT(10064010)
    wr32(sp0 - 0x48u, in_ebx);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, 4u);
    wr16(self + 0x44u, (uint16_t)(rd16(self + 0x44u) + 1u));
    t1 = rd16(self + 0x44u);
    d2 = fr(g, (double)rdf32(self + 0x18u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(self + 0x18u, (float)d2);
    t3 = (uint32_t)(int16_t)t1 * 0x24u;
    wr32(sp0 - 0x58u, t3);
    g->esp = sp0 - 0x50u;
    t4 = cow_call_regs(g, COW_IMG(0x10028640u), t3, self, in_edx, 1, 2, t3, 4u);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = (double)rdf32(self + 0xcu);
    wr32(self + 0x40u, t4);
    d8 = fr(g, d7 * (double)rdf32(self + 0x34u));
    wrf32(sp0 - 0x30u, (float)(double)(float)d8);
    d9 = fr(g, d7 * (double)rdf32(self + 0x38u));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d9);
    d10 = fr(g, d7 * (double)rdf32(self + 0x3cu));
    wrf32(sp0 - 0x28u, (float)(double)(float)d10);
    if ((int16_t)rd16(self + 0x44u) <= 0)
    {
        edx = t6;
        goto L_10064158;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    ebx = 0u;
    edi = t4;
    loc_30_f = (double)(float)d8;
    loc_2c_f = (double)(float)d9;
    loc_28_f = (double)(float)d10;
L_1006406d: ;
    COW_AT(1006406d)
    wr32(sp0 - 0x54u, 0x3f800000u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t11 = cow_call_regs(g, COW_IMG(0x1006bfd0u), eax, g->ecx, g->edx, 1, 1, 0x3f800000u);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    wrf32(sp0 - 0x40u, (float)(double)(float)d14);
    wr32(sp0 - 0x58u, 0x3f800000u);
    g->ecx = t12;
    g->edx = t13;
    g->esp = sp0 - 0x54u;
    t15 = cow_call_regs(g, COW_IMG(0x1006bfd0u), t11, g->ecx, g->edx, 1, 1, 0x3f800000u);
    t16 = g->ecx;
    t17 = g->edx;
    d18 = cow_take_float(g);
    wrf32(sp0 - 0x44u, (float)(double)(float)d18);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    g->esp = sp0 - 0x58u;
    cow_call_regs(g, COW_IMG(0x1006bfd0u), t15, g->ecx, g->edx, 1, 1, 0x3f800000u);
    d19 = cow_take_float(g);
    wrf32(sp0 - 0x3cu, (float)(double)(float)d19);
    t20 = rd32(sp0 - 0x44u);
    d21 = fr(g, (double)(float)d19 * (double)rdf32(sp0 - 0x30u));
    wr32(sp0 - 0x38u, t20);
    t22 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x34u, t22);
    wrf32(sp0 - 0x24u, (float)(double)(float)d21);
    d23 = fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(sp0 - 0x44u));
    wr32(edi, cow_f2bits((double)(float)d21));
    wrf32(sp0 - 0x20u, (float)(double)(float)d23);
    d24 = fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(sp0 - 0x40u));
    wr32(edi + 4u, cow_f2bits((double)(float)d23));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d24);
    wr32(edi + 8u, cow_f2bits((double)(float)d24));
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10074700u), sp0 - 0x3cu, 0);
    t25 = rd32(sp0 - 0x3cu);
    wr32(edi + 0xcu, t25);
    t26 = rd32(sp0 - 0x38u);
    wr32(edi + 0x10u, t26);
    t27 = rd32(sp0 - 0x34u);
    wr32(edi + 0x14u, t27);
    d28 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(self + 8u));
    wrf32(sp0 - 0x18u, (float)(double)(float)d28);
    d29 = fr(g, (double)rdf32(sp0 - 0x38u) * (double)rdf32(self + 8u));
    wrf32(sp0 - 0x14u, (float)(double)(float)d29);
    d30 = fr(g, fr(g, (double)rdf32(self + 8u) * (double)rdf32(sp0 - 0x34u)) + (double)rdf32(self + 0x24u));
    d31 = fr(g, (double)(float)d28 + (double)rdf32(self + 0x1cu));
    d32 = fr(g, (double)(float)d29 + (double)rdf32(self + 0x20u));
    wrf32(sp0 - 4u, (float)(double)(float)d30);
    wrf32(edi + 0x18u, (float)d31);
    wr32(edi + 0x20u, cow_f2bits((double)(float)d30));
    wrf32(edi + 0x1cu, (float)d32);
    if ((int32_t)(ebx + 1u) < (int16_t)rd16(self + 0x44u))
    {
        eax = t27;
        ecx = cow_f2bits((double)(float)d30);
        edx = (uint32_t)(int16_t)rd16(self + 0x44u);
        ebx = ebx + 1u;
        edi = edi + 0x24u;
        loc_30_f = (double)rdf32(sp0 - 0x30u);
        loc_2c_f = (double)rdf32(sp0 - 0x2cu);
        loc_28_f = (double)rdf32(sp0 - 0x28u);
        goto L_1006406d;
    }
    edx = (uint32_t)(int16_t)rd16(self + 0x44u);
L_10064158: ;
    COW_AT(10064158)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10064010(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006406du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10064158u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_28_f;
        double loc_2c_f;
        double loc_30_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        loc_30_f = rdf32(sp0 - 0x30u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        loc_28_f = rdf32(sp0 - 0x28u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10064010(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10064010(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
