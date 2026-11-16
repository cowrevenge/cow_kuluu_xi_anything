/* f_0x10136a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10136a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10136450u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(COW_IMG(0x10485a70u)) == 1u)
    {
        eax = t1 & 0xffffff00u;
        ecx = (t2 & 0xffffff00u) | 1u;
    }
    else
    {
        eax = t1 & 0xffffff00u;
        ecx = (t2 & 0xffffff00u) | 1u;
        wr8(rd32(self + 8u) + 0x84u, (uint8_t)eax);
    }
    t4 = rd32(self + 8u);
    wr8(t4 + 0x86u, (uint8_t)eax);
    wr8(rd32(COW_IMG(0x104e1d4cu)) + 0x87u, (uint8_t)ecx);
    g->edx = t4;
    t5 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t7 = g->edx;
    wr32(self + 0x58u, t6);
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
