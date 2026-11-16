/* f_0x10233e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10233e30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10233e5e;
    if ((uint32_t)(int16_t)arg1 == 6u) goto L_10233e53;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10222150u), self, 2, arg1, arg2);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10233e53: ;
    g->eax = (uint32_t)(int16_t)arg1 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10234080u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10233e5e: ;
    if (rd8(self + 0x88u) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x88u);
        edx = in_edx;
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg1 - 5u & 0xffffff00u) | rd8(self + 0x88u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x10221c30u), self, 0);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x10221c50u), self, 0);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_cdecl(g, COW_IMG(0x10233ba0u), 1, arg2 - 1u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10233e30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
