/* f_0x1024f0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1024f0d0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    double d21;
    double d25;
    double d26;
    double d29;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_70_f;
    uint32_t t1;
    uint32_t t17;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t27;
    uint32_t t28;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x78u, in_esi);
    if ((int32_t)rd32(arg1 + 0x24u) < 0) goto L_1024f2c4;
    eax = rd32(arg1 + 0x24u);
    if ((int32_t)eax >= 15) goto L_1024f2c4;
    wr32(sp0 - 0x7cu, in_ebx);
    t1 = rd32(COW_IMG(0x103890f4u) + eax * 0x24u);
    wr32(sp0 - 0x50u, t1);
    t2 = rd32(COW_IMG(0x103890f8u) + eax * 0x24u);
    wr32(sp0 - 0x48u, t2);
    wr32(sp0 - 0x80u, in_edi);
    wr32(sp0 - 0x84u, sp0 - 0x40u);
    d3 = (double)(float)fr(g, (double)rdf32(arg1 + 0x88u) - cow_bits2f(t1));
    wrf32(sp0 - 0x70u, (float)d3);
    d4 = (double)(float)fr(g, (double)rdf32(arg1 + 0x8cu) - (double)rdf32(COW_IMG(0x10329990u)));
    wrf32(sp0 - 0x6cu, (float)d4);
    d5 = (double)(float)fr(g, (double)rdf32(arg1 + 0x90u) - cow_bits2f(t2));
    wrf32(sp0 - 0x68u, (float)d5);
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, sp0 - 0x40u);
    wr32(sp0 - 0x88u, sp0 - 0x70u);
    wr32(sp0 - 0x8cu, sp0 - 0x40u);
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    g->eax = sp0 - 0x70u;
    g->esp = sp0 - 0x84u;
    t6 = cow_cdecl(g, COW_IMG(0x1027efa0u), 3, sp0 - 0x70u, sp0 - 0x40u, sp0 - 0x70u);
    wr32(sp0 - 0x94u, sp0 - 0x70u);
    wr32(sp0 - 0x98u, sp0 - 0x60u);
    g->ecx = sp0 - 0x70u;
    g->edx = sp0 - 0x60u;
    g->esp = sp0 - 0x90u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, sp0 - 0x60u, sp0 - 0x70u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x9cu, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->esp = sp0 - 0x98u;
    t9 = cow_cdecl(g, COW_IMG(0x10274910u), 1, sp0 - 0x60u);
    d10 = cow_take_float(g);
    d11 = (double)rdf32(sp0 - 0x68u);
    d12 = (double)rdf32(sp0 - 0x70u);
    d13 = fr(g, sqrt(fr(g, fr(g, d11 * d11) + fr(g, d12 * d12))));
    if (!(d13 < (double)rdf32(COW_IMG(0x1033cd80u))))
    {
        x1 = d11;
        x0 = d12;
        goto L_1024f1b1;
    }
    eax = (t9 & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, (double)rdf32(COW_IMG(0x1033cd80u)), 2u);
    x1 = d11;
    x0 = d12;
    if ((cow_fsw(g, (double)rdf32(arg2), (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u) != 0u) goto L_1024f1c1;
L_1024f1b1: ;
    x1 = fr(g, x1 - fr(g, (double)rdf32(sp0 - 0x58u) * (double)rdf32(arg2)));
    x0 = fr(g, x0 - fr(g, (double)rdf32(sp0 - 0x60u) * (double)rdf32(arg2)));
L_1024f1c1: ;
    d14 = (double)(float)fr(g, x0 + (double)rdf32(sp0 - 0x50u));
    wrf32(sp0 - 0x70u, (float)d14);
    d15 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) + (double)rdf32(COW_IMG(0x10329990u)));
    wrf32(sp0 - 0x6cu, (float)d15);
    d16 = (double)(float)fr(g, x1 + (double)rdf32(sp0 - 0x48u));
    wrf32(sp0 - 0x68u, (float)d16);
    t17 = rd32(sp0 - 0x64u);
    d18 = fr(g, d14 - (double)rdf32(arg1 + 0x88u));
    d19 = fr(g, x1 + (double)rdf32(sp0 - 0x48u));
    wrf32(arg2, (float)d18);
    d20 = fr(g, d15 - (double)rdf32(arg1 + 0x8cu));
    wrf32(arg2 + 4u, (float)d20);
    d21 = fr(g, d19 - (double)rdf32(arg1 + 0x90u));
    wrf32(arg2 + 8u, (float)d21);
    wr32(arg1 + 0x94u, t17);
    wrf32(arg1 + 0x90u, (float)d19);
    wr32(arg1 + 0x88u, cow_f2bits(d14));
    wr32(arg1 + 0x8cu, cow_f2bits(d15));
    if (arg3 == 0u)
    {
        ecx = cow_f2bits(d14);
        loc_70_f = d14;
        goto L_1024f294;
    }
    ecx = cow_f2bits(d14);
    edx = cow_f2bits(d15);
    loc_70_f = d14;
    if (arg3 == 2u) goto L_1024f294;
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0x88u, sp0 - 0x60u);
    g->ecx = sp0 - 0x60u;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t22 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x60u, arg2);
    t23 = g->ecx;
    t24 = g->edx;
    d25 = cow_take_float(g);
    if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t23;
        x0 = fr(g, fr(g, atan2((double)rdf32(arg2 + 8u), -(double)rdf32(arg2))) + (double)rdf32(COW_IMG(0x10331360u)));
    }
    else
    {
        ecx = t23;
        edx = t24;
        wr32(sp0 - 0x84u, 4u);
        wr32(sp0 - 0x88u, 0x3fu);
        d26 = (double)(float)fr(g, atan2((double)rdf32(sp0 - 0x58u), -(double)rdf32(sp0 - 0x60u)));
        wrf32(sp0 - 0x74u, (float)d26);
        g->esp = sp0 - 0x78u;
        t27 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 4u, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu));
        t28 = g->ecx;
        d29 = cow_take_float(g);
        if (!(d29 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t27 & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t28;
            x0 = (double)rdf32(sp0 - 0x74u);
        }
        else
        {
            eax = (t27 & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            ecx = t28;
            x0 = (double)rdf32(sp0 - 0x74u);
            x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032df98u)));
        }
    }
L_1024f2a6: ;
    wrf32(arg1 + 0x9cu, (float)x0);
    wr32(sp0 - 0x84u, arg1 + 0x98u);
    wr32(sp0 - 0x88u, arg1 + 0x88u);
    wr32(sp0 - 0x8cu, arg1);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x1024e740u), 8, arg1, arg1 + 0x88u, arg1 + 0x98u, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), cow_f2bits(loc_70_f));
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x78u);
    g->edi = rd32(sp0 - 0x80u);
    return;
L_1024f294: ;
    eax = arg3;
    x0 = fr(g, fr(g, atan2((double)rdf32(sp0 - 0x58u), -(double)rdf32(sp0 - 0x60u))) + (double)rdf32(COW_IMG(0x1032addcu)));
    goto L_1024f2a6;
L_1024f2c4: ;
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0xffffffffu);
    wr32(sp0 - 0x84u, arg1);
    g->esp = sp0 - 0x60u;
    cow_thiscall_cdecl(g, COW_IMG(0x10250b30u), self, 9, arg1, 0xffffffffu, 0u, in_esi, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024f0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024f0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
