/* f_0x100f31c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f31c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x9cu) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x9cu);
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 3, eax, in_esi, in_ebx);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(self + 0x9cu, 0u);
        ecx = t1;
        edx = t2;
    }
    t3 = rd32(arg1 + 0x38u) + 0x50u;
    wr32(self + 0x98u, t3);
    g->eax = t3;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t3, in_esi, in_ebx);
    wr32(self + 0x9cu, t4);
    if (t4 != 0u)
    {
        eax = t4;
        t5 = eax + 7u & 0xfffffff8u;
        wr32(self + 0xa0u, t5);
        wr32(self + 0xa4u, t5 + 0x48u);
        esi = arg1;
        edi = t5;
        ecx = 0x12u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t6 = rd32(rd32(self + 0xa0u) + 0x38u);
        wr32(self + 0xbcu, t6);
    }
    return rd32(self + 0x9cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f31c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f31c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
