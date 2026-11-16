/* f_0x10207490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10207490(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0xcu) != 0u)
        {
            eax = rd32(self + 0xcu);
            edx = in_edx;
        }
        else
        {
            g->eax = rd32(self);
            g->edx = in_edx;
            t1 = rd32(self);
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
            t3 = g->edx;
            g->edx = t3;
            t4 = rd32(COW_IMG(0x10663740u));
            t5 = cow_thiscall(g, COW_IMG(0x101f1120u), t4, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(self + 0xcu, t5);
            if (t5 == 0u)
            {
                eax = t5;
                edx = t7;
            }
            else
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                edi = t2;
                t8 = (ecx & 0xffffff00u) | rd8(eax + 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t9 = cow_thiscall(g, COW_IMG(0x101d3880u), rd32(COW_IMG(0x106631d4u)), 2, t8, edi);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
            wr8(self + 8u, 1u);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207490(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
