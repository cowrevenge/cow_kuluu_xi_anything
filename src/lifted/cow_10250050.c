/* f_0x10250050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10250050(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d22;
    double d23;
    double d24;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd8(rd32(sp0 + 4u)) & 0x20u) != 0u) goto L_102501aa;
    esi = rd32(sp0 + 4u);
    if (esi + 0x1d0u == 0u) goto L_102501aa;
    edi = esi + 0x1d0u;
    if ((rd8(edi) & 0x10u) == 0u) goto L_102501aa;
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10251390u), sp0 - 4u, g->ecx, g->edx, 1, 2, edi, sp0 - 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u) goto L_102501aa;
    eax = t1;
    ecx = t2;
    edx = t3;
    d4 = (double)rdf32(sp0 - 4u);
    d5 = (double)rdf32(esi + 0x4cu);
    if (d4 < d5)
    {
        if ((rd32(esi) >> 8u & 4u) == 0u)
        {
            t10 = rd8(COW_IMG(0x10389578u) + rd32(esi + 8u));
            wr32(sp0 - 0x10u, t10);
            g->ecx = t10;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x100378b0u), g->eax, g->ecx, edx, 1, 1, t10);
            t11 = g->ecx;
            ecx = t11;
        }
        else
        {
            eax = rd32(esi);
            t6 = rd8(COW_IMG(0x10389578u) + rd32(esi + 8u));
            wr32(sp0 - 0x10u, t6);
            g->ecx = rd32(esi + 8u);
            t7 = rd32(esi + 8u);
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x100378b0u), g->eax, g->ecx, t6, 1, 1, t6);
            t8 = g->ecx;
            t9 = (rd32(esi) & 0xffff00ffu) | (rd32(esi) >> 8u & 0xfbu) << 8u;
            wr32(esi, t9);
            ecx = t8;
        }
    }
    if ((rd32(esi) >> 8u & 2u) == 0u)
    {
        eax = rd32(esi);
        goto L_10250145;
    }
    eax = rd32(esi);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, edi);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x102513e0u), eax, g->ecx, g->edx, 1, 2, edi, sp0 + 4u);
    t13 = g->edx;
    if (t12 != 0u) goto L_102501a3;
    eax = t12;
    edx = t13;
    d14 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x10329ce4u)));
    wrf32(sp0 + 4u, (float)d14);
    d15 = (double)rdf32(sp0 - 4u);
    d16 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d15, d16, 0u) & 0x4100u) != 0u) goto L_102501a3;
    if (rd8(COW_IMG(0x10389580u) + rd32(esi + 8u)) == 1u)
    {
        eax = rd32(esi + 8u);
        if (rd32(COW_IMG(0x1046393cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1046393cu));
            wr32(sp0 - 0x10u, 0xffffffffu);
            g->esp = sp0 - 0xcu;
            cow_stdcall(g, COW_IMG(0x102463e0u), 1, 0xffffffffu);
        }
    }
    t17 = (rd32(esi) & 0xffff00ffu) | ((rd32(esi) >> 8u & 0xfdu) << 8u >> 8u | 4u) << 8u;
    t18 = rd32(sp0 - 0xcu);
    wr32(esi, t17);
    t19 = rd32(sp0 - 4u);
    wr32(esi + 0x4cu, t19);
    g->esi = rd32(sp0 - 8u);
    g->edi = t18;
    return;
L_10250145: ;
    if ((eax >> 8u & 4u) == 0u)
    {
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0x14u, edi);
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0xcu;
        t20 = cow_call_regs(g, COW_IMG(0x102513e0u), eax, g->ecx, g->edx, 1, 2, edi, sp0 + 4u);
        t21 = g->edx;
        if (t20 == 0u)
        {
            eax = t20;
            edx = t21;
            d22 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032961cu)));
            wrf32(sp0 + 4u, (float)d22);
            d23 = (double)rdf32(sp0 - 4u);
            d24 = (double)rdf32(sp0 + 4u);
            if ((cow_fsw(g, d23, d24, 0u) & 0x4100u) == 0u)
            {
                if (rd8(COW_IMG(0x10389580u) + rd32(esi + 8u)) == 1u)
                {
                    eax = rd32(esi + 8u);
                    if (rd32(COW_IMG(0x1046393cu)) != 0u)
                    {
                        ecx = rd32(COW_IMG(0x1046393cu));
                        wr32(sp0 - 0x10u, 0x2du);
                        wr32(sp0 - 0x14u, 0u);
                        wr32(sp0 - 0x18u, 0xffffffffu);
                        g->esp = sp0 - 0xcu;
                        cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, 0u, 0x2du);
                    }
                }
                t25 = (rd32(esi) & 0xffff00ffu) | (uint8_t)(rd32(esi) >> 8u | 2u) << 8u;
                wr32(esi, t25);
            }
        }
    }
L_102501a3: ;
    t26 = rd32(sp0 - 4u);
    wr32(esi + 0x4cu, t26);
L_102501aa: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10250050(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
