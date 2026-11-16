/* f_0x100a80d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a80d0(Guest* g)
{
    double d20;
    double d23;
    double d24;
    double d25;
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    double loc_78_f;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x7cu, in_ebx);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, in_edi);
    wr32(sp0 - 0x88u, arg1);
    wr32(sp0 - 0x8cu, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x84u;
    t1 = cow_cdecl(g, COW_IMG(0x10027530u), 2, arg1, arg1);
    t2 = g->edx;
    d3 = cow_take_float(g);
    if (!(fr(g, sqrt(d3)) < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        edx = t2;
        goto L_100a8105;
    }
    return 0u;
L_100a8105: ;
    d4 = (double)(float)fr(g, (double)rdf32(arg2) - (double)rdf32(self + 0xd4u));
    wrf32(sp0 - 0x70u, (float)d4);
    d5 = (double)(float)fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(self + 0xd8u));
    wrf32(sp0 - 0x6cu, (float)d5);
    wr32(sp0 - 0x88u, sp0 - 0x70u);
    wr32(sp0 - 0x8cu, sp0 - 0x70u);
    d6 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(self + 0xdcu));
    wrf32(sp0 - 0x68u, (float)d6);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x70u, sp0 - 0x70u, in_edi);
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x84u;
    t8 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t11 = g->edx;
    wr32(sp0 - 0x88u, 0x3f490e56u);
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, 0x3f490e56u);
    wr32(sp0 - 0x88u, sp0 - 0x70u);
    wr32(sp0 - 0x8cu, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->edx = sp0 - 0x70u;
    t12 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x60u, sp0 - 0x70u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t15 = g->edx;
    wr32(sp0 - 0x88u, 0xbf490e56u);
    t16 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, 0xbf490e56u);
    wr32(sp0 - 0x88u, sp0 - 0x70u);
    wr32(sp0 - 0x8cu, sp0 - 0x50u);
    g->edx = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x40u, 2, sp0 - 0x50u, sp0 - 0x70u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x88u, arg1);
    wr32(sp0 - 0x8cu, sp0 - 0x60u);
    g->edx = t18;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x60u, arg1);
    t19 = g->edx;
    d20 = cow_take_float(g);
    wrf32(sp0 - 0x74u, (float)(double)(float)d20);
    wr32(sp0 - 0x90u, arg1);
    wr32(sp0 - 0x94u, sp0 - 0x50u);
    g->edx = t19;
    g->esp = sp0 - 0x8cu;
    t21 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x50u, arg1);
    t22 = g->edx;
    d23 = cow_take_float(g);
    wrf32(sp0 - 0x78u, (float)(double)(float)d23);
    d24 = (double)rdf32(sp0 - 0x74u);
    if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        edx = t22;
        loc_78_f = (double)(float)d23;
        goto L_100a822b;
    }
    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    edx = t22;
    loc_78_f = (double)(float)d23;
    if ((cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100a8201;
    }
    eax = cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 1u;
L_100a8201: ;
    if (!(loc_78_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a822b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 2u;
L_100a822b: ;
    d25 = (double)rdf32(sp0 - 0x74u);
    if (!(d25 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ebx = 0u;
        goto L_100a827e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if (!(loc_78_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a8266;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return 3u;
L_100a8266: ;
    if ((cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        ebx = 0u;
    }
    else
    {
        eax = cow_fsw(g, loc_78_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        ebx = 4u;
    }
L_100a827e: ;
    g->esp = sp0 - 0x84u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a80d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a80d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
