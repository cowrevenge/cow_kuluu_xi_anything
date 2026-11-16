/* f_0x102e5c3a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e5c3a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1048u) != 0u)
    {
        t1 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t1);
        wr32(sp0 + 0xcu, t2);
    }
    t3 = rd32(self + 0x1088u) != rd32(self + 0x1058u);
    t4 = arg2 + rd32(self + 0x1040u);
    t5 = arg1 + rd32(self + 0x1034u);
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x102e5838u), self, 3, t5, t4, t3);
    t7 = g->edx;
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        edx = t7;
        t8 = rd32(self + 0x1058u) << 4u;
        t9 = rd32(sp0 + 0xcu);
        t10 = rd32(self + 0x1030u);
        t11 = rd32(self + 0x106cu);
        t12 = rd32(self + 0x1070u);
        esi = t9;
        edi = t10 * 0x10u + t11 - t12 * 0x10u;
        ecx = t8 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t8 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(self + 0x108cu, 1u);
        eax = t8;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5c3a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5c3a(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
