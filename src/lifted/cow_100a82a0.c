/* f_0x100a82a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100a82a0(Guest* g)
{
    double d1;
    double d2;
    double d25;
    double d28;
    double d29;
    double d3;
    double d30;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    double loc_88_f;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x70u, rd32(COW_IMG(0x1035bbfcu)));
    wr32(sp0 - 0x68u, rd32(COW_IMG(0x1035bc04u)));
    wr32(sp0 - 0x8cu, in_esi);
    wr32(sp0 - 0x6cu, rd32(COW_IMG(0x1035bc00u)));
    wr32(sp0 - 0x64u, rd32(COW_IMG(0x1035bc08u)));
    d1 = (double)(float)fr(g, (double)rdf32(arg2) - (double)rdf32(self + 0xd4u));
    wrf32(sp0 - 0x80u, (float)d1);
    d2 = (double)(float)fr(g, (double)rdf32(arg2 + 4u) - (double)rdf32(self + 0xd8u));
    wrf32(sp0 - 0x7cu, (float)d2);
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    d3 = (double)(float)fr(g, (double)rdf32(arg2 + 8u) - (double)rdf32(self + 0xdcu));
    wrf32(sp0 - 0x78u, (float)d3);
    g->ecx = sp0 - 0x80u;
    g->edx = rd32(COW_IMG(0x1035bc08u));
    t4 = rd32(COW_IMG(0x1035bc08u));
    g->esp = sp0 - 0x8cu;
    t5 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x80u, sp0 - 0x80u);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    if (!(fr(g, sqrt(d8)) < (double)rdf32(COW_IMG(0x1032a3e0u))))
    {
        ecx = t6;
        goto L_100a832c;
    }
    edx = t7;
    g->edx = edx;
    return 1u;
L_100a832c: ;
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x10027510u), 3, sp0 - 0x80u, sp0 - 0x80u, in_esi);
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 0x8cu;
    t10 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x60u, 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x60u, 0);
    t13 = g->edx;
    wr32(sp0 - 0x90u, arg1);
    t14 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x60u, 1, arg1);
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    g->edx = sp0 - 0x70u;
    t15 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x60u, 1, sp0 - 0x70u);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x60u, 0);
    t18 = g->edx;
    wr32(sp0 - 0x90u, 0x3f490e56u);
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x60u, 1, 0x3f490e56u);
    t19 = g->edx;
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    wr32(sp0 - 0x94u, sp0 - 0x10u);
    g->eax = sp0 - 0x70u;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x60u, 2, sp0 - 0x10u, sp0 - 0x70u);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x60u, 0);
    t23 = g->edx;
    wr32(sp0 - 0x90u, 0xbf490e56u);
    cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x60u, 1, 0xbf490e56u);
    wr32(sp0 - 0x90u, sp0 - 0x70u);
    wr32(sp0 - 0x94u, sp0 - 0x20u);
    cow_thiscall(g, COW_IMG(0x10028230u), sp0 - 0x60u, 2, sp0 - 0x20u, sp0 - 0x70u);
    wr32(sp0 - 0x90u, sp0 - 0x80u);
    wr32(sp0 - 0x94u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x10u, sp0 - 0x80u);
    t24 = g->edx;
    d25 = cow_take_float(g);
    wrf32(sp0 - 0x84u, (float)(double)(float)d25);
    wr32(sp0 - 0x98u, sp0 - 0x80u);
    wr32(sp0 - 0x9cu, sp0 - 0x20u);
    g->edx = t24;
    g->esp = sp0 - 0x94u;
    t26 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x20u, sp0 - 0x80u);
    t27 = g->edx;
    d28 = cow_take_float(g);
    wrf32(sp0 - 0x88u, (float)(double)(float)d28);
    d29 = (double)rdf32(sp0 - 0x84u);
    if ((cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        edx = t27;
        loc_88_f = (double)(float)d28;
        goto L_100a8431;
    }
    eax = cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    edx = t27;
    loc_88_f = (double)(float)d28;
    if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100a8419;
    }
    eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    esi = 1u;
L_100a8472: ;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t31 = g->edx;
    g->esi = rd32(sp0 - 0x8cu);
    g->edx = t31;
    return esi;
L_100a8419: ;
    if (!(loc_88_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100a8431;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    esi = 2u;
    goto L_100a8472;
L_100a8431: ;
    d30 = (double)rdf32(sp0 - 0x84u);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        esi = 1u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        if (!(loc_88_f < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            if ((cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                esi = 1u;
            }
            else
            {
                eax = cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                esi = 4u;
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_88_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            esi = 3u;
        }
    }
    goto L_100a8472;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a82a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a82a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
