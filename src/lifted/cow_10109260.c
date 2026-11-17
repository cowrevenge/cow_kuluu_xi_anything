/* f_0x10109260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109260(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self != arg1)
    {
        if (rd32(self + 4u) != 0u)
        {
            eax = rd32(self + 4u);
            wr16(eax + 2u, (uint16_t)(rd16(eax + 2u) - 1u));
            if (rd16(rd32(self + 4u) + 2u) != 0u)
            {
                edx = in_edx;
            }
            else
            {
                edi = rd32(self + 4u);
                if (edi == 0u)
                {
                    edx = in_edx;
                }
                else
                {
                    t1 = rd32(edi + 4u);
                    g->eax = t1;
                    g->ecx = self;
                    g->edx = in_edx;
                    g->esp = sp0 - 0xcu;
                    t2 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, t1);
                    t3 = g->ecx;
                    t4 = g->edx;
                    g->edx = t4;
                    g->esp = sp0 - 0x10u;
                    t5 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
            }
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
        }
        if (rd32(arg1 + 4u) != 0u)
        {
            eax = rd32(arg1 + 4u);
            wr32(self + 4u, eax);
            wr16(eax + 2u, (uint16_t)(rd16(eax + 2u) + 1u));
        }
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
