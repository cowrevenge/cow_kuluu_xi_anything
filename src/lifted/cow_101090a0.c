/* f_0x101090a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101090a0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 4u);
    wr32(self, COW_IMG(0x10332e30u));
    if (t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        wr16(eax + 2u, (uint16_t)(rd16(eax + 2u) - 1u));
        if (rd16(rd32(self + 4u) + 2u) == 0u)
        {
            esi = rd32(self + 4u);
            if (esi != 0u)
            {
                t2 = rd32(esi + 4u);
                g->eax = t2;
                g->ecx = self;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t3 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, t2);
                t4 = g->ecx;
                t5 = g->edx;
                g->esp = sp0 - 8u;
                t6 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
                eax = t6;
            }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101090a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101090a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
