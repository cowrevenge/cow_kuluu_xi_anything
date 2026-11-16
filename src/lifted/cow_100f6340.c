/* f_0x100f6340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100f6340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u)
    {
        edx = in_edx;
    }
    else
    {
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 6u, arg1 + 0xc48u, 0x200u, 0u);
        t1 = g->edx;
        wr16(arg1 + 0xc8u, 0u);
        wr16(arg1 + 0xcau, 0u);
        wr8(arg1 + 0xccu, 0u);
        edx = t1;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100f5f70u), arg1, 1, arg2);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0x17u)
    {
        eax = t2;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        if (rd8(arg1 + 0xccu) == 0u)
        {
            if (rd32(arg1) != 0u)
            {
                ecx = rd32(arg1);
                t5 = rd16(arg1 + 0xc8u);
                wr16(ecx + 0x16u, (uint16_t)t5);
                edx = (edx & 0xffff0000u) | t5;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f6340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
