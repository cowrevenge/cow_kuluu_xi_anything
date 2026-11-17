/* f_0x1028da40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028da40(Guest* g)
{
    double d3;
    double d4;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x1cu, in_ebx);
    if ((int32_t)arg3 > 0)
    {
        wr32(sp0 - 0x18u, rd32(arg2));
        wr32(sp0 - 0xcu, rd32(arg2));
        t1 = rd32(arg2 + 4u);
        wr32(sp0 - 0x14u, t1);
        wr32(sp0 - 8u, t1);
        t2 = rd32(arg2 + 8u);
        wr32(sp0 - 0x10u, t2);
        wr32(sp0 - 4u, t2);
        if ((int32_t)arg3 <= 1)
        {
            loc_18 = rd32(arg2);
            loc_c = rd32(arg2);
            loc_14 = t1;
            loc_8 = t1;
            loc_10 = t2;
            loc_4 = t2;
        }
        else
        {
            loc_18 = rd32(arg2);
            loc_c = rd32(arg2);
            loc_14 = t1;
            loc_8 = t1;
            loc_10 = t2;
            loc_4 = t2;
            wr32(sp0 - 0x20u, in_esi);
            wr32(sp0 - 0x24u, in_edi);
            eax = arg2;
            edx = 1u;
            esi = arg2 + 0x14u;
L_1028da98: ;
            d3 = (double)rdf32(esi - 8u);
            if ((cow_fsw(g, cow_bits2f(loc_c), d3, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, cow_bits2f(loc_c), d3, 1u) & 0x4100u;
                x0 = (double)rdf32(esi - 8u);
                if (!(cow_bits2f(loc_18) < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_18), x0, 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_18), x0, 1u);
                    wrf32(sp0 - 0x18u, (float)(double)(float)x0);
                }
            }
            else
            {
                eax = cow_fsw(g, cow_bits2f(loc_c), d3, 1u) & 0x4100u;
                x0 = (double)rdf32(esi - 8u);
                wrf32(sp0 - 0xcu, (float)(double)(float)x0);
            }
            d4 = (double)rdf32(esi - 4u);
            if ((cow_fsw(g, cow_bits2f(loc_8), d4, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, cow_bits2f(loc_8), d4, 1u) & 0x4100u;
                x0 = (double)rdf32(esi - 4u);
                if (!(cow_bits2f(loc_14) < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_14), x0, 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_14), x0, 1u);
                    wrf32(sp0 - 0x14u, (float)(double)(float)x0);
                }
            }
            else
            {
                eax = cow_fsw(g, cow_bits2f(loc_8), d4, 1u) & 0x4100u;
                x0 = (double)rdf32(esi - 4u);
                wrf32(sp0 - 8u, (float)(double)(float)x0);
            }
            if ((cow_fsw(g, cow_bits2f(loc_4), (double)rdf32(esi), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, cow_bits2f(loc_4), (double)rdf32(esi), 1u) & 0x4100u;
                x0 = (double)rdf32(esi);
                if (!(cow_bits2f(loc_10) < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_10), x0, 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, cow_bits2f(loc_10), x0, 1u);
                    wrf32(sp0 - 0x10u, (float)(double)(float)x0);
                }
            }
            else
            {
                eax = cow_fsw(g, cow_bits2f(loc_4), (double)rdf32(esi), 1u) & 0x4100u;
                x0 = (double)rdf32(esi);
                wrf32(sp0 - 4u, (float)(double)(float)x0);
            }
            if ((int32_t)(edx + (uint32_t)((int32_t)arg3 >> 6u) + 1u) < (int32_t)arg3)
            {
                edx = edx + (uint32_t)((int32_t)arg3 >> 6u) + 1u;
                esi = esi + (uint32_t)((int32_t)arg3 >> 6u) * 0xcu + 0xcu;
                loc_18 = rd32(sp0 - 0x18u);
                loc_c = rd32(sp0 - 0xcu);
                loc_14 = rd32(sp0 - 0x14u);
                loc_8 = rd32(sp0 - 8u);
                loc_10 = rd32(sp0 - 0x10u);
                loc_4 = rd32(sp0 - 4u);
                goto L_1028da98;
            }
            loc_18 = rd32(sp0 - 0x18u);
            loc_c = rd32(sp0 - 0xcu);
            loc_14 = rd32(sp0 - 0x14u);
            loc_8 = rd32(sp0 - 8u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_4 = rd32(sp0 - 4u);
        }
        wr32(arg1 + 4u, loc_8);
        wrf32(arg1, (float)cow_bits2f(loc_c));
        wr32(arg1 + 8u, loc_4);
        wr32(arg1 + 0xcu, loc_18);
        wr32(arg1 + 0x10u, loc_14);
        wr32(arg1 + 0x14u, loc_10);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028da40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028da40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
