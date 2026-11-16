/* f_0x102e48e5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e48e5(Guest* g)
{
    double d2;
    double d4;
    double d6;
    double d8;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t3;
    uint32_t t5;
    uint32_t t7;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2 >= rd32(self + 0x18u) + rd32(self + 0x1058u) * 2u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2)
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
        edi = rd32(self + 0x18u) + rd32(self + 0x1058u) * 2u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        x0 = (double)rdf32(COW_IMG(0x10346184u));
L_102e491b: ;
        t1 = rd8(eax) >> 5u;
        wr32(sp0 + 0xcu, t1);
        d2 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx, (float)d2);
        t3 = rd8(eax) >> 2u & 7u;
        wr32(sp0 + 0xcu, t3);
        d4 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 4u, (float)d4);
        t5 = rd8(eax) & 3u;
        wr32(sp0 + 0xcu, t5);
        d6 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032a84cu)));
        wrf32(edx + 8u, (float)d6);
        t7 = rd8(eax + 1u);
        wr32(sp0 + 0xcu, t7);
        d8 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(edx + 0xcu, (float)d8);
        if (eax + 2u < edi)
        {
            eax = eax + 2u;
            edx = edx + 0x10u;
            goto L_102e491b;
        }
        eax = eax + 2u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t9 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t9;
        t10 = rd32(self + 0x1058u);
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t9);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e48e5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e48e5(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
