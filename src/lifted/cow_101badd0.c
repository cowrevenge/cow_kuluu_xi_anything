/* f_0x101badd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101badd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
        eax = rd32(self + 0x18u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101907d0u), 1, eax);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x18u, 0u);
        wr32(self + 0x1cu, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101907d0u), 1, eax);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(self + 0x20u, 0u);
        wr32(self + 0x28u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
    }
    else
    {
        eax = rd32(self + 0x24u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        wr32(self + 0x24u, 0u);
        eax = t5;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101badd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101badd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
