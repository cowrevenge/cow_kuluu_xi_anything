/* f_0x100d8ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100d8ba0(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        edi = 1u;
    }
    else
    {
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, t1, 0x32u);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 != 0u)
        {
            edi = 1u;
        }
        else
        {
            ecx = t3;
            edx = t4;
            if (rd32(arg1 + 0x460u) != 0u)
            {
                eax = rd32(arg1 + 0x460u);
                edi = 1u;
            }
            else
            {
                eax = rd32(arg1 + 0x460u);
                t5 = rd32(arg1 + 0x470u);
                wr32(arg1 + 0x460u, 3u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t6 = cow_thiscall(g, rd32(COW_IMG(0x103291d8u)), t5, 3, t5, 1u, 0u);
                t7 = g->ecx;
                eax = t6;
                ecx = t7;
                edi = 0u;
            }
            t8 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), ecx, 1, t8);
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8ba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
