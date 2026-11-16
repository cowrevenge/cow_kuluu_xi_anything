/* f_0x102d97c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102d97c5(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, t1);
    d2 = (double)rdf32(rd32(sp0 + 8u) + 4u);
    d3 = fr(g, fr(g, (double)rdf32(t1) * (double)rdf32(t1)) + fr(g, d2 * d2));
    d4 = (double)rdf32(t1);
    wrf32(sp0 + 8u, (float)d3);
    wrf32(sp0 - 0x10u, (float)(double)(float)1.0);
    d5 = (double)(float)(double)rdf32(sp0 + 8u);
    wrf32(sp0 - 0x14u, (float)d5);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x102d6203u), in_eax, g->ecx, g->edx, 1, 2, cow_f2bits(d5), cow_f2bits((double)(float)1.0));
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_102d9810;
    }
    ecx = t7;
    edx = t8;
    if (arg1 == ecx) goto L_102d984e;
    t9 = rd32(ecx);
    wr32(arg1, t9);
    ecx = rd32(ecx + 4u);
    edx = t9;
L_102d980b: ;
    wr32(arg1 + 4u, ecx);
L_102d984e: ;
    g->edx = edx;
    return arg1;
L_102d9810: ;
    d10 = (double)rdf32(sp0 + 8u);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032ac8cu)), 0u) >> 8u & 0x41u) != 0u) goto L_102d9845;
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, sqrt((double)rdf32(sp0 + 8u))));
    d12 = (double)(float)fr(g, d11 * (double)rdf32(ecx));
    wrf32(sp0 - 0xcu, (float)d12);
    d13 = fr(g, d11 * (double)rdf32(ecx + 4u));
    wr32(arg1, cow_f2bits(d12));
    wrf32(sp0 - 8u, (float)(double)(float)d13);
    ecx = cow_f2bits((double)(float)d13);
    goto L_102d980b;
L_102d9845: ;
    wrf32(arg1, (float)0.0);
    wrf32(arg1 + 4u, (float)0.0);
    goto L_102d984e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d97c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d97c5(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
