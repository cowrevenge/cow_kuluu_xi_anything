/* f_0x10265c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10265c80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->eax = self + 0x14u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329230u)), self, 2, self + 0x14u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), ecx, 2, edi, 0xffffffffu);
        t5 = g->ecx;
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t5, 1, edi);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->eax = eax;
    t9 = rd32(COW_IMG(0x103292f4u));
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, t9, self + 0x30u, 1, self + 0x30u);
    t11 = g->ecx;
    g->edx = self + 0x18u;
    t12 = cow_thiscall(g, t9, t11, 1, self + 0x18u);
    t13 = g->edx;
    t14 = cow_fastcall(g, COW_IMG(0x10265bb0u), self + 8u, t13, 0);
    t15 = g->edx;
    g->esp = sp0;
    g->edx = t15;
    return cow_tailcall(g, COW_IMG(0x10265bb0u), t14, self + 4u, t15);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265c80(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
