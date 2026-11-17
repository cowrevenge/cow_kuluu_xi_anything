/* f_0x101611a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101611a0(Guest* g)
{
    uint32_t eax;
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

    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x18u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x68u);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
        wr32(self + 0x18u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, COW_IMG(0x101c8290u), eax, 1, 0x20u);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t7, 1, 1, 0x1eu);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x101c8380u), rd32(self + 0x18u), 1, t8);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10161160u), self, edx, 0);
    wr32(self + 0x20u, 0x5du);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101611a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101611a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
