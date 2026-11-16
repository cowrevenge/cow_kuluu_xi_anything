/* f_0x1022cd40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022cd40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if (rd32(self + 0x40u) == 0u)
    {
        eax = rd32(self + 0x40u);
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1022c770u), self, 1, 0xffffffffu);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            t4 = (ecx & 0xffffff00u) | rd8(eax + 0x44u);
            t5 = (edx & 0xffffff00u) | rd8(eax + 2u);
            t6 = (eax & 0xffff0000u) | rd16(eax + 0xau);
            g->eax = t6;
            g->esp = sp0 - 4u;
            t7 = cow_thiscall_cdecl(g, COW_IMG(0x10101d00u), t4, 4, t6, t5, t4, COW_IMG(0x10485a30u));
            wr32(rd32(COW_IMG(0x10578474u)) + 0x20u, (uint16_t)t7);
            g->eax = (uint16_t)t7;
            g->edx = rd32(COW_IMG(0x105781f8u));
            t8 = rd32(COW_IMG(0x105781f8u));
            t9 = cow_thiscall(g, COW_IMG(0x102211b0u), t8 + 0x20u, 1, 2u);
            t10 = g->edx;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x10150d40u), rd32(COW_IMG(0x1057847cu)), 1, 2u);
            t12 = g->edx;
            wr8(self + 0xbcu, 0u);
            eax = t11;
            edx = t12;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022cd40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022cd40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
