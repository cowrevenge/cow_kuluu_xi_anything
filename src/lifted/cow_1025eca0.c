/* f_0x1025eca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025eca0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x14u) != 1u)
    {
        eax = in_eax;
    }
    else
    {
        t1 = rd32(self + 0x5cu);
        g->eax = t1;
        g->esp = sp0 - 4u;
        t2 = cow_stdcall(g, rd32(COW_IMG(0x103291fcu)), 1, t1);   /* kernel32.dll!ResetEvent */
        eax = t2;
    }
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t3 + 0x28u), self, 1, 0u);
    t4 = g->edx;
    g->eax = rd32(self);
    t5 = rd32(self);
    t6 = cow_thiscall(g, rd32(t5 + 0x6cu), self, 0);
    g->edx = rd32(self);
    t7 = rd32(self);
    t8 = cow_thiscall(g, rd32(t7 + 0x70u), self, 0);
    t9 = g->edx;
    cow_fastcall(g, COW_IMG(0x1025e6a0u), self, t9, 0);
    t10 = g->edx;
    g->edx = t10;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025eca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025eca0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
