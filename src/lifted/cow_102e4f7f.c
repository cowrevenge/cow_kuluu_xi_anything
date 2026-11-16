/* f_0x102e4f7f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4f7f(Guest* g)
{
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u) >= rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u))
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u);
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u);
        edx = rd32(sp0 + 0xcu);
        ebx = rd32(self + 0x18u) + rd32(self + 0x1058u) * 4u + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u);
        x0 = (double)rdf32(COW_IMG(0x10337eb0u));
L_102e4fb4: ;
        t1 = (uint16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(eax) >> 0x15u << 5u) >> 5u);
        t2 = rd32(eax);
        wr32(sp0 + 4u, t1);
        t3 = (uint32_t)(int16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(rd16(eax) << 6u) >> 6u);
        wr32(sp0 + 0xcu, t3);
        t4 = (uint32_t)(int16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(t2 >> 0xau << 5u) >> 5u);
        t5 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t4);
        t6 = rd16(sp0 + 4u);
        d7 = fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032ac88u)));
        wrf32(edx, (float)d7);
        t8 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, (uint32_t)(int16_t)t6);
        wrf32(edx + 4u, (float)fr(g, (double)(int32_t)t8 * x0));
        d9 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 8u, (float)d9);
        wrf32(edx + 0xcu, (float)1.0);
        if (eax + 4u < ebx)
        {
            eax = eax + 4u;
            edx = edx + 0x10u;
            goto L_102e4fb4;
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
void cow_adapter_102e4f7f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4f7f(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
