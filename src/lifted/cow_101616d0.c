/* f_0x101616d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101616d0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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

    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t2 = g->edx;
        wr32(self + 0x1cu, 0u);
        eax = t1;
        edx = t2;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x101c7fe0u), self, 0);
    t4 = g->edx;
    if (rd32(self + 0x18u) != 0u)
    {
        eax = t3;
        edx = t4;
        edi = rd32(self + 0x18u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x101c8230u), edi, 0);
        t6 = g->ecx;
        t7 = g->edx;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
        wr32(self + 0x18u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101616d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101616d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
