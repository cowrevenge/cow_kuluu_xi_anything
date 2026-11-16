/* f_0x10125fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_10125fe0(Guest* g)
{
    double d3;
    double d4;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    cow_frame(g, sp0, 8u);

    wr32(sp0 - 4u, self);
    t1 = rd32(self + 8u) - rd32(self + 0x3cu);
    wr32(sp0 - 4u, t1);
    t2 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    wr32(sp0 - 4u, t2);
    d3 = (double)(float)fr(g, (double)(int32_t)t1 / fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032df9cu))));
    wrf32(sp0 - 4u, (float)d3);
    d4 = fr(g, (double)(int32_t)t1 / fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1032df9cu))));
    if ((cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        ecx = (self & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        edx = t2;
        loc_4_f = d3;
        if (!(loc_4_f < (double)rdf32(COW_IMG(0x1032a3f0u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a3f0u)), 0u);
            if (!(loc_4_f < (double)rdf32(COW_IMG(0x1032961cu))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                if ((cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a3f0u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a3f0u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a3f0u)), 0u) & 0x4100u;
                    wr32(sp0 - 4u, 0u);
                }
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x1032a3f0u)), 0u);
            wr32(sp0 - 4u, 0xbf800000u);
        }
    }
    else
    {
        eax = cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        ecx = (self & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        edx = t2;
        wr32(sp0 - 4u, 0x3f800000u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u) goto L_101260ba;
    eax = t5;
    edx = t6;
    d7 = (double)rdf32(sp0 - 4u);
    if (d7 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_101260ba;
    if (!(rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x58u) >> 2u & 1u)) goto L_101260ba;
    eax = rd32(rd32(COW_IMG(0x104e1d4cu)) + 0x58u) >> 2u;
    ecx = rd32(COW_IMG(0x104e1d4cu));
    g->eax = eax;
    g->esp = sp0;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x10126100u), ecx, 1, rd32(sp0 - 4u));
    d9 = cow_take_float(g);
    if (d9 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_101260ba;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_101260ba: ;
    fpush(g, (double)rdf32(sp0 - 4u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10125fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10125fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
