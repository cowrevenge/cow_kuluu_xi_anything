/* f_0x102e4e65 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4e65(Guest* g)
{
    double d1;
    double d3;
    double d5;
    double d7;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t4;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2 >= rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2)
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
        esi = rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        x0 = (double)rdf32(COW_IMG(0x1032a778u));
L_102e4e99: ;
        wr32(sp0 + 0xcu, (uint32_t)(int8_t)rd8(eax));
        d1 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx, (float)d1);
        t2 = (uint32_t)(int8_t)rd8(eax + 1u);
        wr32(sp0 + 0xcu, t2);
        d3 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 4u, (float)d3);
        t4 = (uint32_t)(int8_t)rd8(eax + 2u);
        wr32(sp0 + 0xcu, t4);
        d5 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 8u, (float)d5);
        t6 = (uint32_t)(int8_t)rd8(eax + 3u);
        wr32(sp0 + 0xcu, t6);
        d7 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 0xcu, (float)d7);
        if (eax + 4u < esi)
        {
            eax = eax + 4u;
            edx = edx + 0x10u;
            goto L_102e4e99;
        }
        eax = eax + 4u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t8 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t8;
        t9 = rd32(self + 0x1058u);
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t8);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4e65(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4e65(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
