/* f_0x10075120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10075120(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100751b0u), self, 1, arg1);
    t1 = g->edx;
    if (rd32(self + 0xd4cu) != 0u)
    {
        eax = rd32(self + 0xd4cu);
        wr32(arg1 + 0xcu, eax);
        if (rd32(rd32(self + 0xd4cu) + 8u) != 0u)
        {
            eax = rd32(rd32(self + 0xd4cu) + 8u);
            wr32(eax + 0xcu, arg1);
        }
        t4 = rd32(rd32(self + 0xd4cu) + 8u);
        wr32(arg1 + 8u, t4);
        t5 = rd32(self + 0xd4cu);
        wr32(t5 + 8u, arg1);
        edx = t5;
        zf = rd32(self + 0xd50u) == rd32(self + 0xd4cu);
    }
    else
    {
        edx = t1;
        t2 = rd32(self + 0xd28u);
        wr32(arg1 + 0xcu, t2);
        if (rd32(t2 + 8u) == 0u)
        {
            eax = t2;
        }
        else
        {
            eax = t2;
            ecx = rd32(t2 + 8u);
            wr32(ecx + 0xcu, arg1);
        }
        t3 = rd32(eax + 8u);
        wr32(arg1 + 8u, t3);
        wr32(eax + 8u, arg1);
        zf = rd32(self + 0xd50u) == eax;
    }
    if (zf)
    {
        wr32(self + 0xd50u, arg1);
    }
    wr32(arg1 + 4u, COW_IMG(0x10075000u));
    wr8(arg1 + 0x20u, 1u);
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10075120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10075120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
