/* f_0x10160e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10160e40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10160ca0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x61cu) == 0u)
    {
        eax = rd32(self + 0x61cu);
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x68u);
        t4 = g->edx;
        if (t3 == 0u)
        {
            edx = t4;
            eax = 0u;
        }
        else
        {
            eax = t3;
            edx = t4;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
        wr32(self + 0x61cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 0x20u);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t9, 1, 1, 0x1du);
        t11 = g->edx;
        cow_thiscall(g, COW_IMG(0x101c8380u), rd32(self + 0x61cu), 1, t10);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10160e40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10160e40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
