/* f_0x101ccc40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ccc40(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    wr32(sp0 - 0x64u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall(g, COW_IMG(0x101cc720u), self, 2, arg1, sp0 - 0x54u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr32(sp0 - 0x60u, eax);
        wr32(sp0 - 0x64u, arg2);
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t3 = cow_thiscall(g, COW_IMG(0x101cc720u), self, 2, arg2, eax);
        t4 = g->edx;
        if (t3 != 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            wr32(sp0 - 0x60u, eax);
            wr32(sp0 - 0x64u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x5cu;
            t5 = cow_thiscall(g, COW_IMG(0x101cc7f0u), self, 2, eax, eax);
            t6 = g->edx;
            if (t5 != 0u)
            {
                eax = t5;
                edx = t6;
            }
            else
            {
                edx = t6;
                wr32(sp0 - 0x60u, arg1);
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                cow_thiscall(g, COW_IMG(0x101ccba0u), self, 1, arg1);
                t7 = g->edx;
                eax = 0u;
                edx = t7;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ccc40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ccc40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
