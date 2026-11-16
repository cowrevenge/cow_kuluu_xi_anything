/* f_0x101fb330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fb330(Guest* g)
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

    if (rd32(self + 0x54u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x54u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x54u, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(self + 0x58u) != 0u)
    {
        eax = rd32(self + 0x58u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 0x58u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x5cu) != 0u)
    {
        eax = rd32(self + 0x5cu);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0x5cu, 0u);
    }
    if (rd32(COW_IMG(0x10663888u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10663888u));
        wr32(eax + 0x94u, 0u);
        wr16(eax + 0x7au, 0u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
