/* f_0x10063890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_10063890(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    if (arg2 != 0u) goto L_100638a9;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return in_eax;
L_100638a9: ;
    if (rd8(self + 0x24u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x24u);
        x0 = (double)rdf32(sp0 + 4u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x24u);
        x0 = (double)rdf32(sp0 + 4u);
        if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            goto L_100638d4;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
L_100638c1: ;
        d1 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032961cu)));
        if (d1 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = d1;
            goto L_100638c1;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d1;
L_100638d4: ;
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
            goto L_100638f8;
        }
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
L_100638e3: ;
        d2 = fr(g, x0 - (double)rdf32(COW_IMG(0x1032961cu)));
        if ((cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
            x0 = d2;
            goto L_100638e3;
        }
        eax = cow_fsw(g, d2, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
        x0 = d2;
    }
L_100638f8: ;
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)(rd32(self + 4u) - 1u) <= 0)
    {
        edx = rd32(self + 0x18u) + 4u;
        ebp = rd32(self + 4u);
        esi = 0u;
        edi = rd32(self + 4u) - 1u;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
        goto L_10063928;
    }
    edx = rd32(self + 0x18u) + 4u;
    ebp = rd32(self + 4u);
    esi = 0u;
    edi = rd32(self + 4u) - 1u;
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
L_10063913: ;
    d3 = fr(g, x1 + (double)rdf32(edx));
    if (x0 <= d3)
    {
        x1 = fr(g, x1 + (double)rdf32(edx));
        goto L_10063928;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d3, 2u);
    x1 = fr(g, x1 + (double)rdf32(edx));
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        edx = edx + 4u;
        esi = esi + 1u;
        goto L_10063913;
    }
    edx = edx + 4u;
    esi = esi + 1u;
L_10063928: ;
    if ((int32_t)esi < (int32_t)edi)
    {
        x0 = fr(g, fr(g, x0 - fr(g, x1 - (double)rdf32(edx))) / (double)rdf32(edx));
    }
    else
    {
        esi = ebp - 2u;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    wrf32(sp0 - 4u, (float)(double)(float)x0);
    d4 = fr(g, x0 * x0);
    wrf32(sp0 - 8u, (float)(double)(float)d4);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    t5 = esi * 0x40u + rd32(self + 0x1cu);
    wr32(sp0 - 0x24u, t5);
    t6 = rd32(COW_IMG(0x1047cf7cu)) + 0x920u;
    wr32(sp0 - 0x28u, t6);
    d7 = (double)(float)fr(g, d4 * x0);
    wrf32(sp0 - 0xcu, (float)d7);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t8 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t8 + 0x40u), rd32(COW_IMG(0x1047cf7cu)), 3, t6, t5, sp0 - 0xcu);
    t9 = g->edx;
    d10 = fr(g, fr(g, fr(g, (double)rdf32(arg2 + esi * 4u + 0xcu) * (double)rdf32(rd32(COW_IMG(0x1047cf7cu)) + 0x92cu)) + fr(g, (double)rdf32(arg2 + esi * 4u + 8u) * (double)rdf32(rd32(COW_IMG(0x1047cf7cu)) + 0x928u))) + fr(g, (double)rdf32(arg2 + esi * 4u + 4u) * (double)rdf32(rd32(COW_IMG(0x1047cf7cu)) + 0x924u)));
    g->edx = t9;
    fpush(g, fr(g, d10 + fr(g, (double)rdf32(rd32(COW_IMG(0x1047cf7cu)) + 0x920u) * (double)rdf32(arg2 + esi * 4u))));
    return rd32(COW_IMG(0x1047cf7cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10063890(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
