/* f_0x10158590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10158590(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, self, g->edx, 1, 0);
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
        wr32(eax + 0x88u, rd32(eax + 0x88u) & 0xfffffffbu);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10159740u), self, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10157780u), self, 2, 0u, 0u);
    t6 = g->edx;
    cow_thiscall(g, COW_IMG(0x10157860u), self, 2, 0u, 0u);
    t7 = rd32(COW_IMG(0x1057876cu));
    wr8(t7 + 0x58u, 0u);
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10158590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
