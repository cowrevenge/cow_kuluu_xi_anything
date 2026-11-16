/* f_0x102e5039 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e5039(Guest* g)
{
    double d11;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    double x1;
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
        x0 = (double)rdf32(COW_IMG(0x1032ac88u));
L_102e5072: ;
        t1 = (uint16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(eax) >> 0x14u << 6u) >> 6u);
        t2 = rd32(eax);
        wr32(sp0 + 4u, t1);
        t3 = (uint32_t)(int16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(rd16(eax) << 6u) >> 6u);
        wr32(sp0 + 0xcu, t3);
        t4 = (uint32_t)(int16_t)(uint32_t)((int32_t)(uint32_t)(int16_t)(t2 >> 0xau << 6u) >> 6u);
        t5 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t4);
        t6 = rd16(sp0 + 4u);
        wrf32(edx, (float)fr(g, (double)(int32_t)t5 * x0));
        t7 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, (uint32_t)(int16_t)t6);
        wrf32(edx + 4u, (float)fr(g, (double)(int32_t)t7 * x0));
        d8 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 8u, (float)d8);
        t9 = rd32(eax) >> 0x1eu;
        t10 = rd32(eax);
        wr32(sp0 + 0xcu, t9);
        if ((int32_t)(t10 >> 0x1eu) >= 0)
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
        }
        else
        {
            x1 = (double)(int32_t)rd32(sp0 + 0xcu);
            x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
        }
        d11 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032a84cu)));
        wrf32(edx + 0xcu, (float)d11);
        if (eax + 4u < ebx)
        {
            eax = eax + 4u;
            edx = edx + 0x10u;
            goto L_102e5072;
        }
        eax = eax + 4u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t12 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t12;
        t13 = rd32(self + 0x1058u);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t12);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5039(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5039(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
