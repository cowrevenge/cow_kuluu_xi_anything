/* f_0x102e4c18 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4c18(Guest* g)
{
    double d2;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2 >= rd32(self + 0x18u) + rd32(self + 0x1058u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2)
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        ecx = rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
        edi = rd32(self + 0x18u) + rd32(self + 0x1058u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        x0 = (double)rdf32(COW_IMG(0x1033976cu));
L_102e4c4d: ;
        t1 = rd8(eax) & 0xfu;
        wr32(sp0 + 0xcu, t1);
        d2 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 8u, (float)d2);
        wrf32(edx + 4u, (float)d2);
        wrf32(edx, (float)d2);
        t3 = rd8(eax) >> 4u;
        wr32(sp0 + 0xcu, t3);
        d4 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * x0);
        wrf32(edx + 0xcu, (float)d4);
        if (eax + 1u < edi)
        {
            eax = eax + 1u;
            ecx = t3;
            edx = edx + 0x10u;
            goto L_102e4c4d;
        }
        eax = eax + 1u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t5 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t5;
        t6 = rd32(self + 0x1058u);
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t5);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e4c18(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4c18(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
