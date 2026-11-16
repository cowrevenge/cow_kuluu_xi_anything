/* f_0x102243d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102243d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1021e830u), rd32(COW_IMG(0x10667154u)), 0);
    t1 = g->edx;
    g->eax = rd32(COW_IMG(0x105781f8u));
    g->edx = t1;
    t2 = rd32(COW_IMG(0x105781f8u));
    t3 = cow_thiscall(g, COW_IMG(0x102211b0u), t2 + 0x20u, 1, 2u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
    t6 = g->edx;
    if (rd8(self + 0xd2u) == 0u)
    {
        edx = t6;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | rd8(self + 0xd2u);
        t7 = rd32(rd32(COW_IMG(0x10578474u)) + 8u);
        g->edx = t7;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
        t8 = g->edx;
        edx = t8;
    }
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
        t9 = rd32(self + 0x30u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x10224120u), self, 1, t9);
        t11 = g->edx;
        if ((int32_t)t10 < 0)
        {
            eax = t10;
            edx = t11;
        }
        else
        {
            eax = t10;
            edx = t11;
            wr32(self + rd32(self + 0x64u) * 4u + 0x70u, eax);
        }
    }
    if (rd8(self + 0xd1u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xd1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xd1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103861d0u));
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102243d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102243d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
