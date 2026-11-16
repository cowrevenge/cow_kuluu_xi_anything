/* f_0x101f66b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f66b0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    t1 = rd16(self + 0x1eu);
    t2 = rd16(self + 0x18u);
    t3 = rd16(self + 0x20u);
    wr16(self + 0x1cu, (uint16_t)(((in_eax & 0xffff0000u) | t1) + ((in_edx & 0xffff0000u) | t2)));
    if ((int16_t)(((in_eax & 0xffff0000u) | t1) + ((in_edx & 0xffff0000u) | t2)) <= (int16_t)t3)
    {
        eax = (in_eax & 0xffff0000u) | t1;
        edx = (in_edx & 0xffff0000u) | t2;
        wr16(self + 0x1au, (uint16_t)eax);
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | t1;
        edx = (in_edx & 0xffff0000u) | t2;
        edi = (in_edi & 0xffff0000u) | t3;
        wr16(self + 0x1cu, (uint16_t)edi);
        wr16(self + 0x1au, (uint16_t)(eax - edx));
        if ((int16_t)(eax - edx) >= 0)
        {
            eax = eax - edx;
        }
        else
        {
            eax = eax - edx;
            wr16(self + 0x1au, 0u);
        }
    }
    if ((int16_t)rd16(self + 0x22u) < 0)
    {
        wr16(self + 0x22u, 0u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f66b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f66b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
