/* f_0x1006b7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1006b7c0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1006b820u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self + 8u, arg3);
    g->eax = arg3;
    g->ecx = t1;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, arg3);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 4u, t3);
    if (arg2 == 1u)
    {
        eax = COW_IMG(0x1035405cu);
        ecx = t4;
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        eax = COW_IMG(0x10354058u);
    }
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x1031201eu), 2, arg1, eax);
    t7 = g->edx;
    wr32(self, t6);
    if (t6 != 0u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        edx = t7;
        t8 = rd32(self + 4u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, edx, 1, 1, t8);
        eax = 0u;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b7c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
