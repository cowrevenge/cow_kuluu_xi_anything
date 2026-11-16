/* f_0x10118980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10118980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edi = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, arg2);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        t3 = rd16(arg1);
        wr16(eax + 0x2au, (uint16_t)t3);
        t4 = rd16(arg1 + 2u);
        wr16(eax + 0x2cu, (uint16_t)t4);
        t5 = rd16(arg1 + 4u);
        t6 = rd16(arg1);
        wr16(eax + 0x2eu, (uint16_t)(t5 - t6));
        t7 = rd16(arg1 + 6u);
        t8 = rd16(arg1 + 2u);
        wr16(eax + 0x30u, (uint16_t)(t7 - t8));
        edx = ((edx | t3 | t4) & 0xffff0000u) | (uint16_t)(t7 - t8);
    }
    if ((uint32_t)(int16_t)rd16(self + 0x4cu) == arg2)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x4cu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10118170u), self, 1, eax);
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10118980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
