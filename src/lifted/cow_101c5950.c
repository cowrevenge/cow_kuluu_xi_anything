/* f_0x101c5950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101c5950(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebx = 0u;
        edi = 0u;
L_101c5960: ;
        if (rd32(edi + rd32(self)) != 0u)
        {
            eax = edi + rd32(self);
            t1 = rd32(eax + 8u);
            t2 = rd32(eax + 4u);
            t3 = rd32(self + 4u);
            g->edx = t2;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x101c4a20u), rd32(COW_IMG(0x10662dccu)), 3, t3, t2, t1);
            t4 = g->edx;
            edx = t4;
        }
        if (ebx + 1u < rd32(self + 8u))
        {
            ebx = ebx + 1u;
            edi = edi + 0x10u;
            goto L_101c5960;
        }
        eax = rd32(self + 8u);
    }
    t5 = rd32(self);
    wr32(self + 8u, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t5, edx, 1, 1, t5);
    wr32(self, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c5950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c5950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
