/* f_0x10109340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10109340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 4u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        if (rd16(eax + 2u) <= 1u)
        {
            edx = in_edx;
        }
        else
        {
            t1 = rd32(eax + 4u);
            g->edx = in_edx;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x101092c0u), t1, self, g->edx, 0, 1, t1);
            t2 = g->edx;
            edx = t2;
        }
    }
    if (arg1 != 0u)
    {
        if ((uint16_t)arg2 != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, COW_IMG(0x101091d0u), self, 1, arg2);
            t4 = g->edx;
            if (t3 == 0u)
            {
                edx = t4;
            }
            else
            {
                eax = t3;
                esi = arg1;
                edi = eax;
                ecx = (uint16_t)arg2 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = arg2 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                wr8(eax + (uint16_t)arg2, 0u);
                edx = (uint16_t)arg2;
            }
        }
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10109340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10109340(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
