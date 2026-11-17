/* f_0x101a6580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6580(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = g->edx;
    t3 = rd32(rd32(t1) + 0x15cu);
    t4 = rd32(self + 0x18u);
    wr32(self + 0x24u, t3);
    if (t4 != 0u)
    {
        eax = t4;
        edx = t2;
    }
    else
    {
        eax = t4;
        ecx = t3;
        edx = t2;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 8u);
        t6 = g->edx;
        if (t5 == 0u)
        {
            edx = t6;
            eax = 0u;
        }
        else
        {
            eax = t5;
            edx = t6;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t7 = cow_thiscall(g, COW_IMG(0x101b9650u), eax, 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        wr32(self + 0x18u, eax);
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101b9690u), rd32(self + 0x18u), 0);
    t9 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
    g->eax = t9;
    g->edx = rd32(self + 8u);
    t10 = rd32(self + 8u);
    t11 = cow_thiscall(g, COW_IMG(0x101a6510u), self, 1, t9);
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
