/* f_0x10264780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10264780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0xa4u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0xccu) - 1u;
    t4 = rd32(self + 0xccu);
    wr32(self + 0xccu, t3);
    if (t4 != 1u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        if (rd32(self + 0xc4u) == 0u)
        {
            eax = rd32(self + 0xc4u);
        }
        else
        {
            eax = rd32(self + 0xc4u);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t5 = cow_fastcall(g, COW_IMG(0x102645a0u), self, edx, 0);
            t6 = g->ecx;
            t7 = g->edx;
            eax = t5;
            ecx = t6;
            edx = t7;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0xa4u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
