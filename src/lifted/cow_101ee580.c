/* f_0x101ee580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ee580(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
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

    if ((rd16(self + 0x14u) & 0x40u) != 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x14u);
        wr16(self + 0x14u, (uint16_t)((eax & 0xffffff00u) | (uint8_t)(eax | 0x40u)));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
        t2 = g->edx;
        wr32(self + 0xb0u, t1 + 3u);
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
            edx = t2;
        }
        else
        {
            eax = rd32(self + 8u);
            edx = t2;
            wr8(eax + 0x62u, 0u);
            t3 = rd32(self + 8u);
            wr8(t3 + 0x84u, 0u);
            eax = t3;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, 0u, 2u);
        t7 = g->edx;
        wr32(self + 0xb4u, 0u);
        wr32(self + 0xb8u, 0u);
        g->edx = t7;
        t8 = cow_call_regs(g, COW_IMG(0x101efad0u), t6, self, g->edx, 0, 2, 0xffu, 0x10u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ee580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
