/* f_0x100401c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100401c0(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd16(self + 0x32u) & 0x8080u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        wr16(self + 0x32u, rd16(self + 0x32u) & 0x7f7fu);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x1003fcf0u), in_eax, self, g->edx, 1, 0);
        t2 = g->edx;
        if (rd32(t1 + 4u) == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, g->edx, 1, 0);
            t4 = g->edx;
            if (rd32(t3 + 4u) == 0u)
            {
                eax = rd32(t3 + 4u);
                edx = t4;
            }
            else
            {
                eax = rd32(t3 + 4u);
                g->eax = eax;
                g->edx = rd32(eax);
                t5 = rd32(eax);
                g->esp = sp0 - 4u;
                t6 = cow_thiscall(g, rd32(t5), eax, 1, 1u);
                t7 = g->edx;
                eax = t6;
                edx = t7;
            }
            g->edx = edx;
            g->esp = sp0 - 4u;
            t8 = cow_call_regs(g, COW_IMG(0x1003fcf0u), eax, self, g->edx, 1, 0);
            t9 = g->edx;
            wr32(t8 + 4u, 0u);
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100401c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100401c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
