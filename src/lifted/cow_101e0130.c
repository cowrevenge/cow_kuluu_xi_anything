/* f_0x101e0130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e0130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x10485640u)) != 0x10u)
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        if (rd8(COW_IMG(0x10485642u)) != 0x10u)
        {
            wr8(self + 0x1du, 0u);
        }
        else
        {
            wr8(self + 0x1cu, 1u);
            t1 = rd8(COW_IMG(0x10485643u));
            wr8(self + 0x1du, (uint8_t)t1);
            ecx = (ecx & 0xffffff00u) | t1;
        }
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        wr8(self + 0x1cu, 0u);
        wr8(self + 0x1du, rd8(COW_IMG(0x10485641u)));
    }
    t2 = rd32(self + 0xcu);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x10u, 0xffffffffu);
    if (t2 == 0u)
    {
        eax = t2;
        edx = in_edx;
    }
    else
    {
        eax = t2;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, in_edx, 1, 1, eax);
        t4 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0130(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
