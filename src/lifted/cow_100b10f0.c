/* f_0x100b10f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b10f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) == 0u)
    {
        if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            edx = rd16(self + 2u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t1 = cow_thiscall(g, COW_IMG(0x100af960u), self, 1, 2u);
            t2 = g->edx;
            cow_thiscall(g, COW_IMG(0x10093430u), rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u), 1, t1);
        }
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    }
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b10f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b10f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
