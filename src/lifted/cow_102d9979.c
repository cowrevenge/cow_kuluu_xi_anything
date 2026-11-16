/* f_0x102d9979 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d9979(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d3;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, self);
    d1 = (double)rdf32(rd32(sp0 + 8u));
    d2 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d3 = (double)rdf32(rd32(sp0 + 8u) + 8u);
    t4 = rd32(sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, fr(g, fr(g, d1 * d1) + fr(g, d2 * d2)) + fr(g, d3 * d3)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)1.0);
    d5 = (double)(float)(double)rdf32(sp0 + 8u);
    wrf32(sp0 - 0x20u, (float)d5);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x102d6203u), in_eax, g->ecx, g->edx, 1, 2, cow_f2bits(d5), cow_f2bits((double)(float)1.0));
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        esi = t4;
        goto L_102d99cd;
    }
    edx = t7;
    esi = t4;
    if (arg1 == esi) goto L_102d9a13;
L_102d99c6: ;
    edi = arg1;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
L_102d9a13: ;
    g->edx = edx;
    return arg1;
L_102d99cd: ;
    d8 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032ac8cu)), 0u) >> 8u & 0x41u) != 0u) goto L_102d9a05;
    d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt((double)rdf32(sp0 + 8u))));
    d10 = (double)(float)fr(g, d9 * (double)rdf32(esi));
    wrf32(sp0 - 0x10u, (float)d10);
    d11 = (double)(float)fr(g, d9 * (double)rdf32(esi + 4u));
    wrf32(sp0 - 0xcu, (float)d11);
    d12 = (double)(float)fr(g, d9 * (double)rdf32(esi + 8u));
    wrf32(sp0 - 8u, (float)d12);
    esi = sp0 - 0x10u;
    goto L_102d99c6;
L_102d9a05: ;
    wrf32(arg1, (float)0.0);
    wrf32(arg1 + 4u, (float)0.0);
    wrf32(arg1 + 8u, (float)0.0);
    goto L_102d9a13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d9979(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d9979(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
