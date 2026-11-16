/* f_0x10040e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10040e20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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

    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x104u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            esi = rd32(eax);
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
            t1 = g->edx;
            t2 = rd16(esi + 0x36u) * 3u;
            g->edx = t1;
            t3 = rd32(COW_IMG(0x1047cf7cu));
            t4 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t5 = cow_call_regs(g, COW_IMG(0x1003fd70u), t2, esi, g->edx, 1, 3, 0x24u, t2, self + 0xa0u);
            t6 = g->edx;
            g->edx = t6;
            t7 = cow_thiscall(g, rd32(t4 + 0x90u), t3, 5, COW_IMG(0x1047bbc8u), t5, 0x24u, t2, self + 0xa0u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10040e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10040e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
