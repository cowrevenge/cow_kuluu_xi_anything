/* f_0x10216720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10216720(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(self + 0x32u, 0u);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t4 = g->edx;
        if (rd32(COW_IMG(0x10664530u)) == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            ecx = rd32(COW_IMG(0x10664530u));
            edx = t4;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x10216a30u), ecx, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    if (rd32(self + 0x14u) != 0u)
    {
        ecx = rd32(self + 0x14u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(self + 0x14u, 0u);
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10216720(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
