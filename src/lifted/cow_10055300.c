/* f_0x10055300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10055300(Guest* g)
{
    double d11;
    double d14;
    double d4;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 + 8u);
    t3 = rd32(sp0 + 0xcu);
    d4 = fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(sp0 + 8u));
    wr32(self + 8u, t1);
    wrf32(sp0 + 0xcu, (float)d4);
    wr32(sp0 + 4u, t1 + 1u);
    wr32(self + 0xcu, t2);
    t5 = t1 * 0x20u + 0x20u;
    t6 = rd32(sp0 + 4u);
    wr32(self + 0x10u, t3);
    d7 = fr(g, (double)(int32_t)t6 / (double)rdf32(sp0 + 0xcu));
    wrf32(self + 0x14u, (float)d7);
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10028640u), t5, t2, t3, 1, 2, t5, 4u);
    t9 = g->edx;
    wr32(self + 4u, t8);
    cow_thiscall(g, COW_IMG(0x100554b0u), self, 0);
    t10 = rd32(self + 8u);
    wr32(sp0 + 8u, t10);
    d11 = fr(g, (double)rdf32(sp0 + 0xcu) / (double)(int32_t)rd32(sp0 + 8u));
    wr32(sp0 + 0xcu, 0u);
    wrf32(sp0 + 8u, (float)d11);
    if ((int32_t)t10 < 0)
    {
        eax = t10;
    }
    else
    {
        eax = 0u;
        ecx = 0u;
L_10055371: ;
        t12 = rd32(self + 4u);
        t13 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, ecx + 1u);
        d14 = fr(g, (double)(int32_t)t13 * (double)rdf32(sp0 + 8u));
        wrf32(eax + t12, (float)d14);
        wr32(eax + rd32(self + 4u) + 8u, COW_IMG(0x100554a0u));
        if ((int32_t)(ecx + 1u) <= (int32_t)rd32(self + 8u))
        {
            eax = eax + 0x20u;
            ecx = ecx + 1u;
            goto L_10055371;
        }
        eax = eax + 0x20u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10055300(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
