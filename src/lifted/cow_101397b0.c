/* f_0x101397b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101397b0(Guest* g)
{
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 <= 0)
    {
        edx = in_edx;
    }
    else
    {
        t1 = (self & 0xffff0000u) | rd16(arg2);
        t2 = (in_edx & 0xffffff00u) | rd8(arg2 + 2u);
        g->edx = t2;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10139e30u), rd32(COW_IMG(0x105781f0u)), 3, t2, t1, arg1);
        t3 = g->edx;
        edx = t3;
    }
    t4 = rd32(rd32(COW_IMG(0x105781f0u)) + 8u);
    g->eax = rd32(COW_IMG(0x105781f0u));
    t5 = rd32(COW_IMG(0x105781f0u));
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t4, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101397b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101397b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
