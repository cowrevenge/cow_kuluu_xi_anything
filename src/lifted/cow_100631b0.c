/* f_0x100631b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100631b0(Guest* g)
{
    double d13;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        t3 = rd32(self + 8u);
        g->eax = t3;
        g->edx = t2;
        g->esp = sp0 - 0x20u;
        t4 = cow_cdecl(g, COW_IMG(0x10028700u), 1, t3);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    t6 = rd32(sp0 + 8u) * 8u;
    t7 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    t8 = cow_call_regs(g, COW_IMG(0x10028640u), eax, t6, edx, 1, 2, t6, 4u);
    t9 = g->ecx;
    wr32(self + 4u, t8);
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x10028640u), t8, t9, t7 << 6u, 1, 2, t7 << 6u, 4u);
    wr32(self + 8u, t10);
    t11 = rd32(self + 4u);
    wr32(self + 0xcu, t7);
    if ((int32_t)t7 <= 0)
    {
        esi = t7;
    }
    else
    {
        eax = t11;
        esi = t7;
        ecx = rd32(sp0 + 4u);
        edx = esi;
L_1006320d: ;
        wr32(eax, rd32(ecx));
        t12 = rd32(ecx + 4u);
        wr32(eax + 4u, t12);
        if (edx != 1u)
        {
            eax = eax + 8u;
            ecx = ecx + 0xcu;
            edx = edx - 1u;
            goto L_1006320d;
        }
    }
    if ((int32_t)(esi - 3u) <= 0)
    {
        eax = rd32(self + 8u);
        edx = 0u;
        goto L_1006339b;
    }
    eax = rd32(self + 8u);
    edx = 0u;
    ebp = esi - 3u;
L_10063232: ;
    d13 = fr(g, (double)rdf32(edx * 8u + rd32(self + 4u) + 0xcu) - (double)rdf32(edx * 8u + rd32(self + 4u) + 4u));
    d14 = fr(g, (double)rdf32(edx * 8u + rd32(self + 4u) + 8u) - (double)rdf32(edx * 8u + rd32(self + 4u)));
    d15 = fr(g, (double)rdf32(edx * 8u + rd32(self + 4u) + 0x14u) - (double)rdf32(edx * 8u + rd32(self + 4u) + 0xcu));
    d16 = fr(g, (double)rdf32(edx * 8u + rd32(self + 4u) + 0x10u) - (double)rdf32(edx * 8u + rd32(self + 4u) + 8u));
    t17 = rd32(self + 4u);
    wrf32(sp0 + 8u, (float)fr(g, sqrt(fr(g, fr(g, d15 * d15) + fr(g, d16 * d16)))));
    d18 = (double)(float)fr(g, (double)rdf32(edx * 8u + t17 + 0x18u) - (double)rdf32(edx * 8u + t17 + 0x10u));
    d19 = fr(g, (double)rdf32(edx * 8u + t17 + 0x1cu) - (double)rdf32(edx * 8u + t17 + 0x14u));
    wrf32(sp0 + 4u, (float)d19);
    d20 = (double)rdf32(sp0 + 4u);
    d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)))) / fr(g, (double)rdf32(sp0 + 8u) + fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)))))));
    d22 = (double)(float)fr(g, d21 * d21);
    d23 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)))) / fr(g, (double)rdf32(sp0 + 8u) + fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)))))));
    d24 = fr(g, (double)rdf32(sp0 + 8u) / fr(g, fr(g, sqrt(fr(g, fr(g, d20 * d20) + fr(g, d18 * d18)))) + (double)rdf32(sp0 + 8u)));
    d25 = fr(g, fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14)))) / fr(g, (double)rdf32(sp0 + 8u) + fr(g, sqrt(fr(g, fr(g, d13 * d13) + fr(g, d14 * d14))))));
    wrf32(sp0 + 8u, (float)d23);
    d26 = fr(g, -d22 * (double)rdf32(sp0 + 8u));
    wrf32(eax, (float)d26);
    d27 = fr(g, d24 * d25);
    d28 = fr(g, fr(g, d27 + d21) * (double)rdf32(sp0 + 8u));
    wrf32(eax + 4u, (float)d28);
    d29 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - d24);
    wrf32(sp0 + 4u, (float)d29);
    d30 = fr(g, fr(g, -d21 - d27) / (double)rdf32(sp0 + 4u));
    wrf32(eax + 8u, (float)d30);
    d31 = fr(g, fr(g, d24 * d24) / (double)rdf32(sp0 + 4u));
    wr32(eax + 0x2cu, 0u);
    wr32(eax + 0x30u, 0u);
    wr32(eax + 0x34u, 0x3f800000u);
    wr32(eax + 0x38u, 0u);
    wr32(eax + 0x3cu, 0u);
    wrf32(eax + 0xcu, (float)d31);
    d32 = fr(g, fr(g, d22 + d22) * (double)rdf32(sp0 + 8u));
    wrf32(eax + 0x10u, (float)d32);
    d33 = fr(g, fr(g, fr(g, d21 * (double)rdf32(COW_IMG(0x1032c084u))) - d27) * (double)rdf32(sp0 + 8u));
    wrf32(eax + 0x14u, (float)d33);
    d34 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d25 + d25));
    d35 = fr(g, fr(g, fr(g, d21 + d21) - fr(g, d34 * d24)) / (double)rdf32(sp0 + 4u));
    wrf32(eax + 0x18u, (float)d35);
    wrf32(eax + 0x1cu, (float)-(double)(float)d31);
    d36 = fr(g, (double)rdf32(sp0 + 8u) * d22);
    wrf32(eax + 0x20u, (float)-d36);
    d37 = fr(g, d34 * (double)rdf32(sp0 + 8u));
    wrf32(eax + 0x24u, (float)d37);
    wrf32(eax + 0x28u, (float)d25);
    if ((int32_t)(edx + 1u) < (int32_t)ebp)
    {
        eax = eax + 0x40u;
        edx = edx + 1u;
        goto L_10063232;
    }
    eax = eax + 0x40u;
    edx = edx + 1u;
L_1006339b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100631b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100631b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
