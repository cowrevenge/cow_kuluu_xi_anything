/* f_0x101ed9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ed9e0(Guest* g)
{
    double d13;
    double d14;
    double d21;
    double d3;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 4u, 0u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x1cu);
    wr32(sp0 - 8u, t1);
    t2 = (uint32_t)(int16_t)rd16(self + 0x6cu);
    wr32(sp0 - 8u, t2);
    g->ecx = t2;
    d3 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t1 * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u))) + (double)rdf32(self + 0x24u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)t2);
    d4 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
    fpush(g, d3);
    g->esp = sp0 - 0x14u;
    t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t6 = g->ecx;
    t7 = (uint32_t)(int16_t)rd16(self + 0x1eu);
    wr32(sp0 - 8u, t7);
    t8 = (uint32_t)(int16_t)rd16(self + 0x6eu);
    wr32(sp0 - 8u, t8);
    g->ecx = t6;
    g->edx = t7;
    d9 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)t7 * d4) + (double)rdf32(self + 0x28u)) + (double)rdf32(COW_IMG(0x10329a08u))) + (double)(int32_t)t8);
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = (double)rdf32(sp0 + 4u);
    d14 = fr(g, fr(g, d13 * d13) + (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t16 = rd16(self + 0x7au);
    wr32(sp0 + 4u, t15);
    if ((int16_t)t16 > 0)
    {
        ecx = (uint32_t)(int16_t)t16;
        ebx = t5;
        ebp = t10;
        wr32(sp0 - 0x18u, in_edi);
        wr32(sp0 - 8u, ecx);
        edi = rd32(self + 0x94u);
        loc_4 = 0u;
        loc_8 = ecx;
L_101eda79: ;
        if ((rd8(edi) & 0x20u) == 0u)
        {
            t17 = (uint32_t)(int16_t)rd16(edi + 6u) - ebx;
            if ((int32_t)(t17 * t17 + ((uint32_t)(int16_t)rd16(edi + 8u) - ebp) * ((uint32_t)(int16_t)rd16(edi + 8u) - ebp)) >= 25)
            {
                ecx = t17 * t17 + ((uint32_t)(int16_t)rd16(edi + 8u) - ebp) * ((uint32_t)(int16_t)rd16(edi + 8u) - ebp);
                if ((int32_t)ecx < (int32_t)rd32(sp0 + 4u))
                {
                    wr32(sp0 + 4u, ecx);
                    wr32(sp0 - 4u, edi);
                    loc_4 = edi;
                }
            }
        }
        wr32(sp0 - 8u, loc_8 - 1u);
        if (loc_8 != 1u)
        {
            edi = edi + 0x20u;
            loc_8 = loc_8 - 1u;
            goto L_101eda79;
        }
        if (loc_4 != 0u)
        {
            eax = loc_4;
            t18 = (uint32_t)(int16_t)rd16(eax + 8u);
            t19 = rd16(eax + 6u);
            wr32(sp0 + 4u, t18);
            t20 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, (uint32_t)(int16_t)t19);
            wrf32(sp0 - 0x18u, (float)(double)(float)(double)(int32_t)t20);
            d21 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
            wrf32(sp0 - 0x1cu, (float)d21);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d21), cow_f2bits((double)(float)(double)(int32_t)t20));
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ed9e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
