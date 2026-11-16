/* f_0x102e7958 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102e7958(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 8u);
    wr32(self, COW_IMG(0x10346494u));
    if (t1 != 0u)
    {
        eax = t1;
        if (rd32(self + 0x14u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x14u);
            g->edx = rd32(eax);
            t2 = rd32(eax);
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t2 + 0xe0u), ecx, 2, eax, ecx);
            t3 = g->edx;
            edx = t3;
        }
        if (rd32(self + 0x10u) == 0u)
        {
            ecx = rd32(self + 0x10u);
        }
        else
        {
            ecx = rd32(self + 0x10u);
            t4 = rd32(self + 8u);
            g->edx = rd32(rd32(self + 8u));
            t5 = rd32(rd32(self + 8u));
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(t5 + 0xe0u), ecx, 2, t4, ecx);
            t6 = g->ecx;
            t7 = g->edx;
            ecx = t6;
            edx = t7;
        }
        t8 = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 8u), ecx, 1, t8);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7958(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102e7958(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
