/* f_0x102e5d04 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e5d04(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = arg2 + rd32(self + 0x1040u);
    t2 = arg1 + rd32(self + 0x1034u);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x102e5838u), self, 3, t2, t1, 1u);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
        t5 = rd32(self + 0x1058u) << 4u;
        t6 = rd32(self + 0x1030u);
        t7 = rd32(self + 0x106cu);
        t8 = rd32(self + 0x1070u);
        esi = t6 * 0x10u + t7 - t8 * 0x10u;
        edi = arg3;
        ecx = t5 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t5 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        if (rd32(self + 0x10u) == 0u)
        {
            eax = t5;
        }
        else
        {
            eax = t5;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t9 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, arg3);
            t10 = g->edx;
            eax = t9;
            edx = t10;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5d04(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5d04(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
