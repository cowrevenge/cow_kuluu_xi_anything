/* f_0x101892b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_101892b0(Guest* g)
{
    double d3;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self - 0x1cu) == 1u) goto L_101892bf;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_101892bf: ;
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    else
    {
        eax = rd32(self + 0x1cu);
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x10187020u), self, 0);
        t2 = g->edx;
        d3 = cow_take_float(g);
        if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103367d8u)), 1u) & 0x4100u) != 0u)
        {
            ecx = rd32(sp0 + 4u);
            edx = t2;
        }
        else
        {
            ecx = rd32(sp0 + 4u);
            edx = t2;
            if (ecx == 1u)
            {
                eax = ecx - 1u;
                x1 = (double)rdf32(COW_IMG(0x10456a6cu));
            }
            else
            {
                eax = ecx - 1u;
                x1 = (double)rdf32(COW_IMG(0x10456a5cu));
            }
            if (x1 != (double)rdf32(COW_IMG(0x1032961cu)))
            {
                x0 = (double)rdf32(COW_IMG(0x10329a08u));
            }
        }
        if (ecx == 1u)
        {
            eax = ecx - 1u;
            x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x10456aa8u)));
        }
        else
        {
            eax = ecx - 1u;
            x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x10456ab8u)));
        }
    }
    if (rd32(COW_IMG(0x1065cb04u)) == 0u) goto L_10189386;
    ecx = rd32(COW_IMG(0x1065cb04u));
    d4 = (double)rdf32(ecx + 0x1d4u);
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u;
        x1 = (double)rdf32(ecx + 0x1d4u);
        goto L_1018935a;
    }
    eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u) & 0x4100u;
    x1 = (double)rdf32(ecx + 0x1d4u);
    if (!(x0 < x1)) goto L_10189386;
    g->edx = edx;
    fpush(g, (double)rdf32(ecx + 0x1d4u));
    return;
L_1018935a: ;
    if (x1 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        d5 = (double)rdf32(ecx + 0x1d4u);
        wrf32(sp0 + 4u, (float)-d5);
        d6 = (double)rdf32(sp0 + 4u);
        if ((cow_fsw(g, x0, d6, 1u) & 0x4100u) == 0u)
        {
            x0 = (double)rdf32(sp0 + 4u);
        }
    }
L_10189386: ;
    g->edx = edx;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101892b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101892b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
