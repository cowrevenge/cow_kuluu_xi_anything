/* f_0x10162510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10162510(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int8_t)rd8(self + 0x31u) > 0)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x31u);
        t1 = (eax & 0xffff0000u) | rd16(self + 0x2eu);
        t2 = (in_edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)rd8(self + 0x30u);
        t3 = (t1 & 0xffff0000u) | rd16(self + 0x2cu);
        t4 = rd32(self + 0x44u);
        t5 = rd32(self + 0x40u);
        g->esp = sp0;
        cow_fastcall(g, COW_IMG(0x101622e0u), self, t4, 6, t5, t4, t3, t2, t1, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10162510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
