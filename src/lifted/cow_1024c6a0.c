/* f_0x1024c6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024c6a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x74u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x74u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (eax == 0u)
            {
                edx = in_edx;
            }
            else
            {
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                t2 = g->edx;
                g->edx = t2;
                cow_thiscall(g, COW_IMG(0x10071050u), self + 0x74u, 0);
                t3 = g->edx;
                wr32(self + 0x74u, 0u);
                edx = t3;
            }
        }
    }
    if (rd32(COW_IMG(0x105783ecu)) != 0u)
    {
        eax = rd32(COW_IMG(0x105783ecu));
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103718d8u));
        t4 = g->edx;
        edx = t4;
    }
    t5 = rd32(COW_IMG(0x106643a8u));
    wr8(t5 + 0x40u, 0u);
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388cc8u));
    t6 = g->edx;
    t7 = rd32(COW_IMG(0x10578478u));
    wr8(t7 + 0x65u, 0u);
    wr32(t7 + 0x68u, 0x80808080u);
    g->eax = t7;
    g->edx = t6;
    t8 = cow_thiscall(g, COW_IMG(0x10210fc0u), rd32(COW_IMG(0x10664520u)), 1, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103715f8u));
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
