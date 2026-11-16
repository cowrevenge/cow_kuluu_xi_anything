/* f_0x10159040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10159040(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x52u) != 1u)
    {
        eax = in_eax;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, self + 0x28u, g->edx, 1, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->esp = sp0 - 8u;
            t3 = cow_fastcall(g, COW_IMG(0x10157b40u), self, edx, 3, eax, 0u, 0u);
            t4 = g->edx;
            g->edx = t4;
            t5 = cow_thiscall(g, COW_IMG(0x10159740u), self + 0x28u, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
        if ((rd8(self + 0x5cu) & 0xcu) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
            loc_8 = 0u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu);
            loc_8 = 1u;
        }
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10157660u), self, 1, loc_8);
        t7 = rd32(self + 0x5cu);
        wr8(self + 0x52u, 0u);
        t8 = (t7 & 0xffffff00u) | (t7 & 0xf3u);
        wr32(self + 0x5cu, t8);
        eax = t8;
    }
    wr32(self + 0x60u, 0xffffffffu);
    wr32(self + 0x64u, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
