/* f_0x101fa8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fa8b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(COW_IMG(0x106638a0u), (uint8_t)arg1);
    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x101fa420u), (in_eax & 0xffffff00u) | (uint8_t)arg1, self, g->edx, 0, 1, 1u);
        t1 = g->edx;
        if (rd32(self + 8u) == 0u)
        {
            edx = t1;
        }
        else
        {
            eax = rd32(self + 8u);
            edx = t1;
            wr32(eax + 0x7cu, 0u);
        }
        g->eax = rd32(self);
        g->edx = edx;
        t2 = rd32(self);
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, rd32(t2 + 8u), self, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fa8b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
