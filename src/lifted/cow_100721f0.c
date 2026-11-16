/* f_0x100721f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100721f0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(self + 0x1au) >> 1u & 1u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x1au);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x1au);
        wr16(self + 0x1au, (uint16_t)((eax & 0xffffff00u) | (uint8_t)(eax | 2u)));
        g->eax = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_stdcall(g, COW_IMG(0x10073b80u), 1, self);
        t2 = g->edx;
        if (!(rd8(self + 0x1au) & 1u))
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            t3 = rd32(self + 0x14u);
            wr8(self + 0x1au, rd8(self + 0x1au) & 0xfeu);
            g->eax = t3;
            g->esp = sp0 - 4u;
            t4 = cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, t3);
            g->edx = rd32(self);
            t5 = rd32(self);
            t6 = cow_thiscall(g, rd32(t5 + 0x18u), self, 1, 1u);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100721f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100721f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
