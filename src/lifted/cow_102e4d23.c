/* f_0x102e4d23 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4d23(Guest* g)
{
    double d4;
    double d5;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
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
        ebx = in_ebx;
        x0 = (double)rdf32(COW_IMG(0x1032a9f0u));
L_102e4d5a: ;
        t1 = (uint32_t)(int8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(rd8(eax) << 3u) >> 3u);
        t2 = rd16(eax);
        wr32(sp0 + 0xcu, t1);
        t3 = (uint32_t)(int8_t)(uint32_t)((int32_t)(uint32_t)(int8_t)(t2 >> 5u << 3u) >> 3u);
        d4 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wr32(sp0 + 0xcu, t3);
        wrf32(edx, (float)d4);
        d5 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 4u, (float)d5);
        wrf32(edx + 8u, (float)0.0);
        t6 = rd16(eax) >> 0xau;
        wr32(sp0 + 0xcu, t6);
        d7 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10346178u)));
        wrf32(edx + 0xcu, (float)d7);
        if (eax + 2u < edi)
        {
            eax = eax + 2u;
            edx = edx + 0x10u;
            ebx = t1;
            goto L_102e4d5a;
        }
        eax = eax + 2u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t8 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t8;
        t9 = rd32(self + 0x1058u);
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t8);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4d23(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4d23(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
