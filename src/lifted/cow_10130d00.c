/* f_0x10130d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10130d00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x105781a0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781a0u));
            edx = in_edx;
        }
        else
        {
            eax = rd32(COW_IMG(0x105781a0u));
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
            t1 = g->edx;
            g->eax = rd32(self);
            g->edx = t1;
            t2 = rd32(self);
            t3 = cow_thiscall(g, rd32(t2 + 0x54u), self, 0);
            t4 = g->edx;
            g->edx = t4;
            t5 = cow_thiscall(g, COW_IMG(0x10134d50u), rd32(COW_IMG(0x105781a0u)), 1, t3);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10130d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10130d00(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
