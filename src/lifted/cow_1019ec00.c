/* f_0x1019ec00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1019ec00(Guest* g)
{
    double d1;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        loc_4 = self;
    }
    else
    {
        ecx = rd32(sp0 + 4u);
        d1 = (double)rdf32(self + 0x48u);
        if ((cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            loc_4 = self;
        }
        else
        {
            wr32(sp0 + 4u, ecx * 0x3cu);
            t2 = rd32(self + 0x34u);
            t3 = rd8(sp0 + 8u);
            t4 = rd32(sp0 + 4u);
            wrf32(sp0 + 4u, (float)(double)(int32_t)t4);
            if ((uint8_t)t3 != 0u)
            {
                loc_4 = t2 * 0xeu;
                x0 = fr(g, (double)rdf32(sp0 + 4u) / (double)(int32_t)(t2 * 0xeu));
            }
            else
            {
                eax = (t2 & 0xffffff00u) | t3;
                loc_4 = t2 * 0xeu;
                x0 = fr(g, (double)rdf32(sp0 + 4u) / (double)(int32_t)(t2 * 0xeu));
                if (x0 < (double)rdf32(COW_IMG(0x1032961cu)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    if (!(x0 < (double)rdf32(COW_IMG(0x1032a398u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a398u)), 1u);
                        goto L_1019ec8c;
                    }
                    g->edx = in_edx;
                    g->esp = sp0 - 8u;
                    cow_thiscall(g, COW_IMG(0x1019ef60u), self, 2, 4u, 1u);
                    t5 = g->edx;
                    edx = t5;
                    loc_c = 1u;
L_1019ecb4: ;
                    loc_10 = 3u;
L_1019ecb6: ;
                    g->esp = sp0 - 8u;
                    cow_thiscall(g, COW_IMG(0x1019ef60u), self, 2, loc_10, loc_c);
                    t6 = rd32(self + 0x34u) * 0xeu;
                    t7 = rd32(self + 0x34u);
                    wr32(sp0 + 8u, t6);
                    d8 = fr(g, (double)rdf32(sp0 + 4u) / (double)(int32_t)rd32(sp0 + 8u));
                    if (!(d8 < (double)rdf32(COW_IMG(0x1032961cu))))
                    {
                        x0 = d8;
                    }
                    else
                    {
                        x0 = d8;
                        x0 = (double)rdf32(COW_IMG(0x1032961cu));
                    }
                }
            }
            wrf32(self + 0x48u, (float)x0);
        }
    }
    return;
L_1019ec8c: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x1032df40u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df40u)), 1u);
        goto L_1019eca1;
    }
    edx = in_edx;
    loc_c = 1u;
    loc_10 = 4u;
    goto L_1019ecb6;
L_1019eca1: ;
    if (!(x0 < (double)rdf32(COW_IMG(0x1032d698u))))
    {
        edx = in_edx;
        loc_c = 2u;
    }
    else
    {
        edx = in_edx;
        loc_c = 1u;
    }
    goto L_1019ecb4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ec00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019ec00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
