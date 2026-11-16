/* f_0x1002b140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1002b140(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edx;
    double loc_6c_f;
    double loc_70_f;
    double loc_74_f;
    double loc_78_f;
    double loc_7c_f;
    uint32_t loc_80;
    uint32_t t1;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x84u, in_esi);
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    wr32(sp0 - 0x88u, sp0 - 0x60u);
    wr32(sp0 - 0x8cu, arg2);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, sp0 - 0x40u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    g->eax = sp0 - 0x40u;
    g->edx = sp0 - 0x50u;
    t1 = cow_stdcall(g, COW_IMG(0x102d8161u), 4, sp0 - 0x40u, sp0 - 0x50u, arg2, sp0 - 0x60u);
    t2 = g->edx;
    wr32(sp0 - 0x88u, arg3);
    wr32(sp0 - 0x8cu, sp0 - 0x70u);
    t3 = cow_thiscall(g, COW_IMG(0x100282c0u), sp0 - 0x40u, 2, sp0 - 0x70u, arg3);
    t4 = g->ecx;
    wr32(sp0 - 0x88u, 0x40000000u);
    wr32(sp0 - 0x8cu, sp0 - 0x70u);
    g->edx = sp0 - 0x70u;
    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x70u, 0x40000000u);
    t5 = g->edx;
    t6 = rd32(arg4 + 4u);
    wr32(sp0 - 0x80u, t6);
    if ((double)rdf32(arg4) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg4), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edx = t5;
        loc_80 = t6;
        x0 = (double)rdf32(arg4);
    }
    else
    {
        eax = (t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(arg4), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        edx = t5;
        loc_80 = t6;
        x0 = (double)rdf32(arg4);
        x0 = (double)rdf32(COW_IMG(0x1032a22cu));
    }
    if (cow_bits2f(loc_80) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_80), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_80), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        wr32(sp0 - 0x80u, 0x3a83126fu);
        loc_80 = 0x3a83126fu;
    }
    if ((cow_fsw(g, x0, cow_bits2f(loc_80), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, cow_bits2f(loc_80), 1u) & 0x4100u;
        d9 = (double)(float)fr(g, cow_bits2f(loc_80) / x0);
        wrf32(sp0 - 0x7cu, (float)d9);
        d10 = (double)(float)fr(g, (double)rdf32(sp0 - 0x70u) * d9);
        wrf32(sp0 - 0x70u, (float)d10);
        loc_7c_f = d9;
        loc_70_f = d10;
        x1 = cow_bits2f(loc_80);
    }
    else
    {
        eax = cow_fsw(g, x0, cow_bits2f(loc_80), 1u) & 0x4100u;
        d7 = (double)(float)fr(g, x0 / cow_bits2f(loc_80));
        wrf32(sp0 - 0x7cu, (float)d7);
        d8 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) * d7);
        wrf32(sp0 - 0x6cu, (float)d8);
        loc_7c_f = d7;
        loc_6c_f = d8;
        x1 = x0;
    }
    d11 = (double)rdf32(sp0 - 0x68u);
    if (!(d11 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        d12 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x68u));
        wrf32(sp0 - 0x78u, (float)d12);
        x3 = fr(g, fr(g, d12 * (double)rdf32(arg4 + 8u)) * loc_6c_f);
        x2 = fr(g, fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 - 0x68u)) * (double)rdf32(arg4 + 8u)) * loc_70_f);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x3 = fr(g, fr(g, loc_6c_f * (double)rdf32(arg4 + 8u)) * (double)rdf32(COW_IMG(0x1032a3c8u)));
        x2 = fr(g, fr(g, loc_70_f * (double)rdf32(arg4 + 8u)) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    }
    d13 = fr(g, sqrt(fr(g, fr(g, x3 * x3) + fr(g, x2 * x2))));
    if ((cow_fsw(g, d13, x1, 4u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d13, x1, 4u) & 0x4100u;
        goto L_1002b33f;
    }
    eax = cow_fsw(g, d13, x1, 4u) & 0x4100u;
    d14 = fr(g, atan2(x3, x2));
    d15 = (double)(float)fr(g, fr(g, cos(d14)) * x1);
    wrf32(sp0 - 0x78u, (float)d15);
    wrf32(arg1, (float)fr(g, fr(g, cos(d14)) * x1));
    d16 = (double)(float)fr(g, x1 * fr(g, sin(d14)));
    wrf32(sp0 - 0x74u, (float)d16);
    wrf32(arg1 + 4u, (float)fr(g, x1 * fr(g, sin(d14))));
    t17 = rd32(arg4 + 8u);
    wr32(arg1 + 0xcu, 0x3f800000u);
    wr32(arg1 + 8u, t17);
    if ((cow_fsw(g, x0, cow_bits2f(loc_80), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, cow_bits2f(loc_80), 0u) & 0x4100u;
        loc_78_f = d15;
        wrf32(arg1, (float)fr(g, loc_78_f / loc_7c_f));
    }
    else
    {
        eax = cow_fsw(g, x0, cow_bits2f(loc_80), 0u) & 0x4100u;
        loc_74_f = d16;
        wrf32(arg1 + 4u, (float)fr(g, loc_74_f / loc_7c_f));
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t18 = cow_thiscall(g, COW_IMG(0x100283c0u), sp0 - 0x40u, 0);
    t19 = g->edx;
    wr32(sp0 - 0x88u, arg1);
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10028290u), sp0 - 0x40u, 1, arg1);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x88u, arg1);
    g->edx = t22;
    t23 = cow_call_regs(g, COW_IMG(0x100274b0u), t20, g->ecx, g->edx, 1, 1, arg1);
    t24 = g->edx;
    t25 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t25 & 0xffffff00u) | 1u;
L_1002b33f: ;
    wr32(sp0 - 0x88u, arg3);
    wr32(sp0 - 0x8cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t26 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, arg3);
    t27 = g->edx;
    wr32(arg1 + 0xcu, 0x3f800000u);
    t28 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t28 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002b140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002b140(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
