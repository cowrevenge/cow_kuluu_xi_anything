/* f_0x10273580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10273580(Guest* g)
{
    double d1;
    double d2;
    double d3;
    double d7;
    double d8;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x1099b12cu)) == rd32(COW_IMG(0x1099b130u)))
    {
        edx = rd32(COW_IMG(0x1099b130u));
        goto L_10273681;
    }
    ecx = rd32(COW_IMG(0x1099b12cu));
    edx = rd32(COW_IMG(0x1099b130u));
    d1 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1033cd68u))) + (double)rdf32(COW_IMG(0x1099b134u)));
    wrf32(COW_IMG(0x1099b134u), (float)d1);
    if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x1099b138u)), 0u) & 0x100u) == 0u) goto L_10273681;
    d2 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, fr(g, cos(fr(g, fr(g, (double)rdf32(COW_IMG(0x1099b134u)) / (double)rdf32(COW_IMG(0x1099b138u))) * (double)rdf32(COW_IMG(0x1032df98u))))) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u))));
    d3 = fr(g, fr(g, fr(g, cos(fr(g, fr(g, (double)rdf32(COW_IMG(0x1099b134u)) / (double)rdf32(COW_IMG(0x1099b138u))) * (double)rdf32(COW_IMG(0x1032df98u))))) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d2);
    t4 = rd32(sp0 + 4u);
    t5 = COW_IMG(0x1099b398u) + edx * 0x7cu;
    t6 = COW_IMG(0x1099b398u) + ecx * 0x7cu;
    d7 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1099b1e4u) + edx * 0x34u)) + fr(g, d3 * (double)rdf32(COW_IMG(0x1099b1e4u) + ecx * 0x34u)));
    wrf32(COW_IMG(0x1099b31cu), (float)d7);
    d8 = fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1099b3b4u) + edx * 0x7cu)) + fr(g, d3 * (double)rdf32(COW_IMG(0x1099b3b4u) + ecx * 0x7cu)));
    wrf32(COW_IMG(0x1099b69cu), (float)d8);
    g->eax = t6;
    g->ecx = ecx * 0xdu;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10274a40u), 4, COW_IMG(0x1099b680u), t6, t5, t4);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = COW_IMG(0x1099b3a4u) + edx * 0x7cu;
    t13 = COW_IMG(0x1099b3a4u) + ecx * 0x7cu;
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t14 = cow_call_regs(g, COW_IMG(0x1027b2e0u), t9, g->ecx, g->edx, 1, 7, COW_IMG(0x1099b68cu), t13, t12, t4, COW_IMG(0x1099b680u), t6, t5);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x1099b624u));
    g->esp = sp0;
    g->edx = t16;
    cow_tailcall(g, COW_IMG(0x1026e210u), t14, t15, t16);
    return;
L_10273681: ;
    t17 = rd32(COW_IMG(0x1099b1b4u) + rd32(COW_IMG(0x1099b0f4u)) * 4u);
    g->ecx = t17;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1028f4c0u), 2, COW_IMG(0x1099b13cu), t17);
    t18 = g->ecx;
    ecx = t18;
    esi = 0u;
L_102736ad: ;
    t19 = rd32(COW_IMG(0x1099b1b4u) + rd32(COW_IMG(0x1099b0f4u)) * 4u);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1028ec50u), 3, COW_IMG(0x1099b13cu), esi, t19);
    t20 = g->ecx;
    if ((int32_t)(esi + 1u) < 4)
    {
        ecx = t20;
        esi = esi + 1u;
        goto L_102736ad;
    }
    t21 = rd32(COW_IMG(0x1099b0d8u));
    wr32(COW_IMG(0x1099b134u), 0u);
    t22 = (t21 & 0xffff00ffu) | (t21 >> 8u & 0xfeu) << 8u;
    wr32(COW_IMG(0x1099b0d8u), t22);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10273580(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
