/* f_0x101e4380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e4380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    wr8(COW_IMG(0x10663514u), 0u);
    wr32(COW_IMG(0x10663518u), 0u);
    wr8(COW_IMG(0x1066351cu), 0u);
    wr8(COW_IMG(0x1066351du), 0u);
    if (rd32(self + 0x6cu) == 0u)
    {
        eax = rd32(self + 0x6cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x6cu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall_cdecl(g, eax, self, 2, 0u, 0u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f330u));
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0x70u) == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = rd32(self + 0x70u);
        ecx = t3;
        edx = t4;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x70u, 0u);
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x74u) == 0u)
    {
        eax = rd32(self + 0x74u);
    }
    else
    {
        eax = rd32(self + 0x74u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t8 = g->edx;
        wr32(self + 0x74u, 0u);
        eax = t7;
        edx = t8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x101e4570u), self, 0);
    t10 = g->edx;
    wr8(self + 0x65u, 0u);
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
