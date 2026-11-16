/* f_0x10056850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10056850(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = rd32(sp0 + 0x10u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        ecx = arg3;
        edx = in_edx;
        ebp = eax;
L_1005686e: ;
        d1 = (double)rdf32(ecx + 0xcu);
        if (d1 <= (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d2 = (double)rdf32(ecx + 8u);
            if (d2 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                d3 = fr(g, fr(g, (double)rdf32(ecx + 0xcu) / (double)rdf32(ecx + 8u)) * (double)rdf32(COW_IMG(0x1032a378u)));
                wrf32(sp0 + 0x10u, (float)d3);
                if ((int32_t)arg2 > 0)
                {
                    edx = arg1 + 4u;
                    esi = arg2;
L_100568ab: ;
                    d4 = fr(g, (double)rdf32(edx + 4u) - (double)rdf32(ecx + 4u));
                    d5 = fr(g, (double)rdf32(edx - 4u) - (double)rdf32(ecx));
                    d6 = fr(g, sqrt(fr(g, fr(g, d4 * d4) + fr(g, d5 * d5))));
                    d7 = (double)rdf32(ecx + 8u);
                    if (!(d6 < d7))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
                        x0 = d6;
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
                        x0 = d6;
                        d8 = fr(g, (double)rdf32(edx) - fr(g, fr(g, sin(fr(g, fr(g, fr(g, (double)rdf32(ecx + 8u) - x0) / (double)rdf32(ecx + 8u)) * (double)rdf32(COW_IMG(0x1032b7b8u))))) * (double)rdf32(sp0 + 0x10u)));
                        wrf32(edx, (float)d8);
                    }
                    if (esi != 1u)
                    {
                        edx = edx + 0xcu;
                        esi = esi - 1u;
                        goto L_100568ab;
                    }
                    edx = edx + 0xcu;
                }
            }
            d9 = fr(g, (double)rdf32(ecx + 0xcu) - (double)rdf32(COW_IMG(0x1032b7b4u)));
            wrf32(ecx + 0xcu, (float)d9);
            t10 = rd32(COW_IMG(0x1047bfa8u));
            d11 = fr(g, fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) * (double)rdf32(COW_IMG(0x1032b7b4u))) + (double)rdf32(ecx + 8u));
            wrf32(ecx + 8u, (float)d11);
            eax = t10;
            ecx = ecx + 0x10u;
        }
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            goto L_1005686e;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
