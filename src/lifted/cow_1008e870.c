/* f_0x1008e870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008e870(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(self + 0x120u) >> 8u & 2u) != 0u)
    {
        eax = rd32(self + 0x120u);
        if ((int8_t)rd8(self + 0x12cu) < 0)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x12cu);
            if ((uint16_t)(rd16(self + 0x210u) + 0x7000u) != 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x210u) + 0x7000u);
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t1 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
                t2 = g->edx;
                if (t1 != 0u)
                {
                    eax = t1;
                    edx = t2;
                    t3 = rd32(eax + 0x1538u);
                    g->esp = sp0 - 4u;
                    cow_call_regs(g, COW_IMG(0x100936c0u), t3, self, g->edx, 0, 1, t3);
                    t4 = (rd32(self + 0x12cu) & 0xffffff00u) | (rd32(self + 0x12cu) & 0x7fu);
                    wr32(self + 0x12cu, t4);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008e870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
