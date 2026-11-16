/* f_0x102e4a36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e4a36(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 0x18u) + rd32(self + 0x1058u) * 2u + rd32(self + 0x1054u) * arg2 + rd32(self + 0x1050u) * rd32(sp0 + 4u);
    t2 = rd32(self + 0x18u);
    t3 = rd32(self + 0x1054u);
    t4 = rd32(self + 0x1050u);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t2 + t3 * arg2 + t4 * t5 >= t1)
    {
        eax = t2 + t3 * arg2 + t4 * t5;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = t2 + t3 * arg2 + t4 * t5;
        edx = rd32(sp0 + 0xcu);
L_102e4a68: ;
        t6 = self + rd8(eax) * 0x10u + 0x30u;
        esi = t6;
        edi = edx;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        t7 = rd8(eax + 1u);
        wr32(sp0 + 0xcu, t7);
        t8 = rd32(sp0 + 4u);
        d9 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329e94u)));
        wrf32(edx + 0xcu, (float)d9);
        if (eax + 2u < t8)
        {
            eax = eax + 2u;
            edx = edx + 0x10u;
            goto L_102e4a68;
        }
        eax = eax + 2u;
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
void cow_adapter_102e4a36(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e4a36(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
