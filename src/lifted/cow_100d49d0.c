/* f_0x100d49d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d49d0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0xa00u) != 0u)
    {
        eax = rd32(self + 0xa00u);
        goto L_100d4a09;
    }
    eax = rd32(self + 0xa00u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100279b0u), arg2, 0);
    t1 = g->edx;
    g->eax = self + 0x6a8u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x10027cf0u), arg2, 1, self + 0x6a8u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x100d4a90u), self, 2, arg1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_100d4a09: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100279b0u), arg2, 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x100d4a90u), self, 2, arg1, arg2);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d49d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d49d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
