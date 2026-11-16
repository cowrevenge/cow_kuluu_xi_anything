/* f_0x1006a9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1006a9d0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x18u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x1cu) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = rd32(self + 0x1cu);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t1 = g->ecx;
            t2 = g->edx;
            wr32(self + 0x1cu, 0u);
            ecx = t1;
            edx = t2;
        }
        t3 = rd32(self + 0x18u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, t3);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        t6 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t6 + 8u), t6, 1, eax);
        t7 = g->ecx;
        wr32(self + 4u, 0u);
        ecx = t7;
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        wr32(self + 8u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006a9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006a9d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
