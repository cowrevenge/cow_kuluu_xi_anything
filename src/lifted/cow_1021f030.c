/* f_0x1021f030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_1021f030(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    double loc_10_f;
    double loc_14_f;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, 0u);
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_1021f059;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_1021f059: ;
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    esi = COW_IMG(0x10480af0u);
    x1 = (double)rdf32(eax + 0xcu);
    x0 = (double)rdf32(eax + 4u);
L_1021f06e: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        if (rd32(ecx + 0xa0u) == 0u)
        {
            eax = rd32(ecx + 0xa0u);
        }
        else
        {
            if (!(rd32(ecx + 0x120u) >> 0xdu & 1u))
            {
                eax = rd32(ecx + 0x120u) >> 0xdu;
            }
            else
            {
                eax = rd32(ecx + 0x120u) >> 0xdu;
                if (rd8(ecx + 0x127u) & 1u)
                {
                    if (rd32(ecx + 0x170u) == 2u)
                    {
                        eax = rd32(ecx + 0x170u);
                    }
                    else
                    {
                        eax = rd32(ecx + 0x170u);
                        if (eax != 3u)
                        {
                            d1 = (double)(float)fr(g, x0 - (double)rdf32(ecx + 4u));
                            wrf32(sp0 - 0x10u, (float)d1);
                            d2 = fr(g, fr(g, x1 - (double)rdf32(ecx + 0xcu)) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                            if (cow_bits2f(0u) == (double)rdf32(COW_IMG(0x103295d8u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 4u);
                                loc_10_f = d1;
                                x3 = fr(g, sqrt(fr(g, fr(g, d2 * d2) + fr(g, d1 * d1))));
                                x2 = d2;
                                goto L_1021f0f8;
                            }
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(0u), (double)rdf32(COW_IMG(0x103295d8u)), 4u);
                            loc_10_f = d1;
                            x3 = fr(g, sqrt(fr(g, fr(g, d2 * d2) + fr(g, d1 * d1))));
                            x2 = d2;
                            if (!(x3 < cow_bits2f(0u)))
                            {
                                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, cow_bits2f(0u), 4u);
                                goto L_1021f11b;
                            }
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, cow_bits2f(0u), 4u);
L_1021f0f8: ;
                            wrf32(sp0 - 0x14u, (float)(double)(float)x3);
                            wr32(arg2, ecx);
                            if (arg1 == 0u) goto L_1021f11d;
                            loc_14_f = (double)(float)x3;
                            wr32(arg1 + 8u, 0u);
                            wrf32(arg1 + 4u, (float)x2);
                            wr32(arg1, cow_f2bits(loc_10_f));
                            wr32(arg1 + 0xcu, 0x3f800000u);
                        }
                    }
                }
            }
        }
    }
L_1021f11f: ;
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_1021f06e;
    }
    g->edx = arg1;
    fpush(g, (double)rdf32(sp0 - 0x14u));
    return eax;
L_1021f11b: ;
L_1021f11d: ;
    goto L_1021f11f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021f030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
