/* f_0x102e4669 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4669(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
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
        edi = rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        x0 = (double)rdf32(COW_IMG(0x10346180u));
L_102e46a7: ;
        t1 = rd32(eax) & 0x3ffu;
        t2 = rd32(eax);
        wr32(sp0 + 0xcu, t1);
        if ((int32_t)(t2 & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(edx, (float)fr(g, x1 * x0));
        t3 = rd32(eax) >> 0xau & 0x3ffu;
        t4 = rd32(eax);
        wr32(sp0 + 0xcu, t3);
        if ((int32_t)(t4 >> 0xau & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(edx + 4u, (float)fr(g, x1 * x0));
        t5 = rd32(eax) >> 0x14u & 0x3ffu;
        t6 = rd32(eax);
        wr32(sp0 + 0xcu, t5);
        if ((int32_t)(t6 >> 0x14u & 0x3ffu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        wrf32(edx + 8u, (float)fr(g, x1 * x0));
        t7 = rd32(eax) >> 0x1eu;
        t8 = rd32(eax);
        wr32(sp0 + 0xcu, t7);
        if ((int32_t)(t8 >> 0x1eu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        d9 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032a84cu)));
        wrf32(edx + 0xcu, (float)d9);
        if (eax + 4u < edi)
        {
            eax = eax + 4u;
            edx = edx + 0x10u;
            goto L_102e46a7;
        }
        eax = eax + 4u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t10 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t10;
        t11 = rd32(self + 0x1058u);
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t10);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4669(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4669(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
