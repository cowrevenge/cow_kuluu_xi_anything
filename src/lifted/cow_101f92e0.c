/* f_0x101f92e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f92e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 2u)
    {
        t1 = rd32(self + 0x6b4u);
        wr32(self + 0x6b8u, 0u);
        if (t1 == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = t1;
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(self + 0x6b4u, 0u);
            ecx = t2;
            edx = t3;
        }
        if (rd32(self + 0x6b4u) == 0u)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t4 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x200u);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(self + 0x6b4u, t4);
            ecx = t5;
            edx = t6;
        }
        if (rd32(self + 0x6bcu) != 0u)
        {
            eax = rd32(self + 0x6bcu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(self + 0x6bcu, 0u);
            ecx = t7;
            edx = t8;
        }
        if (rd32(self + 0x6bcu) == 0u)
        {
            g->esp = sp0 - 4u;
            t9 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x3200u);
            wr32(self + 0x6bcu, t9);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f92e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f92e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
